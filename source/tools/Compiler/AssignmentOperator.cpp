#include "AssignmentOperator.h"

using namespace WadeSpace;

AssignmentOperator::AssignmentOperator(TokenType type) : type(type)
{
}

AssignmentOperator::AssignmentOperator() : type(NONE)
{
}

TokenType AssignmentOperator::getTokenType() const
{
	return type;
}