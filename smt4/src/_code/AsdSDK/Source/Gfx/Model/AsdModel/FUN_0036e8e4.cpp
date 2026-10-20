/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036e8e4` (_code @ 0x36e8e4, 0x1e4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a666c(int, unsigned int, unsigned int);
int FUN_002c2424(...);
int nnnstdMemCpy(unsigned int, int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern romwright_code *DAT_0044e330; /* 0x44e330 */
extern unsigned int DAT_00471c40; /* 0x471c40 */

/* Supplied declaration required: FUN_002a666c. */
/* Supplied declaration required: FUN_002c2424. */
/* Supplied declaration required: nnnstdMemCpy. */


void FUN_0036e8e4(int *param_1,int *param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  piVar2 = param_1;
  if (param_2 == (int *)0x0) {
    piVar2 = (int *)&DAT_00471c40;
  }
  temp_v5 = 0;
  if (param_2 == (int *)0x0) {
    param_2 = (int *)*piVar2;
  }
  *(int **)(*param_1 + 0x14) = param_2;
  puVar3 = (unsigned int *)*param_1 + 3;
  temp_v7 = *(unsigned int *)*param_1;
  temp_v2 = *puVar3;
  if (temp_v2 != 0) {
    temp_v6 = temp_v2 + (int)puVar3;
  }
  else {
    temp_v6 = 0;
  }
  if (temp_v7 != 0) {
    do {
      temp_v3 = *(int *)(*param_1 + 4);
      if (temp_v3 != 0) {
        temp_v3 = *param_1 + 4 + temp_v3;
      }
      else {
        temp_v3 = 0;
      }
      piVar2 = (int *)(temp_v3 + temp_v5 * 4);
      temp_v3 = *piVar2;
      if (temp_v3 != 0) {
        temp_v3 = temp_v3 + (int)piVar2;
      }
      else {
        temp_v3 = 0;
      }
      *(int *)(temp_v6 + temp_v5 * 4) = temp_v3;
      temp_v1 = (**(romwright_code **)(*param_2 + 8))(param_2,0x70,4);
      *(unsigned int *)(temp_v3 + 0x18) = temp_v1;
      *(unsigned int *)(temp_v3 + 0x1c) = 0x70;
      if (*(int *)(temp_v3 + 0x20) != 0) {
        *(unsigned int *)(temp_v3 + 0x24) = 0;
      }
      else {
        temp_v2 = *(unsigned int *)(temp_v3 + 0x14);
        if (temp_v2 == 0) {
          temp_v2 = 0x2010000;
        }
        temp_v8 = *(unsigned int *)(temp_v3 + 8);
        temp_v1 = *(unsigned int *)(temp_v6 + temp_v5 * 4);
        temp_v0 = temp_v2 & 0xffff0000;
        if (temp_v0 != 0x2010000) {
          if ((int)temp_v0 < 0x2010000) {
            if (temp_v0 == 0x1010000) {
              temp_v1 = (*DAT_0044e330)(0x10000,0x102,temp_v1,temp_v8);
              if (*(int *)(temp_v3 + 0xc) != 0) {
                temp_v4 = *(int *)(temp_v3 + 0xc) + temp_v3 + 0xc;
              }
              else {
                temp_v4 = 0;
              }
              nnnstdMemCpy(temp_v1,temp_v4,temp_v8);
              FUN_002c2424(temp_v1,temp_v8);
              *(unsigned int *)(temp_v3 + 0x20) = temp_v1;
              temp_v2 = 0x10000;
              *(unsigned int *)(temp_v3 + 0x24) = temp_v2;
            }
          }
          else if (temp_v0 == 0x2020000 || temp_v0 == 0x2030000) {
            temp_v2 = temp_v2 & 0x30000;
            temp_v1 = (*DAT_0044e330)(temp_v2,0x102,temp_v1,temp_v8);
            if (*(int *)(temp_v3 + 0xc) != 0) {
              temp_v4 = temp_v3 + 0xc + *(int *)(temp_v3 + 0xc);
            }
            else {
              temp_v4 = 0;
            }
            FUN_002a666c(temp_v4,temp_v1,temp_v8);
            *(unsigned int *)(temp_v3 + 0x20) = temp_v1;
            *(unsigned int *)(temp_v3 + 0x24) = temp_v2;
          }
        }
        else {
          if (*(int *)(temp_v3 + 0xc) != 0) {
            temp_v3 = temp_v3 + 0xc + *(int *)(temp_v3 + 0xc);
          }
          else {
            temp_v3 = 0;
          }
          FUN_002c2424(temp_v3,temp_v8,temp_v1);
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v7);
  }
  return;
}

} /* extern "C" */
