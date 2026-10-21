/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00490a10` (_code @ 0x490a10, 0x640 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016c69c(...);
int FUN_0016c6f0(unsigned int, int, unsigned int);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int drawSetColorFromRGBA8(unsigned int);
int FUN_00185dd4(...);
int FUN_002e1208(...);
int effectSetByteSpeed(...);
int words2Copy(int, float *);
int VectorSignedToFloat(...);

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_1_stack;

extern unsigned int g_renderCtx; /* 0x59dbb4 */
extern unsigned char g_gameState; /* 0x5f15fc */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int gameFlagsGetBlock(void);
extern unsigned int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c69c. */
/* Supplied declaration required: FUN_0016c6f0. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: FUN_00185dd4. */
/* Supplied declaration required: FUN_002e1208. */
/* Supplied declaration required: effectSetByteSpeed. */
/* Supplied declaration required: words2Copy. */


void FUN_00490a10(int param_1)

{
/* irregular: 4 goto(s); irregular input(s): in_fpscr; 10 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int *puVar8;
  int temp_v7;
  unsigned char temp_v8;
  unsigned int in_fpscr;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned long long temp_v13;
  unsigned long long temp_v14;
  float temp_v15;
  float temp_v16;
  int temp_v17;
  int temp_v18 [15];
  
  temp_v2 = gameFlagsGetBlock();
  words2Copy(param_1 + 0x4d0,&temp_v15);
  temp_v12 = 0.0f;
  temp_v18[0] = 0;
  temp_v17 = 0;
  temp_v11 = temp_v12;
  temp_v3 = FUN_001692ac(1,0);
  FUN_0016c6f0(g_renderCtx,3,temp_v3);
  temp_v7 = 0;
  if (0 < *(int *)(param_1 + 0x7b8c)) {
    temp_v14 = 0xc1800000;
    temp_v13 = 0x4100000040400000;
    do {
      temp_v4 = *(unsigned int *)(temp_v2 + 0x1510);
      temp_v6 = param_1 + temp_v7 * 100;
      puVar8 = (unsigned int *)(temp_v6 + 0x178c);
      temp_v8 = temp_v4 == 0;
      if (temp_v8) {
        temp_v4 = (unsigned int)*(unsigned short *)(temp_v6 + 0x17b8);
      }
      if (!temp_v8 || temp_v4 != 8) {
        temp_v5 = *(int *)(temp_v2 + 0x1514);
        if (temp_v5 != 1) {
          temp_v1 = *(short *)(temp_v6 + 0x17b8);
          if (temp_v5 != 2) {
            if (((temp_v1 != 5 && temp_v1 != 6) && (temp_v1 != 8 && temp_v1 != 9)) &&
               (temp_v1 != 10 && temp_v1 != 0xc)) {
LAB_00490b04:
              if ((*(short *)(temp_v6 + 0x17c0) != 0) || ((*(int *)((unsigned char *)&g_gameState + 0x660)) != 0)) {
                drawSetColorFromRGBA8(*(unsigned int *)(temp_v6 + 0x17d4));
                effectSetByteSpeed(*(unsigned int *)(temp_v6 + 0x17d4) & 0xff);
                if (*(short *)(temp_v6 + 0x17c2) == 0x1bd2) {
                  if (*(int *)(param_1 + 0x4c0) != 0) {
                    *(unsigned int *)(temp_v6 + 0x17d4) = 0xffffff00;
                    effectSetByteSpeed(0);
                  }
                  else {
                    *(unsigned int *)(temp_v6 + 0x17d4) = 0xffffffff;
                    effectSetByteSpeed(0xff);
                    temp_v9 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x17c8),
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v10 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x17c4),
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    FUN_001835b4(9,*puVar8,0x1bd3,
                                 (int)(((temp_v10 + temp_v15) - (float)temp_v13) +
                                      *(float *)(temp_v6 + 0x17a8)),
                                 (int)(((temp_v9 + temp_v16) - (float)temp_v13) +
                                      *(float *)(temp_v6 + 0x17ac)),0xb);
                  }
                }
                if (*(short *)(temp_v6 + 0x17c2) == 0x1bd4) {
                  if (*(int *)(param_1 + 0x4c0) != 0) {
                    *(unsigned int *)(temp_v6 + 0x17d4) = 0xffffff00;
                    effectSetByteSpeed(0);
                  }
                  else {
                    *(unsigned int *)(temp_v6 + 0x17d4) = 0xffffffff;
                    effectSetByteSpeed(0xff);
                    temp_v9 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x17c8),
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v10 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x17c4),
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    FUN_001835b4(9,*puVar8,0x1bd5,
                                 (int)(((temp_v10 + temp_v15) - (float)temp_v13) +
                                      *(float *)(temp_v6 + 0x17a8)),
                                 (int)(((temp_v9 + temp_v16) - (float)temp_v13) +
                                      *(float *)(temp_v6 + 0x17ac)),0xb);
                  }
                }
                if (*(short *)(temp_v6 + 0x17c2) == 0x1bd6) {
                  if (*(int *)(param_1 + 0x4c0) != 0) {
                    *(unsigned int *)(temp_v6 + 0x17d4) = 0xffffff00;
                    effectSetByteSpeed(0);
                  }
                  else {
                    *(unsigned int *)(temp_v6 + 0x17d4) = 0xffffffff;
                    effectSetByteSpeed(0xff);
                    temp_v9 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x17c8),
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v10 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x17c4),
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    FUN_001835b4(9,*puVar8,0x1bd7,
                                 (int)(((temp_v10 + temp_v15) - (float)temp_v13) +
                                      *(float *)(temp_v6 + 0x17a8)),
                                 (int)(((temp_v9 + temp_v16) - (float)temp_v13) +
                                      *(float *)(temp_v6 + 0x17ac)),0xb);
                  }
                }
                if (*(short *)(temp_v6 + 0x17c2) == 0x1bd8) {
                  if (*(int *)(param_1 + 0x4c0) != 0) {
                    *(unsigned int *)(temp_v6 + 0x17d4) = 0xffffff00;
                    effectSetByteSpeed(0);
                  }
                  else {
                    *(unsigned int *)(temp_v6 + 0x17d4) = 0xffffffff;
                    effectSetByteSpeed(0xff);
                    temp_v9 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x17c8),
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v10 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x17c4),
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    FUN_001835b4(9,*puVar8,0x1bd7,
                                 (int)(((temp_v10 + temp_v15) - (float)temp_v13) +
                                      *(float *)(temp_v6 + 0x17a8)),
                                 (int)(((temp_v9 + temp_v16) - (float)temp_v13) +
                                      *(float *)(temp_v6 + 0x17ac)),0xb);
                  }
                }
                temp_v4 = (unsigned int)*(unsigned short *)(temp_v6 + 0x17c2);
                temp_v5 = 0;
                if (temp_v4 != 0x1bdb) {
                  temp_v5 = temp_v4 - 0x1c00;
                }
                if (!(temp_v4 == 0x1bdb || temp_v5 == 0xe)) {
                  temp_v5 = 0;
                  if (temp_v4 != 0x1c0f) {
                    temp_v5 = temp_v4 - 0x1000;
                  }
                  if (temp_v4 == 0x1c0f || temp_v5 == 0xc10) goto LAB_00490c50;
                  temp_v5 = 0;
                  if (temp_v4 != 0x1bd2) {
                    temp_v5 = temp_v4 - 0x1b00;
                  }
                  if (temp_v4 == 0x1bd2 || temp_v5 == 0xd6) goto LAB_00490c50;
                  temp_v9 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x17c8),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v10 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x17c4),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  FUN_00185dd4(9,*puVar8,temp_v4,(int)(temp_v10 + temp_v15),(int)(temp_v9 + temp_v16),
                               *(unsigned int *)(temp_v6 + 0x17cc),*(unsigned int *)(temp_v6 + 0x17d0),0xb);
                }
                else {
LAB_00490c50:
                  temp_v9 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x17c8),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v10 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x17c4),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  FUN_001835b4(9,*puVar8,temp_v4,(int)(temp_v15 + *(float *)(temp_v6 + 0x17a8) + temp_v10)
                               ,(int)(temp_v16 + *(float *)(temp_v6 + 0x17ac) + temp_v9),0xb);
                }
                if (((*(unsigned int *)(temp_v2 + 0x1510) != 0) &&
                    ((*(short *)(temp_v6 + 0x17b8) != 5 || (*(int *)(temp_v2 + 0x1514) == 2)))) &&
                   (*(char *)(temp_v6 + 0x17e0) != '\0')) {
                  FUN_002e1208(0x13,*(unsigned short *)(temp_v6 + 0x17de),temp_v18,&temp_v17);
                  temp_v0 = *(char *)(temp_v6 + 0x17e0);
                  if (temp_v0 != '\x01') {
                    temp_v9 = (float)((unsigned long long)temp_v13 >> 0x20);
                    if (temp_v0 != '\x02') {
                      if (temp_v0 != '\x03') {
                        if (temp_v0 == '\x04') {
                          temp_v12 = -4.0f;
                          temp_v11 = temp_v9;
                        }
                      }
                      else {
                        temp_v11 = (float)VectorSignedToFloat(temp_v18[0],(unsigned char)(in_fpscr >> 0x16) & 3
                                                           );
                        temp_v12 = -4.0f;
                        temp_v11 = -temp_v11;
                      }
                    }
                    else {
                      temp_v11 = (float)VectorSignedToFloat(temp_v18[0] / 2,
                                                          (unsigned char)(in_fpscr >> 0x16) & 3);
                      temp_v12 = temp_v9;
                      temp_v11 = -temp_v11;
                    }
                  }
                  else {
                    temp_v12 = (float)temp_v14;
                    temp_v11 = (float)VectorSignedToFloat(temp_v18[0] / 2,(unsigned char)(in_fpscr >> 0x16) & 3
                                                       );
                    temp_v11 = -temp_v11;
                  }
                  temp_v9 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x17c8),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v10 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x17c4),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  FUN_00185dd4(9,0x13,*(unsigned short *)(temp_v6 + 0x17de),
                               (int)(temp_v15 + *(float *)(temp_v6 + 0x17a8) + temp_v10 + temp_v11),
                               (int)(temp_v16 + *(float *)(temp_v6 + 0x17ac) + temp_v9 + temp_v12),
                               temp_v18[0],temp_v17,0xb);
                }
              }
            }
          }
          else if ((temp_v1 != 2 && temp_v1 != 6) && temp_v1 != 9) goto LAB_00490b04;
        }
        else if (*(short *)(temp_v6 + 0x17b8) != 2 && *(short *)(temp_v6 + 0x17b8) != 0xc)
        goto LAB_00490b04;
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < *(int *)(param_1 + 0x7b8c));
  }
  FUN_00183bb0();
  FUN_0016c69c(g_renderCtx,3);
  return;
}

} /* extern "C" */
