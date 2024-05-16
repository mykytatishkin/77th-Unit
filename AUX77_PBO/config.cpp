class CfgPatches
{
	class AUX_77th
	{
		units[]=
		{
			"77th_Officer_Veteran_Uniform",
			"77th_Sergant_Veteran_Uniform",
			"77th_Copral_Veteran_Uniform",
			"77th_Specialist_Veteran_Uniform",
			"77th_Trooper_Veteran_Uniform",
			"77th_ARC_Alpha_Trooper_Uniform"
			
		};
		weapons[]=
		{
			"77th_Officer_Veteran_Helmet",
			"77th_Sergant_Veteran_Helmet",
			"77th_Copral_Veteran_Helmet",
			"77th_Specialist_Veteran_Helmet",
			"77th_Trooper_Veteran_Helmet",
			"77th_Web_Helmet",
			"77th_Trooper_ARF_Helmet_P2",
			"77th_Maximum_ARF_Helmet_P2",
			"77th_ARC_Trooper_Helmet_P2",
			"77th_ARC_Alpha_Trooper_Helmet_P2",
			"77th_Barc_Helmet_P2",
			"77th_Hazard_Helmet_P2",
			"77th_Scout_Helmet_P2",
			"77th_Pilot_Helmet_P2",
			"77th_Engineer_Helmet_P2",
			"77th_Hazard_Dornan_Helmet_P2",
			"77th_Airborne_Helmet_P2"
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
	
	//  =========================================================== OFFICER VETERAN

	class 77th_Officer_Veteran_Helmet: ls_gar_phase2_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Officer Veteran Helmet";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Officer_Veteran_Helmet_P2",
			"AUX77_PBO\data\Veteran_Visor.paa"
		};
	};

	class 77th_Officer_Veteran_Armor: SWLB_clone_uniform
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Officer Veteran Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="77th_Officer_Veteran_Uniform";
			containerClass="Supply100";
			mass=40;
			scope=2;
		};
	};


	//  =========================================================== SERGANT VETERAN

	class 77th_Sergant_Veteran_Helmet: ls_gar_phase2_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Sergant Veteran Helmet";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Sergant_Veteran_Helmet_P2",
			"AUX77_PBO\data\Veteran_Visor.paa"
		};
	};

	class 77th_Sergant_Veteran_Armor: SWLB_clone_uniform
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Sergant Veteran Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="77th_Sergant_Veteran_Uniform";
			containerClass="Supply100";
			mass=40;
			scope=2;
		};
	};

	//  =========================================================== COPRAL VETERAN
	
	class 77th_Copral_Veteran_Helmet: ls_gar_phase2_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Copral Veteran Helmet";
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
		displayName="[77th] Copral Veteran Armor";
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
		displayName="[77th] Specialist Veteran Armor";
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
		displayName="[77th] Specialist Veteran Helmet";
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
		displayName="[77th] Trooper Veteran Helmet";
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
		displayName="[77th] Trooper Veteran Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="77th_Trooper_Veteran_Uniform";
			containerClass="Supply100";
			mass=40;
			scope=2;
		};
	};

		//  =========================================================== ARC Trooper

	class 77th_ARC_Trooper_Helmet: ls_gar_arc_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] ARC Trooper Helmet";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\ARC_Trooper_Helmet_P2",
			"AUX77_PBO\data\Veteran_Visor.paa",
			"AUX77_PBO\data\ARC_Trooper_Helmet_P2"
		};
	};

	class 77th_ARC_Alpha_Trooper_Helmet: ls_gar_arc_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] ARC 'Alpha' Helmet";
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
		displayName="[77th] ARC Trooper Armor";
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
	
	class 77th_Trooper_ARF_Helmet_P2: ls_gar_phase1Arf_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] ARF Trooper P2";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Trooper_ARF_P2",
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
		displayName="[77th] Hazard P2";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Hazard_Trooper_Helmet",
			"AUX77_PBO\data\Hazard_Visor"
		};
	};

	//  =========================================================== Scout HELMETS

	class 77th_Scout_Helmet_P2: ls_gar_scout_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Scout Helmet";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Scout_Trooper_Helmet",
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
		displayName="[77th] Pilot Helmet P2";
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
		displayName="[77th] Engineer Helmet P2";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Engineer_Trooper_Helmet",
			"ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
			"ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"
		};
	};

	//  =========================================================== Airborne HELMETS

	class 77th_Airborne_Helmet_P2: lsd_gar_airborne_new
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Airborne Helmet P2";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Airborne_Trooper_Helmet_P2",
			"AUX77_PBO\data\Airborne_Visor",
		};
	};


	//  =========================================================== Barc HELMETS

	class 77th_Barc_Helmet_P2: SWLB_clone_BARC_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Barc Helmet P2";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Barc_Trooper_Helmet_P2",
			"AUX77_PBO\data\Airborne_Visor",
		};
	};

	//  =========================================================== CUSTOM HELMETS
	
	class 77th_Web_Helmet: SWLB_clone_BARC_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Web";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Web_Helmet_Barc",
			"AUX77_PBO\data\Barc_Visor"
		};
	};

	class 77th_Maximum_ARF_Helmet_P2: ls_gar_phase1Arf_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] ARF Maximum P2";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Maximum_ARF_P2",
			"AUX77_PBO\data\ARF_Kilt",
			"AUX77_PBO\data\ARF_Visor"
		};
	};

	class 77th_Hazard_Dornan_Helmet_P2: ls_gar_desert_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Dornan";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Hazard_Dornan_Helmet",
			"AUX77_PBO\data\Hazard_Visor"
		};
	};
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

	class 77th_Officer_Veteran_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Officer Veteran";
		
		uniformClass="77th_Officer_Veteran_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Officer_Veteran_UpperBody",
			"AUX77_PBO\data\Officer_Veteran_LowerBody",
		};
	};
	class 77th_Sergant_Veteran_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Sergant Veteran";
		
		uniformClass="77th_Sergant_Veteran_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Sergant_Veteran_UpperBody",
			"AUX77_PBO\data\Sergant_Veteran_LowerBody",
		};
	};
	class 77th_Copral_Veteran_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Copral Veteran";
		
		uniformClass="77th_Copral_Veteran_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Copral_Veteran_UpperBody",
			"AUX77_PBO\data\Copral_Veteran_LowerBody",
		};
	};
	class 77th_Specialist_Veteran_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Specialist Veteran";
		
		uniformClass="77th_Specialist_Veteran_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Specialist_Veteran_UpperBody",
			"AUX77_PBO\data\Specialist_Veteran_LowerBody",
		};
	};
	class 77th_Trooper_Veteran_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Trooper Veteran";
		
		uniformClass="77th_Trooper_Veteran_Uniform";
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
		displayName="[77th] ARC 'Alpha'";
		
		uniformClass="77th_ARC_Alpha_Trooper_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\ARC_Alpha_Trooper_UpperBody",
			"AUX77_PBO\data\ARC_Alpha_Trooper_LowerBody",
		};
	};
};
