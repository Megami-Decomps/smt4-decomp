/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bff08` (_code @ 0x3bff08, 0x848 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int padButtonRepeat(...);
int padButtonIsPressed(...);
int memAlloc(int, int, int, int, int, int);
int FUN_001a1ee0(void);
int FUN_001b63b0(void);
int FUN_001b640c(void);
int FUN_001bbde0(void);
int FUN_001bc2f0(...);
int FUN_001bc3e4(void);
int FUN_00202178(...);
int asdDebugLog(...);
int FUN_002b3ed8(...);
int FUN_002f8794(void);
int effMenuListAppend(...);
int VectorSignedToFloat(...);
int rt_memcpy_w(void);

/* stack frame of void: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
} void_stack;

extern unsigned char LAB_003c02d8; /* 0x3c02d8 */
extern unsigned char LAB_003c02f0; /* 0x3c02f0 */
extern unsigned char LAB_003c0304; /* 0x3c0304 */
extern unsigned char LAB_003c0768; /* 0x3c0768 */
extern signed char DAT_0059dbe2; /* 0x59dbe2 */
extern signed char DAT_0059dbe3; /* 0x59dbe3 */
extern signed char DAT_0059dbe4; /* 0x59dbe4 */
extern signed char DAT_0059dbe5; /* 0x59dbe5 */
extern unsigned int DAT_005c13f0; /* 0x5c13f0 */
extern unsigned int DAT_005c13f4; /* 0x5c13f4 */
extern unsigned int DAT_005c13f8; /* 0x5c13f8 */
extern unsigned int DAT_005c13fc; /* 0x5c13fc */
extern unsigned int DAT_005c1400; /* 0x5c1400 */
extern unsigned int DAT_005c1404; /* 0x5c1404 */
extern unsigned int DAT_005c1408; /* 0x5c1408 */
extern unsigned int DAT_005c140c; /* 0x5c140c */
extern unsigned int DAT_005c1410; /* 0x5c1410 */
extern unsigned int DAT_005c1414; /* 0x5c1414 */
extern unsigned int DAT_005c1418; /* 0x5c1418 */
extern unsigned int DAT_005c141c; /* 0x5c141c */
extern unsigned int DAT_005c1420; /* 0x5c1420 */
extern unsigned int DAT_005c1424; /* 0x5c1424 */
extern unsigned int DAT_005c1428; /* 0x5c1428 */
extern unsigned int DAT_005c142c; /* 0x5c142c */
extern signed char DAT_00634c48; /* 0x634c48 */
extern signed char DAT_00634c49; /* 0x634c49 */
extern signed char DAT_00634c4a; /* 0x634c4a */
extern unsigned int DAT_00634c90; /* 0x634c90 */
extern unsigned int DAT_00634c94; /* 0x634c94 */
extern unsigned int DAT_00634c98; /* 0x634c98 */
extern unsigned int DAT_00634c9c; /* 0x634c9c */
extern float DAT_006352f0; /* 0x6352f0 */
extern float DAT_006352f4; /* 0x6352f4 */
extern unsigned int DAT_006352f8; /* 0x6352f8 */
extern float DAT_006352fc; /* 0x6352fc */
extern float DAT_00635300; /* 0x635300 */
extern float DAT_00635304; /* 0x635304 */
extern float DAT_00635308; /* 0x635308 */
extern float DAT_0063530c; /* 0x63530c */
extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: padButtonRepeat. */
/* Supplied declaration required: padButtonIsPressed. */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: FUN_001a1ee0. */
/* Supplied declaration required: FUN_001b63b0. */
/* Supplied declaration required: FUN_001b640c. */
/* Supplied declaration required: FUN_001bbde0. */
/* Supplied declaration required: FUN_001bc2f0. */
/* Supplied declaration required: FUN_001bc3e4. */
/* Supplied declaration required: FUN_00202178. */
/* Supplied declaration required: asdDebugLog. */
/* Supplied declaration required: FUN_002b3ed8. */
/* Supplied declaration required: FUN_002f8794. */
/* Supplied declaration required: effMenuListAppend. */
extern int displayIsStereoActive(void);
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_003bff08(void)

{
/* irregular: 8 goto(s); irregular input(s): in_d10, in_d9, in_fpscr; 18 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  char temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int in_fpscr;
  unsigned int temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  unsigned long long in_d9;
  float temp_v17;
  unsigned long long in_d10;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  unsigned long long temp_v22;
  float temp_v23;
  unsigned long long temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  
  temp_v12 = 1;
  asdDebugLog(8,8,0,&LAB_003c02d8);
  asdDebugLog(8,0x14,0,&LAB_003c02f0);
  asdDebugLog(8,0x20,0,&LAB_003c0304);
  temp_v9 = padButtonRepeat(5);
  if (temp_v9 == 0) {
    FUN_00202178(5);
    temp_v9 = padButtonRepeat();
    if (temp_v9 != 0) goto LAB_003bff88;
    temp_v9 = padButtonRepeat(6);
    if (temp_v9 == 0) {
      FUN_00202178(6);
      temp_v9 = padButtonRepeat();
      if (temp_v9 != 0) goto LAB_003c002c;
    }
    else {
LAB_003c002c:
      if (DAT_0059dbe2 != '\b') {
        temp_v8 = DAT_0059dbe3;
        if (DAT_0059dbe2 == -8) {
          DAT_0059dbe5 = -1;
          temp_v8 = DAT_0059dbe3 + '\b';
          if ('\x0f' < (char)(DAT_0059dbe3 + '\b')) {
            temp_v8 = DAT_0059dbe3 - '\b';
          }
        }
      }
      else {
        DAT_0059dbe5 = '\x01';
        temp_v8 = DAT_0059dbe3 + '\b';
        if ('\x0f' < (char)(DAT_0059dbe3 + '\b')) {
          temp_v8 = DAT_0059dbe3 - '\b';
        }
      }
      DAT_0059dbe3 = temp_v8;
      DAT_0059dbe2 = DAT_0059dbe2 - DAT_0059dbe5;
      temp_v12 = 3;
    }
  }
  else {
LAB_003bff88:
    if (DAT_0059dbe2 != '\b') {
      temp_v8 = DAT_0059dbe3;
      if (DAT_0059dbe2 == -8) {
        DAT_0059dbe5 = '\x01';
        temp_v8 = DAT_0059dbe3 + '\b';
        if ('\x0f' < (char)(DAT_0059dbe3 + '\b')) {
          temp_v8 = DAT_0059dbe3 - '\b';
        }
      }
    }
    else {
      DAT_0059dbe5 = -1;
      temp_v8 = DAT_0059dbe3 + '\b';
      if ('\x0f' < (char)(DAT_0059dbe3 + '\b')) {
        temp_v8 = DAT_0059dbe3 - '\b';
      }
    }
    DAT_0059dbe3 = temp_v8;
    DAT_0059dbe2 = DAT_0059dbe5 + DAT_0059dbe2;
    temp_v12 = 3;
  }
  temp_v9 = padButtonRepeat(3);
  if (temp_v9 == 0) {
    FUN_00202178(3);
    temp_v9 = padButtonRepeat();
    if (temp_v9 != 0) goto LAB_003c00cc;
    temp_v9 = padButtonRepeat(4);
    if (temp_v9 == 0) {
      FUN_00202178(4);
      temp_v9 = padButtonRepeat();
      if (temp_v9 != 0) goto LAB_003c0144;
      goto LAB_003c00f8;
    }
LAB_003c0144:
    if (DAT_0059dbe2 != '\b' && DAT_0059dbe2 != -8) {
      if (DAT_0059dbe3 != '\0') {
        DAT_0059dbe3 = DAT_0059dbe3 - '\x01';
      }
      else {
        DAT_0059dbe3 = '\x0f';
      }
      goto LAB_003c00f4;
    }
LAB_003c03d4:
    if (DAT_0059dbe4 != '\0') {
      DAT_0059dbe4 = DAT_0059dbe4 - '\x01';
    }
    else {
      DAT_0059dbe4 = '\x0f';
    }
  }
  else {
LAB_003c00cc:
    if (DAT_0059dbe2 != '\b' && DAT_0059dbe2 != -8) {
      if (DAT_0059dbe3 != '\x0f') {
        DAT_0059dbe3 = DAT_0059dbe3 + '\x01';
      }
      else {
        DAT_0059dbe3 = '\0';
      }
LAB_003c00f4:
      temp_v12 = temp_v12 | 2;
LAB_003c00f8:
      temp_v9 = padButtonRepeat(7);
      if (temp_v9 == 0) {
        FUN_00202178(7);
        temp_v9 = padButtonRepeat();
        if (temp_v9 == 0) {
          temp_v9 = padButtonRepeat(8);
          if (temp_v9 == 0) {
            FUN_00202178(8);
            temp_v9 = padButtonRepeat();
            if (temp_v9 == 0) goto LAB_003c01a8;
          }
          goto LAB_003c03d4;
        }
      }
    }
    if (DAT_0059dbe4 != '\x0f') {
      DAT_0059dbe4 = DAT_0059dbe4 + '\x01';
    }
    else {
      DAT_0059dbe4 = '\0';
    }
  }
  temp_v12 = temp_v12 | 2;
LAB_003c01a8:
  DAT_006472dc = DAT_006352f0;
  DAT_006472e0 = DAT_006352f4;
  DAT_006472e4 = (float)DAT_006352f8;
  DAT_006472e8 = DAT_006352fc;
  DAT_006472ec = (float)DAT_00634c90;
  DAT_006472f0 = (float)DAT_00634c94;
  DAT_006472f4 = (float)DAT_00634c98;
  DAT_006472f8 = (float)DAT_00634c9c;
  FUN_002f8794();
  temp_v23 = 0.0f;
  temp_v28 = DAT_006472dc;
  temp_v29 = DAT_006472e0;
  temp_v30 = DAT_006472e4;
  temp_v22 = CONCAT44(DAT_006472dc,DAT_006472e4);
  temp_v31 = DAT_006472e8;
  temp_v24 = (unsigned long long)(unsigned int)DAT_006472e8;
  temp_v19 = 0.19634955f;
  temp_v18 = 40.743664f;
  temp_v20 = -200.0f;
  temp_v21 = 200.0f;
  temp_v9 = -8;
  temp_v15 = DAT_006472e0;
  do {
    temp_v14 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v16 = (float)in_d9;
    temp_v17 = temp_v14 * temp_v19 * temp_v18;
    temp_v14 = temp_v17;
    FUN_001a1ee0();
    temp_v29 = temp_v15 + temp_v17 * temp_v20;
    FUN_001b63b0();
    if (DAT_0059dbe2 == temp_v9) {
      in_d10 = CONCAT44(temp_v29,temp_v30);
      temp_v23 = temp_v14 * temp_v21;
      temp_v16 = temp_v28;
    }
    in_d9 = CONCAT44(temp_v14 * temp_v21,temp_v16);
    if (DAT_0059dbe2 + temp_v9 == 0) {
      temp_v10 = 0x10000;
      memAlloc(0x10000,0x100,0,0x68,0x10,1);
      *(float *)(temp_v10 + 8) = temp_v28;
      *(float *)(temp_v10 + 0xc) = temp_v29;
      *(float *)(temp_v10 + 0x10) = temp_v30;
      *(float *)(temp_v10 + 0x14) = temp_v31;
      temp_v7 = DAT_005c140c;
      temp_v6 = DAT_005c1408;
      temp_v5 = DAT_005c1404;
      temp_v4 = DAT_005c1400;
      temp_v3 = DAT_005c13fc;
      temp_v2 = DAT_005c13f8;
      temp_v11 = DAT_005c13f4;
      *(unsigned int *)(temp_v10 + 0x20) = DAT_005c13f0;
      *(unsigned int *)(temp_v10 + 0x24) = temp_v11;
      *(unsigned int *)(temp_v10 + 0x28) = temp_v2;
      *(unsigned int *)(temp_v10 + 0x2c) = temp_v3;
      *(unsigned int *)(temp_v10 + 0x30) = temp_v4;
      *(unsigned int *)(temp_v10 + 0x34) = temp_v5;
      *(unsigned int *)(temp_v10 + 0x38) = temp_v6;
      *(unsigned int *)(temp_v10 + 0x3c) = temp_v7;
      temp_v7 = DAT_005c142c;
      temp_v6 = DAT_005c1428;
      temp_v5 = DAT_005c1424;
      temp_v4 = DAT_005c1420;
      temp_v3 = DAT_005c141c;
      temp_v2 = DAT_005c1418;
      temp_v11 = DAT_005c1414;
      *(unsigned int *)(temp_v10 + 0x40) = DAT_005c1410;
      *(unsigned int *)(temp_v10 + 0x44) = temp_v11;
      *(unsigned int *)(temp_v10 + 0x48) = temp_v2;
      *(unsigned int *)(temp_v10 + 0x4c) = temp_v3;
      *(unsigned int *)(temp_v10 + 0x50) = temp_v4;
      *(unsigned int *)(temp_v10 + 0x54) = temp_v5;
      *(unsigned int *)(temp_v10 + 0x58) = temp_v6;
      *(unsigned int *)(temp_v10 + 0x5c) = temp_v7;
      *(unsigned int *)(temp_v10 + 0x60) = 0;
      *(int *)(temp_v10 + 0x18) = (int)((unsigned long long)in_d9 >> 0x20);
      *(unsigned int *)(temp_v10 + 0x1c) = 0xff008080;
      *(unsigned int *)(temp_v10 + 4) = 7;
      effMenuListAppend(temp_v10,1);
      temp_v10 = displayIsStereoActive();
    }
    else {
      temp_v10 = 0x10000;
      memAlloc(0x10000,0x100,0,0x68,0x10,1);
      *(float *)(temp_v10 + 8) = temp_v28;
      *(float *)(temp_v10 + 0xc) = temp_v29;
      *(float *)(temp_v10 + 0x10) = temp_v30;
      *(float *)(temp_v10 + 0x14) = temp_v31;
      temp_v7 = DAT_005c140c;
      temp_v6 = DAT_005c1408;
      temp_v5 = DAT_005c1404;
      temp_v4 = DAT_005c1400;
      temp_v3 = DAT_005c13fc;
      temp_v2 = DAT_005c13f8;
      temp_v11 = DAT_005c13f4;
      *(unsigned int *)(temp_v10 + 0x20) = DAT_005c13f0;
      *(unsigned int *)(temp_v10 + 0x24) = temp_v11;
      *(unsigned int *)(temp_v10 + 0x28) = temp_v2;
      *(unsigned int *)(temp_v10 + 0x2c) = temp_v3;
      *(unsigned int *)(temp_v10 + 0x30) = temp_v4;
      *(unsigned int *)(temp_v10 + 0x34) = temp_v5;
      *(unsigned int *)(temp_v10 + 0x38) = temp_v6;
      *(unsigned int *)(temp_v10 + 0x3c) = temp_v7;
      temp_v7 = DAT_005c142c;
      temp_v6 = DAT_005c1428;
      temp_v5 = DAT_005c1424;
      temp_v4 = DAT_005c1420;
      temp_v3 = DAT_005c141c;
      temp_v2 = DAT_005c1418;
      temp_v11 = DAT_005c1414;
      *(unsigned int *)(temp_v10 + 0x40) = DAT_005c1410;
      *(unsigned int *)(temp_v10 + 0x44) = temp_v11;
      *(unsigned int *)(temp_v10 + 0x48) = temp_v2;
      *(unsigned int *)(temp_v10 + 0x4c) = temp_v3;
      *(unsigned int *)(temp_v10 + 0x50) = temp_v4;
      *(unsigned int *)(temp_v10 + 0x54) = temp_v5;
      *(unsigned int *)(temp_v10 + 0x58) = temp_v6;
      *(unsigned int *)(temp_v10 + 0x5c) = temp_v7;
      *(unsigned int *)(temp_v10 + 0x60) = 0;
      *(int *)(temp_v10 + 0x18) = (int)((unsigned long long)in_d9 >> 0x20);
      *(unsigned int *)(temp_v10 + 0x1c) = 0xff808080;
      *(unsigned int *)(temp_v10 + 4) = 7;
      effMenuListAppend(temp_v10,1);
      temp_v10 = displayIsStereoActive();
    }
    if (temp_v10 != 0) {
      temp_v11 = 0x10000;
      memAlloc(0x10000,0x100,0,0x68,0x10,1);
      rt_memcpy_w();
      effMenuListAppend(temp_v11,2);
    }
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 9);
  temp_v27 = -(float)in_d10;
  temp_v20 = (float)in_d9;
  temp_v25 = -temp_v20;
  temp_v26 = -(float)((unsigned long long)in_d10 >> 0x20);
  temp_v19 = (float)VectorSignedToFloat((int)DAT_0059dbe3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v18 = temp_v19 * 0.3926991f * temp_v18;
  temp_v19 = temp_v18;
  FUN_001b63b0();
  temp_v28 = temp_v25 - temp_v18 * temp_v23;
  temp_v29 = temp_v26;
  temp_v18 = temp_v19;
  FUN_001a1ee0();
  temp_v30 = temp_v27 - temp_v19 * temp_v23;
  FUN_002b3ed8(&temp_v28,&temp_v25,0xff00c0c0,0);
  temp_v19 = temp_v18;
  FUN_001b63b0();
  temp_v28 = temp_v20 + temp_v18 * temp_v23;
  temp_v29 = (float)((unsigned long long)in_d10 >> 0x20);
  FUN_001a1ee0();
  temp_v30 = (float)in_d10 + temp_v19 * temp_v23;
  DAT_006472ec = (float)((unsigned long long)temp_v22 >> 0x20);
  DAT_006472f4 = (float)temp_v22;
  DAT_006472f8 = (float)temp_v24;
  DAT_006472dc = temp_v28 - DAT_006472ec;
  DAT_006472e0 = temp_v29 - temp_v15;
  DAT_006472e4 = temp_v30 - DAT_006472f4;
  DAT_006472e8 = temp_v31 - DAT_006472f8;
  temp_v18 = romwright_sqrt_4(DAT_006472dc * DAT_006472dc + DAT_006472e0 * DAT_006472e0 +
                DAT_006472e4 * DAT_006472e4);
  temp_v19 = (float)(temp_v24 >> 0x20);
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v18 < temp_v19) << 0x1f) |
          ((unsigned int)(temp_v18 == temp_v19) << 0x1e);
  temp_v13 = temp_v0 | ((unsigned int)((temp_v18 != temp_v18) || (temp_v19 != temp_v19)) << 0x1c);
  temp_v1 = (unsigned char)(temp_v0 >> 0x18);
  if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(temp_v13 >> 0x1c) & 1)) {
    DAT_006472dc = DAT_006472dc / temp_v18;
    DAT_006472e0 = DAT_006472e0 / temp_v18;
    DAT_006472e4 = DAT_006472e4 / temp_v18;
  }
  DAT_006472f0 = temp_v15;
  if ((temp_v12 & 2) != 0) {
    FUN_001b640c();
    FUN_001bbde0();
    FUN_001bc2f0();
    VectorSignedToFloat((int)DAT_0059dbe4,(unsigned char)(temp_v13 >> 0x16) & 3);
    temp_v18 = DAT_006472dc;
    temp_v19 = DAT_006472e0;
    temp_v23 = DAT_006472e4;
    temp_v15 = DAT_006472e8;
    FUN_001bc2f0(&DAT_006472dc,(int)DAT_0059dbe4);
    DAT_006472f8 = temp_v15;
    DAT_006472f4 = temp_v23;
    DAT_006472f0 = temp_v19;
    DAT_006472ec = temp_v18;
    FUN_001bc3e4();
    DAT_0063530c = DAT_006472e8;
    DAT_00635300 = DAT_006472dc;
    DAT_00635304 = DAT_006472e0;
    DAT_00635308 = DAT_006472e4;
  }
  asdDebugLog(8,0x30,0,&LAB_003c0768,DAT_0059dbe2 + 8,(int)DAT_0059dbe3,(int)DAT_0059dbe4);
  DAT_00634c48 = DAT_0059dbe2;
  DAT_00634c49 = DAT_0059dbe3;
  DAT_00634c4a = DAT_0059dbe4;
  temp_v9 = padButtonIsPressed(1);
  if (temp_v9 == 0) {
    FUN_00202178(1);
    temp_v9 = padButtonIsPressed();
    if (temp_v9 == 0) {
      return temp_v12 | 0x200000;
    }
  }
  return temp_v12 & 0xfffffffe;
}

} /* extern "C" */
