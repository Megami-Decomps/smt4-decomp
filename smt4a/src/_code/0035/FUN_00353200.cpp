/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00353200` (_code @ 0x353200, 0x254 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_0025ef68(float *, float *, int);
int FUN_00352bc4(void);
int VectorSignedToFloat(int, int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_1: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_1_stack;

extern int DAT_005806a4; /* 0x5806a4 */
extern int DAT_005806d4; /* 0x5806d4 */
extern int g_lmapScene; /* 0x581288 */
extern short DAT_005f187e; /* 0x5f187e */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern unsigned int randRange(unsigned int);
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_0025ef68. */
/* Supplied declaration required: FUN_00352bc4. */
extern int FUN_0036d984(unsigned int *, float *, unsigned int);


unsigned int FUN_00353200(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  float *pfVar4;
  unsigned int *puVar5;
  int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  unsigned long long temp_v7;
  unsigned long long temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  int temp_v16;
  float temp_v17;
  unsigned int temp_v18;
  float temp_v19;
  float temp_v20;
  float fStack_64;
  float temp_v21;
  float fStack_58;
  float fStack_54;
  
  temp_v3 = 0;
  temp_v10 = 250.0f;
  temp_v11 = 560.0f;
  temp_v12 = 500.0f;
  temp_v9 = 900.0f;
  temp_v7 = 0x3c8efa35420c0000;
  temp_v8 = 0x40a0000041c80000;
  puVar5 = (unsigned int *)(DAT_005806d4 + 0x3d84);
  do {
    temp_v15 = *(float *)(g_lmapScene + 0x24);
    temp_v13 = *(float *)(g_lmapScene + 0x1c);
    temp_v14 = *(float *)(g_lmapScene + 0x20);
    temp_v6 = *(float *)(DAT_005806a4 + 0x18);
    temp_v0 = *puVar5;
    if (DAT_005f187e != 0) {
      if (0 < (int)temp_v0) {
        temp_v4 = (float)VectorSignedToFloat((int)(temp_v0 + 1) / 2,(unsigned char)(in_fpscr >> 0x16) & 3);
        if ((temp_v0 & 1) != 0) {
          temp_v6 = temp_v6 - temp_v4 * (float)temp_v8;
        }
        else {
          temp_v6 = temp_v6 + temp_v4 * (float)temp_v8;
        }
        if ((int)temp_v0 >= 0xd) {
          temp_v1 = randRange(0x32);
          temp_v4 = (float)VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v4 = temp_v4 + temp_v12;
        }
        else {
          temp_v1 = randRange(0x32);
          temp_v4 = (float)VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v4 = temp_v4 + temp_v9;
        }
      }
      else {
        temp_v1 = randRange(0x32);
        temp_v4 = (float)VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v4 = temp_v4 + temp_v9;
      }
    }
    else {
      if (0 < (int)temp_v0) {
        temp_v4 = (float)VectorSignedToFloat((int)(temp_v0 + 1) / 2,(unsigned char)(in_fpscr >> 0x16) & 3);
        if ((temp_v0 & 1) != 0) {
          temp_v6 = temp_v6 - temp_v4 * (float)temp_v7;
        }
        else {
          temp_v6 = temp_v6 + temp_v4 * (float)temp_v7;
        }
      }
      if ((int)temp_v0 >= 0xd) {
        temp_v1 = randRange(0x32);
        temp_v4 = (float)VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v4 = temp_v4 + temp_v10;
      }
      else {
        temp_v1 = randRange(0x32);
        temp_v4 = (float)VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v4 = temp_v4 + temp_v11;
      }
    }
    temp_v6 = temp_v6 * (float)((unsigned long long)temp_v7 >> 0x20);
    temp_v5 = temp_v6;
    FUN_001bc124();
    temp_v13 = temp_v13 + temp_v6 * temp_v4;
    FUN_001bbf0c();
    temp_v15 = temp_v15 + temp_v5 * temp_v4;
    *puVar5 = *puVar5 + 1;
    temp_v19 = temp_v13;
    temp_v21 = temp_v13;
    fStack_58 = temp_v14;
    temp_v18 = *(unsigned int *)(g_lmapScene + 0x24);
    temp_v16 = *(unsigned int *)(g_lmapScene + 0x1c);
    temp_v20 = temp_v14 + (float)temp_v7;
    temp_v17 = *(float *)(g_lmapScene + 0x20) + (float)temp_v7;
    fStack_64 = temp_v15;
    fStack_54 = temp_v15;
    temp_v2 = FUN_0036d984((unsigned int *)&temp_v16,&temp_v19,0);
    if (temp_v2 == -1) {
      temp_v14 = temp_v14 - (float)((unsigned long long)temp_v8 >> 0x20);
      pfVar4 = &temp_v13;
      FUN_0025ef68(&temp_v13,&temp_v21,0);
      if (pfVar4 != (float *)0x0) {
        *(float *)(param_1 + 0x20) = temp_v21;
        *(float *)(param_1 + 0x24) = fStack_58;
        *(float *)(param_1 + 0x28) = fStack_54;
        FUN_00352bc4();
        *(float *)(param_1 + 0x2c) = temp_v19;
        return 1;
      }
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 4) {
      return 0;
    }
  } while( 1 );
}

} /* extern "C" */
