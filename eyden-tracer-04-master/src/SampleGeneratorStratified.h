#pragma once

#include "SampleGenerator.h"
#include "random.h"

class CSampleGeneratorStratified : public CSampleGenerator
{
public:
	virtual void getSamples(int n, float *u, float *v, float *weight) const override
	{
		// --- PUT YOUR CODE HERE ---
		int t = std::sqrt(n);
		for (int i = 0; i < t; i++)
			for (int j = 0; j < t; j++)
			{
				int pos = i * t + j;
				float e1 = DirectGraphicalModels::random::U<float>(0, 1);
				float e2 = DirectGraphicalModels::random::U<float>(0, 1);
				u[pos] = (i + e1) / t;
				v[pos] = (j + e2) / t;
				weight[pos] = 1.0f / n;
			}
	}
};
