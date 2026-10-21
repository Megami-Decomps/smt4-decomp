/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003966b8` (_code @ 0x3966b8, 0x3d0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int recordSetPosition(...);
int recordSetDirection(...);
int recordSetOrigin(...);
int FUN_002329a8(...);
int FUN_00267144(void);
int FUN_00273f5c(void);
int gameFlagIsSet(...);
int FUN_00396034(...);
int FUN_00396044(...);
int FUN_0039607c(...);
int VectorSignedToFloat(...);

/* stack frame of param_1: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp88; /* 0x88: local_88 */
} param_1_stack;

extern int g_lmapScene; /* 0x447e88 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: recordSetPosition. */
/* Supplied declaration required: recordSetDirection. */
/* Supplied declaration required: recordSetOrigin. */
/* Supplied declaration required: FUN_002329a8. */
extern int FUN_00232a6c(int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00267144. */
extern int dataTableGetRecordFifty(void);
/* Supplied declaration required: FUN_00273f5c. */
extern int FUN_0027d968(void);
/* Supplied declaration required: gameFlagIsSet. */
extern int gameGetMapBlock(void);
/* Supplied declaration required: FUN_00396034. */
/* Supplied declaration required: FUN_00396044. */
/* Supplied declaration required: FUN_0039607c. */


void FUN_003966b8(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  int temp_v1;
  char *pcVar4;
  int temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  unsigned long long temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  
  temp_v0 = dataTableGetRecordFifty();
  temp_v2 = 0;
  temp_v10 = gameGetMapBlock();
  pcVar4 = (char *)0x0;
  if (0 < temp_v0) {
    temp_v6 = 0x42480000;
    do {
      pcVar2 = pcVar4;
      FUN_00267144();
      temp_v1 = (int)*pcVar2;
      if ((temp_v1 != -1) && (temp_v1 >= 100)) {
        if (*(short *)(pcVar2 + 0x12) != 0) {
          temp_v1 = FUN_0027d968();
          if (temp_v1 == *(short *)(pcVar2 + 0x12)) {
            if ((int)*(short *)(temp_v10 + 0x1e) != (int)*(short *)(pcVar2 + 0x12)) {
              FUN_00273f5c();
              *(unsigned short *)(temp_v10 + 0x1e) = *(unsigned short *)(pcVar2 + 0x12);
            }
            if (((((int)*pcVar2 == *(int *)(param_1 + 4)) &&
                 ((int)pcVar2[1] == *(int *)(param_1 + 8))) &&
                ((temp_v1 = gameFlagIsSet(temp_v2 + 0x310), temp_v1 == 0 &&
                 ((*(short *)(pcVar2 + 0x14) == 0 || (temp_v1 = gameFlagIsSet(), temp_v1 != 0)))))) &&
               (((*(short *)(pcVar2 + 0x16) == 0 || (temp_v1 = gameFlagIsSet(), temp_v1 == 0)) &&
                (temp_v1 = FUN_00232a6c(param_1,1,2), temp_v1 != 0)))) {
              temp_v7 = (float)VectorSignedToFloat((int)*(short *)(pcVar2 + 2),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v8 = (float)VectorSignedToFloat((int)*(short *)(pcVar2 + 4),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v9 = (float)VectorSignedToFloat((int)*(short *)(pcVar2 + 6),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v11 = (unsigned int)((unsigned long long)temp_v6 >> 0x20);
              temp_v12 = VectorSignedToFloat((int)*(short *)(pcVar2 + 8),
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v14 = (unsigned int)temp_v6;
              temp_v5 = temp_v7 - *(float *)(g_lmapScene + 0x1c);
              temp_v3 = temp_v8 - *(float *)(g_lmapScene + 0x20);
              temp_v4 = temp_v9 - *(float *)(g_lmapScene + 0x24);
              temp_v13 = temp_v11;
              temp_v15 = temp_v14;
              temp_v16 = temp_v14;
              if ((int)romwright_sqrt_4(temp_v5 * temp_v5 + temp_v3 * temp_v3 + temp_v4 * temp_v4) < 0x43480000) {
                FUN_00396044(temp_v1);
              }
              FUN_00396034(temp_v1);
              FUN_002329a8(temp_v1,*(unsigned int *)(param_1 + 0x9c));
              recordSetOrigin(temp_v1,&temp_v7);
              recordSetDirection(temp_v1,&temp_v11);
              recordSetPosition(temp_v1,&temp_v14);
              *(int *)(temp_v1 + 0x1c) = (int)*(short *)(pcVar2 + 0x10);
              *(unsigned int *)(temp_v1 + 0x60) = 0;
              FUN_0039607c(temp_v1,temp_v2 + 0x310,(int)*(short *)(pcVar2 + 0x18),
                           (int)*(short *)(pcVar2 + 0x1a),*(unsigned int *)(pcVar2 + 0x1c),
                           (int)*(short *)(pcVar2 + 0x20),(int)*(short *)(pcVar2 + 0x22));
            }
            temp_v2 = temp_v2 + 1;
          }
        }
        else if ((((temp_v1 == *(int *)(param_1 + 4)) && ((int)pcVar2[1] == *(int *)(param_1 + 8))) &&
                 ((*(short *)(pcVar2 + 0x14) == 0 || (temp_v1 = gameFlagIsSet(), temp_v1 != 0)))) &&
                (((*(short *)(pcVar2 + 0x16) == 0 || (temp_v1 = gameFlagIsSet(), temp_v1 == 0)) &&
                 (temp_v1 = FUN_00232a6c(param_1,1,2), temp_v1 != 0)))) {
          temp_v7 = (float)VectorSignedToFloat((int)*(short *)(pcVar2 + 2),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v8 = (float)VectorSignedToFloat((int)*(short *)(pcVar2 + 4),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v9 = (float)VectorSignedToFloat((int)*(short *)(pcVar2 + 6),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v11 = (unsigned int)((unsigned long long)temp_v6 >> 0x20);
          temp_v12 = VectorSignedToFloat((int)*(short *)(pcVar2 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v14 = (unsigned int)temp_v6;
          temp_v5 = temp_v7 - *(float *)(g_lmapScene + 0x1c);
          temp_v3 = temp_v8 - *(float *)(g_lmapScene + 0x20);
          temp_v4 = temp_v9 - *(float *)(g_lmapScene + 0x24);
          temp_v13 = temp_v11;
          temp_v15 = temp_v14;
          temp_v16 = temp_v14;
          if ((int)romwright_sqrt_4(temp_v5 * temp_v5 + temp_v3 * temp_v3 + temp_v4 * temp_v4) < 0x43480000) {
            FUN_00396044(temp_v1);
          }
          FUN_00396034(temp_v1);
          FUN_002329a8(temp_v1,*(unsigned int *)(param_1 + 0x9c));
          recordSetOrigin(temp_v1,&temp_v7);
          recordSetDirection(temp_v1,&temp_v11);
          recordSetPosition(temp_v1,&temp_v14);
          *(int *)(temp_v1 + 0x1c) = (int)*(short *)(pcVar2 + 0x10);
          *(unsigned int *)(temp_v1 + 0x60) = 0;
          FUN_0039607c(temp_v1,0,(int)*(short *)(pcVar2 + 0x18),(int)*(short *)(pcVar2 + 0x1a),
                       *(unsigned int *)(pcVar2 + 0x1c),(int)*(short *)(pcVar2 + 0x20),
                       (int)*(short *)(pcVar2 + 0x22));
        }
      }
      pcVar4 = pcVar4 + 1;
    } while ((int)pcVar4 < temp_v0);
  }
  return;
}

} /* extern "C" */
