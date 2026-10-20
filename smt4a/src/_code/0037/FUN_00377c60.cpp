/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00377c60` (_code @ 0x377c60, 0x1dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002039a0(...);

extern int DAT_00580c90; /* 0x580c90 */

/* Supplied declaration required: FUN_002039a0. */


void FUN_00377c60(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  if (temp_v2 < DAT_00580c90) {
    do {
      temp_v0 = *(int *)(*(int *)(temp_v2 * 4 + 0x5f3020) + 0x14);
      temp_v1 = **(int **)(temp_v0 + 0x1c);
      if (temp_v1 != 0) {
        if (temp_v1 != 1) {
          if (temp_v1 == 2) {
            FUN_002039a0(0xff00ff);
            FUN_002039a0(0xff00ff);
            FUN_002039a0(0xff00ff);
            FUN_002039a0(0xff00ff);
            FUN_002039a0(0xff0000ff);
          }
        }
        else {
          if (*(int *)(temp_v0 + 4) == 0x27) {
            FUN_002039a0(0xff00ff);
            FUN_002039a0(0xff00ff);
            FUN_002039a0(0xff00ff);
          }
          FUN_002039a0(0xff00ff);
          FUN_002039a0(0xff0000ff);
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < DAT_00580c90);
  }
  return;
}

} /* extern "C" */
