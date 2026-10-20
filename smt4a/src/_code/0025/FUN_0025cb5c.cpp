/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025cb5c` (_code @ 0x25cb5c, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013ebd8(void);
int FUN_00429fcc(int, int, unsigned int, unsigned int);

extern unsigned char DAT_005b40c9; /* 0x5b40c9 */

/* Supplied declaration required: FUN_0013ebd8. */
extern unsigned long long FUN_00142b04(void);
/* Supplied declaration required: FUN_00429fcc. */


int FUN_0025cb5c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned long long temp_v1;
  
  temp_v1 = FUN_00142b04();
  temp_v0 = (int)temp_v1;
  FUN_00429fcc(temp_v0,(int)((unsigned long long)temp_v1 >> 0x20),param_1,param_2);
  FUN_0013ebd8();
  if (-1 < temp_v0) {
    DAT_005b40c9 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
