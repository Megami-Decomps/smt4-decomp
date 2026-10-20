/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029c0c0` (_code @ 0x29c0c0, 0xec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b06c4(void);
int FUN_002b9024(void);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
extern int padIsButtonDown(unsigned int);
/* Supplied declaration required: FUN_002b06c4. */
/* Supplied declaration required: FUN_002b9024. */
extern int FUN_003bc96c(int, int);


unsigned int FUN_0029c0c0(unsigned int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  float temp_v7;
  unsigned long long temp_v8;
  
  temp_v0 = (unsigned int)*(unsigned short *)(param_2 + 0x46);
  FUN_002b06c4();
  temp_v7 = 0.0f;
  temp_v8 = 0;
  temp_v1 = 0;
  FUN_002b9024();
  temp_v6 = 1.0f;
  temp_v2 = 0x500;
  temp_v3 = 0;
  do {
    if ((*(unsigned short *)(temp_v1 + temp_v3 * 0x94 + 6) & 1) != 0) {
      temp_v7 = temp_v7 + 1.0f;
    }
    temp_v2 = temp_v2 - 1;
    temp_v3 = temp_v3 + 1;
  } while (temp_v2 != 0);
  temp_v3 = 0;
  do {
    temp_v1 = FUN_003bc96c(param_2,temp_v3);
    if (temp_v1 != 0) {
      temp_v8 = (unsigned long long)(unsigned int)((float)temp_v8 + temp_v6);
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x200);
  temp_v7 = (float)temp_v8 / temp_v7 + temp_v6;
  temp_v3 = padIsButtonDown(0x21);
  if (temp_v3 != 0) {
    temp_v6 = 1.2f;
  }
  temp_v3 = padIsButtonDown(0x22);
  if (temp_v3 != 0) {
    temp_v6 = 1.5f;
  }
  temp_v3 = padIsButtonDown(0x23);
  if (temp_v3 != 0) {
    temp_v6 = 2.0f;
  }
  temp_v3 = padIsButtonDown(0x24);
  if (temp_v3 != 0) {
    temp_v6 = 3.0f;
  }
  temp_v4 = (float)VectorUnsignedToFloat(*(unsigned int *)(temp_v0 + 0x70),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = VectorFloatToUnsigned(temp_v4 * temp_v7 * temp_v6 + 0.9f,3);
  return temp_v5;
}

} /* extern "C" */
