/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00155d3c` (_code @ 0x155d3c, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001597a4. */
extern int FUN_001597b4(int, unsigned int);


unsigned int FUN_00155d3c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if ((param_3 & 0xfff) != 0) {
    temp_v0 = 0xe0e01bf2;
  }
  else {
    *(unsigned int *)(param_1 + 0x14) = param_2;
    if (*(int *)(param_1 + 8) != 0) {
      temp_v0 = 0x8a01bf9;
    }
    else {
      temp_v1 = FUN_001597b4(param_1,param_3);
      if (temp_v1 == 0) {
        temp_v0 = 0xd8601837;
      }
      else {
        *(unsigned char *)(param_1 + 0x10) = ~(unsigned char)(param_5 >> 1) & 1;
        temp_v0 = *(unsigned int *)(param_1 + 0x14);
        software_interrupt(0x1f);
        if ((temp_v0 & 0x80000000) == 0) {
          *(unsigned char *)(param_1 + 0x18) = 1;
        }
        else {
          FUN_001597a4(param_1,temp_v1,param_5,param_4);
        }
      }
    }
  }
  return temp_v0;
}
