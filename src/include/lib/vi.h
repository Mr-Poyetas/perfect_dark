#ifndef _IN_LIB_VI_H
#define _IN_LIB_VI_H
#include <ultra64.h>
#include "data.h"
#include "types.h"

void viConfigureForLogos(void);
void viConfigureForCopyright(u16 *fb);
void viConfigureForLegal(void);
void viReset(s32 stagenum);
void viBlack(bool black);
void viHandleRetrace(void);
void viUpdateMode(void);
void viShake(f32 intensity);
void viSetMode(s32 mode);
void viSet16Bit(void);
u16 *viGetBackBuffer(void);
u16 *viGetFrontBuffer(void);
Vp *viGetCurrentPlayerViewport(void);
u16 viGetPerspScale(void);
Gfx *vi0000ab78(Gfx *gdl);
Gfx *vi0000aca4(Gfx *gdl, f32 znear, f32 zfar);
Gfx *vi0000ad5c(Gfx *gdl, Vp *vp);
Gfx *vi0000af00(Gfx *gdl, Vp *vp);
Gfx *vi0000b0e8(Gfx *gdl, f32 fovy, f32 aspect);
Gfx *vi0000b1a8(Gfx *gdl);
Gfx *vi0000b1d0(Gfx *gdl);
Gfx *viPrepareZbuf(Gfx *gdl);
Gfx *viFillBuffer(Gfx *gdl);
Gfx *viRenderViewportEdges(Gfx *gdl);
void viSetBufSize(s16 width, s16 height);
s16 viGetBufWidth(void);
s16 viGetBufHeight(void);
void viSetSize(s16 width, s16 height);
s16 viGetWidth(void);
s16 viGetHeight(void);
void viSetViewSize(s16 width, s16 height);
s16 viGetViewWidth(void);
s16 viGetViewHeight(void);
void viSetViewPosition(s16 left, s16 top);
s16 viGetViewLeft(void);
s16 viGetViewTop(void);
void viSetUseZBuf(bool use);
void viSetFovY(f32 fovy);
void viSetAspect(f32 aspect);
f32 viGetAspect(void);
void viSetFovAspectAndSize(f32 fovy, f32 aspect, s16 width, s16 height);
f32 viGetFovY(void);
void viSetZRange(f32 arg0, f32 arg1);
void viGetZRange(struct zrange *zrange);
Gfx *viSetFillColour(Gfx *gdl, s32 r, s32 g, s32 b);
void viGrabJpg32(void);
void viGrabRgb32(void);

#endif
