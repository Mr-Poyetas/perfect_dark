#ifndef IN_SETUP_020DF0_H
#define IN_SETUP_020DF0_H
#include <ultra64.h>

extern struct menu_dialog menudialog_2a800;
extern struct menu_dialog menudialog_2a818;
extern struct menu_dialog menudialog_mpweapons;
extern struct menu_dialog menudialog_mpoptions;
extern struct menu_dialog menudialog_mpcontrol;
extern struct menu_dialog menudialog_mpplayerstats;
extern struct menu_dialog menudialog_mpplayername;
extern struct menu_dialog menudialog_mploadgamesettingstype0;
extern struct menu_dialog menudialog_mploadgamesettingstype1;
extern struct menu_dialog menudialog_mploadplayer;
extern struct menu_dialog menudialog_mparena;
extern struct menu_dialog menudialog_mplimits;
extern struct menu_dialog menudialog_mpplayerhandicaps;
extern struct menu_dialog g_MpReadyMenuDialog;
extern struct menu_dialog menudialog_mpsimulants;
extern struct menu_dialog menudialog_mpteamcontrol;
extern struct menu_dialog menudialog_mpchallengedetails;
extern struct menu_dialog menudialog_mpscenario;
extern struct menu_dialog menudialog_mpquickteam;

extern s32 g_Difficulty;

extern s16 g_FadeNumFrames;
extern f32 fade80084058;
extern u32 g_FadePrevColor;
extern u32 g_FadeColor;
extern u16 fade80084064;

