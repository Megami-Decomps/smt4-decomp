/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e6c54` (_code @ 0x3e6c54, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b45f8(unsigned int, int, unsigned int);
extern unsigned int FUN_002c3290(unsigned int);


unsigned int FUN_003e6c54(int param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  puVar1 = *(unsigned int **)(param_1 + 8);
  temp_v0 = FUN_002c3290(param_2);
  temp_v1 = *puVar1;
  temp_v3 = 0;
  if ((int)temp_v3 < (int)temp_v1) {
    do {
      if (temp_v3 >= temp_v1) {
        temp_v4 = 0;
      }
      else {
        temp_v4 = puVar1[temp_v3 * 2 + 2] + (int)puVar1;
      }
      temp_v2 = FUN_002b45f8(param_2,temp_v4 + 0xc,temp_v0);
      if (temp_v2 == 0) {
        *param_3 = *(unsigned int *)(temp_v4 + 4);
        return 1;
      }
      temp_v1 = *puVar1;
      temp_v3 = temp_v3 + 1;
    } while ((int)temp_v3 < (int)temp_v1);
  }
  return 0;
}
