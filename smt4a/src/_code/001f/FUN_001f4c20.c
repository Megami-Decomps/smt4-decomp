/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f4c20` (_code @ 0x1f4c20, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0057f56c; /* 0x57f56c */

/* Supplied declaration required: FUN_001846d0. */


void FUN_001f4c20(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057f56c;
  *(unsigned int *)(DAT_0057f56c + 700) = 0;
  if (*(int *)(temp_v0 + 0x14) != 6) {
    *(unsigned int *)(temp_v0 + 8) = 4;
    FUN_001846d0(temp_v0 + 0x3c,1);
    return;
  }
  *(unsigned int *)(temp_v0 + 8) = 6;
  FUN_001846d0(temp_v0 + 0x3c,1);
  FUN_001846d0(temp_v0 + 0x154,4);
  return;
}
