/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00451898` (_code @ 0x451898, 0x1cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern romwright_code *DAT_0058918c; /* 0x58918c */

/* Supplied declaration required: FUN_0017cf74. */
/* Supplied declaration required: FUN_001c4598. */
/* Supplied declaration required: nnnstdMemCpy. */


void FUN_00451898(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int *piVar7;
  unsigned int temp_v5;
  unsigned int *puVar9;
  unsigned int temp_v6;
  unsigned char temp_v7;
  
  if ((param_1 == (unsigned int *)0x0) || (puVar9 = param_1, (~*param_1 & 0x20000009) != 0)) {
    puVar9 = (unsigned int *)0x0;
  }
  if (puVar9[0xb] == 0) {
    puVar9[0xb] = (unsigned int)param_1;
    temp_v6 = puVar9[0xc];
    temp_v4 = 0;
    do {
      temp_v2 = puVar9[(temp_v4 & 0xff) + 0xe];
      if (temp_v2 != 0) {
        piVar7 = (int *)(temp_v2 + (int)(puVar9 + (temp_v4 & 0xff) + 0xe));
      }
      else {
        piVar7 = (int *)0x0;
      }
      if (piVar7[6] != 0) {
        piVar7[7] = 0;
      }
      else {
        temp_v2 = temp_v6;
        if (temp_v6 == 0) {
          temp_v2 = 0x2010000;
        }
        temp_v5 = piVar7[2];
        temp_v0 = temp_v2 & 0xffff0000;
        if (temp_v5 == 0) {
          temp_v5 = (unsigned int)(piVar7[1] * *piVar7 * piVar7[5]) >> 3;
        }
        if (temp_v0 != 0x2010000) {
          if ((int)temp_v0 < 0x2010000) {
            if (temp_v0 == 0x1010000) {
              temp_v1 = (*DAT_0058918c)(0x10000,0x101,param_1,temp_v5);
              if ((piVar7[3] != 0) && (temp_v3 = (int)piVar7 + piVar7[3] + 0xc, temp_v3 != 0)) {
                nnnstdMemCpy(temp_v1,temp_v3,temp_v5);
                FUN_001c4598(temp_v1,temp_v5);
              }
              piVar7[6] = temp_v1;
              temp_v2 = 0x10000;
              piVar7[7] = temp_v2;
            }
          }
          else if (temp_v0 == 0x2020000 || temp_v0 == 0x2030000) {
            temp_v2 = temp_v2 & 0x30000;
            temp_v1 = (*DAT_0058918c)(temp_v2,0x101,param_1,temp_v5);
            piVar2 = piVar7 + 3;
            temp_v7 = piVar7[3] == 0;
            if (!temp_v7) {
              piVar2 = (int *)((int)piVar2 + piVar7[3]);
              temp_v7 = piVar2 == (int *)0x0;
            }
            if (!temp_v7) {
              FUN_0017cf74(piVar2,temp_v1,temp_v5);
            }
            piVar7[6] = temp_v1;
            piVar7[7] = temp_v2;
          }
        }
        else {
          temp_v1 = piVar7[3];
          if (temp_v1 != 0) {
            temp_v1 = temp_v1 + (int)(piVar7 + 3);
          }
          else {
            temp_v1 = 0;
          }
          FUN_001c4598(temp_v1,temp_v5);
        }
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < 6);
  }
  return;
}
