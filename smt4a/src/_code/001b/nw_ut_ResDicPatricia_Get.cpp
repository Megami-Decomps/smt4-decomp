/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_ut_ResDicPatricia_Get` (_code @ 0x1b36d8, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_strcmp(int, unsigned int);

/* Supplied declaration required: libc_strcmp. */


void nw_ut_ResDicPatricia_Get(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  
  temp_v1 = *param_1;
  puVar4 = (unsigned int *)(temp_v1 + (unsigned int)*(unsigned short *)(temp_v1 + 0x10) * 0x10 + 0xc);
  puVar5 = puVar4;
  if (*puVar4 < *(unsigned int *)(temp_v1 + 0xc)) {
    do {
      temp_v2 = *puVar5 >> 3;
      if ((temp_v2 < param_3) && ((((int)*(char *)(param_2 + temp_v2) >> (*puVar5 & 7)) & 1U) != 0)) {
        temp_v0 = *(unsigned short *)((int)puVar5 + 6);
      }
      else {
        temp_v0 = (unsigned short)puVar5[1];
      }
      puVar4 = (unsigned int *)(temp_v1 + (unsigned int)temp_v0 * 0x10 + 0xc);
      temp_v2 = *puVar5;
      puVar5 = puVar4;
    } while (*puVar4 < temp_v2);
  }
  if (puVar4[2] != 0) {
    libc_strcmp(param_2,(int)puVar4 + puVar4[2] + 8);
  }
  return;
}

} /* extern "C" */
