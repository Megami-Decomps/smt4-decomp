/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015647c` (_code @ 0x15647c, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002bb5b4(void);
/* Supplied declaration required: FUN_002c5ff4. */


unsigned char FUN_0015647c(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_002bb5b4();
  if (temp_v0 != 0) {
    puVar2 = *(unsigned int **)(param_1 + (*(unsigned short *)(param_1 + 0x131a) & 1) * 0x60 + param_2 * 4 + 0x10b0)
    ;
    FUN_002c5ff4(*(unsigned int *)
                  (param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131e) * 0x60 + param_2 * 4 + 0x1230),
                 param_3,0x20);
    *puVar2 = *puVar2 | 4;
  }
  return temp_v0 != 0;
}
