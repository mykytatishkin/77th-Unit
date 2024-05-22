	class ls_gar_phase2_helmet;
	class SWLB_clone_uniform;

	class 77th_Trooper_Veteran_Helmet: ls_gar_phase2_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Trooper (CT)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Veteran_Trooper_Helmet_P2",
			"AUX77_PBO\data\Veteran_Visor.paa"
		};
	};

	class 77th_Trooper_Veteran_Armor: SWLB_clone_uniform
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Trooper (CT)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="77th_Veteran_Trooper_Uniform";
			containerClass="Supply100";
			mass=40;
			scope=2;
		};
	};