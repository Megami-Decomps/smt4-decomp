/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00487d6c` (_code @ 0x487d6c, 0x3c8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int vec2GetYInt(int);
int efctSetSpeed(void);
int renderCtxPopState(...);
int renderStackPushIndexed(int, int, unsigned int);
int FUN_001835b4(int, int, int, int, int, unsigned int);
int FUN_00492bc0(void);
int lmapSceneGetObj(int);
int naviMainSelectPair(int);
int FUN_0049325c(...);
int words2Copy(int, float *);
int NaviMain_GetCurrentMap(int);
int VectorSignedToFloat(unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned int DAT_00587f20; /* 0x587f20 */
extern int g_renderCtx; /* 0x59dbb4 */
extern int g_gameState; /* 0x5f15fc */
extern signed char DAT_005f161d; /* 0x5f161d */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int gameFlagsGetBlock(void);
extern unsigned int vec2GetXInt(void);
/* Supplied declaration required: vec2GetYInt. */
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxPopState. */
/* Supplied declaration required: renderStackPushIndexed. */
/* Supplied declaration required: FUN_001835b4. */
extern int lmapSceneGetUnk0(void);
extern int lmapMainGetUnkCC(void);
extern int gameFlagsClassify(void);
/* Supplied declaration required: FUN_00492bc0. */
/* Supplied declaration required: lmapSceneGetObj. */
/* Supplied declaration required: naviMainSelectPair. */
/* Supplied declaration required: FUN_0049325c. */
/* Supplied declaration required: words2Copy. */
/* Supplied declaration required: NaviMain_GetCurrentMap. */


void FUN_00487d6c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned int in_fpscr;
  float temp_v5;
  int temp_v6;
  float temp_v7;
  unsigned int temp_v8;
  
  temp_v0 = gameFlagsGetBlock();
  if (g_gameState >= 100) {
    temp_v1 = lmapMainGetUnkCC();
    if (temp_v1 == 8) {
      return;
    }
  }
  else {
    temp_v1 = lmapSceneGetUnk0();
    if (temp_v1 == 0x22) {
      return;
    }
  }
  temp_v2 = FUN_001692ac(5,1);
  renderStackPushIndexed(g_renderCtx,3,temp_v2);
  temp_v1 = param_1 + 0x4cc;
  FUN_00492bc0();
  naviMainSelectPair(temp_v1);
  lmapSceneGetObj(temp_v1);
  temp_v8 = 0;
  temp_v7 = 0.0f;
  if ((*(unsigned int *)(param_1 + 0x10) & 0x1000000) != 0) {
    words2Copy(param_1 + 0x4d0,&temp_v7);
  }
  if ((*(unsigned int *)(param_1 + 0x10) & 0x1000) == 0) {
    NaviMain_GetCurrentMap(temp_v1);
    temp_v1 = gameFlagsClassify();
    if ((temp_v1 != 2) && (temp_v1 != 3)) {
      temp_v2 = vec2GetXInt();
      temp_v5 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v6 = (int)(temp_v5 + temp_v7);
      vec2GetYInt(param_1 + 0x10a0);
      temp_v1 = g_renderCtx;
      if (DAT_005f161d != '\0') {
        temp_v3 = packNibblesAndByte(6,1,0);
        piVar6 = (int *)(temp_v1 + 0x12b8);
        temp_v4 = piVar6[*piVar6 + 2];
        piVar6[*piVar6 + 2] = temp_v3;
        if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v4 != temp_v3) {
          (**(romwright_code **)(temp_v1 + 0x12d4))();
          *(unsigned char *)(temp_v1 + 0x12d0) = 0;
        }
        efctSetSpeed();
        FUN_001835b4(2,0x13,0x112e,temp_v6,0,DAT_00587f20);
        efctSetSpeed();
        temp_v1 = g_renderCtx;
        temp_v3 = packNibblesAndByte(6,7,0);
        piVar6 = (int *)(temp_v1 + 0x12b8);
        temp_v4 = piVar6[*piVar6 + 2];
        piVar6[*piVar6 + 2] = temp_v3;
        if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v4 != temp_v3) {
          (**(romwright_code **)(temp_v1 + 0x12d4))();
          *(unsigned char *)(temp_v1 + 0x12d0) = 0;
        }
        FUN_0049325c(0x112f,temp_v6,0,DAT_00587f20,1);
        temp_v1 = g_renderCtx;
        temp_v3 = packNibblesAndByte(6,1,0);
        piVar6 = (int *)(temp_v1 + 0x12b8);
        temp_v4 = piVar6[*piVar6 + 2];
        piVar6[*piVar6 + 2] = temp_v3;
        if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v4 != temp_v3) {
          (**(romwright_code **)(temp_v1 + 0x12d4))();
          *(unsigned char *)(temp_v1 + 0x12d0) = 0;
        }
        efctSetSpeed();
        FUN_001835b4(2,0x13,0x1135,temp_v6,0,DAT_00587f20);
        efctSetSpeed();
        temp_v1 = g_renderCtx;
        temp_v3 = packNibblesAndByte(6,7,0);
        piVar6 = (int *)(temp_v1 + 0x12b8);
        temp_v4 = piVar6[*piVar6 + 2];
        piVar6[*piVar6 + 2] = temp_v3;
        if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v4 != temp_v3) {
          (**(romwright_code **)(temp_v1 + 0x12d4))();
          *(unsigned char *)(temp_v1 + 0x12d0) = 0;
        }
        FUN_0049325c(0x1133,temp_v6,0,DAT_00587f20,1);
        FUN_0049325c(0x1134,temp_v6,0,DAT_00587f20,1);
        temp_v0 = *(int *)(temp_v0 + 0x15bc);
      }
      else {
        FUN_0049325c(0x112d,temp_v6,0,DAT_00587f20,1);
        FUN_0049325c(0x1131,temp_v6,0,DAT_00587f20,1);
        FUN_0049325c(0x1132,temp_v6,0,DAT_00587f20,1);
        temp_v0 = *(int *)(temp_v0 + 0x15bc);
      }
      if (temp_v0 != 0) {
        FUN_0049325c(0x1243,temp_v6,0,DAT_00587f20,1);
      }
    }
  }
  renderCtxPopState(g_renderCtx,3);
  return;
}

} /* extern "C" */
