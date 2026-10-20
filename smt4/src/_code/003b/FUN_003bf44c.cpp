/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bf44c` (_code @ 0x3bf44c, 0xd4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025bfa4(void);
int FUN_002b99b8(void);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(unsigned int, int);

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
extern int FUN_0023ea94(void);
/* Supplied declaration required: FUN_0025bfa4. */
extern unsigned int FUN_002907a8(void);
extern int btlGetMainState(void);
extern unsigned int FUN_002a8764(void);
extern int FUN_002b63ac(float, int);
/* Supplied declaration required: FUN_002b99b8. */


int FUN_003bf44c(void)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  float temp_v5;
  
  temp_v0 = btlGetMainState();
  temp_v1 = FUN_002a8764();
  temp_v5 = 0.0f;
  FUN_0025bfa4();
  if (temp_v1 == 0xffffffff) {
    temp_v1 = FUN_002907a8();
  }
  temp_v3 = temp_v1 * -0x77777777;
  temp_v2 = *(float *)(temp_v0 + 0x2f2c);
  temp_v4 = (float)VectorUnsignedToFloat(temp_v1 / 0x3c,(unsigned char)(in_fpscr >> 0x16) & 3);
  if (temp_v2 != -NAN) {
    temp_v4 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  temp_v1 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v5 <= temp_v4) << 0x1d);
  if ((romwright_subpiece_4_1_0(temp_v1 >> 0x1d,0)) &&
     (temp_v3 = 0x42f00000, temp_v2 = temp_v4, temp_v5 = temp_v4, (int)temp_v4 >= 0x42f00001)) {
    temp_v5 = 120.0f;
  }
  temp_v0 = FUN_002b63ac(temp_v2,temp_v3);
  temp_v4 = (float)VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v0 + 0x76),(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v2 = temp_v4;
  FUN_002b99b8();
  temp_v4 = temp_v4 + temp_v2 * 80.0f;
  temp_v3 = (int)(temp_v4 + temp_v4 * temp_v5 * 0.008333334f);
  temp_v0 = FUN_0023ea94();
  temp_v5 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v0 = (int)(*(float *)(temp_v0 + 0x20) * temp_v5);
  if (temp_v0 == 0) {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
