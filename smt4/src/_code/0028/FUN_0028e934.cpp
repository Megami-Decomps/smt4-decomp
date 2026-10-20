/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028e934` (_code @ 0x28e934, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00433158; /* 0x433158 */

extern int FUN_002b8fdc(unsigned int, unsigned int);
extern unsigned int FUN_002c0c74(unsigned int);
extern int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);


int FUN_0028e934(unsigned int param_1,int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002b8fdc(DAT_00433158,param_1);
  if (temp_v0 != 0) {
    temp_v0 = temp_v0 + 2;
  }
  else {
    temp_v1 = FUN_002c0cec(1,0);
    temp_v0 = FUN_002c0cc4();
    temp_v2 = FUN_002c0c74(temp_v1);
    if ((param_1 < temp_v2) && (temp_v0 = temp_v0 + param_1 * 0x28, param_2 != 0)) {
      temp_v0 = temp_v0 + 0x10;
    }
  }
  return temp_v0;
}

} /* extern "C" */
