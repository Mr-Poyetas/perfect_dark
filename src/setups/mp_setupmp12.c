//
// Fortress (MP)
//

#include "stagesetup.h"

extern s32 intro[];
extern u32 props[];
extern struct path paths[];
extern struct ailist ailists[];

struct stagesetup setup = {
	NULL,
	NULL,
	NULL,
	intro,
	props,
	paths,
	ailists,
	NULL,
};

u32 props[] = {
	weapon(0x0100, 0x0000, PAD_MP12_01A7, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION04)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01C0, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01C1, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01A8, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION01)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01C2, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01C3, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01A9, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION02)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01C4, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01C5, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01AA, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION03)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01C6, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01C7, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01AB, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION00)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01C8, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01C9, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01AC, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION05)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01CA, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01CB, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01AD, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION04)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01CC, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01CD, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01AE, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION01)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01CE, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01CF, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01AF, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION02)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01D0, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01D1, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01B0, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION03)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01D2, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01D3, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01B1, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION00)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01D4, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01D5, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01B2, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION05)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01D6, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01D7, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01B3, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION04)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01D8, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01D9, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01B4, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION01)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01DA, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01DB, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01B5, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION02)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01DC, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01DD, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01B6, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION03)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01DE, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01DF, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01B7, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION00)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01E0, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01E1, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01B8, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION05)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01E3, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01E2, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01B9, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION04)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01E4, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01E5, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01BA, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION01)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01E6, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01E7, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01BB, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION02)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01E8, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01E9, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01BC, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION03)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01EA, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01EB, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01BD, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION00)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01EC, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01ED, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01BE, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION05)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01EE, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01EF, OBJFLAG_FALL, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP12_01BF, OBJFLAG_FALL, 0, 0, WEAPON_MPLOCATION02)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01F0, OBJFLAG_FALL, 0, 0, 1000)
	ammocratemulti(0x00b3, MODEL_MULTI_AMMO_CRATE, PAD_MP12_01F1, OBJFLAG_FALL, 0, 0, 1000)
	tag(0x01, 1)
	lift(0x0100, MODEL_A51_LIFT_THINWALL, PAD_MP12_01F2, OBJFLAG_00000008 | OBJFLAG_XTOPADBOUNDS | OBJFLAG_YTOPADBOUNDS | OBJFLAG_ZTOPADBOUNDS | OBJFLAG_IGNOREFLOORCOLOUR | OBJFLAG_INVINCIBLE | OBJFLAG_UNCOLLECTABLE | OBJFLAG_FORCENOBOUNCE | OBJFLAG_01000000 | OBJFLAG_CANNOT_ACTIVATE | OBJFLAG_LIFT_CHECKCEILING, OBJFLAG2_NOFALL | OBJFLAG2_FALLWITHOUTROTATION | OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_BULLETPROOF | OBJFLAG2_IMMUNETOEXPLOSIONS, 0, 1000, 0x01f2, 0x01f3, -1, -1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000011c7, 0x00040000, 0x00000000)
	tag(0x02, 1)
	lift(0x0100, MODEL_A51_LIFT_THINWALL, PAD_MP12_01F4, OBJFLAG_00000008 | OBJFLAG_XTOPADBOUNDS | OBJFLAG_YTOPADBOUNDS | OBJFLAG_ZTOPADBOUNDS | OBJFLAG_IGNOREFLOORCOLOUR | OBJFLAG_INVINCIBLE | OBJFLAG_UNCOLLECTABLE | OBJFLAG_FORCENOBOUNCE | OBJFLAG_01000000 | OBJFLAG_CANNOT_ACTIVATE | OBJFLAG_LIFT_CHECKCEILING, OBJFLAG2_NOFALL | OBJFLAG2_FALLWITHOUTROTATION | OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_BULLETPROOF | OBJFLAG2_IMMUNETOEXPLOSIONS, 0, 1000, 0x01f4, 0x01f5, -1, -1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000011c7, 0x00040000, 0x00000000)
	tag(0x03, 1)
	lift(0x0100, MODEL_A51_LIFT_THINWALL, PAD_MP12_01F6, OBJFLAG_00000008 | OBJFLAG_XTOPADBOUNDS | OBJFLAG_YTOPADBOUNDS | OBJFLAG_ZTOPADBOUNDS | OBJFLAG_IGNOREFLOORCOLOUR | OBJFLAG_INVINCIBLE | OBJFLAG_UNCOLLECTABLE | OBJFLAG_FORCENOBOUNCE | OBJFLAG_01000000 | OBJFLAG_CANNOT_ACTIVATE | OBJFLAG_LIFT_CHECKCEILING, OBJFLAG2_NOFALL | OBJFLAG2_FALLWITHOUTROTATION | OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_BULLETPROOF | OBJFLAG2_IMMUNETOEXPLOSIONS, 0, 1000, 0x01f6, 0x01f7, -1, -1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000011c7, 0x00040000, 0x00000000)
	tag(0x04, 1)
	lift(0x0100, MODEL_A51_LIFT_THINWALL, PAD_MP12_01F8, OBJFLAG_00000008 | OBJFLAG_XTOPADBOUNDS | OBJFLAG_YTOPADBOUNDS | OBJFLAG_ZTOPADBOUNDS | OBJFLAG_IGNOREFLOORCOLOUR | OBJFLAG_INVINCIBLE | OBJFLAG_UNCOLLECTABLE | OBJFLAG_FORCENOBOUNCE | OBJFLAG_01000000 | OBJFLAG_CANNOT_ACTIVATE | OBJFLAG_LIFT_CHECKCEILING, OBJFLAG2_NOFALL | OBJFLAG2_FALLWITHOUTROTATION | OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_BULLETPROOF | OBJFLAG2_IMMUNETOEXPLOSIONS, 0, 1000, 0x01f8, 0x01f9, -1, -1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000011c7, 0x00040000, 0x00000000)
	tag(0x05, 1)
	lift(0x0100, MODEL_A51_LIFT_THINWALL, PAD_MP12_01FA, OBJFLAG_00000008 | OBJFLAG_XTOPADBOUNDS | OBJFLAG_YTOPADBOUNDS | OBJFLAG_ZTOPADBOUNDS | OBJFLAG_IGNOREFLOORCOLOUR | OBJFLAG_INVINCIBLE | OBJFLAG_UNCOLLECTABLE | OBJFLAG_FORCENOBOUNCE | OBJFLAG_01000000 | OBJFLAG_CANNOT_ACTIVATE | OBJFLAG_LIFT_CHECKCEILING, OBJFLAG2_NOFALL | OBJFLAG2_FALLWITHOUTROTATION | OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_BULLETPROOF | OBJFLAG2_IMMUNETOEXPLOSIONS, 0, 1000, 0x01fa, 0x01fb, -1, -1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000011c7, 0x00040000, 0x00000000)
	tag(0x06, 1)
	lift(0x0100, MODEL_A51_LIFT_THINWALL, PAD_MP12_01FC, OBJFLAG_00000008 | OBJFLAG_XTOPADBOUNDS | OBJFLAG_YTOPADBOUNDS | OBJFLAG_ZTOPADBOUNDS | OBJFLAG_IGNOREFLOORCOLOUR | OBJFLAG_INVINCIBLE | OBJFLAG_UNCOLLECTABLE | OBJFLAG_FORCENOBOUNCE | OBJFLAG_01000000 | OBJFLAG_CANNOT_ACTIVATE | OBJFLAG_LIFT_CHECKCEILING, OBJFLAG2_NOFALL | OBJFLAG2_FALLWITHOUTROTATION | OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_BULLETPROOF | OBJFLAG2_IMMUNETOEXPLOSIONS, 0, 1000, 0x01fc, 0x01fd, -1, -1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000011c7, 0x00040000, 0x00000000)
	tag(0x07, 1)
	lift(0x0100, MODEL_A51_LIFT_THINWALL, PAD_MP12_01FE, OBJFLAG_00000008 | OBJFLAG_XTOPADBOUNDS | OBJFLAG_YTOPADBOUNDS | OBJFLAG_ZTOPADBOUNDS | OBJFLAG_IGNOREFLOORCOLOUR | OBJFLAG_INVINCIBLE | OBJFLAG_UNCOLLECTABLE | OBJFLAG_FORCENOBOUNCE | OBJFLAG_01000000 | OBJFLAG_CANNOT_ACTIVATE | OBJFLAG_LIFT_CHECKCEILING, OBJFLAG2_NOFALL | OBJFLAG2_FALLWITHOUTROTATION | OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_BULLETPROOF | OBJFLAG2_IMMUNETOEXPLOSIONS, 0, 1000, 0x01fe, 0x01ff, -1, -1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000011c7, 0x00040000, 0x00000000)
	tag(0x08, 1)
	lift(0x0100, MODEL_A51_LIFT_THINWALL, PAD_MP12_0200, OBJFLAG_00000008 | OBJFLAG_XTOPADBOUNDS | OBJFLAG_YTOPADBOUNDS | OBJFLAG_ZTOPADBOUNDS | OBJFLAG_IGNOREFLOORCOLOUR | OBJFLAG_INVINCIBLE | OBJFLAG_UNCOLLECTABLE | OBJFLAG_FORCENOBOUNCE | OBJFLAG_01000000 | OBJFLAG_CANNOT_ACTIVATE | OBJFLAG_LIFT_CHECKCEILING, OBJFLAG2_NOFALL | OBJFLAG2_FALLWITHOUTROTATION | OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_BULLETPROOF | OBJFLAG2_IMMUNETOEXPLOSIONS, 0, 1000, 0x0200, 0x0201, -1, -1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000011c7, 0x00040000, 0x00000000)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP12_019E, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00280000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000b4, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP12_019F, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00280000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x0000012c, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP12_01A0, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00280000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000f0, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP12_01A1, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00280000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000b4, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP12_01A2, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00280000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x0000012c, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP12_01A3, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00280000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000f0, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP12_019B, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00280000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000b4, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP12_019C, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00280000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x0000012c, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP12_019D, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00280000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000f0, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP12_01A4, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00280000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000b4, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP12_01A5, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00280000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x0000012c, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP12_01A6, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00280000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000f0, 0x00000000, 0x00000000, 0x00000a00)
	endprops
};

