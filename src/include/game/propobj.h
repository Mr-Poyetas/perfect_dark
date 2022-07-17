#ifndef IN_GAME_PROPOBJ_H
#define IN_GAME_PROPOBJ_H
#include <ultra64.h>
#include "data.h"
#include "types.h"

extern u32 var800698f0;
extern u32 var800698f4;
extern struct prop *g_EmbedProp;
extern s32 g_EmbedHitPart;
extern f32 g_CameraWaitMultiplier;
extern f32 g_CctvDamageMultiplier;
extern f32 var80069950;
extern f32 var80069954;
extern f32 g_AutogunDamageMultiplier;
extern struct beam *g_ThrownLaptopBeams;

void alarmActivate(void);
void alarmDeactivate(void);
bool alarmIsActive(void);
s32 audioPlayFromProp(s32 channelnum, s16 soundnum, s32 arg2, struct prop *prop, s16 arg4, u16 arg5);
f32 countdownTimerGetValue60(void);
bool countdownTimerIsVisible(void);
bool countdownTimerIsRunning(void);
void countdownTimerSetRunning(bool running);
void countdownTimerSetValue60(f32 value);
void countdownTimerSetVisible(u32 reason, bool visible);
void countdownTimerTick(void);
bool doorCallLift(struct prop *doorprop, bool allowclose);
bool doorIsPadlockFree(struct doorobj *door);
bool objCanPickupFromSafe(struct defaultobj *obj);
void objUpdateLinkedScenery(struct defaultobj *obj, struct prop *prop);
f32 modelBboxGetXMin(struct modelrodata_bbox *bbox);
f32 modelBboxGetXMax(struct modelrodata_bbox *bbox);
f32 modelBboxGetYMin(struct modelrodata_bbox *bbox);
f32 modelBboxGetYMax(struct modelrodata_bbox *bbox);
f32 modelBboxGetZMin(struct modelrodata_bbox *bbox);
f32 modelBboxGetZMax(struct modelrodata_bbox *bbox);
f32 func0f0667dc(struct modelrodata_bbox *bbox, Mtxf *mtx);
f32 func0f06680c(struct modelrodata_bbox *bbox, Mtxf *mtx);
f32 func0f06683c(struct modelrodata_bbox *bbox, Mtxf *mtx);
f32 func0f06686c(struct modelrodata_bbox *bbox, Mtxf *mtx);
f32 func0f06689c(struct modelrodata_bbox *bbox, Mtxf *mtx);
f32 func0f0668cc(struct modelrodata_bbox *bbox, Mtxf *mtx);
f32 func0f0668fc(struct modelrodata_bbox *bbox, f32 realrot[3][3]);
f32 func0f06692c(struct modelrodata_bbox *bbox, f32 realrot[3][3]);
f32 func0f06695c(struct modelrodata_bbox *bbox, f32 realrot[3][3]);
f32 func0f06698c(struct modelrodata_bbox *bbox, f32 realrot[3][3]);
f32 func0f0669bc(struct modelrodata_bbox *bbox, f32 realrot[3][3]);
f32 func0f0669ec(struct modelrodata_bbox *bbox, f32 realrot[3][3]);
f32 func0f066a1c(struct modelrodata_bbox *bbox, f32 arg1, f32 arg2, f32 arg3);
f32 func0f066abc(struct modelrodata_bbox *bbox, f32 arg1, f32 arg2, f32 arg3);
s32 func0f066b5c(f32 xmin, f32 xmax, f32 ymin, f32 ymax, f32 zmin, f32 zmax, Mtxf *mtx, struct geoblock *tile);
void func0f067424(struct modelrodata_bbox *bbox, Mtxf *mtx, struct geoblock *block);
void func0f0674bc(struct modelrodata_type19 *rodata19, struct modelrodata_bbox *bbox, Mtxf *mtx, struct geoblock *block);
bool func0f0675c8(struct coord *pos, f32 arg1, struct modelrodata_bbox *bbox, Mtxf *mtx);
bool func0f0677ac(struct coord *coord, struct coord *arg1, struct coord *pos, struct coord *normal, struct coord *up, struct coord *look, f32 xmin, f32 xmax, f32 ymin, f32 ymax, f32 zmin, f32 zmax);
bool func0f0678f8(struct coord *coord, struct coord *arg1, s32 padnum);
bool func0f06797c(struct coord *coord, f32 arg1, s32 padnum);
bool func0f0679ac(struct model *model, f32 *max, f32 *min, f32 arg3[2], f32 arg4[2]);
void func0f067bc4(struct model *model, f32 *max, f32 *min, s32 axis);
void func0f067d88(struct model *model, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4);
bool modelGetScreenCoords2(struct model *model, f32 *x2, f32 *x1, f32 *y2, f32 *y1);
bool modelGetScreenCoords(struct model *model, f32 *x2, f32 *x1, f32 *y2, f32 *y1);
void func0f06803c(struct coord *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4);
struct defaultobj *objFindByPadNum(s32 padnum);
struct defaultobj *objFindByPos(struct coord *pos, s16 *rooms);
void projectileFree(struct projectile *projectile);
void projectilesUnrefOwner(struct prop *owner);
void projectileReset(struct projectile *projectile);
struct projectile *projectileAllocate(void);
void func0f0685e4(struct prop *prop);
void objSetProjectileFlag4(struct prop *prop);
void embedmentFree(struct embedment *embedment);
struct embedment *embedmentAllocate(void);
s32 objGetShotsTaken(struct defaultobj *obj);
s32 objGetDestroyedLevel(struct defaultobj *obj);
struct modelnode *func0f0687e4(struct model *model);
struct modelnode *modelFileDataFindBboxNode(struct modelfiledata *filedata);
struct modelrodata_bbox *modelFileDataFindBboxRodata(struct modelfiledata *filedata);
struct modelnode *modelFindBboxNode(struct model *model);
struct modelrodata_bbox *modelFindBboxRodata(struct model *model);
struct modelnode *objFindBboxNode(struct defaultobj *obj);
struct modelrodata_bbox *objFindBboxRodata(struct defaultobj *obj);
s32 func0f068b14(s16 *rooms, s32 arg1);
s32 func0f068c04(struct prop *prop, s32 *arg1, s32 *arg2);
s32 func0f068fc8(struct prop *prop, bool arg1);
void func0f069144(struct prop *prop, u8 *nextcol, u16 floorcol);
void func0f069630(struct prop *prop, u8 *nextcol, u16 floorcol);
void colourTween(u8 *col, u8 *nextcol);
void func0f069750(s32 *arg0, s32 arg1, f32 *arg2);
void func0f069850(struct defaultobj *obj, struct coord *pos, f32 rot[3][3], struct geocyl *cyl);
void func0f069b4c(struct defaultobj *obj);
void func0f069c1c(struct defaultobj *obj);
void func0f069c70(struct defaultobj *obj, bool arg1, bool arg2);
void objInitToggleNodes(struct defaultobj *obj);
void objCreateOneDebris(struct defaultobj *obj, s32 partindex, struct prop *prop);
void objCreateDebris(struct defaultobj *obj, struct prop *prop);
struct prop *objInit(struct defaultobj *obj, struct modelfiledata *filedata, struct prop *prop, struct model *model);
struct prop *objInitWithModelDef(struct defaultobj *obj, struct modelfiledata *modelfiledata);
struct prop *objInitWithAutoModel(struct defaultobj *obj);
void func0f06a580(struct defaultobj *obj, struct coord *pos, Mtxf *matrix, s16 *rooms);
f32 func0f06a620(struct defaultobj *obj);
void func0f06a730(struct defaultobj *obj, struct coord *arg1, Mtxf *matrix, s16 *rooms, struct coord *arg4);
void func0f06ab60(struct defaultobj *obj, struct coord *arg1, Mtxf *matrix, s16 *rooms, struct coord *arg4);
void objEndFlight(struct defaultobj *obj);
void func0f06ac90(struct prop *prop);
void objFree(struct defaultobj *obj, bool freeprop, bool canregen);
void objFreePermanently(struct defaultobj *obj, bool freeprop);
f32 objGetWidth(struct defaultobj *obj);
bool func0f06b39c(struct coord *pos, struct coord *dir, struct coord *aimpos, f32 arg3);
bool func0f06b488(struct prop *prop, struct coord *arg1, struct coord *arg2, struct coord *arg3, struct coord *arg4, struct coord *arg5, f32 *arg6);
bool func0f06b610(struct defaultobj *obj, struct coord *arg1, struct coord *arg2, struct coord *arg3, f32 arg4, struct coord *arg5, struct coord *arg6, struct coord *arg7, struct coord *arg8, f32 *arg9);
bool func0f06bea0(struct model *model, struct modelnode *arg1, struct modelnode *arg2, struct coord *arg3, struct coord *arg4, void *arg5, f32 *arg6, struct modelnode **arg7, s32 *hitpart, s32 *arg9, struct modelnode **arg10);
bool func0f06c28c(struct chrdata *chr, struct coord *arg1, struct coord *arg2, struct coord *arg3, f32 arg4, struct coord *arg5, struct coord *arg6, struct coord *arg7, struct coord *arg8, f32 *arg9);
bool projectileFindCollidingProp(struct prop *prop, struct coord *pos, struct coord *arg2, u32 cdtypes, struct coord *arg4, struct coord *arg5, s16 *arg6);
bool func0f06cd00(struct defaultobj *obj, struct coord *pos, struct coord *arg2, struct coord *arg3);
bool func0f06d37c(struct defaultobj *obj, struct coord *arg1, struct coord *arg2, struct coord *arg3);
void applySpeed(f32 *distdone, f32 maxdist, f32 *speed, f32 accel, f32 decel, f32 maxspeed);
void applyRotation(f32 *angle, f32 maxrot, f32 *speed, f32 accel, f32 decel, f32 maxspeed);
u32 func0f06dbd8(void);
void knifePlayWooshSound(struct defaultobj *obj);
void func0f06e9cc(struct coord *arg0, Mtxf *arg1);
void objLand2(struct defaultobj *obj, struct coord *arg1, struct coord *arg2);
void boltLand(struct weaponobj *weapon, struct coord *arg1);
void knifeLand(struct defaultobj *obj, struct coord *arg1, struct coord *arg2);
bool objEmbed(struct prop *prop, struct prop *parent, struct model *model, struct modelnode *node);
void objLand(struct prop *prop, struct coord *arg1, struct coord *arg2, bool *embedded);
bool propExplode(struct prop *prop, s32 explosiontype);
void ammocrateTick(struct prop *ammocrate);
void weaponTick(struct prop *weapon);
void func0f07063c(struct prop *prop, bool fulltick);
void objDropRecursively(struct prop *prop, bool arg1);
void func0f0706f8(struct prop *prop, bool fulltick);
void func0f07079c(struct prop *prop, bool fulltick);
s32 glassCalculateOpacity(struct coord *pos, f32 xludist, f32 opadist, f32 arg3);
void func0f070a1c(struct modelrodata_bbox *bbox, f32 realrot[3][3], struct coord *pos, struct coord *vertices);
void func0f070bd0(struct modelrodata_type19 *rodata, f32 realrot[3][3], struct coord *pos, struct coord *vertices);
void func0f070ca0(struct defaultobj *obj, struct geotilef *tile, u32 flags, struct modelrodata_bbox *bbox, struct modelrodata_type19 *rodata);
void liftActivate(struct prop *prop, u8 liftnum);
struct prop *liftFindByPad(s16 padnum);
f32 liftGetY(struct liftobj *lift);
void liftUpdateTiles(struct liftobj *lift, bool stationary);
void liftGoToStop(struct liftobj *lift, s32 stopnum);
f32 objGetHov04(struct defaultobj *obj);
void hovUpdateGround(struct defaultobj *obj, struct hov *hov, struct coord *pos, s16 *rooms, f32 matrix[3][3]);
void func0f0714b8(struct defaultobj *obj, struct hov *hov);
s32 objIsHoverpropOrBike(struct defaultobj *obj);
f32 hoverpropGetTurnAngle(struct defaultobj *obj);
void hoverpropSetTurnAngle(struct defaultobj *obj, f32 angle);
s32 func0f072144(struct defaultobj *obj, struct coord *arg1, f32 arg2, bool arg3);
void hovercarFindNextPath(struct hovercarobj *hovercar);
void hovercarStartNextPath(struct hovercarobj *hovercar);
void hovercarIncrementStep(struct hovercarobj *hovercar);
f32 objCollide(struct defaultobj *obj, struct coord *arg1, f32 arg2);
void hoverbikeUpdateMovement(struct hoverbikeobj *hoverbike, f32 arg1, f32 arg2, f32 arg3);
void platformDisplaceProps2(struct prop *platform, Mtxf *arg1);
bool rocketTickFbw(struct weaponobj *rocket);
s32 func0f073ae8(struct defaultobj *obj, struct projectile *projectile, struct coord *arg2, struct coord *arg3);
s32 func0f073c6c(struct defaultobj *obj, bool *arg1);
void doorTick(struct prop *doorprop);
void doorUpdatePortalIfWindowed(struct prop *door, s32 playercount);
void doorInitMatrices(struct prop *door);
void platformDisplaceProps(struct prop *platform, s16 *propnums, struct coord *prevpos, struct coord *newpos);
void liftTick(struct prop *lift);
void escastepTick(struct prop *escalator);
void cctvTick(struct prop *camera);
void cctvInitMatrices(struct prop *cctv, Mtxf *mtx);
void fanTick(struct prop *fan);
void fanUpdateModel(struct prop *fan);
void autogunTick(struct prop *autogun);
void autogunInitMatrices(struct prop *autogun, Mtxf *mtx);
void func0f079f1c(struct prop *autogun);
void chopperInitMatrices(struct prop *chopper);
struct chopperobj *chopperFromHovercar(struct chopperobj *obj);
bool chopperCheckTargetInFov(struct chopperobj *hovercar, u8 param_2);
bool chopperCheckTargetInSight(struct chopperobj *obj);
void chopperSetTarget(struct chopperobj *obj, u32 chrnum);
bool chopperAttack(struct chopperobj *obj);
bool chopperStop(struct chopperobj *obj);
bool chopperSetArmed(struct chopperobj *obj, bool armed);
void chopperRestartTimer(struct chopperobj *obj);
f32 chopperGetTimer(struct chopperobj *heli);
void chopperSetMaxDamage(struct chopperobj *obj, u16 health);
f32 func0f07b164(struct coord *pos1, struct coord *pos2, struct coord *pos3, struct coord *result);
void chopperFireRocket(struct chopperobj *chopper, bool side);
void chopperIncrementBarrel(struct prop *prop, bool firing);
void chopperIncrementMovement(struct prop *prop, f32 goalroty, f32 goalrotx, struct coord *dir, bool firing);
void chopperTickFall(struct prop *chopper);
void chopperTickIdle(struct prop *chopper);
void chopperTickPatrol(struct prop *chopper);
void chopperTickCombat(struct prop *chopper);
void hovercarTick(struct prop *hovercar);
void hoverpropTick(struct prop *hoverprop, bool arg1);
void hoverbikeTick(struct prop *hoverbike, bool arg1);
void dropshipUpdateInterior(struct prop *prop);
void glassUpdatePortal(struct prop *glass, s32 playercount, bool *arg2);
void weaponInitMatrices(struct prop *weapon);
void hangingmonitorInitMatrices(struct prop *hangingmonitors);
void objInitMatrices(struct prop *prop);
bool propCanRegen(struct prop *prop);
u32 objTick(struct prop *prop);
s32 objTickPlayer(struct prop *prop);
Gfx *propsRenderBeams(Gfx *gdl);
void tvscreenSetCmdlist(struct tvscreen *screen, u32 *cmdlist);
void tvscreenSetImageByNum(struct tvscreen *screen, s32 imagenum);
void tvscreenSetTexture(struct tvscreen *screen, s32 texturenum);
Gfx *tvscreenRender(struct model *model, struct modelnode *node, struct tvscreen *screen, Gfx *gdl, s32 arg4, s32 arg5);
void objRenderProp(struct prop *prop, struct modelrenderdata *renderdata, bool xlupass);
Gfx *gfxRenderRadialShadow(Gfx *gdl, f32 x, f32 y, f32 z, f32 angle, f32 radius, u32 colour);
Gfx *objRenderShadow(struct defaultobj *obj, Gfx *gdl);
Gfx *objRender(struct prop *prop, Gfx *gdl, bool xlupass);
bool modelIsNodeNotTvscreen(struct modelfiledata *filedata, struct modelnode *node);
void objDeform(struct defaultobj *obj, s32 level);
void objBounce(struct defaultobj *obj, struct coord *arg1);
void objSetDropped(struct prop *prop, u32 droptype);
void objApplyMomentum(struct defaultobj *obj, struct coord *speed, f32 rotation, bool addspeed, bool addrotation);
void piracyRestore(void);
void func0f082e84(struct defaultobj *obj, struct coord *pos, struct coord *dir, struct coord *tween, bool addrotation);
void objDetach(struct prop *prop);
bool objDrop(struct prop *prop, bool lazy);
void objFall(struct defaultobj *obj, s32 playernum);
void objDestroySupportedObjects(struct prop *prop, s32 playernum);
void objCheckDestroyed(struct defaultobj *obj, struct coord *pos, s32 playernum);
bool func0f084594(struct model *model, struct modelnode *node, struct coord *arg2, struct coord *arg3, struct hitthing *arg4, s32 *arg5, struct modelnode **arg6);
bool func0f0849dc(struct model *model, struct modelnode *nodearg, struct coord *arg2, struct coord *arg3, struct hitthing *hitthing, s32 *dstmtxindex, struct modelnode **dstnode);
u32 add43214321(u32 value);
void glassDestroy(struct defaultobj *obj);
void doorDestroyGlass(struct doorobj *door);
void cctvHandleLensShot(struct defaultobj *obj);
void func0f085050(struct prop *prop, f32 damage, struct coord *pos, s32 arg3, s32 playernum);
bool func0f085194(struct defaultobj *obj);
bool objIsMortal(struct defaultobj *obj);
void objTakeGunfire(struct defaultobj *obj, f32 damage, struct coord *pos, s32 weaponnum, s32 playernum);
void objDamage(struct defaultobj *obj, f32 damage, struct coord *pos, s32 weaponnum, s32 playernum);
void func0f0859a0(struct prop *prop, struct shotdata *shotdata);
void func0f085e00(struct prop *prop, struct shotdata *shotdata);
void objHit(struct shotdata *shotdata, struct hit *hit);
u32 propobjGetCiTagId(struct prop *prop);
bool objIsHealthy(struct defaultobj *obj);
bool objTestForInteract(struct prop *prop);
bool currentPlayerTryMountHoverbike(struct prop *prop);
bool propobjInteract(struct prop *prop);
void objSetPerimEnabled(struct prop *prop, bool enable);
bool objUpdateGeometry(struct prop *prop, u8 **start, u8 **end);
void propObjGetBbox(struct prop *prop, f32 *radius, f32 *ymax, f32 *ymin);
void ammotypeGetPickedUpText(char *dst);
void ammotypeGetDeterminer(char *dst, s32 ammotype, s32 qty);
void ammotypeGetPickupName(char *dst, s32 ammotype, s32 qty);
void ammotypePlayPickupSound(u32 ammotype);
s32 propPlayPickupSound(struct prop *prop, s32 weapon);
void weaponPlayPickupSound(s32 weaponnum);
void ammotypeGetPickupMessage(char *dst, s32 ammotype, s32 qty);
void currentPlayerQueuePickupAmmoHudmsg(s32 ammotype, s32 pickupqty);
void ammoHandlePickup(s32 ammotype, s32 quantity, bool withsound, bool withhudmsg);
s32 ammocrateGetPickupAmmoQty(struct ammocrateobj *crate);
s32 weaponGetPickupAmmoQty(struct weaponobj *weapon);
void weaponGetPickupText(char *buffer, s32 weaponnum, bool dual);
void currentPlayerQueuePickupWeaponHudmsg(u32 weaponnum, bool dual);
s32 propPickupByPlayer(struct prop *prop, bool showhudmsg);
s32 objTestForPickup(struct prop *prop);
bool func0f0899dc(struct prop *prop, struct coord *arg1, f32 *arg2, f32 *arg3);
void modelFreeVertices(s32 vtxstoretype, struct model *model);
struct prop *hatApplyToChr(struct hatobj *hat, struct chrdata *chr, struct modelfiledata *filedata, struct prop *prop, struct model *model);
void hatLoadAndApplyToChr(struct hatobj *hat, struct chrdata *chr);
void hatAssignToChr(struct hatobj *hat, struct chrdata *chr);
struct prop *hatCreateForChr(struct chrdata *chr, s32 modelnum, u32 flags);
struct weaponobj *weaponCreate(bool musthaveprop, bool musthavemodel, struct modelfiledata *filedata);
struct hatobj *hatCreate(bool musthaveprop, bool musthavemodel, struct modelfiledata *filedata);
struct ammocrateobj *ammocrateAllocate(void);
struct defaultobj *debrisAllocate(void);
void playerActivateRemoteMineDetonator(s32 playernum);
struct weaponobj *weaponFindChildByWeaponNum(s32 weaponnum, struct prop *prop);
struct weaponobj *weaponFindLanded(s32 weaponnum);
void weaponRegisterProxy(struct weaponobj *weapon);
void weaponUnregisterProxy(struct weaponobj *weapon);
void coordTriggerProxies(struct coord *pos, bool arg1);
void chrsTriggerProxies(void);
void propweaponSetDual(struct weaponobj *weapon1, struct weaponobj *weapon2);
struct prop *func0f08adc8(struct weaponobj *weapon, struct modelfiledata *filedata, struct prop *prop, struct model *model);
struct prop *func0f08ae0c(struct weaponobj *weapon, struct modelfiledata *filedata);
bool chrEquipWeapon(struct weaponobj *weapon, struct chrdata *chr);
struct prop *func0f08b108(struct weaponobj *weapon, struct chrdata *chr, struct modelfiledata *modelfiledata, struct prop *prop, struct model *model);
void func0f08b208(struct weaponobj *weapon, struct chrdata *chr);
void func0f08b25c(struct weaponobj *weapon, struct chrdata *chr);
struct autogunobj *laptopDeploy(s32 modelnum, struct gset *gset, struct chrdata *chr);
struct weaponobj *weaponCreateProjectileFromGset(s32 modelnum, struct gset *gset, struct chrdata *chr);
struct weaponobj *weaponCreateProjectileFromWeaponNum(s32 modelnum, s32 weaponnum, struct chrdata *chr);
void weaponDeleteFromChr(struct chrdata *chr, s32 hand);
struct prop *weaponCreateForChr(struct chrdata *chr, s32 modelnum, s32 weaponnum, u32 flags, struct weaponobj *obj, struct modelfiledata *filedata);
struct prop *chrGiveWeapon(struct chrdata *chr, s32 model, s32 weaponnum, u32 flags);
s32 weaponTestForPickup(struct prop *prop);
void weaponSetGunfireVisible(struct prop *prop, bool visible, s16 room);
bool weaponIsGunfireVisible(struct prop *prop);
s32 hatGetType(struct prop *prop);
bool doorIsUnlocked(struct prop *playerprop, struct prop *doorprop);
bool doorIsPosInRange(struct doorobj *door, struct coord *pos, f32 arg2, bool isbike);
bool doorIsObjInRange(struct doorobj *door, struct defaultobj *obj, bool isbike);
bool vectorIsInFrontOfDoor(struct doorobj *door, struct coord *vector);
bool doorIsRangeEmpty(struct doorobj *door);
void doorsCheckAutomatic(void);
void func0f08c424(struct doorobj *door, Mtxf *matrix);
void doorGetBbox(struct doorobj *door, struct modelrodata_bbox *dst);
void doorUpdateTiles(struct doorobj *door);
void func0f08cb20(struct doorobj *door, struct gfxvtx *vertices1, struct gfxvtx *vertices2, s32 numvertices);
void func0f08d3dc(struct doorobj *door);
void func0f08d460(struct doorobj *door);
void doorActivatePortal(struct doorobj *door);
void doorDeactivatePortal(struct doorobj *door);
struct prop *doorInit(struct doorobj *door, struct coord *pos, Mtxf *mtx, s16 *rooms, struct coord *coord, struct coord *centre);
void doorPlayOpeningSound(s32 soundtype, struct prop *prop);
void doorPlayClosingSound(s32 soundtype, struct prop *prop);
void doorPlayOpenedSound(s32 soundtype, struct prop *prop);
void doorPlayClosedSound(s32 soundtype, struct prop *prop);
void doorStartOpen(struct doorobj *door);
void doorStartClose(struct doorobj *door);
u32 decodeXorAaaaaaaa(u32 value);
void doorFinishOpen(struct doorobj *door);
void doorFinishClose(struct doorobj *door);
void doorSetMode(struct doorobj *door, s32 newmode);
void doorsRequestMode(struct doorobj *door, s32 newmode);
s32 doorIsClosed(struct doorobj *door);
s32 doorIsOpen(struct doorobj *door);
s32 func0f08e5a8(s16 *rooms, struct screenbox *box);
f32 func0f08e6bc(struct prop *prop, f32 arg1);
bool func0f08e794(struct coord *coord, f32 arg1);
bool func0f08e8ac(struct prop *prop, struct coord *pos, f32 arg2, bool arg3);
bool posIsInDrawDistance(struct coord *arg);
void doorCreateSparks(struct doorobj *door);
bool doorCalcIntendedFrac(struct doorobj *door);
void doorsCalcFrac(struct doorobj *door);
f32 func0f08f538(f32 x, f32 y);
void func0f08f604(struct doorobj *door, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, bool arg5);
bool func0f08f968(struct doorobj *door, bool arg1);
bool doorTestForInteract(struct prop *prop);
void doorsActivate(struct prop *prop, bool allowliftclose);
bool posIsInFrontOfDoor(struct coord *pos, struct doorobj *door);
void doorsChooseSwingDirection(struct prop *chrprop, struct doorobj *door);
bool propdoorInteract(struct prop *doorprop);
void alarmStopAudio(void);
void gasReleaseFromPos(struct coord *pos);
void gasStopAudio(void);
bool gasIsActive(void);
void gasTick(void);
Gfx *countdownTimerRender(Gfx *gdl);
void projectilesDebug(void);
void alarmTick(void);
void func0f091030(void);
void currentPlayerDropAllItems(void);
void weaponCreateForPlayerDrop(s32 weaponnum);
void projectileCreate(struct prop *fromprop, struct fireslotthing *arg1, struct coord *pos, struct coord *direction, u8 weaponnum, struct prop *targetprop);
void objSetModelPartVisible(struct defaultobj *obj, s32 partnum, bool visible);

#endif
