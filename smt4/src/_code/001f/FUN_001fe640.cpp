/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fe640` (_code @ 0x1fe640, 0xe18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int FUN_001ff474(void);
int asdListBoxFindItem(...);
int FUN_0027f958(float *, float *, int);
int FUN_002aed34(...);
int FUN_002b76d0(...);
int textFormatBuffer(...);
int padIsButtonPressed(...);
int jobGetWork(...);
int renderCtxSelectTexture(...);
int SBORROW4(unsigned int, int);
int SUB84(double, int);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int strncpy(...);

typedef int romwright_code(...);
/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp150; /* 0x150: local_150 */
} param_1_stack;

extern unsigned char LAB_001fef20; /* 0x1fef20 */
extern unsigned char LAB_001fef24; /* 0x1fef24 */
extern unsigned char LAB_001fef2c; /* 0x1fef2c */
extern unsigned char LAB_001fef34; /* 0x1fef34 */
extern unsigned char LAB_001fef3c; /* 0x1fef3c */
extern unsigned char LAB_001fef44; /* 0x1fef44 */
extern unsigned char LAB_001fef4c; /* 0x1fef4c */
extern unsigned char LAB_001fef54; /* 0x1fef54 */
extern unsigned char LAB_001fef68; /* 0x1fef68 */
extern unsigned int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: SUB84 (SUBPIECE). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_001ff474. */
/* Supplied declaration required: asdListBoxFindItem. */
/* Supplied declaration required: FUN_0027f958. */
/* Supplied declaration required: FUN_002aed34. */
/* Supplied declaration required: FUN_002b76d0. */
extern int padIsButtonRepeat(unsigned int);
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: padIsButtonPressed. */
/* Supplied declaration required: jobGetWork. */
extern int FUN_002c15fc(unsigned int);
/* Supplied declaration required: renderCtxSelectTexture. */
extern int libc_strlen(void);


unsigned int FUN_001fe640(unsigned int param_1)

{
/* irregular: 12 goto(s); irregular input(s): in_fpscr; 15 native warning(s); review required */
  unsigned int unique0x1000091a;
  unsigned int unique0x10000912;
  unsigned int unique0x1000097a;
  unsigned int unique0x10000972;
  unsigned int unique0x100009be;
  unsigned int unique0x100009b6;
  unsigned int unique0x10000902;
  unsigned char temp_v0;
  int *piVar2;
  int temp_v1;
  float *pfVar4;
  unsigned int temp_v2;
  float *pfVar6;
  unsigned int temp_v3;
  int temp_v4;
  romwright_code *pcVar9;
  int *piVar10;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  char temp_v8;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  unsigned long long temp_v11;
  float temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  int temp_v21;
  unsigned int temp_v22 [9];
  
  pfVar4 = &temp_v15;
  pfVar6 = &temp_v15;
  piVar2 = (int *)jobGetWork();
  temp_v3 = piVar2[0xd];
  switch(piVar2[0xd]) {
  case 0:
    piVar2[0xd] = 1;
LAB_001fe68c:
    temp_v3 = 0;
    if (*(char *)((int)piVar2 + 0x3d) != '\0') {
      temp_v3 = 2;
LAB_001fe69c:
      piVar2[0xd] = temp_v3;
    }
LAB_001ff420:
    temp_v9 = (romwright_code *)piVar2[0x1d] != (romwright_code *)0x0;
    temp_v1 = 0;
    if (temp_v9) {
      temp_v3 = piVar2[0xd];
      temp_v1 = temp_v3 - 2;
    }
    if ((temp_v9 && temp_v3 != 2) && temp_v1 < 0 == (temp_v9 && SBORROW4(temp_v3,2))) {
      (*(romwright_code *)piVar2[0x1d])(piVar2[0x1e]);
    }
    return 0;
  case 1:
    goto LAB_001fe68c;
  case 2:
    temp_v3 = 3;
    goto LAB_001fe69c;
  case 3:
    temp_v1 = FUN_002c15fc(7);
    temp_v8 = temp_v1 != 0;
    if ((!(unsigned char)temp_v8) && (temp_v1 = FUN_002c15fc(8), temp_v1 != 0)) {
      temp_v8 = '\x02';
    }
    temp_v9 = *(char *)((int)piVar2 + 0x3d) == '\0';
    temp_v3 = 0;
    if (!temp_v9) {
      temp_v3 = piVar2[0x1b];
    }
    if (!(temp_v9 || temp_v3 == 0)) {
      temp_v12 = 2.0f;
      if (((piVar2[0xe] & 4U) != 0) &&
         (FUN_0027f958(&temp_v15,&temp_v16,0), pfVar4 != (float *)0x0)) {
        if ((unsigned int)temp_v15 >= 0xbf000001) {
          temp_v10 = (float)piVar2[0x12] - temp_v12;
          piVar2[0x12] = (int)temp_v10;
        }
        else if ((int)temp_v15 >= 0x3f000001) {
          temp_v10 = (float)piVar2[0x12] + temp_v12;
          piVar2[0x12] = (int)temp_v10;
        }
        if ((unsigned int)temp_v16 >= 0xbf000001) {
          temp_v10 = (float)piVar2[0x13] + temp_v12;
          piVar2[0x13] = (int)temp_v10;
        }
        else if ((int)temp_v16 >= 0x3f000001) {
          temp_v10 = (float)piVar2[0x13] - temp_v12;
          piVar2[0x13] = (int)temp_v10;
        }
      }
      temp_v10 = 1.0f;
      temp_v15 = 1.0f;
      temp_v16 = 1.0f;
      temp_v17 = 1.0f;
      temp_v18 = 1.0f;
      renderCtxSelectTexture(g_titleScene,0);
      temp_v13 = 0.003921569f;
      temp_v3 = *(unsigned int *)((unsigned int)*(unsigned char *)(piVar2 + 0xf) * 0x10 + 0x409cf0);
      temp_v15 = (float)VectorUnsignedToFloat(temp_v3 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v16 = (float)VectorUnsignedToFloat
                                   ((temp_v3 & 0xff0000) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v18 = (float)VectorUnsignedToFloat(temp_v3 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v17 = (float)VectorUnsignedToFloat((temp_v3 & 0xff00) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v15 = temp_v15 * 0.003921569f;
      temp_v16 = temp_v16 * 0.003921569f;
      temp_v18 = temp_v18 * 0.003921569f;
      temp_v17 = temp_v17 * 0.003921569f;
      FUN_002b76d0(&temp_v15);
      temp_v3 = *(unsigned int *)((unsigned int)*(unsigned char *)(piVar2 + 0xf) * 0x10 + 0x409cfc);
      temp_v18 = (float)VectorUnsignedToFloat(temp_v3 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v17 = (float)VectorUnsignedToFloat((temp_v3 & 0xff00) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(piVar2[0x17],(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v15 = (float)VectorUnsignedToFloat(temp_v3 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v16 = (float)VectorUnsignedToFloat
                                   ((temp_v3 & 0xff0000) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v18 = temp_v18 * temp_v13;
      temp_v17 = temp_v17 * temp_v13;
      temp_v15 = temp_v15 * temp_v13;
      temp_v16 = temp_v16 * temp_v13;
      FUN_002b76d0(&temp_v15);
      temp_v3 = *(unsigned int *)((unsigned int)*(unsigned char *)(piVar2 + 0xf) * 0x10 + 0x409cf4);
      temp_v11 = romwright_piece_4_4((temp_v3 & 0xff0000) >> 0x10,temp_v3) & 0xffffffff000000ff;
      temp_v16 = (float)VectorUnsignedToFloat((int)(temp_v11 >> 0x20),(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v15 = (float)VectorUnsignedToFloat(temp_v3 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v17 = (float)VectorUnsignedToFloat((temp_v3 & 0xff00) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v18 = (float)VectorUnsignedToFloat((int)temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v15 = temp_v15 * temp_v13;
      temp_v16 = temp_v16 * temp_v13;
      temp_v17 = temp_v17 * temp_v13;
      temp_v18 = temp_v18 * temp_v13;
      FUN_002b76d0(&temp_v15);
      FUN_002b76d0(&temp_v15);
      FUN_002b76d0(&temp_v15);
      FUN_002b76d0(&temp_v15);
      FUN_002aed34(0,piVar2 + 0x23);
      if ((piVar2[0xe] & 1U) == 0) {
        temp_v15 = temp_v10;
        temp_v16 = temp_v10;
        temp_v17 = temp_v10;
        temp_v18 = temp_v10;
        renderCtxSelectTexture(g_titleScene,0);
        temp_v1 = piVar2[0x17];
        VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v3 = *(unsigned int *)((unsigned int)*(unsigned char *)(piVar2 + 0xf) * 0x10 + 0x409cf8);
        VectorSignedToFloat(piVar2[0x18] * temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v15 = (float)VectorUnsignedToFloat(temp_v3 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v16 = (float)VectorUnsignedToFloat
                                     ((temp_v3 & 0xff0000) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v18 = (float)VectorUnsignedToFloat(temp_v3 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v17 = (float)VectorUnsignedToFloat((temp_v3 & 0xff00) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3)
        ;
        temp_v15 = temp_v15 * temp_v13;
        temp_v16 = temp_v16 * temp_v13;
        temp_v18 = temp_v18 * temp_v13;
        temp_v17 = temp_v17 * temp_v13;
        FUN_002b76d0(&temp_v15);
      }
      temp_v7 = 0xffffffff;
      temp_v21 = 0xffffffff;
      temp_v22[0] = 0xffffffff;
      temp_v20 = (float)VectorSignedToFloat(piVar2[0x17],(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v19 = (float)piVar2[0x12] + temp_v12;
      temp_v14 = CONCAT44(temp_v19,temp_v12);
      temp_v20 = temp_v20 + (float)piVar2[0x13] + temp_v12;
      piVar10 = (int *)*piVar2;
joined_r0x001feb24:
      for (; piVar10 != (int *)0x0; unique0x10000902 = piVar10[6]) {
        if (*piVar10 < piVar2[0x19]) {
          piVar10 = (int *)piVar10[6];
        }
        else {
          if ((piVar2[0x19] + piVar2[0x1a]) - 1 < *piVar10) break;
          temp_v1 = piVar10[2];
          if ((romwright_code *)piVar2[0x1f] != (romwright_code *)0x0) {
            (*(romwright_code *)piVar2[0x1f])(&temp_v19,temp_v22,temp_v1 + 6);
            switch(*(unsigned char *)(temp_v1 + 4)) {
            case 1:
              textFormatBuffer(&temp_v15,&LAB_001fef20,temp_v1 + 0x106);
              temp_v2 = (*(romwright_code *)piVar2[0x20])(&temp_v15);
              temp_v19 = (float)VectorSignedToFloat(piVar2[0x16],(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v12 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v19 = ((((float)piVar2[0x12] + (float)piVar2[0x14]) - (float)temp_v14) - temp_v12) +
                         temp_v19;
              (*(romwright_code *)piVar2[0x1f])(&temp_v19,&temp_v21,&temp_v15);
              break;
            case 2:
              strncpy(&temp_v15,&LAB_001fef24,0x100);
              temp_v2 = (*(romwright_code *)piVar2[0x20])(&temp_v15);
              temp_v19 = (float)VectorSignedToFloat(piVar2[0x16],(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v12 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v19 = ((((float)piVar2[0x12] + (float)piVar2[0x14]) - (float)temp_v14) - temp_v12) +
                         temp_v19;
              if (*(int *)(temp_v1 + 0x208) != 0) {
                (*(romwright_code *)piVar2[0x1f])(&temp_v19,&temp_v21,&LAB_001fef2c);
              }
              else {
                (*(romwright_code *)piVar2[0x1f])(&temp_v19,&temp_v21,&LAB_001fef34);
              }
              break;
            case 3:
              if (*(char *)(temp_v1 + 5) != '\0') {
                textFormatBuffer(&temp_v15,&LAB_001fef3c,*(unsigned int *)(temp_v1 + 0x208));
              }
              else {
                textFormatBuffer(&temp_v15,&LAB_001fef44,*(unsigned int *)(temp_v1 + 0x208));
              }
              temp_v2 = (*(romwright_code *)piVar2[0x20])(&temp_v15);
              temp_v19 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v19 = (((float)piVar2[0x12] + (float)piVar2[0x14]) - (float)temp_v14) - temp_v19;
              (*(romwright_code *)piVar2[0x1f])(&temp_v19,&temp_v21,&temp_v15);
              break;
            case 4:
              textFormatBuffer(&temp_v15,&LAB_001fef4c,SUB84((double)*(float *)(temp_v1 + 0x20c),0),
                           (int)((unsigned long long)(double)*(float *)(temp_v1 + 0x20c) >> 0x20));
              temp_v2 = (*(romwright_code *)piVar2[0x20])(&temp_v15);
              temp_v19 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v19 = (((float)piVar2[0x12] + (float)piVar2[0x14]) - (float)temp_v14) - temp_v19;
              (*(romwright_code *)piVar2[0x1f])(&temp_v19,&temp_v21,&temp_v15);
            }
          }
          else {
            FUN_002aed34(0,temp_v1 + 6);
            temp_v19 = ((float)piVar2[0x12] + (float)piVar2[0x14]) - (float)temp_v14;
            switch(*(unsigned char *)(temp_v1 + 4)) {
            default:
              break;
            case 1:
              temp_v4 = libc_strlen();
              temp_v12 = (float)VectorUnsignedToFloat
                                        ((temp_v4 + 1) * piVar2[0x16],(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v19 = temp_v19 - temp_v12;
              textFormatBuffer(&temp_v15,&LAB_001fef54,temp_v1 + 0x106);
              pfVar4 = &temp_v15;
              FUN_002aed34(0,pfVar4);
              break;
            case 2:
              temp_v12 = (float)VectorUnsignedToFloat(piVar2[0x16] * 6,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v19 = temp_v19 - temp_v12;
              if (*(int *)(temp_v1 + 0x208) == 0) {
                pfVar4 = (float *)(unsigned char *)0x1fef58;
              }
              else {
                pfVar4 = (float *)(unsigned char *)0x1fef60;
              }
              FUN_002aed34(0,pfVar4);
              break;
            case 3:
              if (*(char *)(temp_v1 + 5) != '\0') {
                temp_v12 = (float)VectorSignedToFloat(piVar2[0x16] * 0xb,(unsigned char)(in_fpscr >> 0x16) & 3)
                ;
                temp_v19 = temp_v19 - temp_v12;
                textFormatBuffer(&temp_v15,&LAB_001fef68,*(unsigned int *)(temp_v1 + 0x208));
                pfVar4 = &temp_v15;
              }
              else {
                temp_v12 = (float)VectorSignedToFloat(piVar2[0x16] * 9,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v19 = temp_v19 - temp_v12;
                textFormatBuffer(&temp_v15,&LAB_001fef44,*(unsigned int *)(temp_v1 + 0x208));
                pfVar4 = &temp_v15;
              }
              FUN_002aed34(0,pfVar4);
              break;
            case 4:
              temp_v12 = (float)VectorSignedToFloat(piVar2[0x16] << 3,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v19 = temp_v19 - temp_v12;
              textFormatBuffer(&temp_v15,&LAB_001fef4c,SUB84((double)*(float *)(temp_v1 + 0x20c),0),
                           (int)((unsigned long long)(double)*(float *)(temp_v1 + 0x20c) >> 0x20));
              FUN_002aed34(0,&temp_v15);
              break;
            }
          }
          temp_v19 = (float)((unsigned long long)temp_v14 >> 0x20);
          temp_v12 = (float)VectorSignedToFloat(piVar2[0x17],(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v20 = temp_v20 + temp_v12;
          piVar10 = (int *)piVar10[6];
        }
      }
      temp_v3 = piVar2[0xe];
      if ((piVar2[0xe] & 2U) == 0) {
        if (0 < piVar2[0x10]) {
          temp_v3 = piVar2[0x10] - 1;
          piVar2[0x10] = temp_v3;
        }
        else {
          piVar10 = piVar2 + 3;
          FUN_001ff474();
          if (piVar10 != (int *)0x0) {
            piVar2[0x19] = piVar2[0xc];
            piVar2[0x18] = piVar2[0xb];
            temp_v3 = piVar2[0xb];
          }
          else {
            temp_v1 = padIsButtonRepeat(3);
            temp_v5 = 10000;
            temp_v6 = 100000;
            temp_v12 = 0.01f;
            if (temp_v1 != 0) {
              temp_v1 = jobGetWork(param_1);
              temp_v4 = *(int *)(temp_v1 + 0x60);
              temp_v1 = *(int *)(temp_v1 + 100);
              piVar10 = (int *)jobGetWork(param_1);
              piVar10 = (int *)*piVar10;
              for (unique0x100009b6 = *piVar10; piVar10 != (int *)0x0; unique0x100009be = piVar10[6]
                  ) {
                if (*piVar10 == temp_v4 + temp_v1) {
                  temp_v7 = *(unsigned int *)piVar10[2];
                  break;
                }
                piVar10 = (int *)piVar10[6];
              }
              temp_v1 = asdListBoxFindItem(param_1,temp_v7);
              temp_v3 = 0;
              if (temp_v1 != 0) {
                temp_v3 = (unsigned int)*(unsigned char *)(temp_v1 + 4);
                switch((unsigned int)*(unsigned char *)(temp_v1 + 4)) {
                default:
                  goto LAB_001ff420;
                case 2:
                  temp_v4 = *(int *)(temp_v1 + 0x208);
                  if (temp_v4 == 0) {
                    temp_v3 = 1;
                  }
                  else {
                    temp_v3 = 0;
                  }
                  break;
                case 3:
                  if (temp_v8 == '\x01') {
                    temp_v5 = 10;
                  }
                  else if (temp_v8 == '\x02') {
                    temp_v5 = 100;
                  }
                  else if (temp_v8 == '\x03') {
                    temp_v5 = 1000;
                  }
                  else if ((temp_v8 != '\x04') && (temp_v5 = 1, temp_v8 == '\x05')) {
                    temp_v5 = temp_v6;
                  }
                  temp_v3 = temp_v5 + *(int *)(temp_v1 + 0x208);
                  *(unsigned int *)(temp_v1 + 0x208) = temp_v3;
                  if ((int)temp_v3 <= *(int *)(temp_v1 + 0x214)) goto LAB_001ff420;
                  temp_v4 = padIsButtonPressed(3);
                  if (temp_v4 == 0) {
                    temp_v3 = *(unsigned int *)(temp_v1 + 0x214);
                    break;
                  }
                  temp_v3 = *(unsigned int *)(temp_v1 + 0x210);
                  break;
                case 4:
                  if (temp_v8 == '\x01') {
                    temp_v5 = 10;
                  }
                  else if (temp_v8 == '\x02') {
                    temp_v5 = 100;
                  }
                  else if (temp_v8 == '\x03') {
                    temp_v5 = 1000;
                  }
                  else if ((temp_v8 != '\x04') && (temp_v5 = 1, temp_v8 == '\x05')) {
                    temp_v5 = temp_v6;
                  }
                  temp_v10 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v12 = *(float *)(temp_v1 + 0x20c) + temp_v10 * temp_v12;
                  temp_v10 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v1 + 0x214),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  *(float *)(temp_v1 + 0x20c) = temp_v12;
                  temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v12 < temp_v10) << 0x1f) |
                          ((unsigned int)(temp_v12 == temp_v10) << 0x1e);
                  temp_v6 = temp_v3 | ((unsigned int)((temp_v12 != temp_v12) || (temp_v10 != temp_v10)) << 0x1c);
                  temp_v0 = (unsigned char)(temp_v3 >> 0x18);
                  temp_v3 = temp_v5;
                  if (!((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(temp_v6 >> 0x1c) & 1))) {
                    temp_v3 = padIsButtonPressed(3);
                    if (temp_v3 == 0) {
LAB_001ff2bc:
                      temp_v7 = VectorSignedToFloat(*(unsigned int *)(temp_v1 + 0x214),
                                                   (unsigned char)(temp_v6 >> 0x16) & 3);
                      *(unsigned int *)(temp_v1 + 0x20c) = temp_v7;
                    }
                    else {
LAB_001ff2d8:
                      temp_v7 = VectorSignedToFloat(*(unsigned int *)(temp_v1 + 0x210),
                                                   (unsigned char)(temp_v6 >> 0x16) & 3);
                      *(unsigned int *)(temp_v1 + 0x20c) = temp_v7;
                    }
                  }
                  goto LAB_001ff420;
                }
                *(unsigned int *)(temp_v1 + 0x208) = temp_v3;
              }
            }
            else {
              temp_v1 = padIsButtonRepeat(4);
              if (temp_v1 != 0) {
                temp_v1 = jobGetWork(param_1);
                temp_v4 = *(int *)(temp_v1 + 0x60);
                temp_v1 = *(int *)(temp_v1 + 100);
                piVar10 = (int *)jobGetWork(param_1);
                piVar10 = (int *)*piVar10;
                for (unique0x10000972 = *piVar10; piVar10 != (int *)0x0;
                    unique0x1000097a = piVar10[6]) {
                  if (*piVar10 == temp_v4 + temp_v1) {
                    temp_v7 = *(unsigned int *)piVar10[2];
                    break;
                  }
                  piVar10 = (int *)piVar10[6];
                }
                temp_v1 = asdListBoxFindItem(param_1,temp_v7);
                temp_v3 = 0;
                if (temp_v1 != 0) {
                  temp_v3 = (unsigned int)*(unsigned char *)(temp_v1 + 4);
                  switch((unsigned int)*(unsigned char *)(temp_v1 + 4)) {
                  default:
                    goto LAB_001ff420;
                  case 2:
                    temp_v4 = *(int *)(temp_v1 + 0x208);
                    if (temp_v4 == 0) {
                      temp_v3 = 1;
                    }
                    else {
                      temp_v3 = 0;
                    }
                    break;
                  case 3:
                    if (temp_v8 == '\x01') {
                      temp_v5 = 10;
                    }
                    else if (temp_v8 == '\x02') {
                      temp_v5 = 100;
                    }
                    else if (temp_v8 == '\x03') {
                      temp_v5 = 1000;
                    }
                    else if ((temp_v8 != '\x04') && (temp_v5 = 1, temp_v8 == '\x05')) {
                      temp_v5 = temp_v6;
                    }
                    temp_v3 = *(int *)(temp_v1 + 0x208) - temp_v5;
                    *(unsigned int *)(temp_v1 + 0x208) = temp_v3;
                    if (*(int *)(temp_v1 + 0x210) <= (int)temp_v3) goto LAB_001ff420;
                    temp_v4 = padIsButtonPressed(4);
                    if (temp_v4 == 0) {
                      temp_v3 = *(unsigned int *)(temp_v1 + 0x210);
                      break;
                    }
                    temp_v3 = *(unsigned int *)(temp_v1 + 0x214);
                    break;
                  case 4:
                    if (temp_v8 == '\x01') {
                      temp_v5 = 10;
                    }
                    else if (temp_v8 == '\x02') {
                      temp_v5 = 100;
                    }
                    else if (temp_v8 == '\x03') {
                      temp_v5 = 1000;
                    }
                    else if ((temp_v8 != '\x04') && (temp_v5 = 1, temp_v8 == '\x05')) {
                      temp_v5 = temp_v6;
                    }
                    temp_v10 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v12 = *(float *)(temp_v1 + 0x20c) - temp_v10 * temp_v12;
                    temp_v10 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v1 + 0x210),
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    *(float *)(temp_v1 + 0x20c) = temp_v12;
                    temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v10 <= temp_v12) << 0x1d);
                    temp_v3 = temp_v5;
                    if (romwright_subpiece_4_1_0(temp_v6 >> 0x1d,0)) goto LAB_001ff420;
                    temp_v3 = padIsButtonPressed(4);
                    if (temp_v3 == 0) goto LAB_001ff2d8;
                    goto LAB_001ff2bc;
                  }
                  *(unsigned int *)(temp_v1 + 0x208) = temp_v3;
                }
              }
              else {
                temp_v1 = padIsButtonPressed(0);
                temp_v3 = 0;
                if (temp_v1 != 0) {
                  temp_v1 = jobGetWork(param_1);
                  temp_v4 = *(int *)(temp_v1 + 0x60);
                  temp_v1 = *(int *)(temp_v1 + 100);
                  piVar10 = (int *)jobGetWork(param_1);
                  piVar10 = (int *)*piVar10;
                  for (unique0x10000912 = *piVar10; piVar10 != (int *)0x0;
                      unique0x1000091a = piVar10[6]) {
                    if (*piVar10 == temp_v4 + temp_v1) {
                      temp_v7 = *(unsigned int *)piVar10[2];
                      break;
                    }
                    piVar10 = (int *)piVar10[6];
                  }
                  temp_v14 = asdListBoxFindItem(param_1,temp_v7);
                  pcVar9 = (romwright_code *)((unsigned long long)temp_v14 >> 0x20);
                  temp_v3 = (unsigned int)temp_v14;
                  if (temp_v3 != 0) {
                    pcVar9 = *(romwright_code **)(temp_v3 + 0x21c);
                  }
                  if (temp_v3 != 0 && pcVar9 != (romwright_code *)0x0) {
                    switch(*(unsigned char *)(temp_v3 + 4)) {
                    case 0:
                      if (*(float *)(temp_v3 + 0x218) == 0.0f) {
                        pfVar6 = (float *)0x0;
                      }
                      else {
                        temp_v15 = 0.0f;
                        pcVar9 = *(romwright_code **)(temp_v3 + 0x21c);
                        temp_v16 = *(float *)(temp_v3 + 0x218);
                      }
                      temp_v3 = (*pcVar9)(pfVar6);
                      break;
                    case 1:
                      if (*(float *)(temp_v3 + 0x218) == 0.0f) {
                        pfVar6 = (float *)(temp_v3 + 0x106);
                      }
                      else {
                        temp_v15 = (float)(temp_v3 + 0x106);
                        pcVar9 = *(romwright_code **)(temp_v3 + 0x21c);
                        pfVar6 = &temp_v15;
                        temp_v16 = *(float *)(temp_v3 + 0x218);
                      }
                      temp_v3 = (*pcVar9)(pfVar6);
                      break;
                    case 2:
                    case 3:
                      if (*(float *)(temp_v3 + 0x218) == 0.0f) {
                        pfVar6 = (float *)(temp_v3 + 0x208);
                      }
                      else {
                        temp_v15 = (float)(temp_v3 + 0x208);
                        pcVar9 = *(romwright_code **)(temp_v3 + 0x21c);
                        pfVar6 = &temp_v15;
                        temp_v16 = *(float *)(temp_v3 + 0x218);
                      }
                      temp_v3 = (*pcVar9)(pfVar6);
                      break;
                    case 4:
                      if (*(float *)(temp_v3 + 0x218) == 0.0f) {
                        pfVar6 = (float *)(temp_v3 + 0x20c);
                      }
                      else {
                        temp_v15 = (float)(temp_v3 + 0x20c);
                        pcVar9 = *(romwright_code **)(temp_v3 + 0x21c);
                        pfVar6 = &temp_v15;
                        temp_v16 = *(float *)(temp_v3 + 0x218);
                      }
                      temp_v3 = (*pcVar9)(pfVar6);
                      break;
                    default:
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  default:
    goto LAB_001ff420;
  case 5:
    return 0xffffffff;
  }
  piVar10 = (int *)piVar10[6];
  goto joined_r0x001feb24;
}

} /* extern "C" */
