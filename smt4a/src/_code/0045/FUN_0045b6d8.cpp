/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045b6d8` (_code @ 0x45b6d8, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_vec_ctor_nocookie_nodtor(unsigned int *, unsigned char *, int, int);

extern unsigned char LAB_004613b4; /* 0x4613b4 */
extern unsigned char DAT_0055bd14; /* 0x55bd14 */

/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */


void FUN_0045b6d8(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055bd14;
  param_1[1] = 0;
  param_1 = param_1 + 2;
  __aeabi_vec_ctor_nocookie_nodtor(param_1,&LAB_004613b4,0x10,4);
  param_1[0x10] = 0x3f800000;
  param_1[0x11] = 0x3f800000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(unsigned char *)(param_1 + 0x14) = 0;
  *(unsigned char *)((int)param_1 + 0x51) = 1;
  return;
}

} /* extern "C" */
