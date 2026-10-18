/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028ebd8` (_code @ 0x28ebd8, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00433158; /* 0x433158 */

extern int FUN_002b931c(unsigned int, unsigned int);
extern unsigned int FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


int FUN_0028ebd8(unsigned int param_1,int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002b931c(DAT_00433158,param_1);
  if (temp_v0 != 0) {
    temp_v0 = temp_v0 + 2;
  }
  else {
    temp_v1 = FUN_002c0ec4(1,0);
    temp_v0 = FUN_002c0e9c();
    temp_v2 = FUN_002c0e4c(temp_v1);
    if ((param_1 < temp_v2) && (temp_v0 = temp_v0 + param_1 * 0x28, param_2 != 0)) {
      temp_v0 = temp_v0 + 0x10;
    }
  }
  return temp_v0;
}
