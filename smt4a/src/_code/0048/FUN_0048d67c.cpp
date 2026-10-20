/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048d67c` (_code @ 0x48d67c, 0x300 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorFloatToUnsigned(...);
int VectorSignedToFloat(...);

extern signed char DAT_005f1c60; /* 0x5f1c60 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
extern int FUN_00162e8c(void);
extern float *sub68OwnerGetBlock60(int);


void FUN_0048d67c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  float *pfVar3;
  int temp_v2;
  int temp_v3;
  int *piVar6;
  int *piVar7;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  int temp_v7;
  int temp_v8;
  float temp_v9;
  float temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  float temp_v13;
  
  temp_v1 = FUN_00162e8c();
  pfVar3 = (float *)sub68OwnerGetBlock60(param_1 + 0x4cc);
  piVar7 = (int *)(param_1 + 0x204f8);
  piVar6 = (int *)(param_1 + 0x204fc);
  if (*(char *)(temp_v1 + 0xd8e) != '\f') {
    temp_v1 = 0;
    temp_v6 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x1484) / 2,(unsigned char)(in_fpscr >> 0x16) & 3)
    ;
    temp_v9 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x1488) / 2,(unsigned char)(in_fpscr >> 0x16) & 3)
    ;
    temp_v7 = (int)(temp_v6 - *pfVar3);
    temp_v6 = temp_v9 - pfVar3[1];
    if (0 < *piVar7) {
      temp_v9 = 0.5f;
    }
    temp_v8 = (int)temp_v6;
    if (0 < *piVar7) {
      do {
        temp_v2 = param_1 + temp_v1 * 0x30;
        temp_v4 = *(char *)(temp_v2 + 0x84f8) == '\0';
        temp_v0 = '\0';
        if (!temp_v4) {
          temp_v0 = *(char *)(temp_v2 + 0x84f9);
        }
        temp_v5 = temp_v4 || temp_v0 == '\0';
        if (temp_v4 || temp_v0 == '\0') {
          temp_v5 = DAT_005f1c60 == '\0';
        }
        if (!temp_v5) {
          if (*(int *)(temp_v2 + 0x8500) != -1) {
            temp_v6 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v13 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v10 = (float)VectorSignedToFloat(*piVar6 / 2,(unsigned char)(in_fpscr >> 0x16) & 3);
            *(int *)(temp_v2 + 0x8514) =
                 (int)((*(float *)(temp_v2 + 0x850c) - (temp_v6 - 160.0f)) - temp_v10);
            temp_v6 = (float)VectorSignedToFloat(*piVar6 / 2,(unsigned char)(in_fpscr >> 0x16) & 3);
            *(int *)(temp_v2 + 0x8518) =
                 (int)((*(float *)(temp_v2 + 0x8510) - (temp_v13 - 120.0f)) - temp_v6);
            *(int *)(temp_v2 + 0x851c) = *piVar6 + 0xc;
            *(int *)(temp_v2 + 0x8520) = *piVar6 + 0xc;
          }
          else {
            temp_v6 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v10 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v11 = VectorFloatToUnsigned(*(float *)(temp_v2 + 0x850c) * temp_v9,3);
            temp_v12 = VectorFloatToUnsigned(*(float *)(temp_v2 + 0x8510) * temp_v9,3);
            *(int *)(temp_v2 + 0x8514) = (int)(*(float *)(temp_v2 + 0x8504) * temp_v9 - (temp_v6 - 160.0f))
            ;
            *(int *)(temp_v2 + 0x8518) = (int)(*(float *)(temp_v2 + 0x8508) * temp_v9 - (temp_v10 - 120.0f))
            ;
            *(unsigned int *)(temp_v2 + 0x851c) = temp_v11;
            *(unsigned int *)(temp_v2 + 0x8520) = temp_v12;
          }
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < *piVar7);
    }
  }
  else {
    temp_v9 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x1484),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x1488),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = 0;
    temp_v1 = 0xc;
    if (0 < *piVar7) {
      temp_v1 = 0x18;
    }
    temp_v8 = (int)(temp_v9 - *pfVar3);
    temp_v2 = (int)(temp_v6 - pfVar3[1]);
    if (0 < *piVar7) {
      do {
        temp_v3 = param_1 + temp_v7 * 0x30;
        temp_v4 = *(char *)(temp_v3 + 0x84f8) == '\0';
        temp_v0 = '\0';
        if (!temp_v4) {
          temp_v0 = *(char *)(temp_v3 + 0x84f9);
        }
        temp_v5 = temp_v4 || temp_v0 == '\0';
        if (temp_v4 || temp_v0 == '\0') {
          temp_v5 = DAT_005f1c60 == '\0';
        }
        if (!temp_v5) {
          if (*(int *)(temp_v3 + 0x8500) != -1) {
            temp_v9 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v10 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v6 = (float)VectorSignedToFloat(*piVar6,(unsigned char)(in_fpscr >> 0x16) & 3);
            *(int *)(temp_v3 + 0x8514) =
                 (int)((*(float *)(temp_v3 + 0x8504) - (temp_v9 - 160.0f)) - temp_v6);
            temp_v6 = (float)VectorSignedToFloat(*piVar6,(unsigned char)(in_fpscr >> 0x16) & 3);
            *(int *)(temp_v3 + 0x8518) =
                 (int)((*(float *)(temp_v3 + 0x8508) - (temp_v10 - 120.0f)) - temp_v6);
            *(int *)(temp_v3 + 0x851c) = temp_v1 + *piVar6 * 2;
            *(int *)(temp_v3 + 0x8520) = temp_v1 + *piVar6 * 2;
          }
          else {
            temp_v6 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v9 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v12 = VectorFloatToUnsigned(*(unsigned int *)(temp_v3 + 0x850c),3);
            temp_v11 = VectorFloatToUnsigned(*(unsigned int *)(temp_v3 + 0x8510),3);
            *(unsigned int *)(temp_v3 + 0x851c) = temp_v12;
            *(unsigned int *)(temp_v3 + 0x8520) = temp_v11;
            *(int *)(temp_v3 + 0x8514) = (int)(*(float *)(temp_v3 + 0x8504) - (temp_v6 - 160.0f));
            *(int *)(temp_v3 + 0x8518) = (int)(*(float *)(temp_v3 + 0x8508) - (temp_v9 - 120.0f));
          }
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < *piVar7);
    }
  }
  *(unsigned char *)(param_1 + 0x7b93) = 0;
  return;
}

} /* extern "C" */
