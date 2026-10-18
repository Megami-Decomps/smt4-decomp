/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032ac34` (_code @ 0x32ac34, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b9220(int, unsigned int);
extern int FUN_002bf9f0(int);


unsigned int FUN_0032ac34(int *param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *param_1;
  temp_v0 = *(int *)(temp_v1 + 8);
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (((temp_v0 != 2) && (temp_v0 == 3)) && (temp_v0 = FUN_002bf9f0(temp_v1 + 0x34), temp_v0 != 0)) {
        *(unsigned int *)(temp_v1 + 8) = 0;
      }
    }
    else {
      temp_v0 = FUN_002b9220(temp_v1 + 0x34,1);
      if (temp_v0 != 0) {
        *(unsigned int *)(temp_v1 + 8) = 2;
        *(unsigned int *)(temp_v1 + 0xc) = 0;
      }
    }
  }
  *(int *)(temp_v1 + 0xc) = *(int *)(temp_v1 + 0xc) + 1;
  return 0;
}
