/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003da030` (_code @ 0x3da030, 0x640 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int FUN_00162790(...);
int FUN_00164b5c(int, int, int, int, int, int);
int vec2GetXInt(...);
int efctSetSpeed(void);
int renderCtxResetColorScale(...);
int skinObjectUpdateMatrices(...);
int FUN_001835b4(int, int, int, int, int, int);
int pairSetSecondResetFirst(...);
int FUN_002199fc(...);
int fadeObjectResetIfActive(...);
int uiDrawRotatingGridHighlights(...);
int SBORROW4(int, int);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern unsigned char LAB_003da414; /* 0x3da414 */
extern unsigned char LAB_003da674; /* 0x3da674 */
extern unsigned char LAB_003da698; /* 0x3da698 */
extern int DAT_0057f2c4; /* 0x57f2c4 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: vec2GetXInt. */
extern int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: skinObjectUpdateMatrices. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: pairSetSecondResetFirst. */
/* Supplied declaration required: FUN_002199fc. */
/* Supplied declaration required: fadeObjectResetIfActive. */
/* Supplied declaration required: uiDrawRotatingGridHighlights. */


unsigned int FUN_003da030(void)

{
/* irregular: irregular input(s): in_fpscr; 14 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  char *pcVar8;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  
  temp_v3 = DAT_0057f2c4;
  if (*(int *)(DAT_0057f2c4 + 4) != 0) {
    FUN_00157558(g_renderCtx);
    temp_v2 = g_renderCtx;
    temp_v1 = FUN_001692ac(1,0);
    piVar7 = (int *)(temp_v2 + 0x1258);
    temp_v4 = *piVar7;
    temp_v5 = piVar7[temp_v4 + 2];
    *piVar7 = temp_v4 + 1;
    piVar7[temp_v4 + 3] = temp_v1;
    if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v5 != temp_v1) {
      (**(romwright_code **)(temp_v2 + 0x1274))();
      *(unsigned char *)(temp_v2 + 0x1270) = 0;
    }
    temp_v2 = g_renderCtx;
    temp_v0 = *(short *)(DAT_0057f2c4 + 0x1e);
    if (temp_v0 == 2) {
      temp_v1 = 0x28f;
    }
    else {
      temp_v1 = 0;
      if (temp_v0 == 3 || temp_v0 == 4) {
        temp_v1 = 0x311;
      }
    }
    if (*(char *)(temp_v3 + 0x20) != '\0') {
      temp_v5 = *(int *)(temp_v3 + 4);
      temp_v6 = SBORROW4(temp_v5,3);
      temp_v4 = temp_v5 - 3;
      if (temp_v5 < 4) {
        temp_v6 = SBORROW4(*(int *)(temp_v3 + 8),temp_v1);
        temp_v4 = *(int *)(temp_v3 + 8) - temp_v1;
      }
      if (temp_v4 < 0 == temp_v6) {
        temp_v4 = packNibblesAndByte(6,1,0);
        piVar7 = (int *)(temp_v2 + 0x12b8);
        temp_v5 = piVar7[*piVar7 + 2];
        piVar7[*piVar7 + 2] = temp_v4;
        if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v5 != temp_v4) {
          (**(romwright_code **)(temp_v2 + 0x12d4))();
          *(unsigned char *)(temp_v2 + 0x12d0) = 0;
        }
        FUN_001835b4(2,0x1a,0x204,0,0,0x5b);
        temp_v2 = g_renderCtx;
        temp_v4 = packNibblesAndByte(6,7,0);
        piVar7 = (int *)(temp_v2 + 0x12b8);
        temp_v5 = piVar7[*piVar7 + 2];
        piVar7[*piVar7 + 2] = temp_v4;
        if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v5 != temp_v4) {
          (**(romwright_code **)(temp_v2 + 0x12d4))();
          *(unsigned char *)(temp_v2 + 0x12d0) = 0;
        }
        efctSetSpeed();
        FUN_001835b4(2,0x1a,0x205,0,0,0x60);
        efctSetSpeed();
      }
    }
    temp_v2 = vec2GetXInt(temp_v3 + 0x360);
    temp_v4 = vec2GetYInt(temp_v3 + 0x360);
    FUN_00164b5c(2,0x1a,1,temp_v2,temp_v4,0x65);
    FUN_001835b4(2,0x1a,0x206,temp_v2,temp_v4,0x65);
    temp_v0 = *(short *)(temp_v3 + 0x1e);
    pcVar8 = (char *)0x0;
    if (temp_v0 == 2) {
      pcVar8 = (char *)0x52f330;
    }
    else if (temp_v0 == 3) {
      pcVar8 = (char *)0x52f340;
    }
    else if (temp_v0 == 4) {
      pcVar8 = "A\xa0ÍĘĬŨŲƮŀ";
    }
    temp_v5 = 0;
    do {
      if (*(int *)(temp_v3 + 4) >= 3) {
        if (*(int *)(temp_v3 + 4) < 4) {
          if (*(int *)(temp_v3 + 8) < (int)(*(unsigned short *)(pcVar8 + temp_v5 * 4) - 5)) {
            FUN_002199fc(temp_v5,0);
          }
          else if ((int)(*(unsigned short *)((int)(pcVar8 + temp_v5 * 4) + 2) + 5) > *(int *)(temp_v3 + 8)) {
            FUN_002199fc(temp_v5,1,0);
          }
          else {
            FUN_002199fc(temp_v5,0,1);
          }
        }
        else {
          FUN_002199fc(temp_v5,0,1);
        }
      }
      else {
        FUN_002199fc(temp_v5,0);
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 4);
    if ((*(char *)(temp_v3 + 0x20) != '\0') &&
       ((*(int *)(temp_v3 + 8) >= temp_v1 || (*(int *)(temp_v3 + 4) >= 4)))) {
      pairSetSecondResetFirst(temp_v3 + 0x8d8,0x19);
    }
    else {
      pairSetSecondResetFirst(temp_v3 + 0x8d8,0x18);
    }
    fadeObjectResetIfActive(temp_v3 + 0x8d8);
    if (*(int *)(temp_v3 + 4) < 3) {
      temp_v2 = vec2GetXInt(temp_v3 + 0x590);
      temp_v3 = vec2GetYInt(temp_v3 + 0x590);
      temp_v1 = FUN_001834a4(0x1a,0x21d);
      VectorSignedToFloat(*(short *)(temp_v1 + 10) + temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(short *)(temp_v1 + 8) + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(4,0x57d8ffff,&LAB_003da414);
    }
    else if (*(int *)(temp_v3 + 4) >= 4) {
      temp_v2 = vec2GetXInt();
      temp_v1 = vec2GetYInt(temp_v3 + 0x61c);
      if (*(char *)(temp_v3 + 0x20) != '\0') {
        if (*(int *)(temp_v3 + 8) % 0x14 >= 11) {
          temp_v3 = FUN_001834a4(0x1a,0x21f);
          VectorSignedToFloat(*(short *)(temp_v3 + 10) + temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(*(short *)(temp_v3 + 8) + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_00162790(4,0xdc0f14ff,&LAB_003da674);
        }
      }
      else {
        temp_v3 = FUN_001834a4(0x1a,0x21e);
        VectorSignedToFloat(*(short *)(temp_v3 + 10) + temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(*(short *)(temp_v3 + 8) + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00162790(4,0x57d8ffff,&LAB_003da698);
      }
    }
    else if ((*(char *)(temp_v3 + 0x20) != '\0') && (*(int *)(temp_v3 + 8) >= temp_v1)) {
      if (*(int *)(temp_v3 + 8) % 0x14 >= 11) {
        temp_v3 = FUN_001834a4(0x1a,0x21f);
        VectorSignedToFloat(*(short *)(temp_v3 + 10) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v2 + *(short *)(temp_v3 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00162790(4,0xdc0f14ff,&LAB_003da674);
      }
    }
    else {
      temp_v2 = FUN_001834a4(0x1a,0x21d);
      VectorSignedToFloat((int)*(short *)(temp_v2 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v2 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(4,0x57d8ffff,&LAB_003da414);
      uiDrawRotatingGridHighlights(0x220,*(unsigned int *)(temp_v3 + 0x84));
    }
    temp_v3 = g_renderCtx;
    piVar7 = (int *)(g_renderCtx + 0x1258);
    temp_v2 = *piVar7;
    temp_v1 = piVar7[temp_v2 + 2];
    *piVar7 = temp_v2 - 1;
    if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v1 != piVar7[temp_v2 + 1]) {
      (**(romwright_code **)(temp_v3 + 0x1274))();
      *(unsigned char *)(temp_v3 + 0x1270) = 0;
    }
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
  }
  return 0;
}

} /* extern "C" */
