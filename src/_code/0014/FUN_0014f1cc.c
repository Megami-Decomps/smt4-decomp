/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014f1cc` (_code @ 0x14f1cc, 0x140 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;


void FUN_0014f1cc(unsigned int *param_1,unsigned char *param_2)

{
  unsigned char temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar9;
  
  temp_v3 = ((*param_1 & 0xffffff) | ((unsigned int)*(unsigned char *)((int)param_1 + 3) << 0x18)) >> 8;
  puVar9 = param_1 + 1;
  if (temp_v3 == 0) {
    temp_v3 = (param_1[1] & 0xffffff) | ((unsigned int)*(unsigned char *)((int)param_1 + 7) << 0x18);
    puVar9 = param_1 + 2;
    if (temp_v3 == 0) {
      return;
    }
  }
  do {
    temp_v1 = (unsigned char)*puVar9 & 0x7f;
    if (((unsigned char)*puVar9 & 0x80) != 0) {
      temp_v1 = temp_v1 + 3;
      puVar2 = (unsigned int *)((int)puVar9 + 2);
      temp_v0 = *(unsigned char *)((int)puVar9 + 1);
      if (temp_v3 < temp_v1) {
        temp_v1 = temp_v3;
      }
      temp_v3 = temp_v3 - temp_v1;
      temp_v1 = temp_v1 - 1;
      pbVar4 = param_2 + 1;
      *param_2 = temp_v0;
      pbVar5 = pbVar4;
      if (temp_v1 >= 0x80000000) {
        do {
          temp_v1 = temp_v1 - 1;
          pbVar4 = pbVar5 + 1;
          *pbVar5 = temp_v0;
          pbVar5 = pbVar4;
        } while (temp_v1 != 0);
      }
      else if (0 < (int)temp_v1) {
        if ((temp_v1 & 1) != 0) {
          *pbVar4 = temp_v0;
          param_2 = pbVar4;
        }
        for (temp_v2 = (int)temp_v1 >> 1; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
          param_2[1] = temp_v0;
          param_2 = param_2 + 2;
          *param_2 = temp_v0;
        }
        pbVar4 = pbVar4 + temp_v1;
      }
    }
    else {
      temp_v1 = temp_v1 + 1;
      puVar2 = (unsigned int *)((int)puVar9 + 2);
      if (temp_v3 < temp_v1) {
        temp_v1 = temp_v3;
      }
      temp_v3 = temp_v3 - temp_v1;
      temp_v1 = temp_v1 - 1;
      pbVar4 = param_2 + 1;
      *param_2 = *(unsigned char *)((int)puVar9 + 1);
      puVar3 = puVar2;
      pbVar5 = pbVar4;
      if (temp_v1 >= 0x80000000) {
        do {
          puVar2 = (unsigned int *)((int)puVar3 + 1);
          temp_v1 = temp_v1 - 1;
          pbVar4 = pbVar5 + 1;
          *pbVar5 = (unsigned char)*puVar3;
          puVar3 = puVar2;
          pbVar5 = pbVar4;
        } while (temp_v1 != 0);
      }
      else if (0 < (int)temp_v1) {
        puVar9 = (unsigned int *)((int)puVar9 + 1);
        if ((temp_v1 & 1) != 0) {
          *pbVar4 = *(unsigned char *)puVar2;
          param_2 = pbVar4;
          puVar9 = puVar2;
        }
        for (temp_v2 = (int)temp_v1 >> 1; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
          param_2[1] = *(unsigned char *)((int)puVar9 + 1);
          puVar9 = (unsigned int *)((int)puVar9 + 2);
          param_2 = param_2 + 2;
          *param_2 = *(unsigned char *)puVar9;
        }
        puVar2 = (unsigned int *)((int)puVar2 + temp_v1);
        pbVar4 = pbVar4 + temp_v1;
      }
    }
    puVar9 = puVar2;
    param_2 = pbVar4;
  } while (temp_v3 != 0);
  return;
}
