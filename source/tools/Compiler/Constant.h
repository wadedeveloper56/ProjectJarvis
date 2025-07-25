#pragma once

#include <string>
#include <vector>
#include <stdint.h>
#include <optional>
#include "TokenType.h"

using namespace std;

namespace WadeSpace
{
	class Constant
	{
	public:
		Constant(uint64_t value);
		Constant(long double value);
		Constant(const string&  value);
		Constant();
		virtual ~Constant();

	private:
		uint64_t iConst;
		long double fConst;
		string strConst;
		TokenType type;
	};
}
