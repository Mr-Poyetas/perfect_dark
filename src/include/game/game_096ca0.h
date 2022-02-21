#ifndef _IN_GAME_GAME_096CA0_H
#define _IN_GAME_GAME_096CA0_H
#include <ultra64.h>
#include "data.h"
#include "types.h"

void quaternion0f096ca0(struct coord *arg0, f32 quat[4]);
void quaternionToMtx(f32 *arg0, Mtxf *arg1);
void func0f097044(Mtxf *matrix, f32 arg1[4]);
u32 func0f097264(void);
void func0f0972b8(f32 arg0[4], f32 arg1[4], f32 arg2, f32 *arg3);
u32 func0f097518(void);
void func0f0976c0(f32 arg0[4], f32 arg1[4]);
void func0f097738(f32 *arg0, f32 *arg1, f32 *arg2);

#endif
