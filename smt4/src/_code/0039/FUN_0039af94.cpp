/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039af94` (_code @ 0x39af94, 0x3b0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00231bb8(int, float *);
int FUN_0024c1e4(int, unsigned int, int *, int *);
int FUN_002b0750(...);
int FUN_002bf538(void);
int NaviMain_GetPosY(int);
int VectorFloatToUnsigned(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_1: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_1_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00231bb8. */
/* Supplied declaration required: FUN_0024c1e4. */
/* Supplied declaration required: FUN_002b0750. */
/* Supplied declaration required: FUN_002bf538. */
extern int FUN_002c2950(void);
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int NaviMain_GetCurrentMap(int);
extern unsigned long long *NaviMain_GetCursorPos(void);
/* Supplied declaration required: NaviMain_GetPosY. */


void FUN_0039af94(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned long long *puVar4;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int *piVar10;
  int temp_v8;
  unsigned int temp_v9;
  unsigned char temp_v10;
  unsigned int in_fpscr;
  float temp_v11;
  float temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  float temp_v15;
  float temp_v16;
  unsigned long long temp_v17;
  unsigned long long temp_v18;
  unsigned long long temp_v19;
  unsigned int temp_v20;
  unsigned long long temp_v21;
  float temp_v22;
  float temp_v23;
  unsigned long long temp_v24;
  int temp_v25;
  int temp_v26;
  int temp_v27;
  float temp_v28;
  float temp_v29;
  
  temp_v2 = FUN_002c2950();
  temp_v27 = param_1 + 0x162;
  puVar4 = (unsigned long long *)NaviMain_GetCursorPos();
  temp_v17 = *puVar4;
  if (*(char *)(temp_v2 + 0xd5a) == '\f') {
    temp_v9 = 0x1b65;
    temp_v18 = 0x40e000003cc49ba6;
  }
  else {
    temp_v9 = 0x1b8d;
    temp_v18 = 0x404000003c449ba6;
  }
  FUN_0024c1e4(0x13,temp_v9,&temp_v25,&temp_v26);
  temp_v3 = *(unsigned int *)(param_1 + 0x10);
  NaviMain_GetPosY(temp_v27);
  FUN_00231bb8(param_1 + 0x164,&temp_v28);
  temp_v6 = 0;
  temp_v22 = 160.0f;
  temp_v23 = 120.0f;
  temp_v24 = 0x3f000000;
  do {
    temp_v7 = param_1 + temp_v6 * 0x10;
    if ((*(short *)(temp_v7 + 0x62) != 0) &&
       (temp_v4 = NaviMain_GetCurrentMap(temp_v27), temp_v4 == *(short *)(temp_v7 + 0x62))) {
      temp_v10 = *(char *)(temp_v2 + 0xd5a) == '\f';
      temp_v4 = param_1 + *(char *)(temp_v7 + 100) * 8;
      temp_v11 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0xb88),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v12 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0xb8c),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      if (!temp_v10) {
        temp_v0 = (short)(int)(temp_v11 * (float)temp_v24);
        temp_v1 = (short)(int)(temp_v12 * (float)temp_v24);
      }
      else {
        temp_v0 = (short)(int)temp_v11;
        temp_v1 = (short)(int)temp_v12;
      }
      temp_v15 = (float)VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v13 = VectorSignedToFloat(temp_v26,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v12 = (float)VectorSignedToFloat((int)*(short *)(temp_v7 + 0x6a),(unsigned char)(in_fpscr >> 0x16) & 3
                                         );
      temp_v11 = (float)VectorSignedToFloat((int)temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v14 = VectorSignedToFloat(temp_v25,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v16 = (float)VectorSignedToFloat((int)*(short *)(temp_v7 + 0x6c),(unsigned char)(in_fpscr >> 0x16) & 3
                                         );
      temp_v12 = (float)VectorSignedToFloat((int)(short)(int)(temp_v15 + temp_v12 * (float)temp_v18),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v11 = (float)VectorSignedToFloat((int)(short)(int)(temp_v11 + temp_v16 * (float)temp_v18),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v15 = (float)((unsigned long long)temp_v18 >> 0x20);
      temp_v12 = (float)VectorSignedToFloat((int)(short)(int)(temp_v12 - temp_v15),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v11 = (float)VectorSignedToFloat((int)(short)(int)(temp_v11 - temp_v15),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      if (temp_v10) {
        temp_v15 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0xb80),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v16 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0xb84),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
      }
      else {
        temp_v15 = (float)VectorSignedToFloat(*(int *)(param_1 + 0xb80) / 2,
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v16 = (float)VectorSignedToFloat(*(int *)(param_1 + 0xb84) / 2,
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
      }
      temp_v20 = VectorFloatToUnsigned(temp_v13,3);
      temp_v15 = (float)VectorSignedToFloat((int)(temp_v15 - (float)temp_v17),(unsigned char)(in_fpscr >> 0x16) & 3
                                         );
      temp_v13 = VectorFloatToUnsigned(temp_v14,3);
      temp_v21 = romwright_piece_4_4(temp_v20,temp_v13);
      temp_v16 = (float)VectorSignedToFloat((int)(temp_v16 - (float)((unsigned long long)temp_v17 >> 0x20)),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v19 = romwright_piece_4_4((int)(temp_v11 - (temp_v16 - temp_v23)),(int)(temp_v12 - (temp_v15 - temp_v22)));
      if ((temp_v3 & 0x20) == 0) {
        temp_v4 = NaviMain_GetCurrentMap(temp_v27);
        if ((temp_v4 == *(short *)(temp_v7 + 0x62)) &&
           (*(char *)(temp_v7 + 0x68) == *(char *)(param_1 + 0x60))) {
          *(unsigned char *)(temp_v7 + 0x65) = 1;
        }
        else {
          *(unsigned char *)(temp_v7 + 0x65) = 0;
        }
      }
      if (*(char *)(temp_v7 + 0x65) != '\0') {
        FUN_002bf538();
        temp_v7 = DAT_0044ea00;
        temp_v4 = FUN_002c5d80(1,0);
        piVar10 = (int *)(temp_v7 + 0x124c);
        temp_v5 = *piVar10;
        temp_v8 = piVar10[temp_v5 + 2];
        *piVar10 = temp_v5 + 1;
        piVar10[temp_v5 + 3] = temp_v4;
        if (*(char *)(temp_v7 + 0x1264) != '\0' || temp_v8 != temp_v4) {
          (**(romwright_code **)(temp_v7 + 0x1268))();
          *(unsigned char *)(temp_v7 + 0x1264) = 0;
        }
        temp_v12 = (float)VectorSignedToFloat((int)((unsigned long long)temp_v19 >> 0x20),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v11 = (float)VectorSignedToFloat((int)temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002b0750(9,0x13,temp_v9,(int)(temp_v28 + temp_v11),(int)(temp_v29 + temp_v12),(int)temp_v21,
                     (int)((unsigned long long)temp_v21 >> 0x20),0xb);
        temp_v7 = DAT_0044ea00;
        piVar10 = (int *)(DAT_0044ea00 + 0x124c);
        temp_v4 = *piVar10;
        temp_v5 = piVar10[temp_v4 + 2];
        *piVar10 = temp_v4 - 1;
        if (*(char *)(temp_v7 + 0x1264) != '\0' || temp_v5 != piVar10[temp_v4 + 1]) {
          (**(romwright_code **)(temp_v7 + 0x1268))();
          *(unsigned char *)(temp_v7 + 0x1264) = 0;
        }
      }
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 0x10);
  return;
}

} /* extern "C" */
