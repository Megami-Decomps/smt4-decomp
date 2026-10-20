/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004884d8` (_code @ 0x4884d8, 0x3e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_00185dd4(...);
int FUN_002e1208(int, unsigned int, unsigned int [3], int *);
int FUN_00492c34(int);
int words2Copy(int, float *);
int VectorFloatToUnsigned(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_1: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
} param_1_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00185dd4. */
/* Supplied declaration required: FUN_002e1208. */
extern unsigned long long *sub68OwnerGetBlock60(void);
/* Supplied declaration required: FUN_00492c34. */
/* Supplied declaration required: words2Copy. */
extern int NaviMain_GetCurrentMap(int);


void FUN_004884d8(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned long long *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar8;
  unsigned int *puVar9;
  int temp_v6;
  unsigned int temp_v7;
  int *piVar12;
  int temp_v8;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  float temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  unsigned long long temp_v17;
  unsigned long long temp_v18;
  unsigned int temp_v19;
  unsigned long long temp_v20;
  float temp_v21;
  float temp_v22;
  unsigned long long temp_v23;
  unsigned int temp_v24 [3];
  unsigned int temp_v25;
  int temp_v26;
  float temp_v27;
  float temp_v28;
  int temp_v29;
  int temp_v30;
  
  temp_v2 = gameFlagsGetBlock();
  temp_v25 = 0xb;
  temp_v29 = param_1 + 0x4cc;
  puVar4 = (unsigned long long *)sub68OwnerGetBlock60();
  temp_v30 = temp_v2 + 0xd00;
  temp_v16 = *puVar4;
  if (*(char *)(temp_v2 + 0xd8e) == '\f') {
    temp_v3 = 0x1b65;
    temp_v17 = 0x40e000003cc49ba6;
  }
  else {
    temp_v3 = 0x1b8d;
    temp_v17 = 0x404000003c449ba6;
  }
  FUN_002e1208(0xb,temp_v3,temp_v24,&temp_v26);
  temp_v4 = *(unsigned int *)(param_1 + 0x10);
  FUN_00492c34(temp_v29);
  words2Copy(param_1 + 0x4d0,&temp_v27);
  temp_v7 = 0;
  temp_v21 = 160.0f;
  temp_v22 = 120.0f;
  temp_v23 = 0x3f000000;
  do {
    temp_v2 = param_1 + temp_v7 * 0x10;
    if ((*(short *)(temp_v2 + 0x66) != 0) &&
       (temp_v5 = NaviMain_GetCurrentMap(temp_v29), temp_v5 == *(short *)(temp_v2 + 0x66))) {
      temp_v9 = *(char *)(temp_v30 + 0x8e) == '\f';
      temp_v5 = param_1 + *(char *)(temp_v2 + 0x68) * 8;
      puVar9 = (unsigned int *)(temp_v5 + 0x148c);
      puVar8 = (unsigned int *)(temp_v5 + 0x1490);
      if (!temp_v9) {
        temp_v10 = (float)VectorSignedToFloat(*puVar9,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v11 = (float)VectorSignedToFloat(*puVar8,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v0 = (short)(int)(temp_v10 * (float)temp_v23);
        temp_v1 = (short)(int)(temp_v11 * (float)temp_v23);
      }
      else {
        temp_v10 = (float)VectorSignedToFloat(*puVar9,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v11 = (float)VectorSignedToFloat(*puVar8,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v0 = (short)(int)temp_v10;
        temp_v1 = (short)(int)temp_v11;
      }
      temp_v15 = (float)VectorSignedToFloat((int)temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v12 = VectorSignedToFloat(temp_v26,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v10 = (float)VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v11 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 0x6e),(unsigned char)(in_fpscr >> 0x16) & 3
                                         );
      temp_v13 = VectorSignedToFloat(temp_v24[0],(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v14 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 0x70),(unsigned char)(in_fpscr >> 0x16) & 3
                                         );
      temp_v11 = (float)VectorSignedToFloat((int)(short)(int)(temp_v10 + temp_v11 * (float)temp_v17),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v10 = (float)VectorSignedToFloat((int)(short)(int)(temp_v15 + temp_v14 * (float)temp_v17),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v14 = (float)((unsigned long long)temp_v17 >> 0x20);
      temp_v11 = (float)VectorSignedToFloat((int)(short)(int)(temp_v11 - temp_v14),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v10 = (float)VectorSignedToFloat((int)(short)(int)(temp_v10 - temp_v14),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      if (temp_v9) {
        temp_v14 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x1484),(unsigned char)(in_fpscr >> 0x16) & 3)
        ;
        temp_v15 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x1488),(unsigned char)(in_fpscr >> 0x16) & 3)
        ;
      }
      else {
        temp_v14 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x1484) / 2,
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v15 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x1488) / 2,
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
      }
      temp_v19 = VectorFloatToUnsigned(temp_v12,3);
      temp_v14 = (float)VectorSignedToFloat((int)(temp_v14 - (float)temp_v16),(unsigned char)(in_fpscr >> 0x16) & 3
                                         );
      temp_v12 = VectorFloatToUnsigned(temp_v13,3);
      temp_v20 = romwright_piece_4_4(temp_v19,temp_v12);
      temp_v15 = (float)VectorSignedToFloat((int)(temp_v15 - (float)((unsigned long long)temp_v16 >> 0x20)),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v18 = romwright_piece_4_4((int)(temp_v10 - (temp_v15 - temp_v22)),(int)(temp_v11 - (temp_v14 - temp_v21)));
      if ((temp_v4 & 0x20) == 0) {
        temp_v5 = NaviMain_GetCurrentMap(temp_v29);
        if ((temp_v5 == *(short *)(temp_v2 + 0x66)) &&
           (*(char *)(temp_v2 + 0x6c) == *(char *)(param_1 + 100))) {
          *(unsigned char *)(temp_v2 + 0x69) = 1;
        }
        else {
          *(unsigned char *)(temp_v2 + 0x69) = 0;
        }
      }
      if (*(char *)(temp_v2 + 0x69) != '\0') {
        efctSetSpeed();
        temp_v2 = g_renderCtx;
        temp_v5 = FUN_001692ac(1,0);
        piVar12 = (int *)(temp_v2 + 0x1258);
        temp_v6 = *piVar12;
        temp_v8 = piVar12[temp_v6 + 2];
        *piVar12 = temp_v6 + 1;
        piVar12[temp_v6 + 3] = temp_v5;
        if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v8 != temp_v5) {
          (**(romwright_code **)(temp_v2 + 0x1274))();
          *(unsigned char *)(temp_v2 + 0x1270) = 0;
        }
        temp_v11 = (float)VectorSignedToFloat((int)((unsigned long long)temp_v18 >> 0x20),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v10 = (float)VectorSignedToFloat((int)temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00185dd4(9,0xb,temp_v3,(int)(temp_v27 + temp_v10),(int)(temp_v28 + temp_v11),(int)temp_v20,
                     (int)((unsigned long long)temp_v20 >> 0x20),temp_v25);
        temp_v2 = g_renderCtx;
        piVar12 = (int *)(g_renderCtx + 0x1258);
        temp_v5 = *piVar12;
        temp_v6 = piVar12[temp_v5 + 2];
        *piVar12 = temp_v5 - 1;
        if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v6 != piVar12[temp_v5 + 1]) {
          (**(romwright_code **)(temp_v2 + 0x1274))();
          *(unsigned char *)(temp_v2 + 0x1270) = 0;
        }
      }
    }
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 0x10);
  return;
}

} /* extern "C" */
