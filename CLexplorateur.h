#pragma once
#include "pch.h"
#include <array>
 

using namespace System::IO;
using namespace System;

namespace NS_composants
{
	ref class CLfichier
	{
	public:
		array<String^>^ explorerUnDossier(String^); // array<string^>  
		void effacer(String^);
		void copier(String^, String^);
	};
}
