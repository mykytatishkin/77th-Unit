class CfgPatches
{
	class AUX_77th
	{
		units[]=
		{
			"77th_CT2_Uniform",
			"77th_CT3_Uniform",
			"77th_CT4_Uniform",
			"77th_CT5_Uniform",
			"77th_Hornet_Uniform",
			"77th_Trooper_Uniform",
			"77th_Specialist_Uniform",
			"77th_Copral_Uniform",
			"77th_Sergant_Uniform"
			
		};
		weapons[]=
		{
			"77th_CT2_Helmet",
			
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
	class ls_gar_barc_helmet;
	
	class 77th_CT2_Helmet: ls_gar_phase2_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] CT-2 Helmet";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\CT2_Helmet_P2",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};

	class 77th_CT2_Armor: SWLB_clone_uniform
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName=" [77th] CT-2 Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="77th_CT2_Uniform";
			containerClass="Supply100";
			mass=40;
			scope=2;
		};
	};

	class 77th_CT3_Helmet: ls_gar_phase2_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] CT-3 Helmet";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\CT3_Helmet_P2",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};

	class 77th_CT3_Armor: SWLB_clone_uniform
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] CT-3 Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="77th_CT3_Uniform";
			containerClass="Supply100";
			mass=40;
			scope=2;
		};
	};

	class 77th_CT4_Helmet: ls_gar_phase2_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] CT-4 Helmet";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\CT4_Helmet_P2",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};

	class 77th_CT4_Armor: SWLB_clone_uniform
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] CT-4 Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="77th_CT4_Uniform";
			containerClass="Supply100";
			mass=40;
			scope=2;
		};
	};

	class 77th_CT5_Helmet: ls_gar_phase2_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] CT-5 Helmet";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\CT5_Helmet_P2",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};

	class 77th_CT5_Armor: SWLB_clone_uniform
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] CT-5 Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="77th_CT5_Uniform";
			containerClass="Supply100";
			mass=40;
			scope=2;
		};
	};

	class 77th_Hornet_Helmet: ls_gar_phase2_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Hornet Helmet";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Hornet_Helmet_P2",
			"AUX77_PBO\data\Hornet_Visor.paa"
		};
	};

	class 77th_Hornet_Armor: SWLB_clone_uniform
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Hornet Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="77th_Hornet_Uniform";
			containerClass="Supply100";
			mass=40;
			scope=2;
		};
	};

	class 77th_Trooper_Helmet: ls_gar_phase2_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Trooper Helmet";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Trooper_Helmet_P2",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};

	class 77th_Trooper_Armor: SWLB_clone_uniform
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Trooper Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="77th_Trooper_Uniform";
			containerClass="Supply100";
			mass=40;
			scope=2;
		};
	};
	
	class 77th_Specialist_Helmet: ls_gar_phase2_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Specialist Helmet";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Specialist_Helmet_P2",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};

	class 77th_Specialist_Armor: SWLB_clone_uniform
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Specialist Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="77th_Specialist_Uniform";
			containerClass="Supply100";
			mass=40;
			scope=2;
		};
	};

	class 77th_Copral_Helmet: ls_gar_phase2_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Copral Helmet";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Copral_Helmet_P2",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};

	class 77th_Copral_Armor: SWLB_clone_uniform
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Copral Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="77th_Copral_Uniform";
			containerClass="Supply100";
			mass=40;
			scope=2;
		};
	};

	class 77th_Sergant_Helmet: ls_gar_phase2_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Sergant Helmet";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Sergant_Helmet_P2",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};

	class 77th_Sergant_Armor: SWLB_clone_uniform
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Sergant Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="77th_Sergant_Uniform";
			containerClass="Supply100";
			mass=40;
			scope=2;
		};
	};

	class 77th_Sergant_Veteran_Helmet: ls_gar_phase2_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Sergant Veteran Helmet";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Sergant_Veteran_Helmet_P2",
			"AUX77_PBO\data\Veteran_Visor.paa""
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

	class 77th_Web_Helmet: ls_gar_barc_helmet
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Web";
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Web_Helmet_Barc",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
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
	
	class 77th_CT2_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] CT-2";
		
		uniformClass="77th_CT2_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\CT2_UpperBody",
			"AUX77_PBO\data\CT2_LowerBody",
		};
	};		
	class 77th_CT3_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] CT-3";
		
		uniformClass="77th_CT3_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\CT3_UpperBody",
			"AUX77_PBO\data\CT3_LowerBody",
		};
	};		
	class 77th_CT4_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] CT-4";
		
		uniformClass="77th_CT4_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\CT4_UpperBody",
			"AUX77_PBO\data\CT4_LowerBody",
		};
	};	
	class 77th_CT5_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] CT-5";
		
		uniformClass="77th_CT5_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\CT5_UpperBody",
			"AUX77_PBO\data\CT5_LowerBody",
		};
	};
	class 77th_Hornet_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Hornet";
		
		uniformClass="77th_Hornet_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Hornet_UpperBody",
			"AUX77_PBO\data\Hornet_LowerBody",
		};
	};
	class 77th_Trooper_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Trooper";
		
		uniformClass="77th_Trooper_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Trooper_UpperBody",
			"AUX77_PBO\data\Trooper_LowerBody",
		};
	};
	class 77th_Specialist_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Specialist";
		
		uniformClass="77th_Trooper_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Specialist_UpperBody",
			"AUX77_PBO\data\Specialist_LowerBody",
		};
	};
	class 77th_Copral_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Copral";
		
		uniformClass="77th_Copral_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Copral_UpperBody",
			"AUX77_PBO\data\Copral_LowerBody",
		};
	};
	class 77th_Sergant_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Sergant";
		
		uniformClass="77th_Sergant_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Sergant_UpperBody",
			"AUX77_PBO\data\Sergant_LowerBody",
		};
	};
	class 77th_Sergant_Veteran_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Sergant Veteran";
		
		uniformClass="77th_Sergant_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Sergant_Veteran_UpperBody",
			"AUX77_PBO\data\Sergant_Veteran_LowerBody",
		};
	};
};
