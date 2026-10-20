/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001bd12c` (_code @ 0x1bd12c, 0x1d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001c5da0(int *, unsigned int);
int FUN_001c5fa8(int *, int, unsigned int, unsigned int);
int FUN_001c6988(int *);
int FUN_001c6c24(int *);

/* Supplied declaration required: FUN_001c5da0. */
/* Supplied declaration required: FUN_001c5fa8. */
/* Supplied declaration required: FUN_001c6988. */
/* Supplied declaration required: FUN_001c6c24. */


void FUN_001bd12c(int *param_1,int param_2,int param_3,int param_4,unsigned int param_5)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar6;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v0 = *(unsigned int *)(param_2 + 4);
  *(char *)(param_1 + 3) = (char)temp_v0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  temp_v1 = 0;
  piVar1 = (int *)(param_2 + 8);
  for (temp_v0 = temp_v0 & 0xff; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
    param_1[temp_v1 + 4] = *piVar1 + param_2;
    temp_v1 = temp_v1 + 1;
    piVar1 = piVar1 + 1;
  }
  param_1[0x24] = piVar1[2] + (int)piVar1;
  param_1[0x25] = piVar1[3];
  temp_v2 = piVar1[4];
  param_1[0x27] = piVar1[5];
  FUN_001c5da0(param_1,param_5);
  temp_v1 = param_1[0x27];
  if (temp_v1 != 0) {
    temp_v3 = 0;
    puVar6 = (unsigned int *)(temp_v2 + (int)piVar1);
    do {
      temp_v1 = temp_v1 - 1;
      *(unsigned int *)(param_1[0x26] + temp_v3 * 4) = *puVar6;
      temp_v3 = temp_v3 + 1;
      puVar6 = puVar6 + 2;
    } while (temp_v1 != 0);
  }
  temp_v1 = param_1[0x28];
  FUN_001c6c24(param_1);
  FUN_001c6988(param_1);
  *param_1 = param_3;
  param_1[1] = param_4;
  temp_v0 = 0;
  temp_v2 = 0;
  param_1[2] = *(int *)(param_1[0x31] + param_4 * 4 + 4) + *(int *)(param_1[0x31] + param_3 * 4 + 4)
  ;
  if (-1 < param_4) {
    *(unsigned char *)(param_1 + 0x28) = 3;
  }
  temp_v5 = 0;
  if ((char)param_1[3] != '\0') {
    do {
      if (*(char *)(param_1[temp_v5 + 4] + 6) == '\0') {
        param_1[1] = -1;
        FUN_001c5fa8(param_1,param_1[0x2b] + temp_v2 * 4,temp_v5,0xffffffff);
        temp_v4 = 0;
        temp_v3 = temp_v0 * 4;
        temp_v0 = (temp_v0 + 1) & 0xff;
        temp_v2 = temp_v2 + *(int *)(param_1[0x2c] + temp_v3);
        if ((char)param_1[3] != '\0') {
          do {
            if (*(char *)(param_1[temp_v4 + 4] + 6) != '\0') {
              param_1[1] = temp_v4;
              FUN_001c5fa8(param_1,param_1[0x2b] + temp_v2 * 4,temp_v5,temp_v4);
              temp_v3 = temp_v0 * 4;
              temp_v0 = (temp_v0 + 1) & 0xff;
              temp_v2 = temp_v2 + *(int *)(param_1[0x2c] + temp_v3);
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < *(unsigned char *)(param_1 + 3));
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(unsigned char *)(param_1 + 3));
  }
  param_1[1] = param_4;
  if (param_4 < 0) {
    *(char *)(param_1 + 0x28) = (char)temp_v1;
  }
  return;
}

} /* extern "C" */
