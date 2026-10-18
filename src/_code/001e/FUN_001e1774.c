/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e1774` (_code @ 0x1e1774, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_002873f0. */
/* Supplied declaration required: FUN_00291be8. */
/* Supplied declaration required: FUN_002b2520. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */


void FUN_001e1774(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  FUN_00291be8();
  temp_v0 = DAT_00439ca8;
  FUN_002873f0(DAT_00439ca8 + 0x2460);
  FUN_002b2520(*(unsigned int *)(temp_v0 + 0x7e20));
  *(unsigned int *)(temp_v0 + 0x7e20) = 0;
  if (DAT_00439ca8 != 0) {
    FUN_002c4360();
    DAT_00439ca8 = 0;
  }
  FUN_002c45b8(*(unsigned int *)(param_1 + 0x54),0);
  return;
}
