/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d0220` (_code @ 0x3d0220, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023cb70(...);
int FUN_0023cbc4(int, int, int);
int FUN_003d86a0(int, int, int);

extern int g_btlMain; /* 0x4342c8 */

/* Supplied declaration required: FUN_0023cb70. */
/* Supplied declaration required: FUN_0023cbc4. */
/* Supplied declaration required: FUN_003d86a0. */


unsigned int FUN_003d0220(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = g_btlMain;
  temp_v1 = *(int *)(param_2 + 0x56c);
  if (param_3 != 0) {
    if (temp_v1 == 0xf) {
      *(unsigned int *)(g_btlMain + 0x634) = *(unsigned int *)(g_btlMain + 0x634) | 0x100000;
      FUN_0023cbc4(temp_v0,0x32,1);
      FUN_0023cb70(g_btlMain,0x32,1,0);
    }
    if (*(unsigned int *)(param_2 + 0x56c) < 0x42) {
      return 0;
    }
  }
  else {
    if (temp_v1 != 0xf) {
      if (temp_v1 != 0x23) {
        if (temp_v1 == 0x29) {
          FUN_003d86a0(g_btlMain,0,2);
        }
      }
      else {
        FUN_0023cbc4(g_btlMain,6,1);
        FUN_0023cb70(g_btlMain,6,1);
      }
    }
    else {
      FUN_0023cbc4(g_btlMain,0x32,1);
      FUN_0023cb70(g_btlMain,0x32,1,0);
    }
    if (*(unsigned int *)(param_2 + 0x56c) < 0x2c) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
