/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00358d34` (_code @ 0x358d34, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00472a38; /* 0x472a38 */
extern unsigned int DAT_00472a3c; /* 0x472a3c */
extern unsigned int DAT_004eabbc; /* 0x4eabbc */
extern unsigned int DAT_004eabc4; /* 0x4eabc4 */
extern unsigned char DAT_004eabc8; /* 0x4eabc8 */
extern unsigned char DAT_004eabc9; /* 0x4eabc9 */
extern unsigned char DAT_004eabca; /* 0x4eabca */

/* Supplied declaration required: nn_fnd_ExpHeapBase_Finalize. */


void FUN_00358d34(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00472a38 != '\0') {
    DAT_004eabc4 = 0;
    DAT_004eabc8 = (unsigned char)param_2;
    DAT_004eabc9 = (unsigned char)((unsigned int)param_2 >> 8);
    DAT_004eabca = (unsigned char)((unsigned int)param_2 >> 0x10);
    DAT_004eabbc = 0xffffffff;
    nn_fnd_ExpHeapBase_Finalize();
    DAT_00472a3c = 0;
    DAT_00472a38 = '\0';
  }
  return;
}
