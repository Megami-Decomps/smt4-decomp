/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00245e78` (_code @ 0x245e78, 0x188 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern unsigned char LAB_0024601c; /* 0x24601c */
extern unsigned char LAB_00246024; /* 0x246024 */
extern unsigned char LAB_0024602c; /* 0x24602c */
extern unsigned char LAB_00246034; /* 0x246034 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern unsigned int FUN_0023ec3c(unsigned int);
/* Supplied declaration required: FUN_00282b94. */
extern int FUN_00293c98(void);
/* Supplied declaration required: FUN_002be7fc. */


unsigned int FUN_00245e78(unsigned int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  
  temp_v0 = FUN_00293c98();
  FUN_00282b94(temp_v0,param_1);
  temp_v5 = 20.0f;
  if (param_2 == 3) {
    temp_v2 = 0x19;
    temp_v3 = 5.0f;
  }
  else if (param_2 == 6) {
    temp_v2 = 0x17;
    temp_v3 = 25.0f;
  }
  else if (param_2 == 7) {
    temp_v2 = 0x16;
    temp_v3 = 30.0f;
  }
  else {
    if (param_2 != 8) {
      return 1;
    }
    temp_v2 = 0x18;
    temp_v3 = temp_v5;
  }
  temp_v4 = (float)VectorSignedToFloat((int)*(short *)(temp_v0 + 0x1c4),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = FUN_00293c98();
  FUN_00282b94(temp_v0,param_1);
  if (temp_v0 != 0) {
    temp_v0 = (int)*(short *)(temp_v0 + temp_v2 * 2 + 0x72);
  }
  else {
    temp_v0 = 0;
  }
  temp_v6 = 0;
  temp_v3 = temp_v3 + temp_v3 * temp_v4 * 0.01f;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v4 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v11 = 0;
  temp_v12 = 0;
  temp_v13 = 0;
  if ((int)temp_v3 >= 0x42a00001) {
    temp_v3 = 80.0f;
  }
  temp_v3 = temp_v3 + temp_v4 * temp_v5;
  if (param_2 != 3) {
    if (param_2 != 6) {
      if (param_2 != 7) {
        if (param_2 == 8) {
          FUN_002be7fc(&temp_v6,&LAB_0024602c);
        }
      }
      else {
        FUN_002be7fc(&temp_v6,&LAB_0024601c);
      }
    }
    else {
      FUN_002be7fc(&temp_v6,&LAB_00246024);
    }
  }
  else {
    FUN_002be7fc(&temp_v6,&LAB_00246034);
  }
  temp_v1 = FUN_0023ec3c(99);
  temp_v5 = (float)VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  if (temp_v5 < temp_v3) {
    return 1;
  }
  return 0;
}
