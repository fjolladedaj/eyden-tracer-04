#pragma once

#include "SampleGenerator.h"
#include "random.h"

class CSampleGeneratorRandom : public CSampleGenerator
{
public:
	virtual void getSamples(int n, float *u, float *v, float *weight) const override
	{
		// --- PUT YOUR CODE HERE ---
		for (int i = 0; i < n; i++)
		{
			u[i] = DirectGraphicalModels::random::U<float>(0, 1);
			v[i] = DirectGraphicalModels::random::U<float>(0, 1);
			weight[i] = 1.0f / n;
		}
	}
};
