/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c378c` (_code @ 0x3c378c, 0x3a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int FUN_001656a0(...);
int memAlloc(int, int, int, int, int, int);
int FUN_00200bcc(unsigned char *);
int FUN_00202178(int);
int FUN_0020e9dc(unsigned char *);
int FUN_002b3ed8(...);
int FUN_002f8794(void);
int FUN_002ffe14(float *, unsigned int, int);
int FUN_00300124(void);
int FUN_00390038(int);

/* stack frame of param_2: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_2_stack;

extern signed char DAT_0059dbe9; /* 0x59dbe9 */
extern unsigned char DAT_0059ea50; /* 0x59ea50 */
extern unsigned int DAT_0059ea60; /* 0x59ea60 */
extern float DAT_00634c90; /* 0x634c90 */
extern float DAT_00634c94; /* 0x634c94 */
extern float DAT_00634c98; /* 0x634c98 */
extern float DAT_00634c9c; /* 0x634c9c */
extern float DAT_00634ca0; /* 0x634ca0 */
extern float DAT_00634ca4; /* 0x634ca4 */
extern float DAT_00634ca8; /* 0x634ca8 */
extern float DAT_00634cac; /* 0x634cac */
extern unsigned int DAT_006352f0; /* 0x6352f0 */
extern unsigned int DAT_006352f4; /* 0x6352f4 */
extern unsigned int DAT_006352f8; /* 0x6352f8 */
extern unsigned int DAT_006352fc; /* 0x6352fc */
extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_001656a0. */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: FUN_00200bcc. */
/* Supplied declaration required: FUN_00202178. */
/* Supplied declaration required: FUN_0020e9dc. */
/* Supplied declaration required: FUN_002b3ed8. */
/* Supplied declaration required: FUN_002f8794. */
/* Supplied declaration required: FUN_002ffe14. */
/* Supplied declaration required: FUN_00300124. */
/* Supplied declaration required: FUN_00390038. */


unsigned int FUN_003c378c(int param_1,int param_2)

{
/* irregular: 11 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned long long temp_v10;
  unsigned int temp_v11;
  unsigned long long temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float fStack_84;
  float temp_v17;
  float temp_v18;
  float fStack_70;
  float fStack_6c;
  unsigned int temp_v19;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int temp_v20;
  float fStack_54;
  float uStack_50;
  float temp_v21;
  
  temp_v6 = 1;
  if ((DAT_0059ea60 & 2) == 0) {
    temp_v5 = FUN_001656a0(1);
    if (temp_v5 == 0) {
      FUN_00202178(1);
      temp_v5 = FUN_001656a0();
      if (temp_v5 != 0) {
        temp_v6 = 0;
      }
    }
    else {
      temp_v6 = 0;
    }
  }
  DAT_006352f0 = *(unsigned int *)(param_1 + 0x40);
  DAT_006352f4 = *(unsigned int *)(param_1 + 0x44);
  DAT_006352f8 = *(unsigned int *)(param_1 + 0x48);
  DAT_006352fc = *(unsigned int *)(param_1 + 0x4c);
  if (DAT_0059dbe9 == '\0') {
    FUN_00200bcc(&DAT_0059ea50);
  }
  FUN_0020e9dc(&DAT_0059ea50);
  temp_v1 = DAT_006352fc;
  temp_v0 = DAT_006352f8;
  temp_v11 = DAT_006352f4;
  *(unsigned int *)(param_1 + 0x40) = DAT_006352f0;
  *(unsigned int *)(param_1 + 0x44) = temp_v11;
  *(unsigned int *)(param_1 + 0x48) = temp_v0;
  *(unsigned int *)(param_1 + 0x4c) = temp_v1;
  if ((DAT_0059ea60 & 8) != 0) {
    temp_v6 = temp_v6 | 2;
  }
  if (((temp_v6 & 2) != 0) && ((*(unsigned int *)(param_1 + 0x68) & 0x18) != 0)) {
    DAT_006472dc = DAT_00634c90;
    DAT_006472e0 = DAT_00634c94;
    DAT_006472e4 = DAT_00634c98;
    DAT_006472e8 = DAT_00634c9c;
    if (param_2 != 0) {
      DAT_006472ec = DAT_00634ca0;
      DAT_006472f0 = DAT_00634ca4;
      DAT_006472f4 = DAT_00634ca8;
      DAT_006472f8 = DAT_00634cac;
      FUN_002f8794();
    }
    *(unsigned int *)(param_1 + 0x40) = temp_v19;
    *(unsigned int *)(param_1 + 0x44) = uStack_64;
    *(unsigned int *)(param_1 + 0x48) = uStack_60;
    *(unsigned int *)(param_1 + 0x4c) = uStack_5c;
  }
  if (param_2 != 0) {
    FUN_00390038(param_1);
    DAT_006472ec = DAT_00634ca0;
    DAT_006472f0 = DAT_00634ca4;
    DAT_006472f4 = DAT_00634ca8;
    DAT_006472f8 = DAT_00634cac;
    DAT_006472dc = DAT_006472dc - DAT_00634ca0;
    DAT_006472e0 = DAT_006472e0 - DAT_00634ca4;
    DAT_006472e4 = DAT_006472e4 - DAT_00634ca8;
    DAT_006472e8 = DAT_006472e8 - DAT_00634cac;
  }
  else {
    DAT_006472dc = *(float *)(param_1 + 0x40);
    DAT_006472e0 = *(float *)(param_1 + 0x44);
    DAT_006472e4 = *(float *)(param_1 + 0x48);
    DAT_006472e8 = *(float *)(param_1 + 0x4c);
  }
  temp_v3 = DAT_006472e4;
  temp_v9 = DAT_006472e0;
  temp_v2 = DAT_006472dc;
  temp_v8 = 0.0f;
  temp_v12 = CONCAT44(DAT_006472e8,DAT_006472e4);
  temp_v7 = DAT_006472dc * DAT_006472dc;
  DAT_006472dc = DAT_00634c90;
  DAT_006472e0 = DAT_00634c94;
  DAT_006472e4 = DAT_00634c98;
  DAT_006472e8 = DAT_00634c9c;
  temp_v10 = CONCAT44(temp_v2,romwright_sqrt_4(temp_v7 + 0.0f + temp_v3 * temp_v3));
  if (param_2 != 0) {
    DAT_006472ec = DAT_00634ca0;
    DAT_006472f0 = DAT_00634ca4;
    DAT_006472f4 = DAT_00634ca8;
    DAT_006472f8 = DAT_00634cac;
    FUN_002f8794();
  }
  temp_v4 = DAT_006472e8;
  temp_v7 = DAT_006472e4;
  temp_v3 = DAT_006472e0;
  temp_v2 = DAT_006472dc;
  temp_v14 = DAT_006472dc;
  temp_v13 = -2.0f;
  temp_v16 = DAT_006472e4;
  fStack_84 = DAT_006472e8;
  temp_v15 = DAT_006472e0 + temp_v9;
  if (temp_v15 == temp_v8) {
    temp_v15 = DAT_006472e0 + -2.0f;
  }
  if (temp_v8 < (float)temp_v10) {
    FUN_002ffe14(&temp_v14,0xff00c0c0,0);
  }
  temp_v11 = (unsigned int)((unsigned long long)temp_v10 >> 0x20);
  temp_v17 = temp_v14;
  fStack_70 = temp_v16;
  fStack_6c = fStack_84;
  temp_v18 = temp_v3 + temp_v13;
  if (temp_v9 != temp_v3) {
    FUN_002ffe14(&temp_v17,0xff808080,0);
    FUN_002b3ed8(&temp_v17,&temp_v14,0xff00c0c0,0);
  }
  DAT_006472e4 = (float)temp_v12;
  DAT_006472e8 = (float)((unsigned long long)temp_v12 >> 0x20);
  DAT_006472ec = temp_v2;
  DAT_006472f0 = temp_v3;
  DAT_006472f4 = temp_v7;
  DAT_006472f8 = temp_v4;
  DAT_006472dc = (float)temp_v11;
  DAT_006472e0 = temp_v9;
  FUN_002f8794();
  temp_v20 = DAT_006472dc;
  fStack_54 = DAT_006472e0;
  uStack_50 = DAT_006472e4;
  temp_v21 = DAT_006472e8;
  FUN_002b3ed8(&temp_v14,&temp_v20,0xff00c0c0,0);
  FUN_002b3ed8(&temp_v17,&temp_v20,0xff00c0c0,0);
  temp_v5 = 0x10000;
  memAlloc(0x10000,0x100,0,0x68,0x10,1);
  *(unsigned int *)(temp_v5 + 0x18) = 0;
  *(unsigned int *)(temp_v5 + 4) = 9;
  *(unsigned int *)(temp_v5 + 8) = temp_v20;
  *(float *)(temp_v5 + 0xc) = fStack_54;
  *(float *)&*(unsigned int *)(temp_v5 + 0x10) = uStack_50;
  *(float *)&*(unsigned int *)(temp_v5 + 0x14) = temp_v21;
  FUN_00300124();
  return temp_v6;
}

} /* extern "C" */
