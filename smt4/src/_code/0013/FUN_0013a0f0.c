/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a0f0` (_code @ 0x13a0f0, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00472a44; /* 0x472a44 */
extern unsigned int DAT_00472a50; /* 0x472a50 */
extern unsigned int DAT_00473850; /* 0x473850 */
extern unsigned int DAT_00473854; /* 0x473854 */

extern int nn_cfg_CTR_detail_InitializeBase(unsigned int *, char *);


unsigned int FUN_0013a0f0(void)

{
  int temp_v0;
  
  if (DAT_00472a44 == 0) {
    temp_v0 = nn_cfg_CTR_detail_InitializeBase(&DAT_00473850,"cfg:i");
    if (temp_v0 >= 0) {
      DAT_00473854 = DAT_00473850;
      DAT_00472a50 = DAT_00473850;
    }
    else if (temp_v0 == -0x26defc05) {
      return 0xd92103fb;
    }
  }
  DAT_00472a44 = DAT_00472a44 + 1;
  return 0;
}
