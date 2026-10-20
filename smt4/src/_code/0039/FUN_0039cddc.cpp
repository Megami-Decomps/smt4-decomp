/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039cddc` (_code @ 0x39cddc, 0x2e4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorFloatToUnsigned(...);
int VectorSignedToFloat(...);

extern unsigned char DAT_0049fc1c; /* 0x49fc1c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
extern int FUN_002c2950(void);
extern float *NaviMain_GetCursorPos(int);


void FUN_0039cddc(int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_r12; 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  float *pfVar3;
  int temp_v2;
  int in_r12;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  int temp_v5;
  float temp_v6;
  float temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  
  temp_v1 = FUN_002c2950();
  pfVar3 = (float *)NaviMain_GetCursorPos(param_1 + 0x162);
  if (*(char *)(temp_v1 + 0xd5a) != '\f') {
    temp_v1 = 0;
    temp_v6 = (float)VectorSignedToFloat(*(int *)(param_1 + 0xb80) / 2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = (float)VectorSignedToFloat(*(int *)(param_1 + 0xb84) / 2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = (int)(temp_v6 - *pfVar3);
    temp_v8 = (int)(temp_v7 - pfVar3[1]);
    if (0 < *(int *)(param_1 + 0x121b4)) {
      do {
        temp_v2 = param_1 + temp_v1 * 0x30;
        temp_v3 = *(char *)(temp_v2 + 0x61b4) == '\0';
        temp_v0 = '\0';
        if (!temp_v3) {
          temp_v0 = *(char *)(temp_v2 + 0x61b5);
        }
        temp_v4 = temp_v3 || temp_v0 == '\0';
        if (temp_v3 || temp_v0 == '\0') {
          temp_v4 = (*(signed char *)((unsigned char *)&DAT_0049fc1c + 0xe4)) == '\0';
        }
        if (!temp_v4) {
          if (*(int *)(temp_v2 + 0x61bc) != -1) {
            temp_v6 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v11 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v7 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x121b8) / 2,
                                               (unsigned char)(in_fpscr >> 0x16) & 3);
            *(int *)(temp_v2 + 0x61d0) = (int)((*(float *)(temp_v2 + 0x61c8) - (temp_v6 - 160.0f)) - temp_v7)
            ;
            temp_v6 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x121b8) / 2,
                                               (unsigned char)(in_fpscr >> 0x16) & 3);
            *(int *)(temp_v2 + 0x61d4) =
                 (int)((*(float *)(temp_v2 + 0x61cc) - (temp_v11 - 120.0f)) - temp_v6);
            *(int *)(temp_v2 + 0x61d8) = *(int *)(param_1 + 0x121b8) + 0xc;
            *(int *)(temp_v2 + 0x61dc) = *(int *)(param_1 + 0x121b8) + 0xc;
          }
          else {
            temp_v6 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v7 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v9 = VectorFloatToUnsigned(*(float *)(temp_v2 + 0x61c8) * 0.5f,3);
            temp_v10 = VectorFloatToUnsigned(*(float *)(temp_v2 + 0x61cc) * 0.5f,3);
            *(int *)(temp_v2 + 0x61d0) = (int)(*(float *)(temp_v2 + 0x61c0) * 0.5f - (temp_v6 - 160.0f));
            *(int *)(temp_v2 + 0x61d4) = (int)(*(float *)(temp_v2 + 0x61c4) * 0.5f - (temp_v7 - 120.0f));
            *(unsigned int *)(temp_v2 + 0x61d8) = temp_v9;
            *(unsigned int *)(temp_v2 + 0x61dc) = temp_v10;
          }
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < *(int *)(param_1 + 0x121b4));
    }
  }
  else {
    temp_v1 = 0;
    temp_v7 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0xb80),(unsigned char)(in_fpscr >> 0x16) & 3
                                      );
    temp_v6 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0xb84),(unsigned char)(in_fpscr >> 0x16) & 3
                                      );
    if (0 < *(int *)(param_1 + 0x121b4)) {
      in_r12 = 0x18;
    }
    temp_v5 = (int)(temp_v7 - *pfVar3);
    temp_v8 = (int)(temp_v6 - pfVar3[1]);
    if (0 < *(int *)(param_1 + 0x121b4)) {
      do {
        temp_v2 = param_1 + temp_v1 * 0x30;
        temp_v3 = *(char *)(temp_v2 + 0x61b4) == '\0';
        temp_v0 = '\0';
        if (!temp_v3) {
          temp_v0 = *(char *)(temp_v2 + 0x61b5);
        }
        temp_v4 = temp_v3 || temp_v0 == '\0';
        if (temp_v3 || temp_v0 == '\0') {
          temp_v4 = (*(signed char *)((unsigned char *)&DAT_0049fc1c + 0xe4)) == '\0';
        }
        if (!temp_v4) {
          if (*(int *)(temp_v2 + 0x61bc) != -1) {
            temp_v7 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v11 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v6 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0x121b8),
                                               (unsigned char)(in_fpscr >> 0x16) & 3);
            *(int *)(temp_v2 + 0x61d0) = (int)((*(float *)(temp_v2 + 0x61c0) - (temp_v7 - 160.0f)) - temp_v6)
            ;
            temp_v6 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0x121b8),
                                               (unsigned char)(in_fpscr >> 0x16) & 3);
            *(int *)(temp_v2 + 0x61d4) =
                 (int)((*(float *)(temp_v2 + 0x61c4) - (temp_v11 - 120.0f)) - temp_v6);
            *(int *)(temp_v2 + 0x61d8) = in_r12 + *(int *)(param_1 + 0x121b8) * 2;
            *(int *)(temp_v2 + 0x61dc) = in_r12 + *(int *)(param_1 + 0x121b8) * 2;
          }
          else {
            temp_v6 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v7 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v10 = VectorFloatToUnsigned(*(unsigned int *)(temp_v2 + 0x61c8),3);
            temp_v9 = VectorFloatToUnsigned(*(unsigned int *)(temp_v2 + 0x61cc),3);
            *(unsigned int *)(temp_v2 + 0x61d8) = temp_v10;
            *(unsigned int *)(temp_v2 + 0x61dc) = temp_v9;
            *(int *)(temp_v2 + 0x61d0) = (int)(*(float *)(temp_v2 + 0x61c0) - (temp_v6 - 160.0f));
            *(int *)(temp_v2 + 0x61d4) = (int)(*(float *)(temp_v2 + 0x61c4) - (temp_v7 - 120.0f));
          }
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < *(int *)(param_1 + 0x121b4));
    }
  }
  *(unsigned char *)(param_1 + 0x5a8f) = 0;
  return;
}

} /* extern "C" */
