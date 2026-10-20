/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c1114` (_code @ 0x4c1114, 0x308 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(int *, unsigned char *);
int FUN_003f0e20(int, unsigned int);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_2: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

extern unsigned char LAB_004c1450; /* 0x4c1450 */
extern unsigned char LAB_004c1458; /* 0x4c1458 */
extern unsigned char LAB_004c1460; /* 0x4c1460 */
extern unsigned char LAB_004c1468; /* 0x4c1468 */
extern unsigned char LAB_004c1470; /* 0x4c1470 */
extern unsigned char LAB_004c1478; /* 0x4c1478 */
extern unsigned int DAT_00571498; /* 0x571498 */
extern unsigned int DAT_0057149c; /* 0x57149c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
extern int btlGetMainState(void);
extern unsigned int FUN_001633a0(unsigned int);
/* Supplied declaration required: FUN_003f0e20. */
extern int FUN_004c52ec(int);


unsigned int FUN_004c1114(unsigned int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  
  temp_v0 = btlGetMainState();
  temp_v1 = temp_v0;
  FUN_003f0e20(temp_v0,param_1);
  temp_v5 = 0.0f;
  switch(param_2 - 3) {
  case 0:
    temp_v5 = 5.0f;
    temp_v3 = 0x1e;
    break;
  case 1:
    temp_v3 = 0x22;
    break;
  default:
    return 1;
  case 3:
    temp_v5 = 18.0f;
    temp_v3 = 0x1c;
    break;
  case 4:
    temp_v5 = 20.0f;
    temp_v3 = 0x1b;
    break;
  case 5:
    temp_v5 = 14.0f;
    temp_v3 = 0x1d;
    break;
  case 8:
    temp_v5 = 18.0f;
    temp_v3 = 0x1f;
    break;
  case 9:
    temp_v3 = 0x20;
    break;
  case 10:
    temp_v5 = 14.0f;
    temp_v3 = 0x21;
  }
  temp_v6 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 0x270),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = btlGetMainState();
  FUN_003f0e20(temp_v1,param_1);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = *(unsigned int *)(temp_v1 + temp_v3 * 4 + 0x74);
  }
  temp_v7 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  if (param_2 != 0xc) {
    if (param_2 != 4) {
      if (!((*(unsigned int *)(temp_v0 + 0x45a4) & DAT_0057149c) == 0 &&
           (*(unsigned int *)(temp_v0 + 0x45a0) & DAT_00571498) == 0)) {
        if ((int)temp_v7 < 4) {
          return 0;
        }
      }
      else {
        temp_v4 = 0.0f;
        if ((int)temp_v6 >= 0x42c80001) {
          temp_v4 = temp_v6 - 100.0f;
          temp_v6 = temp_v6 - temp_v4;
        }
        temp_v5 = temp_v5 + temp_v5 * (temp_v6 * 0.01f + temp_v4 * 0.0025f);
        if ((int)temp_v5 >= 0x428c0001) {
          temp_v5 = 70.0f;
        }
        temp_v8 = 0;
        temp_v5 = temp_v5 + temp_v7 * 15.0f;
        temp_v9 = 0;
        temp_v10 = 0;
        temp_v11 = 0;
        temp_v12 = 0;
        temp_v13 = 0;
        temp_v14 = 0;
        temp_v15 = 0;
        switch(param_2 - 3) {
        case 0:
          FUN_00100388(&temp_v8,&LAB_004c1468);
          break;
        case 3:
          FUN_00100388(&temp_v8,&LAB_004c1458);
          break;
        case 4:
          FUN_00100388(&temp_v8,&LAB_004c1450);
          break;
        case 5:
          FUN_00100388(&temp_v8,&LAB_004c1460);
          break;
        case 8:
          FUN_00100388(&temp_v8,&LAB_004c1470);
          break;
        case 10:
          FUN_00100388(&temp_v8,&LAB_004c1478);
        }
        if ((int)temp_v7 == 0) {
          return 0;
        }
        temp_v2 = FUN_001633a0(99);
        temp_v6 = (float)VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
        if (temp_v5 <= temp_v6) {
          return 0;
        }
      }
    }
    else {
      temp_v1 = btlGetMainState();
      FUN_003f0e20(temp_v1,param_1);
      if (temp_v1 != 0) {
        temp_v1 = *(int *)(temp_v1 + temp_v3 * 4 + 0x74);
      }
      else {
        temp_v1 = 0;
      }
      temp_v0 = FUN_004c52ec(temp_v3);
      if (temp_v1 != temp_v0) {
        return 0;
      }
    }
  }
  else if ((int)temp_v7 < 1) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
