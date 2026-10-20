/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00379e18` (_code @ 0x379e18, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int listAppendNode(int);
int FUN_002b4f64(int, int);
int FUN_00379618(void);
int VectorSignedToFloat(int, int);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: listAppendNode. */
/* Supplied declaration required: FUN_002b4f64. */
extern int FUN_002baed8(void);
/* Supplied declaration required: FUN_00379618. */


void FUN_00379e18(int param_1)

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
  
  FUN_00379618();
  temp_v0 = FUN_002baed8();
  temp_v3 = 0;
  temp_v4 = (unsigned int)*(unsigned short *)(param_1 + 0x2bc8);
  do {
    if ((temp_v4 & 1) != 0) {
      temp_v1 = temp_v0;
      FUN_002b4f64(temp_v0,7);
      temp_v2 = param_1 + temp_v3 * 0x10;
      *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
      *(unsigned char *)(temp_v1 + 4) = 0x2d;
      *(int *)(temp_v1 + 0x10) = param_1 + 0xf4;
      *(int *)(temp_v1 + 0x14) = 1 << (temp_v3 & 0xff);
      if (*(int *)(temp_v2 + 0x2990) >= *(int *)(temp_v2 + 0x298c)) {
        temp_v5 = *(float *)(temp_v2 + 0x2988);
      }
      else {
        temp_v6 = (float)VectorSignedToFloat(*(int *)(temp_v2 + 0x2990),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v5 = (float)VectorSignedToFloat(*(int *)(temp_v2 + 0x298c),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v5 = ((*(float *)(temp_v2 + 0x2988) - *(float *)(temp_v2 + 0x2984)) * temp_v6) / temp_v5 +
                *(float *)(temp_v2 + 0x2984);
      }
      *(float *)(temp_v1 + 0x18) = temp_v5;
      listAppendNode(temp_v0);
    }
    temp_v3 = temp_v3 + 1;
    temp_v4 = temp_v4 >> 1;
  } while (temp_v3 < 4);
  return;
}

} /* extern "C" */
