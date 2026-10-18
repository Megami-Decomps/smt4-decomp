/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a126c` (_code @ 0x2a126c, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a1130(unsigned int, unsigned int);
extern unsigned int *FUN_002baa40(unsigned char *, int);
extern int FUN_002c3dfc(int);


void FUN_002a126c(unsigned int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned char temp_v3 [12];
  
  temp_v0 = FUN_002a1130(param_1,0);
  if (*(char *)(param_2 + 0x330) != '\0') {
    temp_v1 = FUN_002c3dfc(param_2 + 0x331);
    *(unsigned int *)(param_2 + 0x331) = 0;
    *(unsigned int *)(param_2 + 0x335) = 0;
    *(unsigned int *)(param_2 + 0x339) = 0;
    *(unsigned int *)(param_2 + 0x33d) = 0;
    *(unsigned char *)(param_2 + 0x330) = 0;
    if (temp_v1 < 0) {
      puVar3 = (unsigned int *)FUN_002baa40(temp_v3,temp_v1);
      temp_v2 = puVar3[1];
      *(unsigned int *)(temp_v0 + 4) = *puVar3;
      *(unsigned int *)(temp_v0 + 8) = temp_v2;
    }
  }
  return;
}
