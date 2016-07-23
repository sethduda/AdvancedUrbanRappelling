//Animations by Ruppertle

class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		AUR_Rifle_Idle="AUR_01_Idle";	
		AUR_Pistol_Idle="AUR_01_Idle_Pistol";	
		AUR_Rifle_Aim="AUR_01_Aim";	
		AUR_Pistol_Aim="AUR_01_Aim_Pistol";						
	};
	class Actions
	{
		class RifleStandActions;
		class AUR_BaseActions: RifleStandActions		
		{
			AdjustF="";
			AdjustB="";
			AdjustL="";
			AdjustR="";
			AdjustLF="";
			AdjustLB="";
			AdjustRB="";
			AdjustRF="";
			agonyStart="";
			agonyStop="";
			medicStop="";
			medicStart="";
			medicStartUp="";
			medicStartRightSide="";
			GestureAgonyCargo="";
			grabCarry="";
			grabCarried="";
			grabDrag="";
			grabDragged="";
			carriedStill="";
			released="";
			releasedBad="";
			Stop="";
			StopRelaxed="";
			TurnL="";
			TurnR="";
			TurnLRelaxed="";
			TurnRRelaxed="";
			ReloadMagazine="";
			ReloadMGun="";
			ReloadRPG="ReloadRPG";
			ReloadMortar="";
			WalkF="";
			WalkLF="";
			WalkRF="";
			WalkL="";
			WalkR="";
			WalkLB="";
			WalkRB="";
			WalkB="";
			PlayerWalkF="";
			PlayerWalkLF="";
			PlayerWalkRF="";
			PlayerWalkL="";
			PlayerWalkR="";
			PlayerWalkLB="";
			PlayerWalkRB="";
			PlayerWalkB="";
			SlowF="";
			SlowLF="";
			SlowRF="";
			SlowL="";
			SlowR="";
			SlowLB="";
			SlowRB="";
			SlowB="";
			PlayerSlowF="";
			PlayerSlowLF="";
			PlayerSlowRF="";
			PlayerSlowL="";
			PlayerSlowR="";
			PlayerSlowLB="";
			PlayerSlowRB="";
			PlayerSlowB="";
			FastF="";
			FastLF="";
			FastRF="";
			FastL="";
			FastR="";
			FastLB="";
			FastRB="";
			FastB="";
			TactF="";
			TactLF="";
			TactRF="";
			TactL="";
			TactR="";
			TactLB="";
			TactRB="";
			TactB="";
			PlayerTactF="";
			PlayerTactLF="";
			PlayerTactRF="";
			PlayerTactL="";
			PlayerTactR="";
			PlayerTactLB="";
			PlayerTactRB="";
			PlayerTactB="";
			EvasiveLeft="";
			EvasiveRight="";
			startSwim="";
			surfaceSwim="";
			bottomSwim="";
			StopSwim="";
			startDive="";
			SurfaceDive="";
			BottomDive="";
			StopDive="";
			Down="";
			Up="";
			PlayerStand="";
			PlayerCrouch="";
			PlayerProne="";
			Lying="";
			Stand="";
			Combat="";
			Crouch="";
			CanNotMove="";
			Civil="";
			CivilLying="";
			FireNotPossible="";
			WeaponOn="";
			WeaponOff="";
			Default="";
			JumpOff="";
			StrokeFist="";
			StrokeGun="";
			SitDown="";
			Salute="";
			saluteOff="";
			GetOver="";
			Diary="";
			Surrender="";
			Gear="";
			BinocOn="";
			BinocOff="";
			PutDown="";
			PutDownEnd="";
			Medic="";
			MedicOther="";
			Treated="";
			LadderOnDown="";
			LadderOnUp="";
			LadderOff="";
			LadderOffTop="";
			LadderOffBottom="";
			PrimaryWeapon="";
			SecondaryWeapon="";
			Binoculars="";
			StartFreefall = "";
			FDStart = "";
			useFastMove = 0;
			stance = "ManStanceUndefined";
		};
		class AUR_01_Actions: AUR_BaseActions
		{
			upDegree="ManPosCombat";		
			stop="AUR_01_Aim";			
			stopRelaxed="AUR_01_Aim";		
			default="AUR_01_Aim";			
			Stand="AUR_01_Idle";			
			HandGunOn="AUR_01_Aim_Pistol";	
			PrimaryWeapon="AUR_01_Aim";
			SecondaryWeapon="";		
			Binoculars="";	
			die="AUR_01_Die";				
			Unconscious="AUR_01_Die";		
			civil="";
		};
		class AUR_01_DeadActions: AUR_BaseActions
		{
			stop="AUR_01_Die";
			default="AUR_01_Die";
			die="AUR_01_Die";
			Unconscious="AUR_01_Die";
		};
		class AUR_01_IdleActions: AUR_01_Actions
		{
			upDegree="ManPosStand";
			stop="AUR_01_Idle";
			stopRelaxed="AUR_01_Idle";
			default="AUR_01_Idle";
			Combat="AUR_01_Aim";
			fireNotPossible="AUR_01_Aim";
			PlayerStand="AUR_01_Aim";
		};
		class AUR_01_PistolActions: AUR_01_Actions
		{
			upDegree="ManPosHandGunStand";
			stop="AUR_01_Aim_Pistol";
			stopRelaxed="AUR_01_Aim_Pistol";
			default="AUR_01_Aim_Pistol";
			throwGrenade[]=
			{
				"GestureThrowGrenadePistol",
				"Gesture"
			};
			Stand="AUR_01_Idle_Pistol";
			die="AUR_01_Die_Pistol";
			Unconscious="AUR_01_Die_Pistol";
		};
		class AUR_01_IdlePistolActions: AUR_01_Actions
		{
			upDegree="ManPosHandGunStand";
			stop="AUR_01_Idle_Pistol";
			stopRelaxed="AUR_01_Idle_Pistol";
			default="AUR_01_Idle_Pistol";
			Combat="AUR_01_Aim_Pistol";
			fireNotPossible="AUR_01_Aim_Pistol";
			PlayerStand="AUR_01_Aim_Pistol";
			die="AUR_01_Die_Pistol";
			Unconscious="AUR_01_Die_Pistol";
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class AmovPercMstpSrasWrflDnon;
		class AmovPercMstpSrasWpstDnon;
		class AmovPercMstpSoptWbinDnon;
		class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon;
		class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end;
		class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon;
		class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon_end;
		class cargo_marksman: AmovPercMstpSrasWrflDnon
		{
		};
		class cargo_base: cargo_marksman	
		{
			variantsPlayer[]={};
			variantsAI[]={};
			enableMissile = 0;
			enableBinocular = 0;
		};
		class cargo_base_Rope: cargo_base	
		{
			ignoreMinPlayTime[] = {"Unconscious"};
			leaning = "aimingDefault_Rope";
		};
		class cargo_base_idle: cargo_base
		{
			weaponLowered=1;
			enableOptics=0;
			disableWeapons=1;
			disableWeaponsLong=1;
			variantsPlayer[]={};
			variantsAI[]={};
		};
		class cargo_basepistol: AmovPercMstpSrasWpstDnon
		{
			variantsPlayer[]={};
			variantsAI[]={};
			enableMissile = 0;
			enableBinocular = 0;
		};
		class cargo_base_idle_pistol: cargo_basepistol
		{
			weaponLowered=1;
			enableOptics=0;
			disableWeapons=1;
			disableWeaponsLong=1;
		};
		class AUR_01_Aim: cargo_base_Rope
		{
			actions="AUR_01_Actions";
			leftHandIKCurve[]={1};
			minPlayTime = 0.1;								
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_aim.rtm";	/// what file is going to be played in this state
			speed=100000;											
			ConnectTo[]={};											
			InterpolateTo[]=										
			{
				"AUR_01_Idle",
				0.1,
				"AUR_01_Aim_ToPistol",
				0.1,
				"AUR_01_Die",
				0.1
			};
			variantsAI[]=
			{
				"AUR_01_Aim_Idling",
				1
			};
			variantsPlayer[]=
			{
				"AUR_01_Aim_Idling",
				1
			};
		};
		class AUR_01_Aim_Idling: AUR_01_Aim
		{
			variantsPlayer[]={};
			headBobStrength=0;
			soundEnabled=1;
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_aim1.rtm";
			speed=-8;												
			ConnectTo[]=
			{
				"AUR_01_Aim",
				0.1
			};
		};
		class AUR_01_Idle: cargo_base_idle
		{
			actions="AUR_01_IdleActions";
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_idle.rtm";
			speed=100000;
			minPlayTime = 0.1;
			leftHandIKCurve[]={0};
			InterpolateTo[]=
			{
				"AUR_01_Aim",
				0.1,
				"AUR_01_Aim_ToPistol",
				0.1,
				"AUR_01_Die",
				0.1
			};
			variantsAI[]=
			{
				"AUR_01_Idle_Idling",
				1
			};
			variantsPlayer[]=
			{
				"AUR_01_Idle_Idling",
				1
			};
		};
		class AUR_01_Idle_Idling: AUR_01_Idle
		{
			variantsPlayer[]={};
			headBobStrength=0;
			soundEnabled=1;
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_idle1.rtm";
			speed=-10;
			ConnectTo[]=
			{
				"AUR_01_Idle",
				0.1
			};
		};
		class AUR_01_Aim_Pistol: cargo_basepistol
		{
			actions="AUR_01_PistolActions";
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_aimpistol.rtm";
			aiming="aimingRifleSlingDefault";
			aimingBody="aimingUpRifleSlingDefault";
			speed=100000;
			variantsAI[]=
			{
				"AUR_01_Aim_Pistol_Idling",
				1
			};
			variantsPlayer[]=
			{
				"AUR_01_Aim_Pistol_Idling",
				1
			};
			ConnectTo[]={};		
			InterpolateTo[]=
			{
				"AUR_01_Aim_FromPistol",
				0.1,
				"AUR_01_Idle_Pistol",
				0.2,
				"AUR_01_Die_Pistol",
				0.5
			};
		};
		class AUR_01_Aim_Pistol_Idling: AUR_01_Aim_Pistol
		{
			variantsPlayer[]={};
			headBobStrength=0;
			soundEnabled=1;
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_aimpistol1.rtm";
			speed=-8;
			ConnectTo[]=
			{
				"AUR_01_Aim_Pistol",
				0.1
			};
		};
		class AUR_01_Idle_Pistol: cargo_base_idle_pistol
		{
			actions="AUR_01_IdlePistolActions";
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_idlepistol.rtm";
			speed=100000;
			aiming="aimingRifleSlingDefault";
			aimingBody="aimingUpRifleSlingDefault";
			InterpolateTo[]=
			{
				"AUR_01_Aim_Pistol",
				0.1,
				"AUR_01_Aim_FromPistol",
				0.1,
				"AUR_01_Die_Pistol",
				0.1
			};
			variantsAI[]=
			{
				"AUR_01_Idle_Pistol_Idling",
				1
			};
			variantsPlayer[]=
			{
				"AUR_01_Idle_Pistol_Idling",
				1
			};
		};
		class AUR_01_Idle_Pistol_Idling: AUR_01_Idle
		{
			variantsPlayer[]={};
			headBobStrength=0;
			soundEnabled=1;
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_idlepistol1.rtm";
			speed=-10;
			ConnectTo[]=
			{
				"AUR_01_Idle_Pistol",
				0.1
			};
		};
		class AUR_01_Aim_ToPistol: AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon
		{
			actions="AUR_01_PistolActions";
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_aimtopistol.rtm";
			speed=2;
			ConnectTo[]=
			{
				"AUR_01_Aim_ToPistol_End",
				0.1
			};
			InterpolateTo[]={};
		};
		class AUR_01_Aim_ToPistol_End: AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end
		{
			actions="AUR_01_PistolActions";
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_aimtopistol_end.rtm";
			speed=1.875;
			ConnectTo[]=
			{
				"AUR_01_Aim_Pistol",
				0.1
			};
			InterpolateTo[]={};
		};
		class AUR_01_Aim_FromPistol: AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon
		{
			actions="AUR_01_PistolActions";
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_aimFrompistol.rtm";
			speed=2.3076921;
			ConnectTo[]=
			{
				"AUR_01_Aim_FromPistol_End",
				0.1
			};
			InterpolateTo[]={};
		};
		class AUR_01_Aim_FromPistol_End: AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon_end
		{
			actions="AUR_01_Actions";
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_aimfrompistol_end.rtm";
			aiming="aimingDefault";
			aimingBody="aimingUpDefault";
			speed=2;
			leftHandIKCurve[]={0,0,0.5,1};
			ConnectTo[]=
			{
				"AUR_01_Aim",
				0.1
			};
			InterpolateTo[]={};
		};
		class AUR_01_Die: DefaultDie
		{
			actions="AUR_01_DeadActions";
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_die.rtm";
			speed=1;
			looped="false";
			terminal=1;
			ragdoll=1;
			ConnectTo[]=
			{
				"Unconscious",
				0.1
			};
			InterpolateTo[]={};
		};
		class AUR_01_Die_Pistol: AUR_01_Die
		{
			file="\AUR_AdvancedUrbanRappelling\anims\Rup_RopeFX_01_die.rtm";
			actions="AUR_01_DeadActions";
			showHandGun=1;
		};
	};
	class BlendAnims;
	class BlendAnims: BlendAnims
	{
		aimingDefault_Rope[] = {"head",0.6,"neck1",0.6,"neck",0.6,"weapon",1,"launcher",1,"RightShoulder",0.8,"RightArm",0.8,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",0.3,"Spine1",0.4,"Spine2",0.5,"Spine3",0.6};
	};
};

