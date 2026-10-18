/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_dbm_RomPathTool_GetParentDirectoryName` (_code @ 0x431418, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_3_stack;


unsigned int nn_dbm_RomPathTool_GetParentDirectoryName(int *param_1,int *param_2,unsigned short *param_3)

{
/* irregular: 1 goto(s) */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  int temp_v2;
  unsigned short *puVar5;
  unsigned short *puVar6;
  unsigned short *puVar7;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v2 = *param_2;
  puVar5 = (unsigned short *)param_2[1];
  temp_v3 = 1;
  temp_v1 = temp_v2 * 2 - 2;
  puVar7 = puVar5 + (temp_v2 - 1);
  if (temp_v2 == 2) {
    temp_v1 = (unsigned int)*puVar5;
  }
  if ((temp_v2 == 2 && temp_v1 == 0x2e) && (puVar5[1] == 0x2e)) {
    temp_v3 = 2;
  }
  puVar6 = puVar5;
  if (param_3 < puVar5) {
    temp_v2 = 0;
    while (puVar3 = puVar6 + -1, param_3 <= puVar3) {
      if (*puVar3 == 0x2f) {
        if (temp_v2 != 1) {
          if (temp_v2 == 2) {
            temp_v0 = *puVar6;
            temp_v4 = temp_v0 == 0x2e;
            if (temp_v4) {
              temp_v0 = puVar6[1];
            }
            if (temp_v4 && temp_v0 == 0x2e) {
              temp_v3 = temp_v3 + 2;
            }
          }
        }
        else if (*puVar6 == 0x2e) {
          temp_v3 = temp_v3 + 1;
        }
        if (temp_v3 == 0) goto LAB_004314ec;
        do {
          puVar3 = puVar3 + -1;
        } while (*puVar3 == 0x2f);
        temp_v2 = 0;
        temp_v3 = temp_v3 - 1;
        puVar7 = puVar3;
      }
      temp_v2 = temp_v2 + 1;
      puVar6 = puVar3;
    }
    puVar6 = puVar5;
    if (temp_v3 != 0) {
      return 0xe0e046c9;
    }
LAB_004314ec:
    if (puVar3 == param_3) {
      puVar6 = param_3 + 1;
    }
  }
  if (param_3 >= puVar7) {
    *param_1 = 0;
    param_1[1] = (int)param_3;
  }
  else {
    *param_1 = (((int)puVar7 - (int)puVar6) >> 1) + 1;
    param_1[1] = (int)puVar6;
  }
  return 0;
}
