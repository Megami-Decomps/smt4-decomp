/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105e10` (_code @ 0x105e10, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004e3b54; /* 0x4e3b54 */
extern unsigned int DAT_004e3b58; /* 0x4e3b58 */
extern unsigned int DAT_004e3b5c; /* 0x4e3b5c */
extern unsigned int DAT_004e3b60; /* 0x4e3b60 */


void FUN_00105e10(int param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 4 native warning(s); review required */
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  
  (&DAT_004e3b54)[param_1 * 4] = in_s0;
  (&DAT_004e3b58)[param_1 * 4] = in_s1;
  (&DAT_004e3b5c)[param_1 * 4] = in_s2;
  (&DAT_004e3b60)[param_1 * 4] = in_s3;
  return;
}
