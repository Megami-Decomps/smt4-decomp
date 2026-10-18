/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00368bd8` (_code @ 0x368bd8, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_00587f28; /* 0x587f28 */

/* Supplied declaration required: FUN_004883c8. */


void FUN_00368bd8(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_00587f28 == 0) {
    return;
  }
  FUN_004883c8(DAT_00587f28 + 0x68,param_1,0,0,0,0,0,0,0);
                    /* WARNING: Treating indirect jump as return */
  return;
}
