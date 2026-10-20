/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001782c8` (_code @ 0x1782c8, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b3780(float *);
int VectorFloatToUnsigned(double, int);

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_001b3780. */


void FUN_001782c8(int param_1,int *param_2,int *param_3)

{
/* irregular: irregular input(s): in_s0; 3 native warning(s); review required */
  unsigned short temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  char temp_v3;
  unsigned char temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int in_s0;
  float temp_v7;
  unsigned long long temp_v8;
  
  temp_v5 = 0;
  temp_v8 = (unsigned long long)in_s0;
  if (*(int *)(param_1 + 0x10) != 0) {
    do {
      if (*(short *)(*param_3 + temp_v5 * 2) != -1) {
        temp_v7 = (float)temp_v8;
        temp_v6 = *(int *)(*(int *)(param_1 + 0xc) + temp_v5 * 4);
        if (*(int *)(temp_v6 + 0x18) != 1) {
          FUN_001b3780((float *)(temp_v6 + 8));
          temp_v7 = temp_v7 - *(float *)(temp_v6 + 8);
          if (*(float *)(temp_v6 + 0xc) == temp_v7) {
            temp_v2 = *(int *)(temp_v6 + 0x18) - 1;
            if (((unsigned int)*(unsigned char *)(*(int *)(temp_v6 + 0x14) + (temp_v2 >> 3)) & (1 << (temp_v2 & 7))) == 0)
            {
              temp_v3 = '\0';
            }
            else {
              temp_v3 = '\x01';
            }
          }
          else {
            temp_v2 = VectorFloatToUnsigned(temp_v7,3);
            if (((unsigned int)*(unsigned char *)(*(int *)(temp_v6 + 0x14) + (temp_v2 >> 3)) & (1 << (temp_v2 & 7))) != 0)
            {
              temp_v3 = '\x01';
            }
            else {
              temp_v3 = '\0';
            }
          }
        }
        else if ((**(unsigned char **)(temp_v6 + 0x14) & 1) != 0) {
          temp_v3 = '\x01';
        }
        else {
          temp_v3 = '\0';
        }
        if (*(short *)(temp_v6 + 4) != 0x32) {
          *(char *)(param_2 + 2) = temp_v3;
        }
        else {
          temp_v0 = *(unsigned short *)(*param_3 + temp_v5 * 2);
          temp_v4 = *(unsigned char *)(*param_2 + (unsigned int)(temp_v0 >> 3));
          temp_v1 = (unsigned char)(1 << (temp_v0 & 7));
          if (temp_v3 != '\0') {
            temp_v4 = temp_v4 | temp_v1;
          }
          else {
            temp_v4 = temp_v4 & ~temp_v1;
          }
          *(unsigned char *)(*param_2 + (unsigned int)(temp_v0 >> 3)) = temp_v4;
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(unsigned int *)(param_1 + 0x10));
  }
  return;
}

} /* extern "C" */
