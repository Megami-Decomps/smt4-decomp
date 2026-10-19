/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00140ba4` (_code @ 0x140ba4, 0x234 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_005c1478; /* 0x5c1478 */
extern unsigned char DAT_00647448; /* 0x647448 */
extern unsigned short DAT_0064744c; /* 0x64744c */
extern unsigned short DAT_0064744e; /* 0x64744e */
extern unsigned short DAT_006474a0; /* 0x6474a0 */
extern unsigned short DAT_006474a2; /* 0x6474a2 */
extern signed char DAT_006474a5; /* 0x6474a5 */
extern int DAT_006474a8; /* 0x6474a8 */
extern short DAT_006474ac; /* 0x6474ac */
extern short DAT_006474ae; /* 0x6474ae */
extern short DAT_006474b0; /* 0x6474b0 */
extern unsigned char DAT_006474b2; /* 0x6474b2 */
extern unsigned int DAT_006474b8; /* 0x6474b8 */
extern unsigned int DAT_006474bc; /* 0x6474bc */
extern unsigned int DAT_006474c0; /* 0x6474c0 */
extern unsigned int DAT_006474c4; /* 0x6474c4 */
extern unsigned int DAT_006474c8; /* 0x6474c8 */
extern unsigned int DAT_006474cc; /* 0x6474cc */
extern float DAT_006474d0; /* 0x6474d0 */
extern float DAT_006474d4; /* 0x6474d4 */
extern float DAT_006474d8; /* 0x6474d8 */
extern float DAT_006474e0; /* 0x6474e0 */
extern float DAT_006474e4; /* 0x6474e4 */
extern float DAT_006474e8; /* 0x6474e8 */
extern float DAT_006474f0; /* 0x6474f0 */
extern float DAT_006474f4; /* 0x6474f4 */
extern float DAT_006474f8; /* 0x6474f8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: SUB42 (SUBPIECE). */
/* Supplied declaration required: FUN_0013c1fc. */
/* Supplied declaration required: FUN_0013d33c. */
extern unsigned int FUN_0015959c(void);
/* Supplied declaration required: FUN_0015976c. */
/* Supplied declaration required: FUN_001d1438. */
extern int FUN_002eba64(unsigned int *);
extern void nn_hid_CTR_AccelerometerReader_ConvertToAcceleration(unsigned int, unsigned int, int, unsigned int);
extern unsigned char nn_hid_CTR_AccelerometerReader_ReadLatest(unsigned int, unsigned int);


unsigned int FUN_00140ba4(void)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  
  FUN_0013c1fc();
  FUN_0013d33c();
  if (((DAT_005c1478 & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c1478), temp_v0 != 0)) {
    temp_v1 = FUN_0015959c();
    FUN_0015976c(&DAT_00647448,temp_v1);
  }
  if (DAT_006474a8 != 0) {
    DAT_0064744c = DAT_006474a0;
    DAT_0064744e = DAT_006474a2;
    DAT_006474a8 = 0;
  }
  FUN_001d1438(&DAT_006474b2);
  DAT_006474c4 = DAT_006474b8;
  DAT_006474c8 = DAT_006474bc;
  DAT_006474cc = DAT_006474c0;
  nn_hid_CTR_AccelerometerReader_ReadLatest((unsigned int)&DAT_00647448,(unsigned int)&DAT_006474ac);
  if (DAT_006474a5 == '\x01') {
    temp_v5 = (float)VectorSignedToFloat((int)DAT_006474ac,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = (float)VectorSignedToFloat((int)DAT_006474ae,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = (float)VectorSignedToFloat((int)DAT_006474b0,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = romwright_sqrt_4(temp_v5 * temp_v5 + temp_v9 * temp_v9 + temp_v8 * temp_v8);
    temp_v10 = 1.0f / temp_v4;
    temp_v5 = temp_v5 * temp_v10;
    temp_v9 = temp_v9 * temp_v10;
    temp_v8 = temp_v8 * temp_v10;
    temp_v10 = -930.0f;
    temp_v11 = 930.0f;
    temp_v6 = (float)(int)((DAT_006474f0 * temp_v5 + DAT_006474f4 * temp_v9 + DAT_006474f8 * temp_v8) *
                        temp_v4);
    temp_v0 = (int)(short)(int)((DAT_006474d0 * temp_v5 + DAT_006474d4 * temp_v9 + DAT_006474d8 * temp_v8)
                             * temp_v4);
    temp_v7 = temp_v6;
    if (temp_v0 < -0x3a1) {
      temp_v7 = temp_v10;
    }
    temp_v2 = (int)(short)(int)((DAT_006474e0 * temp_v5 + DAT_006474e4 * temp_v9 + DAT_006474e8 * temp_v8)
                             * temp_v4);
    temp_v3 = (int)SUB42(temp_v6,0);
    if ((-0x3a2 < temp_v0) && (temp_v7 = temp_v11, temp_v0 < 0x3a2)) {
      temp_v7 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    DAT_006474ac = (short)(int)temp_v7;
    temp_v7 = temp_v10;
    if ((-0x3a2 < temp_v2) && (temp_v7 = temp_v11, temp_v2 < 0x3a2)) {
      temp_v7 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    DAT_006474ae = (short)(int)temp_v7;
    if ((-0x3a2 < temp_v3) && (temp_v10 = temp_v11, temp_v3 < 0x3a2)) {
      temp_v10 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    DAT_006474b0 = (short)(int)temp_v10;
  }
  nn_hid_CTR_AccelerometerReader_ConvertToAcceleration((unsigned int)&DAT_00647448,(unsigned int)&DAT_006474b8,1,(unsigned int)&DAT_006474ac);
  return 1;
}
