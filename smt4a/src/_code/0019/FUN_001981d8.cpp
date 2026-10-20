/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001981d8` (_code @ 0x1981d8, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a8810(unsigned int, unsigned int);
int FUN_001aafd0(unsigned int, unsigned int);
int FUN_001b3780(int);
int VectorFloatToUnsigned(double, int);
int nn_math_ARMv6_MTX34CopyAsm(unsigned int, int);

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_001a8810. */
/* Supplied declaration required: FUN_001aafd0. */
/* Supplied declaration required: FUN_001b3780. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


void FUN_001981d8(int param_1,int param_2,int *param_3)

{
/* irregular: irregular input(s): in_s0; 6 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int in_s0;
  float temp_v5;
  int temp_v6;
  unsigned long long temp_v7;
  
  temp_v7 = (unsigned long long)in_s0;
  temp_v1 = *(int *)(param_1 + 0x10);
  temp_v0 = *(short *)(**(int **)(param_1 + 0xc) + 6);
  if (temp_v0 != 4) {
    if (temp_v0 != 7) {
      temp_v4 = 0;
      if (temp_v1 != 0) {
        do {
          temp_v2 = (unsigned int)*(unsigned short *)(*param_3 + temp_v4 * 2);
          if (temp_v2 != 0xffff) {
            temp_v3 = *(int *)(param_2 + 0x14);
            temp_v5 = (float)temp_v7;
            temp_v1 = *(int *)(*(int *)(param_1 + 0xc) + temp_v4 * 4);
            FUN_001b3780(temp_v1 + 8);
            temp_v6 = VectorFloatToUnsigned(temp_v5,3);
            if (*(float *)(temp_v1 + 0xc) == temp_v5) {
              temp_v6 = temp_v6 + 1;
            }
            nn_math_ARMv6_MTX34CopyAsm(temp_v3 + temp_v2 * 0x30,*(int *)(temp_v1 + 0x14) + temp_v6 * 0x30);
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < *(unsigned int *)(param_1 + 0x10));
      }
    }
    else {
      temp_v4 = 0;
      if (temp_v1 != 0) {
        do {
          temp_v2 = (unsigned int)*(unsigned short *)(*param_3 + temp_v4 * 2);
          if (temp_v2 != 0xffff) {
            FUN_001a8810(*(unsigned int *)(*(int *)(param_1 + 0xc) + temp_v4 * 4),
                         *(int *)(param_2 + 0xc) + temp_v2 * 0x40);
            puVar4 = (unsigned int *)(*(int *)(param_2 + 0xc) + temp_v2 * 0x40);
            *puVar4 = *puVar4 | 2;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < *(unsigned int *)(param_1 + 0x10));
        return;
      }
    }
  }
  else {
    temp_v4 = 0;
    if (temp_v1 != 0) {
      do {
        temp_v2 = (unsigned int)*(unsigned short *)(*param_3 + temp_v4 * 2);
        if (temp_v2 != 0xffff) {
          FUN_001aafd0(*(unsigned int *)(*(int *)(param_1 + 0xc) + temp_v4 * 4),
                       *(int *)(param_2 + 0xc) + temp_v2 * 0x40);
          puVar4 = (unsigned int *)(*(int *)(param_2 + 0xc) + temp_v2 * 0x40);
          *puVar4 = *puVar4 | 2;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < *(unsigned int *)(param_1 + 0x10));
      return;
    }
  }
  return;
}

} /* extern "C" */
