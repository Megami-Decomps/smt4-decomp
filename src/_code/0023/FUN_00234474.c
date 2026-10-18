/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00234474` (_code @ 0x234474, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b4414(unsigned int, unsigned int, unsigned int);


unsigned int FUN_00234474(int *param_1,unsigned int param_2)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v2 = 0;
  temp_v1 = *param_1;
  temp_v3 = *(unsigned int *)(temp_v1 + 0x1c);
  if (temp_v3 != 0) {
    do {
      temp_v0 = FUN_002b4414(*(unsigned int *)(*(int *)(temp_v1 + 0x18) + temp_v2 * 8),param_2,0x40);
      if (temp_v0 == 0) {
        return *(unsigned int *)(*(int *)(temp_v1 + 0x18) + temp_v2 * 8 + 4);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < temp_v3);
  }
  return 0;
}
