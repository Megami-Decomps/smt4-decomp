/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045e8fc` (_code @ 0x45e8fc, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055be50; /* 0x55be50 */
extern unsigned char DAT_0055bf94; /* 0x55bf94 */
extern unsigned char DAT_0055bfac; /* 0x55bfac */


void FUN_0045e8fc(unsigned int *param_1)

{
  param_1[0x23] = (unsigned int)&DAT_0055bf94;
  *param_1 = (unsigned int)&DAT_0055be50;
  param_1[0x10] = (unsigned int)&DAT_0055bfac;
  return;
}
