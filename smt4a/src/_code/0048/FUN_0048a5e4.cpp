/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048a5e4` (_code @ 0x48a5e4, 0xaf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "util/PackNibbles.h"

extern "C" {

int FUN_00162790(...);
int FUN_00164b5c(int, int, int, int, int, int);
int vec2GetXInt(...);
int efctSetSpeed(void);
int renderCtxPopState(...);
int renderStackPushIndexed(...);
int FUN_00183bb0(void);
int libc_strcpy(...);
int mapFindContainingRegionResult(...);
int FUN_003849cc(unsigned int, unsigned int, int, unsigned char [132], unsigned int);
int FUN_00384cf4(...);
int listGetAdjacentEntryId(...);
int uiDrawSpriteWithOptionalVertexColors(...);
int lmapSceneGetObj(unsigned char *);
int naviMainGetRequestedMap(...);
int FUN_0049325c(...);
int words2Copy(int, float *);
int FUN_0049368c(...);
int NaviMain_GetCurrentMap(...);
int VectorSignedToFloat(...);

/* stack frame of param_1: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
} param_1_stack;

extern int DAT_00587f20; /* 0x587f20 */
extern unsigned int g_renderCtx; /* 0x59dbb4 */
extern signed char DAT_005f1a5c; /* 0x5f1a5c */
extern signed char DAT_005f1a5e; /* 0x5f1a5e */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00162790. */
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: vec2GetXInt. */
extern unsigned int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
extern unsigned int gameGetIndexedSlotMember(unsigned int);
extern unsigned int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxPopState. */
/* Supplied declaration required: renderStackPushIndexed. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: libc_strcpy. */
extern int FUN_00325064(void);
/* Supplied declaration required: mapFindContainingRegionResult. */
extern unsigned int mapRegionLookupValue(int);
extern int gameFlagsClassify(void);
/* Supplied declaration required: FUN_003849cc. */
/* Supplied declaration required: FUN_00384cf4. */
/* Supplied declaration required: listGetAdjacentEntryId. */
/* Supplied declaration required: uiDrawSpriteWithOptionalVertexColors. */
extern unsigned int naviGetActiveStateValue(void);
/* Supplied declaration required: lmapSceneGetObj. */
extern unsigned int naviMainSelectPair(unsigned char *);
/* Supplied declaration required: naviMainGetRequestedMap. */
extern unsigned int FUN_00492c70(unsigned char *);
/* Supplied declaration required: FUN_0049325c. */
/* Supplied declaration required: words2Copy. */
/* Supplied declaration required: FUN_0049368c. */
extern unsigned int curveEvaluateStandard(int, unsigned int);
/* Supplied declaration required: NaviMain_GetCurrentMap. */


void FUN_0048a5e4(int param_1)

{
/* irregular: 3 goto(s); irregular input(s): in_fpscr; 20 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char *puVar9;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int in_fpscr;
  float temp_v11;
  int temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  unsigned char temp_v17 [132];
  int temp_v18;
  unsigned char *temp_v19;
  unsigned char *temp_v20;
  int temp_v21;
  
  temp_v1 = gameFlagsGetBlock();
  temp_v2 = FUN_001692ac(5,1);
  renderStackPushIndexed(g_renderCtx,3,temp_v2);
  temp_v19 = (unsigned char *)(param_1 + 0x4cc);
  VectorSignedToFloat(0x100 - DAT_00587f20,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v3 = naviGetActiveStateValue();
  temp_v2 = naviMainSelectPair(temp_v19);
  lmapSceneGetObj(temp_v19);
  temp_v16 = 0.0f;
  temp_v15 = 0.0f;
  if (DAT_005f1a5e != '\0') {
    temp_v3 = naviMainGetRequestedMap(temp_v19);
    temp_v2 = FUN_00492c70(temp_v19);
  }
  if ((*(unsigned int *)(param_1 + 0x10) & 0x1000000) != 0) {
    words2Copy(param_1 + 0x4d0,&temp_v15);
  }
  efctSetSpeed();
  FUN_00183bb0();
  FUN_00164b5c(2,0x13,8,(int)temp_v15,(int)temp_v16,DAT_00587f20);
  temp_v9 = param_1 + 0x205ac;
  if ((*(unsigned int *)(param_1 + 0x10) & 0x20) == 0) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      if (DAT_005f1a5e != '\0') {
        temp_v2 = naviMainGetRequestedMap();
        temp_v3 = FUN_00492c70(temp_v19);
      }
      else {
        temp_v2 = NaviMain_GetCurrentMap(temp_v19);
        temp_v3 = naviMainSelectPair(temp_v19);
      }
      if ((DAT_005f1a5e == '\0') || (temp_v5 = FUN_00384cf4(), temp_v5 != 0)) {
        FUN_003849cc(temp_v2,temp_v3,1,temp_v17,0xffffffff);
        libc_strcpy(temp_v9,temp_v17);
      }
      else {
        temp_v2 = gameGetIndexedSlotMember(0);
        libc_strcpy(temp_v9,temp_v2);
      }
    }
    else {
      temp_v4 = mapRegionLookupValue((int)(short)temp_v2);
      temp_v5 = (int)DAT_005f1a5e;
      if (temp_v5 != 0) {
        VectorSignedToFloat(*(unsigned int *)(param_1 + 0x20638),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(*(unsigned int *)(param_1 + 0x2063c),(unsigned char)(in_fpscr >> 0x16) & 3);
        if (*(char *)(param_1 + 0x20634) != '\0') {
          VectorSignedToFloat(*(unsigned int *)(param_1 + 0x20648),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(*(unsigned int *)(param_1 + 0x2064c),(unsigned char)(in_fpscr >> 0x16) & 3);
        }
      }
      else if (DAT_005f1a5c != '\0') {
        if (*(char *)(param_1 + 0x20634) != '\0') {
          VectorSignedToFloat(*(unsigned int *)(param_1 + 0x20648),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(*(unsigned int *)(param_1 + 0x2064c),(unsigned char)(in_fpscr >> 0x16) & 3);
        }
      }
      if (temp_v5 != 0) {
        temp_v5 = FUN_00384cf4(temp_v5,temp_v4);
        if (temp_v5 != 0) {
          mapFindContainingRegionResult(temp_v3,temp_v2);
          temp_v4 = temp_v3;
        }
        else {
          temp_v4 = gameGetIndexedSlotMember(0);
        }
      }
      libc_strcpy(temp_v9,temp_v4);
    }
  }
  if (*(char *)(param_1 + 0x205ac) != '\0') {
    temp_v2 = curveEvaluateStandard(temp_v9,2);
    temp_v14 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = FUN_001834a4(0x13,0xfb4);
    temp_v11 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v13 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v11 = (float)VectorSignedToFloat((int)(temp_v11 + temp_v15) +
                                        (int)**(short **)(temp_v5 + 0xc) / 2,
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)(temp_v11 - temp_v14 * 0.5f),(unsigned char)(in_fpscr >> 0x16) & 3);
    if (DAT_005f1a5e != '\0') {
      VectorSignedToFloat((int)(temp_v13 + temp_v16),(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(2,0x2bdaffff,temp_v9);
    }
    else {
      VectorSignedToFloat((int)(temp_v13 + temp_v16),(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(2,0xffffffff,temp_v9);
    }
  }
  temp_v2 = packNibblesAndByte(6, 1, 0);
  renderStackPushIndexed(g_renderCtx,6,temp_v2);
  FUN_0049368c(param_1 + 0x4d0,4000,0,0,DAT_00587f20,1);
  FUN_0049368c(param_1 + 0x4d0,0xfa1,0,0,DAT_00587f20,1);
  FUN_0049368c(param_1 + 0x4d0,0xfa2,0,0,DAT_00587f20,1);
  FUN_0049368c(param_1 + 0x4d0,0xfa3,0,0,DAT_00587f20,1);
  renderCtxPopState(g_renderCtx,6);
  temp_v9 = 0xfa5;
  do {
    FUN_0049368c(param_1 + 0x4d0,temp_v9,0,0,DAT_00587f20,1);
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 0xfa9);
  temp_v9 = 0xfa9;
  do {
    FUN_0049368c(param_1 + 0x4d0,temp_v9,0,0,DAT_00587f20,1);
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 0xfad);
  if ((*(unsigned int *)(param_1 + 0x10) & 0x1000) != 0) {
    renderCtxPopState(g_renderCtx,3);
    return;
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    NaviMain_GetCurrentMap(temp_v19);
    temp_v9 = gameFlagsClassify();
    if (temp_v9 != 2 && temp_v9 != 3) {
      temp_v19 = (unsigned char *)(param_1 + 0x20630);
      temp_v18 = temp_v1 + 0xd00;
      temp_v20 = (unsigned char *)(param_1 + 0x2062c);
      temp_v21 = param_1 + 5;
      temp_v8 = 0;
LAB_0048ab1c:
      do {
        temp_v9 = param_1 + temp_v8;
        if (*(char *)(temp_v9 + 0x56) == '\0') {
          if (temp_v8 != 1) {
            if (temp_v8 != 3) goto LAB_0048ae60;
            if ((*(char *)(temp_v18 + 0x8e) == '\x06') || ('\0' < *(char *)(param_1 + 0x57))) {
              temp_v8 = 4;
              goto LAB_0048ab1c;
            }
          }
          else if ((*(char *)(temp_v18 + 0x8e) == '\f') || ('\0' < *(char *)(param_1 + 0x59))) {
            temp_v8 = 2;
            goto LAB_0048ab1c;
          }
          temp_v5 = temp_v8 + 0xfb5;
        }
        else {
LAB_0048ae60:
          if (temp_v8 != 5) {
            temp_v5 = temp_v8 + 0xfb5;
          }
          else {
            temp_v5 = FUN_00325064();
            if (temp_v5 == 0) {
              temp_v5 = 0x123c;
            }
            else {
              temp_v5 = 0x123e;
            }
          }
        }
        if ('\0' < *(char *)(temp_v9 + 0x56)) {
          if (temp_v8 != 5) {
            temp_v5 = temp_v5 + 5;
            *(char *)(temp_v9 + 0x56) = *(char *)(temp_v9 + 0x56) - '\x01';
          }
          else {
            temp_v5 = temp_v5 + 1;
            *(char *)(temp_v21 + 0x56) = *(char *)(param_1 + 0x5b) - '\x01';
          }
        }
        temp_v10 = param_1 + temp_v8 * 0x8c;
        temp_v2 = vec2GetXInt(temp_v10 + 0xc40);
        temp_v11 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v12 = (int)(temp_v11 + temp_v15);
        temp_v2 = vec2GetYInt(temp_v10 + 0xc40);
        temp_v6 = *(unsigned int *)(param_1 + 0x10);
        temp_v11 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v10 = (int)(temp_v11 + temp_v16);
        if ((temp_v6 & 0x20) == 0) {
          if (temp_v8 != 0) {
            if (temp_v8 == 4) {
              temp_v6 = (unsigned int)*(unsigned char *)(param_1 + 0x5a);
            }
            if (temp_v8 != 4 || temp_v6 != 0) {
              puVar9 = (unsigned char *)(temp_v9 + 0x2062c);
              temp_v0 = 1;
            }
            else {
              temp_v7 = param_1;
              listGetAdjacentEntryId(param_1,0xffffffff);
              temp_v0 = 0;
              puVar9 = temp_v19;
              if (temp_v7 != 0) {
                temp_v0 = 1;
              }
            }
            *puVar9 = temp_v0;
          }
          else if (*(char *)(param_1 + 0x56) != '\0') {
            puVar9 = (unsigned char *)(temp_v9 + 0x2062c);
            temp_v0 = 1;
            *puVar9 = temp_v0;
          }
          else {
            temp_v7 = param_1;
            listGetAdjacentEntryId(param_1,1);
            if (temp_v7 != 0) {
              temp_v0 = 1;
              puVar9 = temp_v20;
              *puVar9 = temp_v0;
            }
            else {
              *temp_v20 = 0;
            }
          }
        }
        if (((DAT_005f1a5e != '\0') && (temp_v7 = FUN_00384cf4(), temp_v7 == 0)) &&
           ((temp_v8 < 2 || (temp_v8 == 3 || temp_v8 == 4)))) {
          *(unsigned char *)(temp_v9 + 0x2062c) = 0;
        }
        if (*(char *)(temp_v9 + 0x2062c) != '\0') {
          FUN_0049325c(temp_v5,temp_v12,temp_v10,DAT_00587f20,1);
        }
        else {
          uiDrawSpriteWithOptionalVertexColors(temp_v5,temp_v12,temp_v10,DAT_00587f20,0x80,1);
        }
        if (*(int *)(temp_v1 + 0x15b8) != 0) {
          FUN_0049325c(0x1244,temp_v12,temp_v10,DAT_00587f20,1);
        }
        temp_v8 = temp_v8 + 1;
      } while ((int)temp_v8 < 6);
    }
  }
  else {
    NaviMain_GetCurrentMap(temp_v19);
    temp_v9 = gameFlagsClassify();
    if (temp_v9 == 2 || temp_v9 == 3) {
      renderCtxPopState(g_renderCtx,3);
      return;
    }
    if (*(int *)(temp_v1 + 0x1514) != 0) {
      if (*(int *)(temp_v1 + 0x1510) == 0) {
        temp_v9 = 0x1154;
      }
      else {
        temp_v9 = 0x1152;
      }
      if ('\0' < *(char *)(param_1 + 0x56)) {
        temp_v9 = temp_v9 + 1;
        *(char *)(param_1 + 0x56) = *(char *)(param_1 + 0x56) - '\x01';
      }
      temp_v2 = vec2GetXInt(param_1 + 0xc40);
      temp_v11 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v11 = temp_v11 + temp_v15;
      temp_v2 = vec2GetYInt(param_1 + 0xc40);
      temp_v13 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v13 = temp_v13 + temp_v16;
      if ((DAT_005f1a5e == '\0') || (temp_v5 = FUN_00384cf4(), temp_v5 != 0)) {
        FUN_0049325c(temp_v9,(int)temp_v11,(int)temp_v13,DAT_00587f20,1);
      }
      else {
        uiDrawSpriteWithOptionalVertexColors(temp_v9,(int)temp_v11,(int)temp_v13,DAT_00587f20,0x80,1);
      }
      temp_v5 = *(int *)(temp_v1 + 0x1514);
      if (temp_v5 == 1) {
        temp_v9 = 0x1156;
      }
      else if (temp_v5 != 0) {
        if (temp_v5 == 2) {
          temp_v9 = 0x1240;
        }
      }
      else {
        temp_v9 = 0x1158;
      }
    }
    else {
      temp_v9 = 0x1158;
    }
    if ('\0' < *(char *)(param_1 + 0x57)) {
      temp_v9 = temp_v9 + 1;
      *(char *)(param_1 + 0x57) = *(char *)(param_1 + 0x57) - '\x01';
    }
    temp_v5 = param_1 + 0xccc;
    temp_v2 = vec2GetXInt();
    temp_v11 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v11 = temp_v11 + temp_v15;
    temp_v2 = vec2GetYInt(temp_v5);
    temp_v13 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v13 = temp_v13 + temp_v16;
    if ((DAT_005f1a5e == '\0') || (temp_v5 = FUN_00384cf4(), temp_v5 != 0)) {
      FUN_0049325c(temp_v9,(int)temp_v11,(int)temp_v13,DAT_00587f20,1);
    }
    else {
      uiDrawSpriteWithOptionalVertexColors(temp_v9,(int)temp_v11,(int)temp_v13,DAT_00587f20,0x80,1);
    }
    temp_v2 = 0xfb7;
    if ('\0' < *(char *)(param_1 + 0x58)) {
      temp_v2 = 0xfbc;
      *(char *)(param_1 + 0x58) = *(char *)(param_1 + 0x58) - '\x01';
    }
    temp_v3 = vec2GetXInt();
    temp_v11 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v11 = temp_v11 + temp_v15;
    temp_v3 = vec2GetYInt(param_1 + 0xd58);
    temp_v13 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_0049325c(temp_v2,(int)temp_v11,(int)(temp_v13 + temp_v16),DAT_00587f20,1);
    temp_v9 = FUN_00325064();
    if (temp_v9 == 0) {
      temp_v9 = 0x1235;
    }
    else {
      temp_v9 = 0x1237;
    }
    if ('\0' < *(char *)(param_1 + 0x5b)) {
      temp_v9 = temp_v9 + 1;
      *(char *)(param_1 + 0x5b) = *(char *)(param_1 + 0x5b) - '\x01';
    }
    temp_v2 = vec2GetXInt();
    temp_v11 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v11 = temp_v11 + temp_v15;
    temp_v2 = vec2GetYInt(param_1 + 0xefc);
    temp_v13 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v13 = temp_v13 + temp_v16;
    FUN_0049325c(temp_v9,(int)temp_v11,(int)temp_v13,DAT_00587f20,1);
    if (*(int *)(temp_v1 + 0x15b8) != 0) {
      FUN_0049325c(0x1244,(int)temp_v11,(int)temp_v13,DAT_00587f20,1);
    }
  }
  renderCtxPopState(g_renderCtx,3);
  return;
}

} /* extern "C" */
