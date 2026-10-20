/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ec2a4` (_code @ 0x3ec2a4, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c38fc(unsigned int *);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned int DAT_004d4280; /* 0x4d4280 */

/* Supplied declaration required: FUN_002c38fc. */


unsigned long long FUN_003ec2a4(unsigned int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  param_3[2] = param_1;
  param_3[3] = param_2;
  param_3[4] = 0;
  param_3[5] = 0;
  *param_3 = 0;
  DAT_004d4280 = 0;
  FUN_002c38fc(&DAT_004d4280);
  return 0x3574a8004d4280;
}

} /* extern "C" */
