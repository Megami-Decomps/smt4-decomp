/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb858` (_code @ 0x2eb858, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineSockAddrInit(unsigned int *);

extern unsigned char DAT_005585d0; /* 0x5585d0 */

/* Supplied declaration required: onlineSockAddrInit. */


unsigned int * FUN_002eb858(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_005585d0;
  onlineSockAddrInit(param_1);
  param_1[2] = (param_2 << 0x18) | (((param_2 >> 8) & 0xff) << 0x10) |
               (((param_2 >> 0x10) & 0xff) << 8) | (param_2 >> 0x18);
  *(unsigned short *)((int)param_1 + 6) = (unsigned short)((param_3 & 0xff) << 8) | ((unsigned short)(param_3 >> 8) & 0xff);
  return param_1;
}

} /* extern "C" */
