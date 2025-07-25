#include "ConditionalExpression.h"
#include "Expression.h"

using namespace WadeSpace;
using namespace std;

ConditionalExpression::ConditionalExpression(LogicalOrExpression* loe) : loe(loe), exp(nullptr), ce(nullptr)
{
}

ConditionalExpression::ConditionalExpression(LogicalOrExpression* loe, Expression* exp, ConditionalExpression* ce) : loe(loe), exp(exp), ce(ce)
{
}

ConditionalExpression::ConditionalExpression() : loe(nullptr), exp(nullptr), ce(nullptr)
{
}

ConditionalExpression::~ConditionalExpression()
{
	delete loe;
	delete exp;
	delete ce;
}
