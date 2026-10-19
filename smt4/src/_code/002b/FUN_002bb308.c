/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb308` (_code @ 0x2bb308, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00465668; /* 0x465668 */
extern int DAT_004656b0; /* 0x4656b0 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c131c. */
/* Supplied declaration required: FUN_002c526c. */


void FUN_002bb308(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_004656b0;
  if (DAT_004656b0 == 0) {
    temp_v0 = -0x1f5f3008;
  }
  else {
    software_interrupt(0x23);
    DAT_004656b0 = 0;
  }
  if (temp_v0 < 0) {
    FUN_002c131c(temp_v0,0x2bb338);
  }
  if ((DAT_00465668 != 0) && (software_interrupt(0x14), DAT_00465668 < 0)) {
    FUN_002c526c();
    return;
  }
  return;
}
