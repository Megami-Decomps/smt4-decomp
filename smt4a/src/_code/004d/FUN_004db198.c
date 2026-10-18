/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004db198` (_code @ 0x4db198, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_0037e21c. */
/* Supplied declaration required: FUN_0039c64c. */
/* Supplied declaration required: FUN_004dc154. */


unsigned int FUN_004db198(unsigned int param_1,unsigned short *param_2,unsigned short *param_3,unsigned int *param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned short *puVar1;
  unsigned short *puVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned int temp_v0;
  
  puVar1 = param_2;
  FUN_00184310();
  puVar2 = param_3;
  FUN_00184310();
  pbVar3 = (unsigned char *)(unsigned int)(unsigned char)puVar1[1];
  FUN_0039c64c(pbVar3,(char)puVar2[1]);
  pbVar4 = pbVar3;
  FUN_0037e21c();
  if (*puVar1 != *puVar2 && pbVar3 != (unsigned char *)0x0) {
    temp_v0 = (unsigned int)puVar1[3] + (unsigned int)puVar2[3];
    if ((temp_v0 & 0x80000001) != 0) {
      temp_v0 = temp_v0 + 1;
    }
    FUN_004dc154(param_1,pbVar3[2],((unsigned int)*pbVar4 + (temp_v0 >> 1)) & 0xffff);
    temp_v0 = param_1;
    if (*puVar1 != param_1) {
      temp_v0 = (unsigned int)*puVar2;
    }
    if ((*puVar1 != param_1 && temp_v0 != param_1) && param_1 != 0) {
      *param_4 = (((*param_4 & 0xffff8000) | ((unsigned int)param_2 & 0xffff7fff)) & 0xc0007fff) |
                 (((unsigned int)param_3 & 0x7fff) << 0xf);
      param_4[1] = ((param_1 & 0x3fff7fff) << 2) | (param_4[1] & 0xfffe0003);
      return 1;
    }
  }
  return 0;
}
