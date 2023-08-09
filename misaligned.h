#pragma once
#include <assert.h>

namespace Misaligned {
	static const char* majorColor[] = { "White", "Red", "Black", "Yellow", "Violet" };
	static const char* minorColor[] = { "Blue", "Orange", "Green", "Brown", "Slate" };

	int findPair(int majorCol, int minorCol);

	int printColorMap();
}

namespace TestMisaligned
{
	void testForMisalignment();
}