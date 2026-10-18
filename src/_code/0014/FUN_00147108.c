/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00147108` (_code @ 0x147108, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002bb274(void);


unsigned int FUN_00147108(int param_1,unsigned int param_2)

{
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002bb274();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    if (param_2 >= 0x8000) {
      param_2 = 0x7fff;
    }
    puVar2 = *(unsigned int **)(param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131e) * 4 + 0x10a0);
    *(short *)(puVar2 + 7) = (short)param_2;
    *puVar2 = *puVar2 | 0x20000000;
    temp_v1 = 1;
  }
  return temp_v1;
}
