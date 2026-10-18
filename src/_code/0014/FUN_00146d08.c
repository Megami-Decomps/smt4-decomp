/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146d08` (_code @ 0x146d08, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00146d08(int, unsigned int);
extern int FUN_0014f6ec(unsigned int, int);


int FUN_00146d08(int param_1,unsigned int param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v1 = FUN_0014f6ec(param_1,temp_v1);
    if (temp_v1 == 0) {
      return 0;
    }
  } while ((param_2 < *(unsigned int *)(temp_v1 + 0x18)) || (*(unsigned int *)(temp_v1 + 0x1c) <= param_2));
  temp_v0 = FUN_00146d08(temp_v1 + 0xc,param_2);
  if (temp_v0 == 0) {
    temp_v0 = temp_v1;
  }
  return temp_v0;
}
