/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004db2b8` (_code @ 0x4db2b8, 0x194 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_0039c6d8(unsigned int *, int);
int FUN_004dc154(unsigned int, unsigned int, int);
int FUN_004dc214(unsigned int, int, int, int);

/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_0039c6d8. */
/* Supplied declaration required: FUN_004dc154. */
/* Supplied declaration required: FUN_004dc214. */


unsigned int FUN_004db2b8(unsigned int param_1,unsigned short *param_2,unsigned short *param_3,unsigned int *param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned short temp_v2;
  unsigned short *puVar4;
  unsigned short *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v5 = 0;
  puVar4 = param_2;
  FUN_00184310();
  puVar5 = param_3;
  FUN_00184310();
  puVar6 = (unsigned int *)(unsigned int)(unsigned char)puVar4[1];
  FUN_0039c6d8(puVar6,*puVar5);
  puVar7 = (unsigned int *)(unsigned int)(unsigned char)puVar5[1];
  FUN_0039c6d8(puVar7,*puVar4);
  if ((unsigned int)*puVar4 == (unsigned int)*puVar5) {
    return 0;
  }
  if ((puVar6 == (unsigned int *)0x0) && (puVar6 = puVar7, puVar7 == (unsigned int *)0x0)) {
    return 0;
  }
  if (*puVar6 >> 0x18 == 1) {
    if ((unsigned int)*puVar4 == (*puVar6 & 0xffffff) >> 8) {
      temp_v2 = puVar5[3];
      temp_v0 = (unsigned char)puVar5[1];
    }
    else {
      temp_v2 = puVar4[3];
      temp_v0 = (unsigned char)puVar4[1];
    }
    temp_v4 = (unsigned int)temp_v0;
    temp_v2 = temp_v2 + 1;
    temp_v3 = *(int *)(param_1 + temp_v4 * 4 + 0x44);
    if (*(unsigned short *)(temp_v3 + 2) < temp_v2) {
      temp_v2 = *(unsigned short *)(temp_v3 + ((unsigned int)*(unsigned char *)(param_1 + temp_v4) * 4 - 2));
    }
    temp_v5 = param_1;
    FUN_004dc154(param_1,temp_v4,temp_v2);
    temp_v4 = temp_v5;
    if (*puVar4 != temp_v5) {
      temp_v4 = (unsigned int)*puVar5;
    }
    if ((*puVar4 == temp_v5 || temp_v4 == temp_v5) || temp_v5 == 0) {
      return 0;
    }
  }
  if (*puVar6 >> 0x18 == 3) {
    if ((unsigned int)*puVar4 == (*puVar6 & 0xffffff) >> 8) {
      temp_v2 = puVar5[3];
      temp_v1 = (unsigned char)puVar5[1];
    }
    else {
      temp_v2 = puVar4[3];
      temp_v1 = (unsigned char)puVar4[1];
    }
    FUN_004dc214(param_1,temp_v1,temp_v2 - 1,0);
    temp_v4 = param_1;
    if (*puVar4 != param_1) {
      temp_v4 = (unsigned int)*puVar5;
    }
    temp_v5 = param_1;
    if ((*puVar4 == param_1 || temp_v4 == param_1) || param_1 == 0) {
      return 0;
    }
  }
  *param_4 = (((*param_4 & 0xffff8000) | ((unsigned int)param_2 & 0xffff7fff)) & 0xc0007fff) |
             (((unsigned int)param_3 & 0x7fff) << 0xf);
  param_4[1] = (param_4[1] & 0xfffe0003) | ((temp_v5 & 0x3fff7fff) << 2);
  return 1;
}

} /* extern "C" */
