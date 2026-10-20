/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b27d4` (_code @ 0x2b27d4, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);

extern int DAT_0057f290; /* 0x57f290 */

/* Supplied declaration required: FUN_00184310. */


int FUN_002b27d4(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned short *puVar2;
  unsigned short *puVar3;
  int temp_v1;
  
  temp_v0 = DAT_0057f290;
  puVar2 = (unsigned short *)(*(unsigned int *)(DAT_0057f290 + (unsigned int)*param_1 * 8 + 0x13b8) & 0x7fff);
  puVar3 = (unsigned short *)(*(unsigned int *)(DAT_0057f290 + (unsigned int)*param_2 * 8 + 0x13b8) & 0x7fff);
  FUN_00184310();
  FUN_00184310();
  temp_v1 = (unsigned int)(unsigned char)puVar2[1] - (unsigned int)(unsigned char)puVar3[1];
  if (temp_v1 == 0) {
    temp_v1 = (unsigned int)puVar3[3] - (unsigned int)puVar2[3];
    if (temp_v1 == 0) {
      temp_v1 = (unsigned int)*puVar2 - (unsigned int)*puVar3;
    }
  }
  if (temp_v1 == 0) {
    puVar2 = (unsigned short *)((*(unsigned int *)(temp_v0 + (unsigned int)*param_1 * 8 + 0x13b8) & 0x3fffffff) >> 0xf);
    puVar3 = (unsigned short *)((*(unsigned int *)(temp_v0 + (unsigned int)*param_2 * 8 + 0x13b8) & 0x3fffffff) >> 0xf);
    FUN_00184310();
    FUN_00184310();
    temp_v1 = (unsigned int)(unsigned char)puVar2[1] - (unsigned int)(unsigned char)puVar3[1];
    if ((temp_v1 == 0) && (temp_v1 = (unsigned int)puVar3[3] - (unsigned int)puVar2[3], temp_v1 == 0)) {
      temp_v1 = (unsigned int)*puVar2 - (unsigned int)*puVar3;
    }
  }
  return temp_v1;
}

} /* extern "C" */
