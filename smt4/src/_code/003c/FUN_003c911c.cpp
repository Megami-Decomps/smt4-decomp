/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c911c` (_code @ 0x3c911c, 0x198 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable5Sub3Lookup(unsigned int *, int);
int devilGetRecord(void);
int FUN_003c9948(unsigned int, unsigned int, int);
int demonFindClosestEligibleLevel(unsigned int, int, int, int);

/* Supplied declaration required: dataTable5Sub3Lookup. */
/* Supplied declaration required: devilGetRecord. */
/* Supplied declaration required: FUN_003c9948. */
/* Supplied declaration required: demonFindClosestEligibleLevel. */


unsigned int FUN_003c911c(unsigned int param_1,unsigned short *param_2,unsigned short *param_3,unsigned int *param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  char temp_v2;
  unsigned char temp_v3;
  unsigned short *puVar5;
  unsigned short *puVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  int temp_v4;
  unsigned int temp_v5;
  unsigned short temp_v6;
  unsigned int temp_v7;
  
  temp_v7 = 0;
  puVar5 = param_2;
  devilGetRecord();
  puVar6 = param_3;
  devilGetRecord();
  puVar7 = (unsigned int *)(unsigned int)(unsigned char)puVar5[1];
  dataTable5Sub3Lookup(puVar7,*puVar6);
  puVar8 = (unsigned int *)(unsigned int)(unsigned char)puVar6[1];
  dataTable5Sub3Lookup(puVar8,*puVar5);
  if ((unsigned int)*puVar5 == (unsigned int)*puVar6) {
    return 0;
  }
  if ((puVar7 == (unsigned int *)0x0) && (puVar7 = puVar8, puVar8 == (unsigned int *)0x0)) {
    return 0;
  }
  if (*puVar7 >> 0x18 == 1) {
    if ((unsigned int)*puVar5 == (*puVar7 & 0xffffff) >> 8) {
      temp_v0 = *(unsigned char *)((int)puVar6 + 3);
      temp_v1 = (unsigned char)puVar6[1];
    }
    else {
      temp_v0 = *(unsigned char *)((int)puVar5 + 3);
      temp_v1 = (unsigned char)puVar5[1];
    }
    temp_v5 = (unsigned int)temp_v1;
    temp_v6 = (temp_v0 + 1) & 0xff;
    temp_v4 = *(int *)(param_1 + temp_v5 * 4 + 0x38);
    if (*(unsigned short *)(temp_v4 + 2) < temp_v6) {
      temp_v6 = *(unsigned short *)(temp_v4 + ((unsigned int)*(unsigned char *)(param_1 + temp_v5) * 4 - 2)) & 0xff;
    }
    temp_v7 = param_1;
    FUN_003c9948(param_1,temp_v5,temp_v6);
    temp_v5 = temp_v7;
    if (*puVar5 != temp_v7) {
      temp_v5 = (unsigned int)*puVar6;
    }
    if ((*puVar5 == temp_v7 || temp_v5 == temp_v7) || temp_v7 == 0) {
      return 0;
    }
  }
  if (*puVar7 >> 0x18 == 3) {
    if ((unsigned int)*puVar5 == (*puVar7 & 0xffffff) >> 8) {
      temp_v2 = *(char *)((int)puVar6 + 3);
      temp_v3 = (unsigned char)puVar6[1];
    }
    else {
      temp_v2 = *(char *)((int)puVar5 + 3);
      temp_v3 = (unsigned char)puVar5[1];
    }
    demonFindClosestEligibleLevel(param_1,temp_v3,temp_v2 - '\x01',0);
    temp_v5 = param_1;
    if (*puVar5 != param_1) {
      temp_v5 = (unsigned int)*puVar6;
    }
    temp_v7 = param_1;
    if ((*puVar5 == param_1 || temp_v5 == param_1) || param_1 == 0) {
      return 0;
    }
  }
  *param_4 = (((*param_4 & 0xffff8000) | ((unsigned int)param_2 & 0xffff7fff)) & 0xc0007fff) |
             (((unsigned int)param_3 & 0x7fff) << 0xf);
  param_4[1] = (param_4[1] & 0xfffe0003) | ((temp_v7 & 0x3fff7fff) << 2);
  return 1;
}

} /* extern "C" */
