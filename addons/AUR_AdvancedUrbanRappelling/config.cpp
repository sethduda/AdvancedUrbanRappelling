class CfgPatches
{
	class AUR_AdvancedUrbanRappelling
	{
		author = "duda123";
		name = "Advanced Urban Rappelling";
		url = "https://github.com/sethduda/AdvancedUrbanRappelling";
		units[] = {"AUR_AdvancedUrbanRappelling"};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Modules_F"};
	};
};

class CfgNetworkMessages
{
	
	class AdvancedUrbanRappellingRemoteExecClient
	{
		module = "AdvancedUrbanRappelling";
		parameters[] = {"ARRAY","STRING","OBJECT","BOOL"};
	};
	
	class AdvancedUrbanRappellingRemoteExecServer
	{
		module = "AdvancedUrbanRappelling";
		parameters[] = {"ARRAY","STRING","BOOL"};
	};
	
};

class CfgFunctions 
{
	class SA
	{
		class AdvancedUrbanRappelling
		{
			file = "\AUR_AdvancedUrbanRappelling\functions";
			class advancedUrbanRappellingInit
			{
				postInit=1;
			};
		};
	};
};

class CfgSounds
{
	class AUR_Rappel_Loop
	{
		name = "AUR_Rappel_Loop";
		sound[] = {"\AUR_AdvancedUrbanRappelling\sounds\AUR_Rappel_Loop.ogg", db+5, 1};
		titles[] = {0,""};
	};
	class AUR_Rappel_Start
	{
		name = "AUR_Rappel_Start";
		sound[] = {"\AUR_AdvancedUrbanRappelling\sounds\AUR_Rappel_Start.ogg", db+10, 1};
		titles[] = {0,""};
	};
	class AUR_Rappel_End
	{
		name = "AUR_Rappel_End";
		sound[] = {"\AUR_AdvancedUrbanRappelling\sounds\AUR_Rappel_End.ogg", db+10, 1};
		titles[] = {0,""};
	};
};
#include "cfgAnimations.hpp"
