#pragma once

#include <string>
#include <vector>
#include <stdint.h>
#include <optional>
#include "TokenType.h"
#include "ShiftExpression.h"

using namespace std;

namespace WadeSpace
{
	class RelationalExpression
	{
	public:
		RelationalExpression(ShiftExpression* se);
		RelationalExpression(RelationalExpression* re, const string& op, ShiftExpression* se);
		RelationalExpression();
		virtual ~RelationalExpression();

	private:
		RelationalExpression* re;
		string op;
		ShiftExpression* se;
	};
}
