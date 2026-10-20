/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00198360` (_code @ 0x198360, 0x35c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ab158(int);
int FUN_001ab37c(int);

/* Supplied declaration required: FUN_001ab158. */
/* Supplied declaration required: FUN_001ab37c. */


void FUN_00198360(int param_1,int param_2,int *param_3,int *param_4)

{
/* irregular: irregular input(s): in_s1; 3 native warning(s); review required */
  float *pfVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int in_s1;
  unsigned long long temp_v4;
  float temp_v5;
  unsigned long long temp_v6;
  
  temp_v4 = (unsigned long long)in_s1;
  temp_v6 = 0;
  if (*(short *)(**(int **)(param_1 + 0xc) + 6) != 4) {
    temp_v1 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      do {
        temp_v3 = (unsigned int)*(unsigned short *)(*param_4 + temp_v1 * 2);
        if (temp_v3 != 0xffff) {
          temp_v2 = *(int *)(*(int *)(param_1 + 0xc) + temp_v1 * 4);
          temp_v0 = *(int *)(param_2 + 0xc) + temp_v3 * 0x40;
          temp_v5 = (float)temp_v6;
          if (((*(unsigned int *)(temp_v2 + 8) & 0x20) == 0) && (*(float *)(*param_3 + temp_v3 * 0xc) == temp_v5))
          {
            *(float *)(temp_v0 + 4) = temp_v5;
            *(float *)(temp_v0 + 8) = temp_v5;
            *(float *)(temp_v0 + 0xc) = temp_v5;
          }
          if (((*(unsigned int *)(temp_v2 + 8) & 0x10) == 0) &&
             (*(float *)(*param_3 + (temp_v3 * 3 + 1) * 4) == temp_v5)) {
            *(float *)(temp_v0 + 0x10) = temp_v5;
            *(float *)(temp_v0 + 0x14) = temp_v5;
            *(float *)(temp_v0 + 0x18) = temp_v5;
            *(float *)(temp_v0 + 0x20) = temp_v5;
            *(float *)(temp_v0 + 0x24) = temp_v5;
            *(float *)(temp_v0 + 0x28) = temp_v5;
            *(float *)(temp_v0 + 0x30) = temp_v5;
            *(float *)(temp_v0 + 0x34) = temp_v5;
            *(float *)(temp_v0 + 0x38) = temp_v5;
          }
          if (((*(unsigned int *)(temp_v2 + 8) & 8) == 0) &&
             (*(float *)(*param_3 + (temp_v3 * 3 + 2) * 4) == temp_v5)) {
            *(float *)(temp_v0 + 0x1c) = temp_v5;
            *(float *)(temp_v0 + 0x2c) = temp_v5;
            *(float *)(temp_v0 + 0x3c) = temp_v5;
          }
          FUN_001ab37c(temp_v2);
          temp_v5 = (float)temp_v4;
          if ((*(unsigned int *)(temp_v2 + 8) & 0x20) == 0) {
            pfVar1 = (float *)(*param_3 + temp_v3 * 0xc);
            *pfVar1 = *pfVar1 + temp_v5;
          }
          if ((*(unsigned int *)(temp_v2 + 8) & 0x10) == 0) {
            pfVar1 = (float *)(*param_3 + (temp_v3 * 3 + 1) * 4);
            *pfVar1 = *pfVar1 + temp_v5;
          }
          if ((*(unsigned int *)(temp_v2 + 8) & 8) == 0) {
            pfVar1 = (float *)(*param_3 + (temp_v3 * 3 + 2) * 4);
            *pfVar1 = *pfVar1 + temp_v5;
          }
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < *(unsigned int *)(param_1 + 0x10));
      return;
    }
  }
  else {
    temp_v1 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      do {
        temp_v3 = (unsigned int)*(unsigned short *)(*param_4 + temp_v1 * 2);
        if (temp_v3 != 0xffff) {
          temp_v2 = *(int *)(*(int *)(param_1 + 0xc) + temp_v1 * 4);
          temp_v0 = *(int *)(param_2 + 0xc) + temp_v3 * 0x40;
          temp_v5 = (float)temp_v6;
          if (((*(unsigned int *)(temp_v2 + 8) & 0x70000) == 0) &&
             (*(float *)(*param_3 + temp_v3 * 0xc) == temp_v5)) {
            *(float *)(temp_v0 + 4) = temp_v5;
            *(float *)(temp_v0 + 8) = temp_v5;
            *(float *)(temp_v0 + 0xc) = temp_v5;
          }
          if (((*(unsigned int *)(temp_v2 + 8) & 0x380000) == 0) &&
             (*(float *)(*param_3 + (temp_v3 * 3 + 1) * 4) == temp_v5)) {
            *(float *)(temp_v0 + 0x10) = temp_v5;
            *(float *)(temp_v0 + 0x14) = temp_v5;
            *(float *)(temp_v0 + 0x18) = temp_v5;
            *(float *)(temp_v0 + 0x20) = temp_v5;
            *(float *)(temp_v0 + 0x24) = temp_v5;
            *(float *)(temp_v0 + 0x28) = temp_v5;
            *(float *)(temp_v0 + 0x30) = temp_v5;
            *(float *)(temp_v0 + 0x34) = temp_v5;
            *(float *)(temp_v0 + 0x38) = temp_v5;
          }
          if (((*(unsigned int *)(temp_v2 + 8) & 0x1c00000) == 0) &&
             (*(float *)(*param_3 + (temp_v3 * 3 + 2) * 4) == temp_v5)) {
            *(float *)(temp_v0 + 0x1c) = temp_v5;
            *(float *)(temp_v0 + 0x2c) = temp_v5;
            *(float *)(temp_v0 + 0x3c) = temp_v5;
          }
          FUN_001ab158(temp_v2);
          temp_v5 = (float)temp_v4;
          if ((*(unsigned int *)(temp_v2 + 8) & 0x70000) == 0) {
            pfVar1 = (float *)(*param_3 + temp_v3 * 0xc);
            *pfVar1 = *pfVar1 + temp_v5;
          }
          if ((*(unsigned int *)(temp_v2 + 8) & 0x380000) == 0) {
            pfVar1 = (float *)(*param_3 + (temp_v3 * 3 + 1) * 4);
            *pfVar1 = *pfVar1 + temp_v5;
          }
          if ((*(unsigned int *)(temp_v2 + 8) & 0x1c00000) == 0) {
            pfVar1 = (float *)(*param_3 + (temp_v3 * 3 + 2) * 4);
            *pfVar1 = *pfVar1 + temp_v5;
          }
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < *(unsigned int *)(param_1 + 0x10));
    }
  }
  return;
}

} /* extern "C" */
