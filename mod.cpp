class CfgMods
{
	class serverMod
	{
		dir = "serverMod";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "HH Lite server MOD";
		credits = "Private MOD for HH servers from 3 persons.";
		author = "Nine, Mizev";
		authorID = "0"; 
		version = "1.0"; 
		extra = 0;
		type = "mod";
		
		dependencies[] = {"Engine", "GameLib", "Game", "World", "Mission"};
		
		class defs
		{
			class engineScriptModule
			{
				value = "";
				files[] = {"serverMod/1_Core"};
			}
			
			class gameScriptModule
			{
				value = "";
				files[] = {"serverMod/3_Game"};
			}
			
			class worldScriptModule
			{
				value = "";
				files[] = {"serverMod/4_World"};
			}
			
			class missionScriptModule
			{
				value = "";
				files[] = {"serverMod/5_Mission"};
			}
		}
	};
};
