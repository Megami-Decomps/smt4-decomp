/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00163060` (_code @ 0x163060, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

extern int *DAT_005b402c; /* 0x5b402c */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001630d4. */
/* Supplied declaration required: FUN_0018003c. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002e6dd4. */


int FUN_00163060(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                unsigned int param_5)

{
/* irregular: 5 native warning(s); review required */
  FUN_0018003c();
  FUN_001630d4(param_1,param_2,param_3,param_4,param_5);
  if (param_1 != 0) {
    FUN_002e6dd4();
  }
  software_interrupt(0x14);
  if (*DAT_005b402c < 0) {
    FUN_002e3140();
  }
  return param_1;
}
