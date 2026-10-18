/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ef824` (_code @ 0x2ef824, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0043e311; /* 0x43e311 */

/* Supplied declaration required: FUN_00103ccc. */
extern int FUN_00104184(void);
extern int FUN_001eb410(unsigned int, unsigned int);
extern int FUN_00210278(unsigned int, unsigned int);


void FUN_002ef824(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  DAT_0043e311 = 1;
  if (*(char *)(param_1 + 1) == '\x01') {
    temp_v0 = FUN_00104184();
    if (temp_v0 != 0) {
      FUN_00103ccc();
    }
    temp_v0 = FUN_001eb410(6,0);
    if ((temp_v0 < 0) || (temp_v0 = FUN_00210278(6,0), temp_v0 != 1 && temp_v0 != 2)) {
      DAT_0043e311 = 0;
    }
  }
  return;
}
