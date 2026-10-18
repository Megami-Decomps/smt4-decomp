/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001533a0` (_code @ 0x1533a0, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002bb5b4(void);


unsigned int FUN_001533a0(int param_1,int param_2,int param_3,unsigned char param_4)

{
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002bb5b4();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    puVar2 = *(unsigned int **)(param_1 + (*(unsigned short *)(param_1 + 0x131a) & 1) * 0x60 + param_2 * 4 + 0x10b0)
    ;
    *(char *)(puVar2 + 0xe) = (char)param_3;
    if (param_3 == 0) {
      *(unsigned char *)((int)puVar2 + 0x39) = param_4;
    }
    *puVar2 = *puVar2 | 0x20000;
    temp_v1 = 1;
  }
  return temp_v1;
}
