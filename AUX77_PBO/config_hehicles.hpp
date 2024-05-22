#include "config_trooper_veteran.hpp"

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
	class 77th_Veteran_Trooper_Uniform: SWLB_clone_base_P2
	{
		author="Teasera";
		scope=2;
		scopeArsenal=2;
		displayName="[77th] Trooper (CT)";
		
		uniformClass="77th_Veteran_Trooper_Uniform";
		linkedItems[]={};
		respawnLinkedItems[]={};
		hiddenSelectionsTextures[]=
		{
			"AUX77_PBO\data\Veteran_Trooper_UpperBody",
			"AUX77_PBO\data\Veteran_Trooper_LowerBody",
		};
	};
	
    
};