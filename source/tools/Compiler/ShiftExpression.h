#pragma once

#include <string>
#include <vector>
#include <stdint.h>
#include <optional>
#include "TokenType.h"
#include "AdditiveExpression.h"

using namespace std;

namespace WadeSpace
{
	class ShiftExpression
	{
	public:
		ShiftExpression(AdditiveExpression* ae);
		ShiftExpression(ShiftExpression* se, const string& op, AdditiveExpression* ae);
		ShiftExpression();
		virtual ~ShiftExpression();

	private:
		AdditiveExpression* ae;
		string op;
		ShiftExpression* se;
	};
}
