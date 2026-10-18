/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f5f94` (_code @ 0x1f5f94, 0x100 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dd68; /* 0x43dd68 */

/* Supplied declaration required: FUN_002b9024. */


int FUN_001f5f94(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned short *puVar2;
  unsigned short *puVar3;
  int temp_v1;
  
  temp_v0 = DAT_0043dd68;
  puVar2 = (unsigned short *)(*(unsigned int *)(DAT_0043dd68 + (unsigned int)*param_1 * 8 + 0x1390) & 0x7fff);
  puVar3 = (unsigned short *)(*(unsigned int *)(DAT_0043dd68 + (unsigned int)*param_2 * 8 + 0x1390) & 0x7fff);
  FUN_002b9024();
  FUN_002b9024();
  temp_v1 = (unsigned int)(unsigned char)puVar2[1] - (unsigned int)(unsigned char)puVar3[1];
  if (temp_v1 == 0) {
    temp_v1 = (unsigned int)*(unsigned char *)((int)puVar3 + 3) - (unsigned int)*(unsigned char *)((int)puVar2 + 3);
    if (temp_v1 == 0) {
      temp_v1 = (unsigned int)*puVar2 - (unsigned int)*puVar3;
    }
  }
  if (temp_v1 == 0) {
    puVar2 = (unsigned short *)((*(unsigned int *)(temp_v0 + (unsigned int)*param_1 * 8 + 0x1390) & 0x3fffffff) >> 0xf);
    puVar3 = (unsigned short *)((*(unsigned int *)(temp_v0 + (unsigned int)*param_2 * 8 + 0x1390) & 0x3fffffff) >> 0xf);
    FUN_002b9024();
    FUN_002b9024();
    temp_v1 = (unsigned int)(unsigned char)puVar2[1] - (unsigned int)(unsigned char)puVar3[1];
    if ((temp_v1 == 0) &&
       (temp_v1 = (unsigned int)*(unsigned char *)((int)puVar3 + 3) - (unsigned int)*(unsigned char *)((int)puVar2 + 3), temp_v1 == 0)) {
      temp_v1 = (unsigned int)*puVar2 - (unsigned int)*puVar3;
    }
  }
  return temp_v1;
}