extern s32 var80087260;
extern struct stagethinglist stagethinglist_20e10;
extern struct stagethinglist stagethinglist_20e54;
extern struct stagethinglist stagethinglist_20e60;
extern struct stagethinglist stagethinglist_20e6c;
extern struct stagethinglist stagethinglist_20ea4;
extern struct stagethinglist stagethinglist_20ec8;
extern struct stagethinglist stagethinglist_20ef8;
extern struct stagethinglist stagethinglist_20f5c;
extern struct stagethinglist stagethinglist_20fe8;
extern u16 proptable[];
extern u8 propexplosiontypes[];
extern struct stagethinglist stagethinglist_2208c;
extern struct stagethinglist stagethinglist_220a4;
extern u32 var8007c0c0;
extern struct stagethinglist stagethinglist_221b4;
extern struct stagethinglist stagethinglist_22c54;
extern struct stagethinglist stagethinglist_22e60;
extern struct stagethinglist stagethinglist_22eb8;
extern struct stagethinglist stagethinglist_22ec8;
extern struct stagethinglist stagethinglist_22f1c;
extern struct bodytableentry bodytable[];
extern u32 var8007dae4;
extern u32 var8007db80;
extern f32 var8007db84;
extern u32 var8007db88;
extern u32 var8007db94;
extern u32 var8007dba0;
extern u32 var8007dbb8;
extern u32 var8007dbd0;
extern u32 var8007dbe8;
extern u32 var8007dbf4;
extern u32 var8007dc00;
extern u32 var8007dc10;
extern u32 var8007e3d0;
extern u32 var8007e4a0;
extern u32 var8007e4a4;
extern struct explosiontype g_ExplosionTypes[NUM_EXPLOSIONTYPES];
extern struct smoketype g_SmokeTypes[NUM_SMOKETYPES];
extern u32 sparktable[];
extern u32 var8007f0b8;
extern u32 var8007f0c0;
extern u32 var8007f0c4;
extern u32 var8007f0d4;
extern u32 var8007f0d8;
extern u32 var8007f0dc;
extern u32 var8007f0e0;
extern u32 var8007f0e4;
extern u32 var8007f0e8;
extern u32 var8007f0ec;
extern u32 var8007f0f0;
extern u32 var8007f0f4;
extern u32 var8007f0f8;
extern u32 var8007f0fc;
extern u32 var8007f104;
extern u32 var8007f108;
extern u32 var8007f10c;
extern u32 var8007f110;
extern u32 var8007f120;
extern u32 var8007f124;
extern u32 var8007f130;
extern u32 var8007f134;
extern u32 var8007f13c;
extern u32 var8007f2dc;
extern u32 var8007f3cc;
extern u32 var8007f410;
extern u32 var8007f450;
extern u32 var8007f468;
extern u32 var8007f46c;
extern struct credit credits[];
extern u32 var8007f6c4;
extern u32 var8007f6d4;
extern u32 var8007f6d8;
extern u32 var8007f6e0;
extern u32 var8007f6e4;
extern u32 var8007f6e8;
extern u32 var8007f6ec;
extern u32 var8007f6f0;
extern u32 var8007f6f4;
extern u32 var8007f6f8;
extern u32 var8007f6fc;
extern u32 var8007f700;
extern u32 var8007f740;
extern u32 var8007f744;
extern u32 var8007f748;
extern u32 var8007f750;
extern u32 var8007f754;
extern u32 var8007f758;
extern u32 var8007f75c;
extern u32 var8007f7b0;
extern u32 var8007f840;
extern u32 var8007f844;
extern u32 var8007f848;
extern u32 var8007f860;
extern u32 var8007f864;
extern u32 var8007f868;
extern u32 var8007f86c;
extern u32 var8007f870;
extern u32 var8007f874;
extern u32 var8007f878;
extern u32 var8007f87c;
extern u32 var8007f8a8;
extern u32 var8007f8dc;
extern u32 var8007f8e8;
extern u32 var8007f8ec;
extern u32 var8007f8f0;
extern u32 var8007f8f4;
extern u32 var8007f8f8;
extern u32 var8007f8fc;
extern u32 var8007f900;
extern u32 var8007f904;
extern u32 var8007f9d0;
extern u32 var8007f9d8;
extern u32 var8007f9fc;
extern u32 var8007fa60;
extern u32 var8007fa80;
extern u32 var8007fa84;
extern u8 g_InGameSubtitles;
extern u8 g_CutsceneSubtitles;
extern s32 g_ScreenSize;
extern s32 g_ScreenRatio;
extern u8 g_ScreenSplit;
extern u32 var8007fac0;
extern u32 var8007fac4;
extern u32 var8007facc;
extern u32 var8007fad0;
extern u32 var8007fadc;
extern u32 var8007fae0;
extern u32 var8007faf4;
extern u32 var8007faf8;
extern u32 var8007fafc;
extern u32 var8007fb00;
extern u32 var8007fb04;
extern u32 var8007fb08;
extern u32 var8007fb0c;
extern u32 var8007fb10;
extern u32 var8007fb14;
extern u32 var8007fb18;
extern u32 var8007fb1c;
extern u32 var8007fb20;
extern u32 var8007fb3c;
extern u32 var8007fb5c;
extern u32 var8007fbac;
extern u32 var8007fbb0;
extern u32 var8007fbb4;
extern u32 var8007fbb8;
extern u32 var8007fbbc;
extern u32 var8007fbc0;
extern u32 var8007fbc4;
extern u32 var8007fbc8;
extern u32 var8007fbcc;
extern u32 var8007fbdc;
extern u32 var8007fbe8;
extern u32 var8007fbec;
extern u32 var8007fc00;
extern u32 var8007fc0c;
extern u32 var8007fc10;
extern u32 var8007fc14;
extern u32 var8007fc20;
extern u32 var8007fc24;
extern u32 var8007fc28;
extern u32 var8007fc2c;
extern u32 var8007fc30;
extern u32 var8007fc34;
extern u32 var8007fc38;
extern u32 var8007fc3c;
extern u32 var8007fc40;
extern u32 var8007fc44;
extern u32 var8007fc4c;
extern u32 var8007fc54;
extern u32 var8007fca8;
extern u32 var8007fcac;
extern u32 var8007fcb0;
extern u32 var8007fcb4;
extern struct stagetableentry g_Stages[61];
extern u32 var80081018;
extern u32 var80081058;
extern struct smallsky smallskies[];
extern u32 var80082050;
extern void *filetable[];
extern u32 var80084008;
extern u32 var80084014;
extern u32 var80084024;
extern u32 var80084028;
extern u32 var8008402c;
extern u32 var80084030;
extern s32 var80084034;
extern u32 var80084038;
extern f32 g_Uptime;
extern u32 var80084068;
extern u32 var80084078;
extern u32 var80084088;
extern u32 var80084098;
extern u32 var800840a4;
extern u32 var800840c4;
extern u32 var800840d4;
extern u32 var800840e0;
extern u32 var800840f0;
extern u32 var800840f4;
extern u32 var800840fc;
extern u32 g_LanguageId;
extern u16 langtable[];
extern u32 var800841b8;
extern u32 var80084220;
extern struct something *somethings[];
extern u32 var800844d0;
extern u32 var800844f0;
extern s32 var800845d8;
extern u32 var800845dc;
extern u32 var800845f4;
extern struct menu_dialog menudialog_2a8b0;
extern struct menu_dialog menudialog_2a908;
extern u16 rankings[];
extern struct menu_dialog menudialog_2aa18;
extern struct menu_dialog menudialog_2aa30;
extern struct menu_dialog menudialog_2aa48;
extern struct menu_dialog menudialog_2aa60;
extern struct menu_dialog menudialog_2aa78;
extern struct menu_dialog menudialog_2ab34;
extern struct menu_dialog menudialog_2aba0;
extern u16 mpstages[];
extern u32 var80084bf8;
extern u32 var80084c00[];
extern u16 g_MpControlStyleLabels[4];
extern u16 g_MpAimModeLabels[2];
extern struct menu_dialog g_MpSaveChrMenuDialog;
extern struct menu_dialog menudialog_mpsavesetupname;
extern struct menu_dialog menudialog_mpsavesetup;
extern u32 var800851bc;
extern u32 var800851cc;
extern u32 var80085448;
extern struct menu_item menuitems_mpcharacter[];
extern u32 var800857d0;
extern struct menu_dialog g_MpAddSimulantMenuDialog;
extern struct menu_dialog g_MpChangeSimulantMenuDialog;
extern struct menu_dialog g_MpEditSimulantMenuDialog;
extern u32 var80085a74;
extern u8 g_TeamIdsForPairing[4];
extern struct menu_dialog g_MpChangeTeamNameMenuDialog;
extern struct menu_dialog menudialog_2bfa8;
extern struct menu_dialog menudialog_mpchallengedetails2;
extern struct menu_dialog menudialog_2c0cc;
extern u16 mplockoptions[4];
extern struct menu_dialog menudialog_mpgamesetup3;
extern struct menu_dialog g_MpQuickGoMenuDialog;
extern struct menu_dialog g_MpQuickTeamGameSetupMenuDialog;
extern struct menu_dialog g_CombatSimulatorMenuDialog;
extern u16 mpslowmotionoptions[];
extern struct menu_dialog menudialog_mpcombatoptions;
extern struct menu_dialog menudialog_mpbriefcaseoptions;
extern struct defaultobj *var800869ec;
extern u32 var800869f0;
extern struct menu_dialog menudialog_mpcaptureoptions;
extern u32 var80086b60;
extern struct menu_dialog menudialog_mphilloptions;
extern struct menu_dialog menudialog_mphackeroptions;
extern u32 var80086e14;
extern struct menu_dialog menudialog_mppopacapoptions;
extern struct mpscenario g_MpScenarios[];
extern u16 mpscenarios[];
extern u32 var8008716c;
extern u32 var800871fc;
extern u32 var80087264;
extern u16 mpweaponstable[];
extern struct mpweaponset mpweaponsetstable[];
extern u32 var800874c8;
extern u32 var800874cc;
extern u32 var800874f0;
extern struct mphead g_MpBeauHeads[NUM_MPBEAUHEADS];
extern struct mphead g_MpHeads[NUM_MPHEADS];
extern u32 table_0x2d678[];
extern struct mpsimulant g_MpGeneralSimulants[];
extern struct mpsimulant mpspecialsimulants[];
extern struct mpbody g_MpBodies[NUM_MPBODIES];
extern struct mptrack g_MpTracks[NUM_MPTRACKS];
extern struct mppreset g_MpPresets[NUM_MPPRESETS];
extern u32 g_TeamColours[MAX_TEAMS];
extern u32 var80087d10;
extern u32 var80087d14[];
extern u32 g_MpBotCommands[NUM_MPBOTCOMMANDS];
extern u32 var80087e2c;
extern u32 var80087e50;
extern u32 var80087e98;
extern u32 var80087eb0;
extern u32 var80088490;
extern u32 var80088494;
extern u32 var800884a4;
extern u32 g_MpChallengeIndex;
extern u32 var800884b4;
extern struct challenge g_MpChallenges[NUM_CHALLENGES];
extern u32 var800887c4;
extern u32 var80088800;
extern u32 var80088808;
extern u32 var8008880c;
extern u32 var80088810;
extern u32 var80088854;
extern u32 var800888a0;
extern u32 character_bios[];
extern u32 misc_bios[];
extern u32 var80088964;
extern u32 place_bios[];
extern u32 var80088adc;
extern u32 var80088ae0;
extern u32 var80088aec;
extern u32 var80088b14;
extern u32 device_descriptions[];
extern u32 device_tips1[];
extern u32 device_tips2[];
extern u32 var80088bb8;
extern u32 var80088bbc;
extern u32 var80088bc8;
extern u32 var80088be4;
extern u32 var80088c04;
extern u32 var80088c20;
extern u32 var80088c3c;
extern u32 var80088c58;
extern u32 var80088c70;
extern u32 var80088c78;
extern u32 var80088c84;
extern u32 var80088c8c;
extern u32 var80088c90;
extern u32 var80088c94;
extern u32 var80088c98;
extern u32 var80088c9c;
extern u32 var80088ca0;
extern u32 var80088ca4;
extern u32 var80088ca8;
extern struct menu_dialog menudialog_frdifficulty;
extern struct menu_dialog g_frWeaponMenuDialog;
extern struct menu_dialog menudialog_frtraininginfo;
extern struct menu_dialog menudialog_frtraininginfo2;
extern struct menu_dialog menudialog_frtrainingstats;
extern struct menu_dialog menudialog_frtrainingstats2;
extern u32 var800891b0;
extern struct menu_dialog menudialog_information;
extern u32 var80089268;
extern u32 var80089280;
extern struct menu_dialog menudialog_characterprofile;
extern struct menu_dialog menudialog_2f3c0;
extern struct menu_dialog menudialog_devicelist;
extern u32 var800893f8;
extern struct menu_dialog menudialog_2f49c;
extern struct menu_dialog menudialog_trainingstats_failed;
extern struct menu_dialog menudialog_trainingstats_completed;
extern struct menu_dialog menudialog_holotraining;
extern struct menu_dialog menudialog_2f68c;
extern struct menu_dialog menudialog_trainingstats_failed2;
extern struct menu_dialog menudialog_trainingstats_completed2;
extern u32 var800897a4;
extern u32 var800897b4;
extern u32 var800897c4;
extern struct hoverprop hoverprops[];
extern struct menu_dialog menudialog_2f938;
extern struct menu_dialog menudialog_2f950;
extern struct menu_dialog menudialog_hangarinformation;
extern u32 var80089ad0;
extern u32 var8008a2d0;

#endif
