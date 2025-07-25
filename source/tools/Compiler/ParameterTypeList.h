#pragma once

#include <string>
#include <vector>
#include <stdint.h>
#include <optional>
#include "ParameterDeclaration.h"

using namespace std;

namespace WadeSpace
{
	class ParameterTypeList
	{
	public:
		ParameterTypeList(vector<ParameterDeclaration*>* pdl, const string& ellipsis);
		ParameterTypeList();
		virtual ~ParameterTypeList();

	private:
		vector<ParameterDeclaration*>* pdl;
		string ellipsis;
	};
}
