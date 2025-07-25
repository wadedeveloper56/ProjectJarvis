#include "InitDeclarator.h"

using namespace WadeSpace;

InitDeclarator::InitDeclarator(Declarator* dec) : dec(dec), init(nullptr)
{
}

InitDeclarator::InitDeclarator(Declarator* dec, Initializer* init) : dec(dec), init(init)
{
}

InitDeclarator::InitDeclarator() : dec(nullptr), init(nullptr)
{
}

InitDeclarator::~InitDeclarator()
{
	delete dec;
	delete init;
}

bool InitDeclarator::hasDeclarator() const { return dec != NULL; }
bool InitDeclarator::hasInitializer() const { return init != NULL; }
Declarator* InitDeclarator::getDeclarator() const { return dec; }
Initializer* InitDeclarator::getInitializer() const { return init; }

string InitDeclarator::getVariableName()
{
	string name = getDeclarator()->getDirectDeclarator()->getId();
	if (name=="") name = getDeclarator()->getDirectDeclarator()->getDirectDeclarator()->getId();
	return name;
}
