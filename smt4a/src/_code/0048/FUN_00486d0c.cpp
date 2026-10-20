/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00486d0c` (_code @ 0x486d0c, 0x3d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001677c0(void);
int FUN_00185dd4(...);
int FUN_002e1208(int, unsigned int, unsigned int [2], unsigned int [2]);
int FUN_00492c34(int);
int FUN_0049359c(int, float *);
int VectorFloatToUnsigned(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_1: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
} param_1_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00185dd4. */
/* Supplied declaration required: FUN_002e1208. */
extern unsigned long long *FUN_00492b84(void);
/* Supplied declaration required: FUN_00492c34. */
/* Supplied declaration required: FUN_0049359c. */
extern int NaviMain_GetCurrentMap(int);


void FUN_00486d0c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned long long *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int *piVar10;
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
  unsigned long long temp_v19;
  float temp_v20;
  float temp_v21;
  unsigned long long temp_v22;
  unsigned int temp_v23 [2];
  float temp_v24;
  float temp_v25;
  int temp_v26;
  unsigned int temp_v27 [2];
  int *temp_v28;
  int temp_v29;
  
  temp_v2 = FUN_00162e8c();
  temp_v26 = param_1 + 0x4cc;
  puVar4 = (unsigned long long *)FUN_00492b84();
  temp_v29 = temp_v2 + 0xd00;
  temp_v16 = *puVar4;
  if (*(char *)(temp_v2 + 0xd8e) == '\f') {
    temp_v3 = 0x1b65;
    temp_v17 = 0x40e000003cc49ba6;
  }
  else {
    temp_v3 = 0x1b8d;
    temp_v17 = 0x404000003c449ba6;
  }
  FUN_002e1208(0xb,temp_v3,temp_v23,temp_v27);
  temp_v4 = *(unsigned int *)(param_1 + 0x10);
  FUN_00492c34(temp_v26);
  temp_v28 = (int *)(param_1 + 0x1488);
  FUN_0049359c(param_1 + 0x4d0,&temp_v24);
  temp_v7 = 0;
  temp_v20 = 160.0f;
  temp_v21 = 120.0f;
  temp_v22 = 0x3f000000;
  do {
    temp_v2 = param_1 + temp_v7 * 0x10;
    if ((*(short *)(temp_v2 + 0x166) != 0) &&
       (temp_v5 = NaviMain_GetCurrentMap(temp_v26), temp_v5 == *(short *)(temp_v2 + 0x166))) {
      temp_v9 = *(char *)(temp_v29 + 0x8e) == '\f';
      temp_v5 = param_1 + *(char *)(temp_v2 + 0x168) * 8;
      temp_v10 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v5 + 0x148c),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v11 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v5 + 0x1490),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      if (!temp_v9) {
        temp_v0 = (short)(int)(temp_v10 * (float)temp_v22);
        temp_v1 = (short)(int)(temp_v11 * (float)temp_v22);
      }
      else {
        temp_v0 = (short)(int)temp_v10;
        temp_v1 = (short)(int)temp_v11;
      }
      temp_v15 = (float)VectorSignedToFloat((int)temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v12 = VectorSignedToFloat(temp_v27[0],(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v10 = (float)VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v11 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 0x16e),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v13 = VectorSignedToFloat(temp_v23[0],(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v14 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 0x170),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v10 = (float)VectorSignedToFloat((int)(short)(int)(temp_v10 + temp_v11 * (float)temp_v17),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v11 = (float)VectorSignedToFloat((int)(short)(int)(temp_v15 + temp_v14 * (float)temp_v17),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v15 = (float)((unsigned long long)temp_v17 >> 0x20);
      temp_v14 = (float)VectorSignedToFloat((int)(short)(int)(temp_v10 - temp_v15),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v10 = (float)VectorSignedToFloat((int)(short)(int)(temp_v11 - temp_v15),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      if (temp_v9) {
        temp_v11 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x1484),(unsigned char)(in_fpscr >> 0x16) & 3)
        ;
        temp_v15 = (float)VectorSignedToFloat(*temp_v28,(unsigned char)(in_fpscr >> 0x16) & 3);
      }
      else {
        temp_v11 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x1484) / 2,
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v15 = (float)VectorSignedToFloat(*temp_v28 / 2,(unsigned char)(in_fpscr >> 0x16) & 3);
      }
      temp_v12 = VectorFloatToUnsigned(temp_v12,3);
      temp_v11 = (float)VectorSignedToFloat((int)(temp_v11 - (float)temp_v16),(unsigned char)(in_fpscr >> 0x16) & 3
                                         );
      temp_v13 = VectorFloatToUnsigned(temp_v13,3);
      temp_v19 = romwright_piece_4_4(temp_v13,temp_v12);
      temp_v15 = (float)VectorSignedToFloat((int)(temp_v15 - (float)((unsigned long long)temp_v16 >> 0x20)),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v18 = romwright_piece_4_4((int)(temp_v10 - (temp_v15 - temp_v21)),(int)(temp_v14 - (temp_v11 - temp_v20)));
      if ((temp_v4 & 0x20) == 0) {
        temp_v5 = NaviMain_GetCurrentMap(temp_v26);
        if ((temp_v5 == *(short *)(temp_v2 + 0x166)) &&
           (*(char *)(temp_v2 + 0x16c) == *(char *)(param_1 + 100))) {
          *(unsigned char *)(temp_v2 + 0x169) = 1;
        }
        else {
          *(unsigned char *)(temp_v2 + 0x169) = 0;
        }
      }
      if (*(char *)(temp_v2 + 0x169) != '\0') {
        FUN_001677c0();
        temp_v2 = DAT_0059dbb4;
        temp_v5 = FUN_001692ac(1,0);
        piVar10 = (int *)(temp_v2 + 0x1258);
        temp_v6 = *piVar10;
        temp_v8 = piVar10[temp_v6 + 2];
        *piVar10 = temp_v6 + 1;
        piVar10[temp_v6 + 3] = temp_v5;
        if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v8 != temp_v5) {
          (**(romwright_code **)(temp_v2 + 0x1274))();
          *(unsigned char *)(temp_v2 + 0x1270) = 0;
        }
        temp_v11 = (float)VectorSignedToFloat((int)((unsigned long long)temp_v18 >> 0x20),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v10 = (float)VectorSignedToFloat((int)temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00185dd4(9,0xb,temp_v3,(int)(temp_v24 + temp_v10),(int)(temp_v25 + temp_v11),
                     (int)((unsigned long long)temp_v19 >> 0x20),(int)temp_v19,0xb);
        temp_v2 = DAT_0059dbb4;
        piVar10 = (int *)(DAT_0059dbb4 + 0x1258);
        temp_v5 = *piVar10;
        temp_v6 = piVar10[temp_v5 + 2];
        *piVar10 = temp_v5 - 1;
        if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v6 != piVar10[temp_v5 + 1]) {
          (**(romwright_code **)(temp_v2 + 0x1274))();
          *(unsigned char *)(temp_v2 + 0x1270) = 0;
        }
      }
    }
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 0x28);
  return;
}

} /* extern "C" */
