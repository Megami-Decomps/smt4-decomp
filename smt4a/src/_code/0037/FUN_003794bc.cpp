/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003794bc` (_code @ 0x3794bc, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00297988(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_005821c4; /* 0x5821c4 */
extern int g_gameState; /* 0x5f15fc */

extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_00297988. */


void FUN_003794bc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (g_gameState != 0x27) {
    if (g_gameState != 0x14) {
      if ((g_gameState == 0x1a) &&
         ((((temp_v0 = FUN_0018719c(0x4c9), temp_v0 != 0 && (temp_v0 = FUN_0018719c(0x179), temp_v0 != 0))
           && (temp_v0 = FUN_0018719c(0x19f), temp_v0 == 0)) ||
          (((temp_v0 = FUN_0018719c(0x4c9), temp_v0 == 0 && (temp_v0 = FUN_0018719c(0x179), temp_v0 != 0))
           && (temp_v0 = FUN_0018719c(0x184), temp_v0 == 0)))))) {
        FUN_00297988(2,0);
        return;
      }
    }
    else {
      temp_v0 = FUN_0018719c(0x170);
      if (temp_v0 != 0) {
        FUN_00297988(8,0);
        return;
      }
    }
  }
  else {
    temp_v0 = FUN_0018719c(0x9d);
    if (temp_v0 != 0) {
      if (param_1 == 1) {
        FUN_00297988(*(unsigned int *)(DAT_005821c4 + 0x7fc),0);
        return;
      }
      if (param_1 == 2) {
        FUN_00297988(*(unsigned int *)(DAT_005821c4 + 0x804),0);
        return;
      }
      if (param_1 == 3) {
        FUN_00297988(*(unsigned int *)(DAT_005821c4 + 0x80c),0);
        return;
      }
      if (param_1 == 4) {
        FUN_00297988(*(unsigned int *)(DAT_005821c4 + 0x814),0);
        return;
      }
      if (param_1 == 5) {
        FUN_00297988(*(unsigned int *)(DAT_005821c4 + 0x81c),0);
        return;
      }
    }
  }
  FUN_00297988(*(unsigned int *)(DAT_005821c4 + param_1 * 8 + 0x784),0);
  return;
}

} /* extern "C" */
