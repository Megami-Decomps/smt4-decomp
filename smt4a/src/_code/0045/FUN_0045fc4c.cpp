/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045fc4c` (_code @ 0x45fc4c, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017572c(int);
int FUN_0019102c(int, int);
int FUN_0045f478(void);
int VectorSignedToFloat(int, int);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_00175678(void);
/* Supplied declaration required: FUN_0017572c. */
/* Supplied declaration required: FUN_0019102c. */
/* Supplied declaration required: FUN_0045f478. */


void FUN_0045fc4c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  
  FUN_0045f478();
  temp_v0 = FUN_00175678();
  temp_v3 = 0;
  temp_v4 = (unsigned int)*(unsigned short *)(param_1 + 0x328c);
  do {
    if ((temp_v4 & 1) != 0) {
      temp_v1 = temp_v0;
      FUN_0019102c(temp_v0,7);
      temp_v2 = param_1 + temp_v3 * 0x10;
      *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
      *(unsigned char *)(temp_v1 + 4) = 0x2d;
      *(int *)(temp_v1 + 0x10) = param_1 + 0x118;
      *(int *)(temp_v1 + 0x14) = 1 << (temp_v3 & 0xff);
      if (*(int *)(temp_v2 + 0x3054) >= *(int *)(temp_v2 + 0x3050)) {
        temp_v5 = *(float *)(temp_v2 + 0x304c);
      }
      else {
        temp_v6 = (float)VectorSignedToFloat(*(int *)(temp_v2 + 0x3054),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v5 = (float)VectorSignedToFloat(*(int *)(temp_v2 + 0x3050),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v5 = ((*(float *)(temp_v2 + 0x304c) - *(float *)(temp_v2 + 0x3048)) * temp_v6) / temp_v5 +
                *(float *)(temp_v2 + 0x3048);
      }
      *(float *)(temp_v1 + 0x18) = temp_v5;
      FUN_0017572c(temp_v0);
    }
    temp_v3 = temp_v3 + 1;
    temp_v4 = temp_v4 >> 1;
  } while (temp_v3 < 4);
  return;
}

} /* extern "C" */
