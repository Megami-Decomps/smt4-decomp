/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048bad0` (_code @ 0x48bad0, 0x254 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163aa4(int);
int FUN_00184528(int, int);
int uiSpriteSetKeyframe(int, int, int);
int uiSpriteSetImageKeyframe(int, int, int);
int FUN_002d22c0(int);
int FUN_0048821c(int, unsigned int);
int FUN_0048a378(int);
int FUN_0048d248(int, unsigned int);
int FUN_00492aa0(int, unsigned int);
int FUN_00492ac8(int, int);
int FUN_00492c5c(int);
int FUN_004935b0(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern signed char DAT_005f1a5c; /* 0x5f1a5c */
extern unsigned char DAT_005f1a5e; /* 0x5f1a5e */

/* Supplied declaration required: FUN_00163aa4. */
extern unsigned int vec2GetXInt(int);
extern unsigned int vec2GetYInt(int);
/* Supplied declaration required: FUN_00184528. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: FUN_002d22c0. */
/* Supplied declaration required: FUN_0048821c. */
/* Supplied declaration required: FUN_0048a378. */
/* Supplied declaration required: FUN_0048d248. */
/* Supplied declaration required: FUN_00492aa0. */
/* Supplied declaration required: FUN_00492ac8. */
/* Supplied declaration required: FUN_00492c5c. */
extern unsigned int FUN_00492c84(int);
/* Supplied declaration required: FUN_004935b0. */
extern int NaviMain_GetCurrentMap(void);


void FUN_0048bad0(int param_1)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v0 = *(int *)(param_1 + 8);
  if (temp_v0 != 0) {
    if (temp_v0 == 1) {
      temp_v4 = param_1 + 0x504;
      temp_v0 = FUN_00163aa4(temp_v4);
      if (temp_v0 != 0) {
        *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfdffffff;
        FUN_002d22c0(1);
        DAT_005f1a5e = 1;
        *(unsigned int *)(param_1 + 8) = 2;
      }
      temp_v2 = vec2GetYInt(temp_v4);
      temp_v3 = vec2GetXInt(temp_v4);
      FUN_004935b0(param_1 + 0x4d0,temp_v3,temp_v2);
      temp_v0 = 0;
      do {
        FUN_00163aa4(param_1 + temp_v0 * 0x8c + 0xc40);
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 6);
      FUN_00163aa4(param_1 + 0x112c);
      FUN_00163aa4(param_1 + 0x10a0);
      return;
    }
    if (temp_v0 == 2) {
      if (*(char *)(param_1 + 0x112a) == '\0') {
        FUN_00163aa4(param_1 + 0x10a0);
      }
      *(unsigned int *)(param_1 + 4) = 2;
      *(unsigned int *)(param_1 + 8) = 0;
      *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfeffffff;
      return;
    }
  }
  else {
    FUN_004935b0(param_1 + 0x4d0,0xfffffec0);
    FUN_0048a378(param_1);
    FUN_00184528(param_1 + 0x4e4,0);
    *(unsigned int *)(param_1 + 8) = 1;
    *(unsigned int *)(param_1 + 0x10) = (*(unsigned int *)(param_1 + 0x10) & 0xfffffffd) | 0x1000000;
    *(unsigned int *)(param_1 + 0x14) = 0;
    temp_v0 = param_1 + 0x4cc;
    temp_v4 = NaviMain_GetCurrentMap();
    temp_v1 = FUN_00492c5c(temp_v0);
    if ((temp_v4 != temp_v1) || (DAT_005f1a5c != '\0')) {
      temp_v2 = FUN_00492c5c(temp_v0);
      FUN_00492aa0(temp_v0,temp_v2);
      FUN_00492ac8(temp_v0,0);
      FUN_0048821c(param_1,temp_v2);
    }
    temp_v2 = FUN_00492c84(temp_v0);
    FUN_0048d248(param_1,temp_v2);
    uiSpriteSetImageKeyframe(param_1 + 0x11b8,3,0);
    uiSpriteSetImageKeyframe(param_1 + 0x1244,5,0);
    FUN_0048a378(param_1);
    temp_v0 = 0;
    do {
      uiSpriteSetKeyframe(param_1 + temp_v0 * 0x8c + 0xc40,4,0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 6);
  }
  return;
}

} /* extern "C" */
