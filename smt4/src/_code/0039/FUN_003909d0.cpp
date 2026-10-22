/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003909d0` (_code @ 0x3909d0, 0x628 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023478c(...);
int FUN_002347b8(...);
int FUN_002ae9ec(...);
int FUN_002b7d30(int, int);
int FUN_002be5a4(...);
int textFormatBuffer(...);
int FUN_002bf288(...);
int FUN_002bf380(...);
int FUN_002bf4f8(...);
int efctSetSpeed(void);
int FUN_002c1b64(int, unsigned int);
int memClear(...);
int mathInterpolateTimed(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_4: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp250; /* 0x250: local_250 */
} param_4_stack;

extern unsigned char LAB_00390e10; /* 0x390e10 */
extern unsigned char LAB_00390e14; /* 0x390e14 */
extern unsigned char LAB_00390e2c; /* 0x390e2c */
extern int g_aocMain; /* 0x432fc8 */
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int curveEvaluateStandard(unsigned char *, unsigned int);
extern int aocIsEntryIndexValid(int, int);
/* Supplied declaration required: FUN_0023478c. */
/* Supplied declaration required: FUN_002347b8. */
/* Supplied declaration required: FUN_002ae9ec. */
/* Supplied declaration required: FUN_002b7d30. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: mathInterpolateTimed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


void FUN_003909d0(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_fpscr; 14 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  short *psVar6;
  short *psVar7;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int *piVar13;
  int temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  unsigned char temp_v12 [256];
  short temp_v13 [138];
  int temp_v14;
  int iStack_30;
  int iStack_2c;
  int temp_v15;
  
  temp_v14 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  temp_v15 = param_4;
  temp_v3 = FUN_002bf4f8(0x3a,param_2 + 0x88);
  temp_v5 = g_aocMain;
  temp_v10 = (int)*(short *)(temp_v3 + 8);
  temp_v9 = (int)*(short *)(temp_v3 + 10);
  temp_v3 = aocIsEntryIndexValid(g_aocMain,param_3);
  if (temp_v3 != 0) {
    temp_v3 = *(int *)(temp_v5 + 0x678) + param_3 * 0x9c8;
    memClear(temp_v12,0x100);
    FUN_002bf380(2,0x3a,8,temp_v10,temp_v9,0x81);
    if (*(char *)(temp_v3 + 0x9b3) != '\0') {
      temp_v4 = FUN_002bf4f8(0x3a,0x5f);
      FUN_002ae9ec(2,0x3a,2000,temp_v10 + *(short *)(temp_v4 + 8),*(short *)(temp_v4 + 10) + temp_v9,0x81);
    }
    else {
      temp_v4 = FUN_002bf4f8(0x3a,0x5f);
      temp_v1 = *(short *)(temp_v4 + 8);
      temp_v2 = *(short *)(temp_v4 + 10);
      FUN_002c1b64(g_titleScene,*(unsigned int *)(temp_v3 + 0x9c4));
      temp_v4 = temp_v9 + temp_v2;
      temp_v6 = temp_v10 + temp_v1;
      VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002b7d30(temp_v4,temp_v6);
    }
    if (*(char *)(temp_v3 + 0x9b3) != '\0') {
      temp_v4 = temp_v5;
      FUN_0023478c(temp_v5,0xb);
      FUN_002347b8(temp_v5,temp_v4,temp_v13);
      textFormatBuffer(temp_v12,&LAB_00390e10,temp_v13);
    }
    else {
      textFormatBuffer(temp_v12,&LAB_00390e14,temp_v3);
    }
    if (*(char *)(temp_v3 + 0x9b3) == '\0') {
      temp_v4 = FUN_002bf4f8(0x3a,0x61);
      FUN_002ae9ec(2,0x13,0x41a,temp_v10 + *(short *)(temp_v4 + 8),*(short *)(temp_v4 + 10) + temp_v9,0x81)
      ;
    }
    temp_v4 = FUN_002bf4f8(0x3a,0x62);
    VectorSignedToFloat(*(short *)(temp_v4 + 10) + temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v4 + 8) + temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(3,0xffffffff,temp_v12);
    if (*(char *)(temp_v3 + 0x9b3) == '\0') {
      if (*(char *)(temp_v3 + 0x9ac) != '\0') {
        if (*(char *)(temp_v3 + 0x9ad) != '\0') {
          FUN_002bf380(2,0x3a,10,temp_v10,temp_v9,0x81);
          FUN_002bf380(2,0x3a,0xb,temp_v10,temp_v9,0x81);
        }
        else {
          FUN_002bf380(2,0x3a,10,temp_v10,temp_v9,0x81);
          FUN_002bf380(2,0x3a,0xc,temp_v10,temp_v9,0x81);
        }
      }
      else {
        FUN_002bf380(2,0x3a,9,temp_v10,temp_v9,0x81);
        memClear(temp_v12,0x100);
        if (*(char *)(temp_v3 + 0x9b1) != '\0') {
          temp_v4 = temp_v5;
          FUN_0023478c(temp_v5,0x69);
          FUN_002347b8(temp_v5,temp_v4,temp_v13);
          textFormatBuffer(temp_v12,&LAB_00390e10,temp_v13);
        }
        else {
          temp_v13[0] = 0;
          temp_v13[1] = 0;
          temp_v13[2] = 0;
          temp_v13[3] = 0;
          temp_v13[4] = 0;
          temp_v13[5] = 0;
          temp_v4 = 0;
          temp_v13[6] = 0;
          temp_v13[7] = 0;
          temp_v13[8] = 0;
          temp_v13[9] = 0;
          temp_v13[10] = 0;
          temp_v13[0xb] = 0;
          temp_v13[0xc] = 0;
          temp_v13[0xd] = 0;
          temp_v13[0xe] = 0;
          temp_v13[0xf] = 0;
          psVar6 = temp_v13;
          do {
            temp_v6 = (int)*(char *)(temp_v3 + 0x980 + temp_v4);
            psVar7 = psVar6;
            if (temp_v6 == 0) break;
            temp_v8 = temp_v6 - 0x30;
            if (temp_v8 < 10) {
              psVar7 = psVar6 + 1;
              *psVar6 = (short)temp_v8 * 0x100 + 0x4f82;
            }
            temp_v4 = temp_v4 + 1;
            psVar6 = psVar7;
          } while (temp_v4 < 0x10);
          temp_v1 = psVar7[-2];
          psVar7[-2] = 0x4481;
          *psVar7 = psVar7[-1];
          psVar7[-1] = temp_v1;
          textFormatBuffer(temp_v12,&LAB_00390e2c,temp_v5 + 0x5b8,temp_v13,temp_v5 + 0x5f8);
        }
        temp_v5 = curveEvaluateStandard(temp_v12,2);
        temp_v4 = FUN_002bf4f8(0x3a,0x68);
        temp_v5 = ((int)**(short **)(temp_v4 + 0xc) + (int)*(short *)(temp_v4 + 8) + temp_v10) - temp_v5;
        VectorSignedToFloat(*(short *)(temp_v4 + 10) + temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be5a4(2,0xffffffff,temp_v12,temp_v5);
      }
    }
    if (temp_v15 != 0) {
      FUN_002bf380(2,0x3a,0xd,temp_v10,temp_v9,0x81);
      temp_v5 = g_titleScene;
      temp_v4 = packNibblesAndByte(6,1,0);
      piVar13 = (int *)(temp_v5 + 0x12ac);
      temp_v6 = *piVar13;
      temp_v7 = piVar13[temp_v6 + 2];
      *piVar13 = temp_v6 + 1;
      piVar13[temp_v6 + 3] = temp_v4;
      if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v7 != temp_v4) {
        (**(romwright_code **)(temp_v5 + 0x12c8))();
        *(unsigned char *)(temp_v5 + 0x12c4) = 0;
      }
      temp_v5 = temp_v14;
      temp_v4 = *(int *)(temp_v14 + 0x112c);
      if (temp_v4 >= 0xf) {
        temp_v4 = temp_v4 - 0xf;
      }
      mathInterpolateTimed(0xf,temp_v4);
      efctSetSpeed();
      FUN_002bf380(2,0x3a,0xe,temp_v10,temp_v9,0x81);
      efctSetSpeed();
      temp_v4 = g_titleScene;
      piVar13 = (int *)(g_titleScene + 0x12ac);
      temp_v6 = *piVar13;
      temp_v7 = piVar13[temp_v6 + 2];
      *piVar13 = temp_v6 - 1;
      if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v7 != piVar13[temp_v6 + 1]) {
        (**(romwright_code **)(temp_v4 + 0x12c8))();
        *(unsigned char *)(temp_v4 + 0x12c4) = 0;
      }
      FUN_002bf288(2,0x3a,0x84,temp_v10 + (*(int *)(temp_v5 + 0x1128) / 10) * 2,temp_v9,0x81);
    }
    if (*(char *)(temp_v3 + 0x9b3) == '\0') {
      if (*(char *)(temp_v3 + 0x9b0) != '\0') {
        FUN_002bf380(2,0x3a,0xf,temp_v10,temp_v9,0x81);
      }
      temp_v0 = *(char *)(temp_v3 + 0x9af);
      temp_v11 = temp_v0 == '\0';
      if (temp_v11) {
        temp_v0 = *(char *)(temp_v3 + 0x9ac);
      }
      if (temp_v11 && temp_v0 == '\0') {
        FUN_002bf380(2,0x3a,0x13,temp_v10,temp_v9,0x81);
        FUN_002bf288(2,0x3a,0x79,temp_v10,temp_v9,0x81);
      }
    }
  }
  else {
    FUN_002bf288(2,0x3a,0x58,temp_v10,temp_v9,0x81);
  }
  return;
}

} /* extern "C" */
