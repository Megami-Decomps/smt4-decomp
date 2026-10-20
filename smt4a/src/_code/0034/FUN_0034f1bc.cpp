/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034f1bc` (_code @ 0x34f1bc, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);

extern int DAT_0057f290; /* 0x57f290 */

/* Supplied declaration required: FUN_00184310. */


int FUN_0034f1bc(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned short *puVar3;
  unsigned short *puVar4;
  
  temp_v0 = DAT_0057f290;
  temp_v1 = *(int *)(DAT_0057f290 + (unsigned int)*param_2 * 4 + 0x73f0) -
          *(int *)(DAT_0057f290 + (unsigned int)*param_1 * 4 + 0x73f0);
  if (temp_v1 == 0) {
    puVar3 = (unsigned short *)(*(unsigned int *)(DAT_0057f290 + (unsigned int)*param_1 * 8 + 0x13b8) & 0x7fff);
    puVar4 = (unsigned short *)(*(unsigned int *)(DAT_0057f290 + (unsigned int)*param_2 * 8 + 0x13b8) & 0x7fff);
    FUN_00184310();
    FUN_00184310();
    temp_v1 = (unsigned int)(unsigned char)puVar4[1] - (unsigned int)(unsigned char)puVar3[1];
    if (temp_v1 == 0) {
      temp_v1 = (unsigned int)puVar3[3] - (unsigned int)puVar4[3];
      if (temp_v1 == 0) {
        temp_v1 = (unsigned int)*puVar4 - (unsigned int)*puVar3;
      }
    }
    if (temp_v1 == 0) {
      puVar3 = (unsigned short *)((*(unsigned int *)(temp_v0 + (unsigned int)*param_1 * 8 + 0x13b8) & 0x3fffffff) >> 0xf);
      puVar4 = (unsigned short *)((*(unsigned int *)(temp_v0 + (unsigned int)*param_2 * 8 + 0x13b8) & 0x3fffffff) >> 0xf);
      FUN_00184310();
      FUN_00184310();
      temp_v1 = (unsigned int)(unsigned char)puVar4[1] - (unsigned int)(unsigned char)puVar3[1];
      if ((temp_v1 == 0) && (temp_v1 = (unsigned int)puVar3[3] - (unsigned int)puVar4[3], temp_v1 == 0)) {
        temp_v1 = (unsigned int)*puVar4 - (unsigned int)*puVar3;
      }
    }
  }
  return temp_v1;
}

} /* extern "C" */
