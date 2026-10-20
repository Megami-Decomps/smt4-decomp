/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046868c` (_code @ 0x46868c, 0x1bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_001835b4(...);
int FUN_001879d0(unsigned int);
int FUN_002a1850(float *, int, unsigned int, float *);
int FUN_0039bec8(int);
int VectorSignedToFloat(...);

/* stack frame of param_3: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_3_stack;

extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned int FUN_00152f54(void);
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001834a4(void);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_002a1850. */
/* Supplied declaration required: FUN_0039bec8. */


void FUN_0046868c(int param_1,unsigned int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  unsigned int temp_v11;
  long long temp_v12;
  float temp_v13;
  float fStack_70;
  unsigned int temp_v14;
  unsigned int temp_v15;
  float temp_v16;
  float temp_v17;
  unsigned int temp_v18;
  
  temp_v15 = 8;
  temp_v14 = 0x18d;
  temp_v1 = FUN_001834a4();
  temp_v7 = 0.31f;
  temp_v5 = (int)**(short **)(temp_v1 + 0xc);
  temp_v0 = (*(short **)(temp_v1 + 0xc))[1];
  FUN_001879d0(g_renderCtx);
  temp_v12 = (unsigned long long)(unsigned int)(int)temp_v7 << 0x20;
  temp_v4 = 0;
  do {
    temp_v11 = (unsigned int)((unsigned long long)temp_v12 >> 0x20);
    temp_v1 = param_1 + temp_v4 * 10;
    if (*(char *)(temp_v1 + 0xe46) != '\0') {
      temp_v3 = *(unsigned short *)(temp_v1 + 0xe48) - 1;
      temp_v6 = temp_v3 == 0;
      if (-1 < temp_v3) {
        param_3 = *(int *)(param_1 + 0xabc);
        temp_v6 = param_3 == temp_v3;
      }
      if ((!temp_v6 && (-1 < temp_v3 && temp_v3 <= param_3)) &&
         (temp_v3 = *(int *)(param_1 + temp_v3 * 4 + 0xa34), temp_v3 != 0)) {
        temp_v3 = *(int *)(temp_v3 + 4);
        temp_v18 = *(unsigned int *)(temp_v3 + 0x1bc);
        temp_v16 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 0xe4c),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v16 = *(float *)(temp_v3 + 0x1b4) + temp_v16;
        temp_v17 = (float)VectorSignedToFloat((int)*(char *)(temp_v1 + 0xe4e),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v17 = *(float *)(temp_v3 + 0x1b8) + temp_v17;
        temp_v2 = FUN_00152f54();
        FUN_002a1850(&temp_v13,0,temp_v2,&temp_v16);
        temp_v7 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v10 = (float)VectorSignedToFloat(temp_v5 / 2,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v8 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v9 = (float)VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v12 = romwright_piece_4_4(temp_v11,(int)(fStack_70 - temp_v9));
        temp_v3 = (int)((temp_v13 - temp_v7) + temp_v10 + temp_v8);
        FUN_001835b4(2,temp_v15,temp_v14,temp_v3,(int)(fStack_70 - temp_v9),2);
        temp_v1 = 0;
        do {
          FUN_0039bec8(temp_v1);
          efctSetSpeed();
          param_3 = temp_v1 + 0x18e;
          FUN_001835b4(2,8,param_3,temp_v3,(int)temp_v12,6);
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 3);
        efctSetSpeed();
      }
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 4);
  return;
}

} /* extern "C" */
