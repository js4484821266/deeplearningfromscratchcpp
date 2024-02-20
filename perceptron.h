#pragma once
#include<iostream>
#include<vector>
#include "linalg.h"

vERn forward(
	const vERn& input,
	const AERmn& weights,
	const vERn& bias,
	const vERn (&activationf)(vERn)
)
{
	// TODO
	try
	{
		auto ncol = weights[0].size();
		for (
			auto i = weights.begin() + 1;
			i != weights.end();
			++i
		)
			if (ncol != i->size())throw 1;
	}
	catch (int err)
	{
		switch (err)
		{
		case 1:
			std::clog << "The parameter for weights is not a matrix.";
			return {};
		}
	}
}
