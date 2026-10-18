/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046b9c0` (_code @ 0x46b9c0, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_00137ee0. */
/* Supplied declaration required: FUN_002e342c. */


unsigned int FUN_0046b9c0(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0 [2];
  unsigned char temp_v1 [32];
  
  if ((*param_1 & 0x20000) != 0) {
    temp_v0[0] = (unsigned int)*(unsigned short *)(param_1[5] + 0x10);
    temp_v0[1] = 0xffffffff;
    FUN_002e342c(temp_v1,param_1[5]);
    FUN_00137ee0(4,temp_v0,0x20);
                    /* WARNING: Treating indirect jump as return */
    return 1;
  }
  return 0;
}
