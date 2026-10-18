/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042fbe4` (_code @ 0x42fbe4, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_005c1484; /* 0x5c1484 */
extern unsigned int DAT_005c1488; /* 0x5c1488 */
extern unsigned int DAT_0064757c; /* 0x64757c */
extern unsigned int DAT_00647584; /* 0x647584 */
extern unsigned char DAT_00647588; /* 0x647588 */
extern unsigned char DAT_00647589; /* 0x647589 */
extern unsigned char DAT_0064758a; /* 0x64758a */

/* Supplied declaration required: nn_fnd_ExpHeapBase_Finalize. */


void FUN_0042fbe4(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_005c1484 != '\0') {
    DAT_00647584 = 0;
    DAT_00647588 = (unsigned char)param_2;
    DAT_00647589 = (unsigned char)((unsigned int)param_2 >> 8);
    DAT_0064758a = (unsigned char)((unsigned int)param_2 >> 0x10);
    DAT_0064757c = 0xffffffff;
    nn_fnd_ExpHeapBase_Finalize();
    DAT_005c1488 = 0;
    DAT_005c1484 = '\0';
  }
  return;
}
