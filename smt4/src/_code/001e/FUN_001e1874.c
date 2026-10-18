/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e1874` (_code @ 0x1e1874, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_00287188. */
/* Supplied declaration required: FUN_00291944. */
/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_001e1874(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  FUN_00291944();
  temp_v0 = DAT_00439ca8;
  FUN_00287188(DAT_00439ca8 + 0x2460);
  FUN_002b2368(*(unsigned int *)(temp_v0 + 0x7e20));
  *(unsigned int *)(temp_v0 + 0x7e20) = 0;
  if (DAT_00439ca8 != 0) {
    FUN_002c415c();
    DAT_00439ca8 = 0;
  }
  FUN_002c43b4(*(unsigned int *)(param_1 + 0x54),0);
  return;
}
