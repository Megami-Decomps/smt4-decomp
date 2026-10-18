/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ad61c` (_code @ 0x2ad61c, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern romwright_code *DAT_0044e450; /* 0x44e450 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_002ad61c(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  romwright_code *pcVar1;
  
  pcVar1 = DAT_0044e450;
  if (DAT_0044e450 != (romwright_code *)0x0) {
    DAT_0044e450 = (romwright_code *)0x0;
    (*pcVar1)(param_1,0,0,0,0,param_3);
  }
  software_interrupt(0x3c);
  return param_1;
}
