/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d0fcc` (_code @ 0x1d0fcc, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b57a8(unsigned int [3], int);

extern int FUN_001a0380(int);
/* Supplied declaration required: FUN_001b57a8. */
extern int FUN_001d25a0(unsigned int, unsigned int);


void FUN_001d0fcc(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3 [3];
  
  puVar3 = temp_v3;
  temp_v0 = FUN_001d25a0(param_1,0);
  if (*(char *)(param_2 + 0x330) != '\0') {
    temp_v1 = FUN_001a0380(param_2 + 0x331);
    *(unsigned int *)(param_2 + 0x331) = 0;
    *(unsigned int *)(param_2 + 0x335) = 0;
    *(unsigned int *)(param_2 + 0x339) = 0;
    *(unsigned int *)(param_2 + 0x33d) = 0;
    *(unsigned char *)(param_2 + 0x330) = 0;
    if (temp_v1 < 0) {
      FUN_001b57a8(temp_v3,temp_v1);
      temp_v2 = puVar3[1];
      *(unsigned int *)(temp_v0 + 4) = *puVar3;
      *(unsigned int *)(temp_v0 + 8) = temp_v2;
    }
  }
  return;
}

} /* extern "C" */
