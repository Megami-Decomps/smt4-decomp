/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039e56c` (_code @ 0x39e56c, 0x34c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0049f924; /* 0x49f924 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
extern int FUN_002c2950(void);
extern float *NaviMain_GetCursorPos(int);


void FUN_0039e56c(int param_1)

{
/* irregular: 8 goto(s); irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  float *pfVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  unsigned int temp_v12;
  float temp_v13;
  
  temp_v0 = FUN_002c2950();
  pfVar2 = (float *)NaviMain_GetCursorPos(param_1 + 0x162);
  temp_v6 = *pfVar2;
  temp_v7 = pfVar2[1];
  temp_v2 = 0;
  temp_v3 = *(int *)(param_1 + 0x5a88);
  do {
    if (*(char *)(temp_v0 + 0xd5a) != '\f') {
      temp_v4 = 0;
      temp_v8 = (float)VectorSignedToFloat(*(int *)(param_1 + 0xb80) / 2,(unsigned char)(in_fpscr >> 0x16) & 3
                                         );
      temp_v9 = (float)VectorSignedToFloat(*(int *)(param_1 + 0xb84) / 2,(unsigned char)(in_fpscr >> 0x16) & 3
                                         );
      if (0 < temp_v3) {
        do {
          temp_v1 = param_1 + temp_v4 * 0x4c;
          if (temp_v2 == 0) {
            temp_v1 = temp_v1 + 0xe88;
          }
          else {
            temp_v1 = temp_v1 + 0x5a90;
          }
          if (*(short *)(temp_v1 + 0x34) != 0) {
            temp_v11 = (float)VectorSignedToFloat((int)(temp_v8 - temp_v6),(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v13 = (float)VectorSignedToFloat((int)(temp_v9 - temp_v7),(unsigned char)(in_fpscr >> 0x16) & 3);
            *(unsigned short *)(temp_v1 + 0x36) = *(unsigned short *)(temp_v1 + 10);
            temp_v12 = VectorFloatToUnsigned(*(unsigned int *)(temp_v1 + 0x24),3);
            temp_v10 = VectorFloatToUnsigned(*(unsigned int *)(temp_v1 + 0x28),3);
            *(int *)(temp_v1 + 0x38) = (int)(*(float *)(temp_v1 + 0x1c) - (temp_v11 - 160.0f));
            *(int *)(temp_v1 + 0x3c) = (int)(*(float *)(temp_v1 + 0x20) - (temp_v13 - 120.0f));
            *(unsigned int *)(temp_v1 + 0x40) = temp_v12;
            *(unsigned int *)(temp_v1 + 0x44) = temp_v10;
            temp_v5 = (unsigned int)*(unsigned char *)(temp_v1 + 4);
            if (temp_v5 != DAT_0049f924) {
              if (temp_v5 != 0x8d) {
                if (temp_v5 != 0x8e) {
                  if (temp_v5 != 0x5c) {
                    if ((temp_v5 == 0x5d) && (DAT_0049f924 == 0x5c)) goto LAB_0039e8a0;
                  }
                  else if (DAT_0049f924 == 0x5d) goto LAB_0039e8a0;
                }
                else if (DAT_0049f924 == 0x8d) goto LAB_0039e8a0;
              }
              else if (DAT_0049f924 == 0x8e) goto LAB_0039e8a0;
              if (*(short *)(temp_v1 + 0x2c) == 0 || *(short *)(temp_v1 + 0x2c) == 4) {
                *(unsigned int *)(temp_v1 + 0x48) = 0xffffff99;
              }
              else {
                *(unsigned int *)(temp_v1 + 0x48) = 0xffffffff;
              }
            }
            else {
LAB_0039e8a0:
              if (*(short *)(temp_v1 + 0x2c) != 0 && *(short *)(temp_v1 + 0x2c) != 4) {
                *(unsigned int *)(temp_v1 + 0x48) = 0xffffffff;
              }
              else {
                *(unsigned int *)(temp_v1 + 0x48) = 0xb4ff83ff;
              }
            }
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < temp_v3);
      }
    }
    else {
      temp_v4 = 0;
      temp_v9 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0xb80),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v8 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0xb84),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      if (0 < temp_v3) {
        do {
          temp_v1 = param_1 + temp_v4 * 0x4c;
          if (temp_v2 == 0) {
            temp_v1 = temp_v1 + 0xe88;
          }
          else {
            temp_v1 = temp_v1 + 0x5a90;
          }
          if (*(short *)(temp_v1 + 0x34) != 0) {
            temp_v11 = (float)VectorSignedToFloat((int)(temp_v9 - temp_v6),(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v13 = (float)VectorSignedToFloat((int)(temp_v8 - temp_v7),(unsigned char)(in_fpscr >> 0x16) & 3);
            *(unsigned short *)(temp_v1 + 0x36) = *(unsigned short *)(temp_v1 + 8);
            temp_v12 = VectorFloatToUnsigned(*(unsigned int *)(temp_v1 + 0x14),3);
            temp_v10 = VectorFloatToUnsigned(*(unsigned int *)(temp_v1 + 0x18),3);
            *(int *)(temp_v1 + 0x38) = (int)(*(float *)(temp_v1 + 0xc) - (temp_v11 - 160.0f));
            *(int *)(temp_v1 + 0x3c) = (int)(*(float *)(temp_v1 + 0x10) - (temp_v13 - 120.0f));
            *(unsigned int *)(temp_v1 + 0x40) = temp_v12;
            *(unsigned int *)(temp_v1 + 0x44) = temp_v10;
            temp_v5 = (unsigned int)*(unsigned char *)(temp_v1 + 4);
            if (temp_v5 != DAT_0049f924) {
              if (temp_v5 != 0x8d) {
                if (temp_v5 != 0x8e) {
                  if (temp_v5 != 0x5c) {
                    if ((temp_v5 == 0x5d) && (DAT_0049f924 == 0x5c)) goto LAB_0039e808;
                  }
                  else if (DAT_0049f924 == 0x5d) goto LAB_0039e808;
                }
                else if (DAT_0049f924 == 0x8d) goto LAB_0039e808;
              }
              else if (DAT_0049f924 == 0x8e) goto LAB_0039e808;
              if (*(short *)(temp_v1 + 0x2c) == 0 || *(short *)(temp_v1 + 0x2c) == 4) {
                *(unsigned int *)(temp_v1 + 0x48) = 0xffffff99;
              }
              else {
                *(unsigned int *)(temp_v1 + 0x48) = 0xffffffff;
              }
            }
            else {
LAB_0039e808:
              if (*(short *)(temp_v1 + 0x2c) != 0 && *(short *)(temp_v1 + 0x2c) != 4) {
                *(unsigned int *)(temp_v1 + 0x48) = 0xffffffff;
              }
              else {
                *(unsigned int *)(temp_v1 + 0x48) = 0xb4ff83ff;
              }
            }
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < temp_v3);
      }
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 2) {
      *(unsigned char *)(param_1 + 0x5a8d) = 0;
      return;
    }
    if (temp_v2 == 0) {
      temp_v3 = *(int *)(param_1 + 0x5a88);
      continue;
    }
    temp_v3 = *(int *)(param_1 + 0x61b0);
  } while( 1 );
}