s32 intro[] = {
	spawn(PAD_MP12_018F)
	spawn(PAD_MP12_0190)
	spawn(PAD_MP12_0191)
	spawn(PAD_MP12_0192)
	spawn(PAD_MP12_0193)
	spawn(PAD_MP12_0194)
	spawn(PAD_MP12_0195)
	spawn(PAD_MP12_0196)
	spawn(PAD_MP12_0197)
	spawn(PAD_MP12_0198)
	spawn(PAD_MP12_0199)
	spawn(PAD_MP12_019A)
	case(0, PAD_MP12_0188)
	case_respawn(0, PAD_MP12_0189)
	case_respawn(0, PAD_MP12_018A)
	case_respawn(0, PAD_MP12_018B)
	case_respawn(0, PAD_MP12_018C)
	case_respawn(0, PAD_MP12_018D)
	case_respawn(0, PAD_MP12_018E)
	case(1, PAD_MP12_0179)
	case_respawn(1, PAD_MP12_0178)
	case_respawn(1, PAD_MP12_0177)
	case_respawn(1, PAD_MP12_0176)
	case_respawn(1, PAD_MP12_0175)
	case_respawn(1, PAD_MP12_0174)
	case_respawn(1, PAD_MP12_0173)
	case(2, PAD_MP12_017A)
	case_respawn(2, PAD_MP12_017B)
	case_respawn(2, PAD_MP12_017C)
	case_respawn(2, PAD_MP12_017D)
	case_respawn(2, PAD_MP12_017E)
	case_respawn(2, PAD_MP12_017F)
	case_respawn(2, PAD_MP12_0180)
	case(3, PAD_MP12_0187)
	case_respawn(3, PAD_MP12_0186)
	case_respawn(3, PAD_MP12_0185)
	case_respawn(3, PAD_MP12_0184)
	case_respawn(3, PAD_MP12_0183)
	case_respawn(3, PAD_MP12_0182)
	case_respawn(3, PAD_MP12_0181)
	hill(PAD_MP12_0009)
	hill(PAD_MP12_0029)
	hill(PAD_MP12_00F8)
	hill(PAD_MP12_00B4)
	hill(PAD_MP12_009A)
	endintro
};

struct path paths[] = {
	{ NULL, 0, 0 },
};

u8 func1001_start_lifts[] = {
	activate_lift(1, 0x01)
	activate_lift(2, 0x02)
	activate_lift(3, 0x03)
	activate_lift(4, 0x04)
	activate_lift(5, 0x05)
	activate_lift(6, 0x06)
	activate_lift(7, 0x07)
	activate_lift(8, 0x08)
	set_ailist(CHR_SELF, GAILIST_IDLE)
	endlist
};

u8 func1000_3cc8[] = {
	mp_init_simulants
	rebuild_teams
	rebuild_squadrons
	set_ailist(CHR_SELF, GAILIST_IDLE)
	endlist
};

struct ailist ailists[] = {
	{ func1000_3cc8,        0x1000 },
	{ func1001_start_lifts, 0x1001 },
	{ NULL, 0 },
};
