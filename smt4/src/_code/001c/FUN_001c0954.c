/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c0954` (_code @ 0x1c0954, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00465228; /* 0x465228 */

/* Supplied declaration required: FUN_002c3510. */
extern unsigned long long FUN_002c3520(void);
/* Supplied declaration required: FUN_00354dac. */


int FUN_001c0954(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned long long temp_v1;
  
  temp_v1 = FUN_002c3520();
  temp_v0 = (int)temp_v1;
  FUN_00354dac(temp_v0,(int)((unsigned long long)temp_v1 >> 0x20),param_1,param_2);
  FUN_002c3510();
  if (-1 < temp_v0) {
    DAT_00465228 = 1;
  }
  return temp_v0;
}
