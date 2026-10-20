/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a7a20` (_code @ 0x1a7a20, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_strcmp(void);

/* Supplied declaration required: libc_strcmp. */


unsigned int FUN_001a7a20(short *param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  
  puVar5 = *(unsigned int **)(param_1 + 2);
  puVar4 = puVar5 + (unsigned int)(unsigned short)puVar5[1] * 3;
  if (*param_1 != 0) {
    puVar3 = puVar4;
    if (*puVar4 < *puVar5) {
      do {
        temp_v1 = *puVar3 >> 3;
        if ((temp_v1 < param_3) && ((((int)*(char *)(param_2 + temp_v1) >> (*puVar3 & 7)) & 1U) != 0)) {
          temp_v0 = *(unsigned short *)((int)puVar3 + 6);
        }
        else {
          temp_v0 = (unsigned short)puVar3[1];
        }
        puVar4 = puVar5 + (unsigned int)temp_v0 * 3;
        temp_v1 = *puVar3;
        puVar3 = puVar4;
      } while (*puVar4 < temp_v1);
    }
    temp_v1 = puVar4[2];
    if ((temp_v1 != 0) && (libc_strcmp(), temp_v1 == 0)) {
      return (((int)puVar4 - (int)(puVar5 + 3)) / 0xc) & 0xffff;
    }
  }
  return 0xffff;
}

} /* extern "C" */
