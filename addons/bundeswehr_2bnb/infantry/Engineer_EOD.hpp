class BNB_FA_BW2_Engineer_EOD_Tropen : BNB_FA_BW2_Rifleman_Tropen {
	displayName = "Engineer/EOD";
	// editorPreview = "\x\bnb_fa\norwegian_armed_forces\data\preview\BNB_FA_BW2_Engineer_EOD_Tropen.jpg";
	icon = "iconManEngineer";
	picture = "pictureRepair";

	canDeactivateMines = 1;
	engineer = 1;

	bnb_fa_weaponItems[] = {"","","BWA3_optic_CompM2",""};

	uniformClass = "BWA3_Uniform2_sleeves_Tropen";

	backpack = "BWA3_TacticalPack_Tropen";

	weapons[] = {"BWA3_G36A3","BWA3_P8","Throw","Put"};
	respawnWeapons[] = {"BWA3_G36A3","BWA3_P8","Throw","Put"};

	magazines[] = {"BWA3_30Rnd_556x45_G36","BWA3_15Rnd_9x19_P8","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","SmokeShell","SmokeShell","SmokeShell","SmokeShell","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellBlue","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag"};
	respawnMagazines[] = {"BWA3_30Rnd_556x45_G36","BWA3_15Rnd_9x19_P8","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","SmokeShell","SmokeShell","SmokeShell","SmokeShell","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellBlue","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag"};

	items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_MapTools","ACE_Flashlight_XL50","ACE_EntrenchingTool","ACE_M26_Clacker"};
	respawnItems[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_MapTools","ACE_Flashlight_XL50","ACE_EntrenchingTool","ACE_M26_Clacker"};

	linkedItems[] = {"BWA3_Vest_Rifleman_Tropen","BWA3_M92_Tropen","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"BWA3_Vest_Rifleman_Tropen","BWA3_M92_Tropen","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class BNB_FA_BW2_Engineer_EOD_Winter : BNB_FA_BW2_Engineer_EOD_Tropen {
	faction = "BNB_FA_BW2_Winter";
};

class BNB_FA_BW2_Engineer_EOD_Multi : BNB_FA_BW2_Rifleman_Multi {
	displayName = "Engineer/EOD";
	// editorPreview = "\x\bnb_fa\norwegian_armed_forces\data\preview\BNB_FA_BW2_Engineer_EOD_Multi.jpg";
	icon = "iconManEngineer";
	picture = "pictureRepair";

	canDeactivateMines = 1;
	engineer = 1;

	bnb_fa_weaponItems[] = {"","","BWA3_optic_CompM2",""};

	uniformClass = "BWA3_Uniform2_sleeves_Multi";

	backpack = "BWA3_TacticalPack_Multi";

	weapons[] = {"BWA3_G36A3","BWA3_P8","Throw","Put"};
	respawnWeapons[] = {"BWA3_G36A3","BWA3_P8","Throw","Put"};

	magazines[] = {"BWA3_30Rnd_556x45_G36","BWA3_15Rnd_9x19_P8","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","SmokeShell","SmokeShell","SmokeShell","SmokeShell","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellBlue","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag"};
	respawnMagazines[] = {"BWA3_30Rnd_556x45_G36","BWA3_15Rnd_9x19_P8","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","SmokeShell","SmokeShell","SmokeShell","SmokeShell","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellBlue","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag"};

	items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_MapTools","ACE_Flashlight_XL50","ACE_EntrenchingTool","ACE_M26_Clacker"};
	respawnItems[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_MapTools","ACE_Flashlight_XL50","ACE_EntrenchingTool","ACE_M26_Clacker"};

	linkedItems[] = {"BWA3_Vest_Rifleman_Multi","BWA3_M92_Multi","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"BWA3_Vest_Rifleman_Multi","BWA3_M92_Multi","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class BNB_FA_BW2_Engineer_EOD_Fleck : BNB_FA_BW2_Rifleman_Fleck {
	displayName = "Engineer/EOD";
	// editorPreview = "\x\bnb_fa\norwegian_armed_forces\data\preview\BNB_FA_BW2_Engineer_EOD_Fleck.jpg";
	icon = "iconManEngineer";
	picture = "pictureRepair";

	canDeactivateMines = 1;
	engineer = 1;

	bnb_fa_weaponItems[] = {"","","BWA3_optic_CompM2",""};

	uniformClass = "BWA3_Uniform2_sleeves_Fleck";

	backpack = "BWA3_TacticalPack_Fleck";

	weapons[] = {"BWA3_G36A3","BWA3_P8","Throw","Put"};
	respawnWeapons[] = {"BWA3_G36A3","BWA3_P8","Throw","Put"};

	magazines[] = {"BWA3_30Rnd_556x45_G36","BWA3_15Rnd_9x19_P8","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","SmokeShell","SmokeShell","SmokeShell","SmokeShell","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellBlue","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag"};
	respawnMagazines[] = {"BWA3_30Rnd_556x45_G36","BWA3_15Rnd_9x19_P8","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","SmokeShell","SmokeShell","SmokeShell","SmokeShell","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellBlue","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag"};

	items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_MapTools","ACE_Flashlight_XL50","ACE_EntrenchingTool","ACE_M26_Clacker"};
	respawnItems[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_MapTools","ACE_Flashlight_XL50","ACE_EntrenchingTool","ACE_M26_Clacker"};

	linkedItems[] = {"BWA3_Vest_Rifleman_Fleck","BWA3_M92_Fleck","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"BWA3_Vest_Rifleman_Fleck","BWA3_M92_Fleck","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};
