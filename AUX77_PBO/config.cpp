class CfgPatches
{
	class AUX_77th
	{
		units[]=
		{
			"77th_Veteran_Officer_Uniform",
			"77th_Veteran_Officer_2_Uniform",
			"77th_Veteran_Sergeant_Uniform",
			"77th_Veteran_Corporal_Uniform",
			"77th_Veteran_Specialist_Uniform",
			"77th_Veteran_Trooper_Uniform",
			"77th_ARC_Alpha_Trooper_Uniform",
			"77th_Medic_Uniform",
			"77th_Medic_2_Uniform",
			"77th_Medic_3_Uniform"
			
		};
		weapons[]=
		{
			"77th_Veteran_Officer_Helmet_P2",
			"77th_Veteran_Officer_2_Helmet_P2",
			"77th_Veteran_Sergeant_Helmet_P2",
			"77th_Veteran_Corporal_Helmet_P2",
			"77th_Veteran_Specialist_Helmet_P2",
			"77th_Veteran_Trooper_Helmet_P2",
			"77th_ARF_Trooper_Helmet_P2",
			"77th_ARF_Med_Helmet_P2",
			"77th_ARF_Corporal_Helmet_P2",
			"77th_ARF_Sergeant_Helmet_P2",
			"77th_ARF_Maximum_Helmet_P2",
			"77th_ARF_Sypher_Helmet_P2",
			"77th_ARC_Trooper_Helmet_P2",
			"77th_ARC_Corporal_Helmet_P2",
			"77th_ARC_Sergeant_Helmet_P2",
			"77th_ARC_Med_Helmet_P2",
			"77th_ARC_Alpha_Trooper_Helmet_P2",
			"77th_Barc_Helmet_P2",
			"77th_Barc_Med_Helmet_P2",
			"77th_Barc_Corporal_Helmet_P2",
			"77th_Barc_Sergeant_Helmet_P2",
			"77th_Barc_Web_Helmet",
			"77th_Hazard_Helmet_P2",
			"77th_Hazard_Med_Helmet_P2",
			"77th_Hazard_Corporal_Helmet_P2",
			"77th_Hazard_Sergeant_Helmet_P2",
			"77th_Hazard_Dornan_Helmet_P2",
			"77th_Scout_Helmet_P2",
			"77th_Scout_Med_Helmet_P2",
			"77th_Scout_Corporal_Helmet_P2",
			"77th_Pilot_Helmet_P2",
			"77th_Engineer_Helmet_P2",
			"77th_Engineer_Corporal_Helmet_P2",
			"77th_Engineer_Sergeant_Helmet_P2",
			"77th_Airborne_Helmet_P2",
			"77th_Airborne_Med_P2",
			"77th_Airborne_Corporal_P2",
			"77th_Airborne_Sergeant_P2"
		};
	};
};
class CfgWeapons
{
	class SWLB_clone_ccVisor;
	class SWLB_clone_MAVisor;
	class SWLB_clone_nvg;
	class SWLB_clone_nvg_nco;
	class SWLB_clone_rangefinder;
	class SWLB_clone_nvg_spec;
	class SWLB_clone_nvg_spec_nco;
	class SWLB_clone_commando_nvg_antenna;
	class SWLB_clone_commando_nvg;
	class SWLB_clone_BARC_helmet;
	class ls_gar_engineer_helmet;
	class SWLB_clone_P1_helmet;
	class SWLB_P1_Pilot_Helmet;
	class ls_gar_phase1Arf_helmet;
	class SWLB_clone_ARF_P2_helmet;
	class ls_gar_phase2_helmet;
	class SWLB_clone_AB_helmet;
	class ls_gar_arc_helmet;
	class SWLB_clone_P1_2_helmet;
	class SWLB_clone_pilot_P2_helmet;
	class SWLB_clone_commando_helmet_k1;
	class SWLB_clone_recon_armor;
	class SWLB_clone_recon_officer_armor;
	class SWLB_clone_recon_nco_armor;
	class SWLB_clone_officer_armor;
	class SWLB_clone_medic_armor;
	class SWLB_clone_kama_armor;
	class SWLB_clone_commander_armor;
	class SWLB_clone_cfr_armor;
	class SWLB_clone_airborne_armor;
	class SWLB_clone_airborne_nco_armor;
	class SWLB_clone_arc_armor;
	class SWLB_clone_lieutenant_armor;
	class SWLB_clone_commando_eod_armor_k1;
	class SWLB_clone_commando_sniper_armor_k1;
	class SWLB_clone_commando_sl_armor_k1;
	class SWLB_clone_commando_tech_armor_k1;
	class SWLB_clone_uniform;
	class SWLB_clone_commando_uniform_k1;
	class SWLB_mando_og_armor;
	class SWLB_mando_og_helmet;
	class SWLB_mando_rangefinder;
	class SWLB_clone_commander_armor_rank;
	class SWLB_P1_SpecOps_Helmet;
	class SWLB_CEE_Engineer_Vest_Officer;
	class SWLB_CEE_Engineer_Vest_NCO;
	class SWLB_CEE_Engineer_Vest;
	class SWLB_CEE_Force_Recon;
	class SWLB_CEE_Force_Recon_NCO;
	class SWLB_CEE_Force_Recon_Officer;
	class SWLB_CEE_Force_Recon_Commander;
	class SWLB_CEE_Hazard_Vest;
	class SWLB_CEE_Heavy_Vest;
	class SWLB_CEE_Recon_Lieutenant;
	class SWLB_CEE_Recon_Survival;
	class SWLB_CEE_Officer_Tactical;
	class SWLB_CEE_Tactical_Commander;
	class UniformItem;
	class HeadgearItem;
	class VestItem;
	class lsd_gar_airborne_new;
	class ls_gar_desert_helmet;
	class ls_gar_scout_helmet;
	class lsd_gar_arc_helmet;
	
