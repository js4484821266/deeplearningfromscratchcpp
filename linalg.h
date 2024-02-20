#pragma once
#include<vector>
using matrix_row = std::vector<double>;
using vERn = matrix_row;

class AERmn : public std::vector<matrix_row>
{
public:
	AERmn(
		std::initializer_list<value_type> il,
		const allocator_type& alloc = allocator_type()
	)
	{
		for (auto i : il)
			push_back(i);
	}

	// converts a vector into a matrix.
	AERmn(const vERn& x, const bool& is_column = false)
	{
		if (is_column)
			for (auto i : x)
				push_back({i});
		else push_back(x);
	}

	// replaces the existing content with the new ROW vector.
	vERn operator=(const vERn& x)
	{
		clear();
		push_back(x);
		return x;
	}
};

// tells if possible that "A times B".
bool are_multipliable(const AERmn& A, const AERmn& B)
{
	return A[0].size() == B.size();
}

// tells if possible that "A times x".
bool are_multipliable(const AERmn& A, const vERn& x)
{
	return A[0].size() == x.size();
}

// tells if possible that "x times A".
bool are_multipliable(const vERn& x, const AERmn& A)
{
	return x.size() == A.size();
}
