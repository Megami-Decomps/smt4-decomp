/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b14c8` (_code @ 0x2b14c8, 0x35c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(...);
int paramsInit(int, unsigned char *, int, unsigned char *, int, unsigned char *, int, unsigned char *, int, unsigned char *, int);
int uiSpriteSelectAnim(...);
int FUN_0019e330(int, int, int);
int FUN_00387240(...);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char DAT_0052a40c; /* 0x52a40c */
extern unsigned char DAT_0052a418; /* 0x52a418 */
extern unsigned char DAT_0052a4b4; /* 0x52a4b4 */
extern unsigned char DAT_0052a544; /* 0x52a544 */
extern unsigned char DAT_0052a560; /* 0x52a560 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: paramsInit. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: FUN_0019e330. */
/* Supplied declaration required: FUN_00387240. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_002b14c8(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  *(unsigned int *)(param_1 + 0x243c) = 0;
  *(unsigned int *)(param_1 + 0x2438) = 0;
  *(unsigned int *)(param_1 + 0x2444) = 0;
  *(unsigned short *)(param_1 + 0x2448) = 0;
  *(unsigned short *)(param_1 + 0x244a) = 0;
  temp_v1 = 0;
  temp_v0 = 0;
  *(unsigned int *)(param_1 + 0x2440) = 0;
  do {
    temp_v2 = temp_v1 + 1;
    temp_v0 = temp_v0 + 2;
    *(unsigned short *)(param_1 + temp_v1 * 2 + 0x24a0) = 0xffff;
    temp_v1 = temp_v1 + 2;
    *(unsigned short *)(param_1 + temp_v2 * 2 + 0x24a0) = 0xffff;
  } while (temp_v0 < 10);
  temp_v0 = 0;
  temp_v1 = 10;
  do {
    temp_v3 = param_1 + temp_v0 * 2;
    temp_v2 = temp_v0 * 4;
    *(unsigned short *)(temp_v3 + 0x2450) = 0xffff;
    *(unsigned short *)(temp_v3 + 0x2464) = 0;
    temp_v1 = temp_v1 - 1;
    temp_v0 = temp_v0 + 1;
    *(unsigned int *)(param_1 + temp_v2 + 0x2478) = 0;
  } while (temp_v1 != 0);
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(param_1);
  paramsInit(param_1,&DAT_0052a40c,0xc,&DAT_0052a418,0x9c,&DAT_0052a4b4,0x90,&DAT_0052a544,0x1c,
               &DAT_0052a560,0x40c);
  temp_v0 = 0;
  do {
    temp_v1 = param_1 + temp_v0 * 0x8c;
    FUN_0014e188(temp_v1 + 0x20,0xc,0,param_1,2);
    FUN_00387240(temp_v1 + 0x20,0xc,temp_v0 + 0xb);
    FUN_0019e330(temp_v1 + 0x20,5,0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 10);
  temp_v0 = 10;
  do {
    temp_v1 = param_1 + temp_v0 * 0x8c;
    FUN_0014e188(temp_v1 + 0x20,0xc,4,param_1,2);
    FUN_00387240(temp_v1 + 0x20,0xc,temp_v0 + 0x15);
    uiSpriteSelectAnim(temp_v1 + 0x20,2);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x14);
  temp_v0 = 0x14;
  do {
    temp_v1 = param_1 + temp_v0 * 0x8c;
    FUN_0014e188(temp_v1 + 0x20,0xc,7,param_1,2);
    FUN_00387240(temp_v1 + 0x20,0xc,temp_v0 + 1);
    uiSpriteSelectAnim(temp_v1 + 0x20,5);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x1e);
  temp_v0 = 0x1e;
  do {
    temp_v1 = param_1 + temp_v0 * 0x8c;
    FUN_0014e188(temp_v1 + 0x20,0xc,2,param_1,2);
    FUN_00387240(temp_v1 + 0x20,0xc,temp_v0 - 9);
    uiSpriteSelectAnim(temp_v1 + 0x20,3);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x28);
  temp_v0 = 0x28;
  do {
    temp_v1 = param_1 + temp_v0 * 0x8c;
    FUN_0014e188(temp_v1 + 0x20,0xc,4000,param_1,2);
    FUN_00387240(temp_v1 + 0x20,0xc,temp_v0 - 0x13);
    uiSpriteSelectAnim(temp_v1 + 0x20,0xb);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x32);
  temp_v0 = 0x32;
  do {
    temp_v1 = param_1 + temp_v0 * 0x8c;
    FUN_0014e188(temp_v1 + 0x20,0xc,0xfa6,param_1,2);
    FUN_00387240(temp_v1 + 0x20,0xc,temp_v0 - 0x1d);
    uiSpriteSelectAnim(temp_v1 + 0x20,10);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x3c);
  FUN_0014e188(param_1 + 0x20f0,0xc,0,param_1,1);
  temp_v0 = 0x3d;
  do {
    FUN_0014e188(param_1 + temp_v0 * 0x8c + 0x20,0xc,0xf5 - temp_v0,param_1,1);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x42);
  return;
}

} /* extern "C" */
