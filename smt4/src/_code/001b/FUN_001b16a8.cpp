/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b16a8` (_code @ 0x1b16a8, 0x158 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int devilGetRecord(void);

extern int g_unite; /* 0x43dd68 */

/* Supplied declaration required: devilGetRecord. */


int FUN_001b16a8(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned short *puVar2;
  unsigned short *puVar3;
  int temp_v1;
  unsigned short *puVar5;
  unsigned short *puVar6;
  
  temp_v0 = g_unite;
  puVar5 = (unsigned short *)(*(unsigned int *)(g_unite + (unsigned int)*param_1 * 8 + 0x1390) & 0x7fff);
  puVar6 = (unsigned short *)(*(unsigned int *)(g_unite + (unsigned int)*param_2 * 8 + 0x1390) & 0x7fff);
  puVar2 = puVar5;
  devilGetRecord();
  puVar3 = puVar6;
  devilGetRecord();
  temp_v1 = (unsigned int)*(unsigned char *)((int)puVar2 + 3) - (unsigned int)*(unsigned char *)((int)puVar3 + 3);
  if (temp_v1 == 0) {
    devilGetRecord();
    devilGetRecord();
    temp_v1 = (unsigned int)(unsigned char)puVar5[1] - (unsigned int)(unsigned char)puVar6[1];
    if (temp_v1 == 0) {
      temp_v1 = (unsigned int)*(unsigned char *)((int)puVar6 + 3) - (unsigned int)*(unsigned char *)((int)puVar5 + 3);
      if (temp_v1 == 0) {
        temp_v1 = (unsigned int)*puVar5 - (unsigned int)*puVar6;
      }
    }
  }
  if (temp_v1 == 0) {
    puVar5 = (unsigned short *)((*(unsigned int *)(temp_v0 + (unsigned int)*param_1 * 8 + 0x1390) & 0x3fffffff) >> 0xf);
    puVar6 = (unsigned short *)((*(unsigned int *)(temp_v0 + (unsigned int)*param_2 * 8 + 0x1390) & 0x3fffffff) >> 0xf);
    puVar2 = puVar5;
    devilGetRecord();
    puVar3 = puVar6;
    devilGetRecord();
    temp_v1 = (unsigned int)*(unsigned char *)((int)puVar2 + 3) - (unsigned int)*(unsigned char *)((int)puVar3 + 3);
    if (temp_v1 == 0) {
      devilGetRecord();
      devilGetRecord();
      temp_v1 = (unsigned int)(unsigned char)puVar5[1] - (unsigned int)(unsigned char)puVar6[1];
      if ((temp_v1 == 0) &&
         (temp_v1 = (unsigned int)*(unsigned char *)((int)puVar6 + 3) - (unsigned int)*(unsigned char *)((int)puVar5 + 3), temp_v1 == 0))
      {
        temp_v1 = (unsigned int)*puVar5 - (unsigned int)*puVar6;
      }
    }
  }
  return temp_v1;
}

} /* extern "C" */
