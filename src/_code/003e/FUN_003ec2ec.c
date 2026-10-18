/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ec2ec` (_code @ 0x3ec2ec, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_00420b78; /* 0x420b78 */
extern char *DAT_004eabc0; /* 0x4eabc0 */
extern unsigned int DAT_004eabc4; /* 0x4eabc4 */


void FUN_003ec2ec(unsigned int *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0xffffffff;
  *param_1 = (unsigned int)&DAT_00420b78;
  param_1[0x17] = 0;
  DAT_004eabc0 = "狈?犘?깄5";
  DAT_004eabc4 = 0;
  return;
}
