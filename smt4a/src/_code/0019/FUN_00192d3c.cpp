/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00192d3c` (_code @ 0x192d3c, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e59f8(char *, char *, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_002e59f8. */


void FUN_00192d3c(unsigned int param_1,char *param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  unsigned char *pbVar2;
  int temp_v1;
  unsigned char *pbVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char *pbVar7;
  unsigned int temp_v4;
  unsigned char temp_v5;
  unsigned int temp_v6;
  unsigned char *pbVar11;
  unsigned char temp_v7;
  
  temp_v0 = *param_2;
  temp_v7 = temp_v0 == 'A';
  if (temp_v7) {
    temp_v0 = param_2[1];
  }
  if (temp_v7 && temp_v0 == 'C') {
    temp_v0 = param_2[2];
    temp_v7 = temp_v0 == 'M';
    if (temp_v7) {
      temp_v0 = param_2[3];
    }
    if ((((temp_v7 && temp_v0 == 'P') && (*(int *)(param_2 + 8) == 0x20)) &&
        (temp_v6 = *(unsigned int *)(param_2 + 4), temp_v6 != 0)) &&
       ((*(int *)(param_2 + 0x10) != 0 && (*(int *)(param_2 + 0x14) == 0x1234567)))) {
      temp_v1 = *(int *)(param_2 + 0x18);
      temp_v7 = temp_v1 == 0x1234567;
      if (temp_v7) {
        temp_v1 = *(int *)(param_2 + 0x1c);
      }
      if (temp_v7 && temp_v1 == 0x1234567) {
        FUN_002e59f8(param_2 + 0x20,param_2,temp_v6);
        temp_v3 = *(unsigned int *)(param_2 + (temp_v6 - 8));
        if ((temp_v3 & 0xffffff) <= temp_v6) {
          temp_v4 = (unsigned int)(unsigned char)param_2[temp_v6 - 4] | (*(int *)(param_2 + (temp_v6 - 3)) << 8);
          if (temp_v6 + temp_v4 <= param_3) {
            pbVar7 = (unsigned char *)(param_2 + (temp_v6 - (unsigned char)param_2[temp_v6 - 5]));
            pbVar11 = (unsigned char *)(param_2 + temp_v4 + temp_v6);
            while (param_2 + (temp_v6 - (temp_v3 & 0xffffff)) < (char *)pbVar7) {
              pbVar7 = pbVar7 + -1;
              temp_v5 = *pbVar7;
              temp_v1 = 0;
              do {
                if ((temp_v5 & 0x80) != 0) {
                  pbVar4 = pbVar7 + -1;
                  pbVar7 = pbVar7 + -2;
                  temp_v4 = (*pbVar4 >> 4) + 3;
                  pbVar4 = pbVar11 + ((unsigned int)*pbVar7 | ((*pbVar4 & 0xf) << 8)) + 3;
                  if (temp_v4 != 0) {
                    pbVar2 = pbVar11;
                    if ((temp_v4 & 1) != 0) {
                      pbVar4 = pbVar4 + -1;
                      pbVar2 = pbVar11 + -1;
                      pbVar11[-1] = *pbVar4;
                    }
                    for (temp_v2 = temp_v4 >> 1; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
                      pbVar2[-1] = pbVar4[-1];
                      pbVar4 = pbVar4 + -2;
                      pbVar2 = pbVar2 + -2;
                      *pbVar2 = *pbVar4;
                    }
                    pbVar11 = pbVar11 + -temp_v4;
                  }
                }
                else {
                  pbVar7 = pbVar7 + -1;
                  pbVar11 = pbVar11 + -1;
                  *pbVar11 = *pbVar7;
                }
                temp_v5 = temp_v5 << 1;
              } while ((param_2 + (temp_v6 - (temp_v3 & 0xffffff)) < (char *)pbVar7) &&
                      (temp_v1 = temp_v1 + 1, temp_v1 < 8));
            }
          }
        }
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
