/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d0204` (_code @ 0x2d0204, 0x178 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dd68; /* 0x43dd68 */

extern int FUN_00288380(unsigned short);
/* Supplied declaration required: FUN_002b9364. */


int FUN_002d0204(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  unsigned short *puVar2;
  int temp_v0;
  int temp_v1;
  unsigned short *puVar5;
  unsigned short *puVar6;
  int temp_v2;
  
  temp_v2 = DAT_0043dd68;
  puVar5 = (unsigned short *)(*(unsigned int *)(DAT_0043dd68 + (unsigned int)*param_1 * 8 + 0x1390) & 0x7fff);
  puVar6 = (unsigned short *)(*(unsigned int *)(DAT_0043dd68 + (unsigned int)*param_2 * 8 + 0x1390) & 0x7fff);
  puVar1 = puVar5;
  FUN_002b9364();
  puVar2 = puVar6;
  FUN_002b9364();
  temp_v0 = FUN_00288380(*puVar1);
  temp_v1 = FUN_00288380(*puVar2);
  temp_v1 = temp_v1 - temp_v0;
  if (temp_v1 == 0) {
    FUN_002b9364();
    FUN_002b9364();
    temp_v1 = (unsigned int)(unsigned char)puVar6[1] - (unsigned int)(unsigned char)puVar5[1];
    if ((temp_v1 == 0) &&
       (temp_v1 = (unsigned int)*(unsigned char *)((int)puVar5 + 3) - (unsigned int)*(unsigned char *)((int)puVar6 + 3), temp_v1 == 0)) {
      temp_v1 = (unsigned int)*puVar6 - (unsigned int)*puVar5;
    }
  }
  if (temp_v1 == 0) {
    puVar5 = (unsigned short *)((*(unsigned int *)(temp_v2 + (unsigned int)*param_1 * 8 + 0x1390) & 0x3fffffff) >> 0xf);
    puVar6 = (unsigned short *)((*(unsigned int *)(temp_v2 + (unsigned int)*param_2 * 8 + 0x1390) & 0x3fffffff) >> 0xf);
    puVar1 = puVar5;
    FUN_002b9364();
    puVar2 = puVar6;
    FUN_002b9364();
    temp_v2 = FUN_00288380(*puVar1);
    temp_v1 = FUN_00288380(*puVar2);
    temp_v1 = temp_v1 - temp_v2;
    if (temp_v1 == 0) {
      FUN_002b9364();
      FUN_002b9364();
      temp_v1 = (unsigned int)(unsigned char)puVar6[1] - (unsigned int)(unsigned char)puVar5[1];
      if ((temp_v1 == 0) &&
         (temp_v1 = (unsigned int)*(unsigned char *)((int)puVar5 + 3) - (unsigned int)*(unsigned char *)((int)puVar6 + 3), temp_v1 == 0))
      {
        temp_v1 = (unsigned int)*puVar6 - (unsigned int)*puVar5;
      }
    }
  }
  return temp_v1;
}
