/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1ce4` (_code @ 0x2c1ce4, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00570280; /* 0x570280 */

extern int FUN_0017607c(unsigned int, unsigned int);
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern int FUN_00192798(void);


int FUN_002c1ce4(unsigned int param_1,int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_0017607c(DAT_00570280,param_1);
  if (temp_v0 != 0) {
    temp_v0 = temp_v0 + 2;
  }
  else {
    temp_v1 = FUN_00187180(1,0);
    temp_v0 = FUN_00192798();
    temp_v2 = FUN_00192748(temp_v1);
    if ((param_1 < temp_v2) && (temp_v0 = temp_v0 + param_1 * 0x30, param_2 != 0)) {
      temp_v0 = temp_v0 + 0x10;
    }
  }
  return temp_v0;
}

} /* extern "C" */
