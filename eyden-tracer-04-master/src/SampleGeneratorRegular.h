#pragma once

#include "SampleGenerator.h"
#include "random.h"

class CSampleGeneratorRegular : public CSampleGenerator
{
public:
	virtual void getSamples(int n, float *u, float *v, float *weight) const override
	{
		// --- PUT YOUR CODE HERE ---
		int t = std::sqrt(n);
		for (int i = 0; i < t; i++)
			for (int j = 0; j < t; j++)
			{
				int pos = i * n + j;
				u[pos] = (i + 0.5f) / t;
				v[pos] = (j + 0.5f) / t;
				weight[pos] = 1.0f / n;
			}
	}
};
