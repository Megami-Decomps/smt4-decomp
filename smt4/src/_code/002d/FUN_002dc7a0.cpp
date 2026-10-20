/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dc7a0` (_code @ 0x2dc7a0, 0x100 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int devilGetRecord(void);

extern int g_unite; /* 0x43dd68 */

/* Supplied declaration required: devilGetRecord. */


int FUN_002dc7a0(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned short *puVar2;
  unsigned short *puVar3;
  int temp_v1;
  
  temp_v0 = g_unite;
  puVar2 = (unsigned short *)(*(unsigned int *)(g_unite + (unsigned int)*param_1 * 8 + 0x1390) & 0x7fff);
  puVar3 = (unsigned short *)(*(unsigned int *)(g_unite + (unsigned int)*param_2 * 8 + 0x1390) & 0x7fff);
  devilGetRecord();
  devilGetRecord();
  temp_v1 = (unsigned int)(unsigned char)puVar3[1] - (unsigned int)(unsigned char)puVar2[1];
  if ((temp_v1 == 0) &&
     (temp_v1 = (unsigned int)*(unsigned char *)((int)puVar2 + 3) - (unsigned int)*(unsigned char *)((int)puVar3 + 3), temp_v1 == 0)) {
    temp_v1 = (unsigned int)*puVar3 - (unsigned int)*puVar2;
  }
  if (temp_v1 == 0) {
    puVar2 = (unsigned short *)((*(unsigned int *)(temp_v0 + (unsigned int)*param_1 * 8 + 0x1390) & 0x3fffffff) >> 0xf);
    puVar3 = (unsigned short *)((*(unsigned int *)(temp_v0 + (unsigned int)*param_2 * 8 + 0x1390) & 0x3fffffff) >> 0xf);
    devilGetRecord();
    devilGetRecord();
    temp_v1 = (unsigned int)(unsigned char)puVar3[1] - (unsigned int)(unsigned char)puVar2[1];
    if ((temp_v1 == 0) &&
       (temp_v1 = (unsigned int)*(unsigned char *)((int)puVar2 + 3) - (unsigned int)*(unsigned char *)((int)puVar3 + 3), temp_v1 == 0)) {
      temp_v1 = (unsigned int)*puVar3 - (unsigned int)*puVar2;
    }
  }
  return temp_v1;
}

} /* extern "C" */