	//  =========================================================== OFFICER VETERAN

	class 77th_Officer_Veteran_Helmet: ls_gar_phase2_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Officer (CLT+)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Veteran_Officer_Helmet_P2",
			"AUX77_PBO\data\Veteran_Visor.paa"
		};
	};

	class 77th_Officer_Veteran_Armor: SWLB_clone_uniform
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Officer (CLT+)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="77th_Veteran_Officer_Uniform";
			containerClass="Supply100";
			mass=40;
			scope=2;
		};
	};

	class 77th_Officer_Veteran_2_Helmet: ls_gar_phase2_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Officer 2 (CLT+)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Veteran_Officer_2_Helmet_P2",
			"AUX77_PBO\data\Veteran_Visor.paa"
		};
	};

	class 77th_Officer_Veteran_2_Armor: SWLB_clone_uniform
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Officer 2 (CLT+)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="77th_Veteran_Officer_2_Uniform";
			containerClass="Supply100";
			mass=40;
			scope=2;
		};
	};

	class 77th_Officer_Veteran_3_Helmet: ls_gar_phase2_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Officer 3 (CLT+)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Veteran_Officer_3_Helmet_P2",
			"AUX77_PBO\data\Veteran_Visor.paa"
		};
	};

	//  =========================================================== SERGEANT VETERAN

	class 77th_Sergeant_Veteran_Helmet: ls_gar_phase2_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Sergeant (CSG)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Veteran_Sergeant_Helmet_P2",
			"AUX77_PBO\data\Veteran_Visor.paa"
		};
	};

	class 77th_Sergeant_Veteran_Armor: SWLB_clone_uniform
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Sergeant (CSG)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="77th_Veteran_Sergeant_Uniform";
			containerClass="Supply100";
			mass=40;
			scope=2;
		};
	};

	//  =========================================================== CORPORAL VETERAN
	
	class 77th_Copral_Veteran_Helmet: ls_gar_phase2_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Corporal (CCO)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Copral_Veteran_Helmet_P2",
			"AUX77_PBO\data\Veteran_Visor.paa"
		};
	};

	class 77th_Copral_Veteran_Armor: SWLB_clone_uniform
	{	
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Copral (CCO)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="77th_Copral_Veteran_Uniform";
			containerClass="Supply100";
			mass=40;
			scope=2;
		};
	};

	//  =========================================================== SPECIALIST VETERAN
	
	class 77th_Specialist_Veteran_Armor: SWLB_clone_uniform
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Specialist (CS)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="77th_Specialist_Veteran_Uniform";
			containerClass="Supply100";
			mass=40;
			scope=2;
		};
	};

	class 77th_Specialist_Veteran_Helmet: ls_gar_phase2_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Specialist (CS)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Specialist_Veteran_Helmet_P2",
			"AUX77_PBO\data\Veteran_Visor.paa"
		};
	};
	
	//  =========================================================== TROOPER VETERAN

	class 77th_Trooper_Veteran_Helmet: ls_gar_phase2_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Trooper (CT)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Trooper_Veteran_Helmet_P2",
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
			uniformClass="77th_Trooper_Veteran_Uniform";
			containerClass="Supply100";
			mass=40;
			scope=2;
		};
	};
	
	//  =========================================================== MED Trooper

	class 77th_Trooper_Medic_Armor: SWLB_clone_uniform
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Trooper (Med)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="77th_Medic_Uniform";
			containerClass="Supply100";
			mass=40;
			scope=2;
		};
	};

	class 77th_Trooper_Medic_Helmet: ls_gar_phase2_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Trooper (Med)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Med_Trooper_Helmet_P2",
			"AUX77_PBO\data\Veteran_Visor.paa"
		};
	};

	class 77th_Trooper_Medic_2_Armor: SWLB_clone_uniform
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Trooper 2 (Med)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="77th_Medic_2_Uniform";
			containerClass="Supply100";
			mass=40;
			scope=2;
		};
	};

	class 77th_Trooper_Medic_2_Helmet: ls_gar_phase2_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Trooper 2 (Med)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Med_Trooper_2_Helmet_P2",
			"AUX77_PBO\data\Veteran_Visor.paa"
		};
	};

	class 77th_Trooper_Medic_3_Armor: SWLB_clone_uniform
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Trooper 3 (Med)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="77th_Medic_3_Uniform";
			containerClass="Supply100";
			mass=40;
			scope=2;
		};
	};

	class 77th_Trooper_Medic_3_Helmet: ls_gar_phase2_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Trooper 3 (Med)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Med_Trooper_3_Helmet_P2",
			"AUX77_PBO\data\Veteran_Visor.paa"
		};
	};

	//  =========================================================== ARC Trooper

	class 77th_ARC_Trooper_Helmet: lsd_gar_arc_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] ARC (CT)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\ARC_Trooper_Helmet_P2",
			"AUX77_PBO\data\Veteran_Visor.paa",
			"AUX77_PBO\data\ARC_Trooper_Helmet_P2"
		};
	};

	class 77th_ARC_Med_Helmet: lsd_gar_arc_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] ARC (Med)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\ARC_Med_Helmet_P2",
			"AUX77_PBO\data\Veteran_Visor.paa",
			"AUX77_PBO\data\ARC_Trooper_Helmet_P2"
		};
	};

	class 77th_ARC_Corporal_Helmet: lsd_gar_arc_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] ARC Corporal (CCO)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\ARC_Corporal_Helmet_P2",
			"AUX77_PBO\data\Veteran_Visor.paa",
			"AUX77_PBO\data\ARC_Trooper_Helmet_P2"
		};
	};

	class 77th_ARC_Sergeant_Helmet: lsd_gar_arc_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] ARC Sergeant (CSG)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\ARC_Sergeant_Helmet_P2",
			"AUX77_PBO\data\Veteran_Visor.paa",
			"AUX77_PBO\data\ARC_Trooper_Helmet_P2"
		};
	};

	class 77th_ARC_Alpha_Trooper_Helmet: ls_gar_arc_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] ARC (Alpha)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\ARC_Alpha_Trooper_Helmet_P2",
			"AUX77_PBO\data\Veteran_Visor.paa",
			"AUX77_PBO\data\ARC_Alpha_Trooper_Helmet_P2"
		};
	};

	class 77th_ARC_Alpha_Trooper_Armor: SWLB_clone_uniform
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] ARC (Alpha)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="77th_ARC_Alpha_Trooper_Uniform";
			containerClass="Supply100";
			mass=40;
			scope=2;
		};
	};

	//  =========================================================== ARF HELMETS
	
	class 77th_ARF_Trooper_Helmet_P2: ls_gar_phase1Arf_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] ARF (CT)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\ARF_Trooper_Helmet_P2",
			"AUX77_PBO\data\ARF_Kilt",
			"AUX77_PBO\data\ARF_Visor"
		};
	};
	
	class 77th_ARF_Med_Helmet_P2: ls_gar_phase1Arf_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] ARF (Med)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\ARF_Med_Helmet_P2",
			"AUX77_PBO\data\ARF_Kilt",
			"AUX77_PBO\data\ARF_Visor"
		};
	};
	
	class 77th_ARF_Corporal_Helmet_P2: ls_gar_phase1Arf_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] ARF Corporal (CCO)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\ARF_Corporal_Helmet_P2",
			"AUX77_PBO\data\ARF_Kilt",
			"AUX77_PBO\data\ARF_Visor"
		};
	};
	
	class 77th_ARF_Sergeant_Helmet_P2: ls_gar_phase1Arf_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] ARF Sergeant (CSG)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\ARF_Sergeant_Helmet_P2",
			"AUX77_PBO\data\ARF_Kilt",
			"AUX77_PBO\data\ARF_Visor"
		};
	};
	
	class 77th_ARF_Maximum_Helmet_P2: ls_gar_phase1Arf_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] ARF Maximum (Personal)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Maximum_ARF_P2",
			"AUX77_PBO\data\ARF_Kilt",
			"AUX77_PBO\data\ARF_Visor"
		};
	};

	class 77th_ARF_Sypher_Helmet_P2: ls_gar_phase1Arf_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] ARF Sypher (Personal)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\ARF_Trooper_Helmet_P2",
			"AUX77_PBO\data\ARF_Sypher_Kilt",
			"AUX77_PBO\data\ARF_Visor"
		};
	};

	class 77th_ARF_Garage_Helmet_P2: ls_gar_phase1Arf_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Garage glubinka (Rofl)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\ARF_Ruskaya_Glubinka_Helmet_P2",
			"AUX77_PBO\data\ARF_Kilt",
			"AUX77_PBO\data\ARF_Visor"
		};
	};


	//  =========================================================== HAZARD HELMETS

	class 77th_Hazard_Helmet_P2: ls_gar_desert_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Hazard (CT)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Hazard_Trooper_Helmet",
			"AUX77_PBO\data\Hazard_Visor"
		};
	};

	class 77th_Hazard_Med_Helmet_P2: ls_gar_desert_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Hazard (Med)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Hazard_Med_Helmet",
			"AUX77_PBO\data\Hazard_Visor"
		};
	};

	class 77th_Hazard_Corporal_Helmet_P2: ls_gar_desert_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Hazard Corporal (CCO)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Hazard_Corporal_Helmet",
			"AUX77_PBO\data\Hazard_Visor"
		};
	};

	class 77th_Hazard_Sergeant_Helmet_P2: ls_gar_desert_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Hazard Sergeant (CSG)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Hazard_Sergeant_Helmet",
			"AUX77_PBO\data\Hazard_Visor"
		};
	};

	class 77th_Hazard_Dornan_Helmet_P2: ls_gar_desert_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Hazard Dornan (Personal)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Hazard_Dornan_Helmet",
			"AUX77_PBO\data\Hazard_Visor"
		};
	};

	//  =========================================================== Scout HELMETS

	class 77th_Scout_Helmet_P2: ls_gar_scout_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Scout (CT)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Scout_Trooper_Helmet",
			"AUX77_PBO\data\Scout_Visor",
			"AUX77_PBO\data\Scout_Visor"
		};
	};
	
	class 77th_Scout_Med_Helmet_P2: ls_gar_scout_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Scout (Med)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Scout_Med_Helmet",
			"AUX77_PBO\data\Scout_Visor",
			"AUX77_PBO\data\Scout_Visor"
		};
	};

	class 77th_Scout_Corporal_Helmet_P2: ls_gar_scout_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Scout Corporal (CCO)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Scout_Corporal_Helmet",
			"AUX77_PBO\data\Scout_Visor",
			"AUX77_PBO\data\Scout_Visor"
		};
	};

	//  =========================================================== Pilot HELMETS

	class 77th_Pilot_Helmet_P2: SWLB_clone_pilot_P2_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Pilot (CT)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Pilot_Trooper_Helmet_P2",
			"AUX77_PBO\data\Pilot_Visor",
			"AUX77_PBO\data\Pilot_Visor"
		};
	};

	//  =========================================================== Engineer HELMETS

	class 77th_Engineer_Helmet_P2: ls_gar_engineer_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Engineer (CT)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Engineer_Trooper_Helmet",
			"ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
			"ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"
		};
	};

	class 77th_Engineer_Corporal_Helmet_P2: ls_gar_engineer_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Engineer Corporal (CCO)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Engineer_Corporal_Helmet",
			"ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
			"ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"
		};
	};

	class 77th_Engineer_Sergeant_Helmet_P2: ls_gar_engineer_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Engineer Sergeant (CSG)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Engineer_Sergeant_Helmet",
			"ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
			"ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"
		};
	};

	//  =========================================================== Airborne HELMETS

	class 77th_Airborne_Helmet_P2: SWLB_clone_AB_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Airborne (CT)}";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Airborne_Trooper_Helmet_P2",
			"AUX77_PBO\data\Airborne_Visor",
		};
	};

	class 77th_Airborne_Med_P2: SWLB_clone_AB_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Airborne (Med)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Airborne_Med_Helmet_P2",
			"AUX77_PBO\data\Airborne_Visor",
		};
	};

	class 77th_Airborne_Corporal_P2: SWLB_clone_AB_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Airborne Corporal (CCO)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Airborne_Corporal_Helmet_P2",
			"AUX77_PBO\data\Airborne_Visor",
		};
	};

	class 77th_Airborne_Sergeant_P2: SWLB_clone_AB_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Airborne Sergeant (CSG)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Airborne_Sergeant_Helmet_P2",
			"AUX77_PBO\data\Airborne_Visor",
		};
	};

	//  =========================================================== Barc HELMETS

	class 77th_Barc_Helmet_P2: SWLB_clone_BARC_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Barc (CT)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Barc_Trooper_Helmet_P2",
			"AUX77_PBO\data\Airborne_Visor",
		};
	};
	
	class 77th_Barc_Med_Helmet_P2: SWLB_clone_BARC_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Barc (Med)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Barc_Med_Helmet_P2",
			"AUX77_PBO\data\Barc_Visor",
		};
	};

	class 77th_Barc_Corporal_Helmet_P2: SWLB_clone_BARC_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Barc Corporal (CCO)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Barc_Corporal_Helmet_P2",
			"AUX77_PBO\data\Barc_Visor",
		};
	};

	class 77th_Barc_Sergeant_Helmet_P2: SWLB_clone_BARC_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Barc Sergeant (CSG)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Barc_Sergeant_Helmet_P2",
			"AUX77_PBO\data\Barc_Visor",
		};
	};

	class 77th_Barc_Web_Helmet_P2: SWLB_clone_BARC_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Barc Web (Personal)";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Web_Helmet_Barc",
			"AUX77_PBO\data\Barc_Visor"
		};
	};

	//  =========================================================== CUSTOM HELMETS
	

	
};
class CfgVehicles
{
	class SWLB_clone_commando_base;
	class SWLB_clone_commando_backpack_k2;
	class SWLB_clone_commando_backpack_k2_rto;
	class SWLB_clone_commando_backpack_k2_eod;
	class SWLB_clone_base_P2;
	class SWLB_clone_assault_base_P2;
	class SWLB_clone_cfr_base_P2;
	class SWLB_clone_medic_base_P2;
	class SWLB_clone_RTO_base_P2;
	class SWLB_clone_recon_base_P2;
	class SWLB_clone_recon_nco_base_P2;
	class SWLB_clone_recon_officer_base_P2;
	class SWLB_clone_airborne_base_P2;
	class SWLB_clone_airborne_nco_base_P2;
	class SWLB_clone_lieutenant_base_P2;
	class SWLB_clone_captain_base_P2;
	class SWLB_clone_commander_base_P2;
	class SWLB_clone_marshal_commander_base_P2;
	class SWLB_clone_arc_base_P2;
	class SWLB_clone_pilot_base_P2;
	class SWLB_clone_sniper_base_P2;
	class SWLB_clone_sg_base_P2;
	class SWLB_clone_at_base_P2;
	class SWLB_clone_backpack;
	class SWLB_clone_backpack_eod;
	class SWLB_clone_backpack_heavy;
	class SWLB_clone_backpack_RTO;
	class SWLB_clone_RTO_mini_backpack;
	class SWLB_clone_backpack_medic;
	class SWLB_clone_arc_backpack;
	class SWLB_mando_base_assault;
	class B_Kitbag_rgr;
	class Steerable_Parachute_F;
	class B_Parachute;
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};

	class 77th_Veteran_Officer_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Officer (CLT+)";
		
		uniformClass="77th_Veteran_Officer_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Veteran_Officer_UpperBody",
			"AUX77_PBO\data\Veteran_Officer_LowerBody",
		};
	};
	class 77th_Veteran_Officer_2_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Officer 2 (CLT+)";
		
		uniformClass="77th_Veteran_Officer_2_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Veteran_Officer_2_UpperBody",
			"AUX77_PBO\data\Veteran_Officer_2_LowerBody",
		};
	};
	class 77th_Veteran_Sergeant_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Sergeant (CSG)";
		
		uniformClass="77th_Veteran_Sergeant_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Veteran_Sergeant_UpperBody",
			"AUX77_PBO\data\Veteran_Sergeant_LowerBody",
		};
	};
	class 77th_Veteran_Corporal_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Corporal (CCO)";
		
		uniformClass="77th_Veteran_Copral_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Veteran_Corporal_UpperBody",
			"AUX77_PBO\data\Veteran_Corporal_LowerBody",
		};
	};
	class 77th_Veteran_Specialist_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Specialist (CS)";
		
		uniformClass="77th_Veteran_Specialist_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Veteran_Specialist_UpperBody",
			"AUX77_PBO\data\Veteran_Specialist_LowerBody",
		};
	};
	class 77th_Veteran_Trooper_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Trooper Veteran";
		
		uniformClass="77th_Veteran_Trooper_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Trooper_Veteran_UpperBody",
			"AUX77_PBO\data\Trooper_Veteran_LowerBody",
		};
	};
	class 77th_ARC_Alpha_Trooper_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] 1st 'Alpha'";
		
		uniformClass="77th_ARC_Alpha_Trooper_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\ARC_Alpha_Trooper_UpperBody",
			"AUX77_PBO\data\ARC_Alpha_Trooper_LowerBody",
		};
	};
	class 77th_Medic_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Medic";
		
		uniformClass="77th_Medic_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Med_Trooper_UpperBody",
			"AUX77_PBO\data\Med_Trooper_LowerBody",
		};
	};
	class 77th_Medic_2_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Medic 2";
		
		uniformClass="77th_Medic_2_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Med_Trooper_2_UpperBody",
			"AUX77_PBO\data\Med_Trooper_2_LowerBody",
		};
	};
	class 77th_Medic_3_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Medic 3";
		
		uniformClass="77th_Medic_3_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Med_Trooper_3_UpperBody",
			"AUX77_PBO\data\Veteran_Trooper_LowerBody",
		};
	};
};
