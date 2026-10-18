/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a4144` (_code @ 0x3a4144, 0x2b0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_0039fef4(); /* 0x39fef4 */
extern int FUN_0039ff40(); /* 0x39ff40 */
extern int FUN_0039ff60(); /* 0x39ff60 */
extern int FUN_003a0294(); /* 0x3a0294 */
extern int FUN_003a0334(); /* 0x3a0334 */
extern int FUN_003a0380(); /* 0x3a0380 */
extern int FUN_003a0804(); /* 0x3a0804 */
extern int FUN_003a0890(); /* 0x3a0890 */
extern int FUN_003a08d4(); /* 0x3a08d4 */
extern int FUN_003a0918(); /* 0x3a0918 */
extern int FUN_003a0978(); /* 0x3a0978 */
extern int FUN_003a65c4(); /* 0x3a65c4 */

extern int FUN_0022e7c4(void);
/* Supplied declaration required: FUN_00230790. */
/* Supplied declaration required: FUN_002337a0. */
/* Supplied declaration required: FUN_0027f3d4. */
extern int FUN_0029e3d0(void);
/* Supplied declaration required: FUN_0029e41c. */
extern int FUN_0029e468(void);
/* Supplied declaration required: FUN_002a0f68. */


void FUN_003a4144(int param_1)

{
/* irregular: 17 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_0029e468();
  if (temp_v0 != 0) {
    FUN_0029e41c();
    FUN_002a0f68(0);
    FUN_00230790(param_1);
    temp_v0 = *(int *)(param_1 + 0x860);
    if (*(int *)(param_1 + 0x10) == 1) {
      if (temp_v0 == 8) {
        temp_v1 = 0x10;
      }
      else {
        temp_v1 = 0xf;
      }
      *(unsigned int *)(param_1 + 4) = temp_v1;
      *(unsigned int *)(param_1 + 8) = 0;
      return;
    }
    if (temp_v0 == 7) {
      *(unsigned int *)(param_1 + 4) = 6;
      *(unsigned int *)(param_1 + 8) = 0;
      return;
    }
    if (temp_v0 == 8) {
      temp_v1 = 7;
    }
    else {
      temp_v1 = 5;
    }
    *(unsigned int *)(param_1 + 4) = temp_v1;
    *(unsigned int *)(param_1 + 8) = 0;
  }
  else {
    temp_v2 = param_1 + *(int *)(param_1 + 0x860) * 0x1002;
    temp_v3 = temp_v2 + 0xc94;
    FUN_002337a0(param_1 + *(int *)(param_1 + 0x860) * 0x74 + 0x880);
    temp_v0 = FUN_0029e3d0();
    if (temp_v0 == 0xf) {
      temp_v0 = FUN_0022e7c4();
      if (temp_v0 == 0) {
        FUN_0027f3d4(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,FUN_003a0804);
        return;
      }
      FUN_0027f3d4(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,FUN_003a0294);
      return;
    }
    if (temp_v0 < 0xf) {
      if (temp_v0 == 3) {
        temp_v0 = FUN_0022e7c4();
        if (temp_v0 == 0) {
          FUN_0027f3d4(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,FUN_003a0380);
          return;
        }
        FUN_0027f3d4(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,FUN_0039ff60);
        return;
      }
      if (temp_v0 == 7) {
        if (*(int *)(param_1 + 0x860) == 8) {
          temp_v0 = FUN_0022e7c4();
          if (temp_v0 == 0) {
            FUN_0027f3d4(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,FUN_003a0978);
            return;
          }
          FUN_0027f3d4(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,FUN_003a08d4);
          return;
        }
        temp_v0 = FUN_0022e7c4();
        if (temp_v0 == 0) {
          FUN_0027f3d4(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,FUN_003a0918);
          return;
        }
        FUN_0027f3d4(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,FUN_003a0890);
        return;
      }
      if (temp_v0 == 0xc) {
        temp_v0 = FUN_0022e7c4();
        if (temp_v0 == 0) {
          FUN_0027f3d4(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,FUN_0039ff40);
          return;
        }
        FUN_0027f3d4(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,FUN_003a65c4);
        return;
      }
    }
    else {
      if (temp_v0 == 0x10) {
        temp_v0 = FUN_0022e7c4();
        if (temp_v0 == 0) {
          FUN_0027f3d4(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,FUN_003a0334);
          return;
        }
        FUN_0027f3d4(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,FUN_0039fef4);
        return;
      }
      if (temp_v0 == 0x1c) {
        temp_v0 = FUN_0022e7c4();
        if (temp_v0 == 0) {
          FUN_0027f3d4(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,0x3a0244);
          return;
        }
        FUN_0027f3d4(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,0x3a66e8);
        return;
      }
    }
  }
  return;
}
