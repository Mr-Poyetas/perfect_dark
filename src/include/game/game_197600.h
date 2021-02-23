#ifndef IN_GAME_GAME_197600_H
#define IN_GAME_GAME_197600_H
#include <ultra64.h>
#include "data.h"
#include "types.h"

u32 func0f197600(void);
void mpAibotApplyCommand(struct chrdata *chr, u32 command);
void aibotClearInventory(struct chrdata *chr);
struct invitem *aibotGetFreeInvSlot(struct chrdata *chr);
struct invitem *aibotGetInvItem(struct chrdata *chr, u32 weaponnum);
void aibotRemoveInvItem(struct chrdata *chr, s32 weaponnum);
u32 aibotGetInvItemType(struct chrdata *chr, u32 weaponnum);
bool aibotGiveSingleWeapon(struct chrdata *chr, u32 weaponnum);
void aibotGiveDualWeapon(struct chrdata *chr, u32 weaponnum);
s16 aibotGetWeaponPad(struct chrdata *chr, u32 weaponnum);
bool aibotGiveProp(struct chrdata *chr, struct prop *prop);
u32 func0f198068(void);
bool mpHasShield(void);
s32 mpGetWeaponIndexByWeaponNum(s32 weaponnum);
u32 func0f198338(void);
u32 func0f198db4(void);
u32 func0f198df8(void);
u32 func0f198e38(void);
u32 func0f198e78(void);
u32 func0f198eec(void);
bool aibotSwitchToWeapon(struct chrdata *chr, s32 weaponnum, s32 funcnum);
void func0f19978c(struct chrdata *chr, s32 weaponnum, u8 arg2);
void func0f199964(struct chrdata *chr, u32 weaponnum);
void func0f199984(struct chrdata *chr, u32 weaponnum);

#endif
