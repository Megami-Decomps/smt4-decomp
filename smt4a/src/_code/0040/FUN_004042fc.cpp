/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004042fc` (_code @ 0x4042fc, 0x264 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int renderPopStateStacks(void);
int FUN_00168e00(...);
int FUN_001835b4(...);
int renderCtxCalculateStereoParallax(int);
int resourceRunOperationIfUnblocked(int);
int objectApplyIfUnblocked(int);
int uiSearchPrimary(int);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: renderPopStateStacks. */
/* Supplied declaration required: FUN_00168e00. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: renderCtxCalculateStereoParallax. */
/* Supplied declaration required: resourceRunOperationIfUnblocked. */
/* Supplied declaration required: objectApplyIfUnblocked. */
/* Supplied declaration required: uiSearchPrimary. */


void FUN_004042fc(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int *piVar8;
  int temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  
  param_1 = param_1 + 0x28;
  temp_v8 = 0.26f;
  renderCtxCalculateStereoParallax(g_renderCtx);
  efctSetSpeed();
  param_2 = param_2 + (int)temp_v8;
  FUN_001835b4(2,0x32,0x2a,param_2,param_3,0xc9);
  FUN_001835b4(2,0x32,0xc,param_2,param_3,0xc9);
  temp_v7 = 0;
  temp_v1 = FUN_001834a4(0x32,0xd);
  temp_v2 = objectApplyIfUnblocked(param_1);
  temp_v3 = uiSearchPrimary(param_1);
  if (temp_v3 >= temp_v2) {
    temp_v2 = (int)*(short *)(*(int *)(temp_v1 + 0xc) + 2);
  }
  else {
    temp_v4 = objectApplyIfUnblocked(param_1);
    temp_v9 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v1 + 0xc) + 2),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = temp_v8 / temp_v9;
    temp_v4 = uiSearchPrimary(param_1);
    temp_v9 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v2 = (int)(temp_v9 * temp_v8);
    if (temp_v2 < 1) {
      temp_v2 = 1;
    }
    temp_v4 = resourceRunOperationIfUnblocked(param_1);
    temp_v9 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = (int)(temp_v9 * temp_v8);
    temp_v3 = resourceRunOperationIfUnblocked(param_1);
    temp_v5 = uiSearchPrimary(param_1);
    temp_v6 = objectApplyIfUnblocked(param_1);
    if ((temp_v3 + temp_v5 == temp_v6) &&
       (temp_v3 = (int)*(short *)(*(int *)(temp_v1 + 0xc) + 2), temp_v7 + temp_v2 < temp_v3)) {
      temp_v7 = temp_v3 - temp_v2;
    }
  }
  temp_v3 = g_renderCtx;
  temp_v0 = 0;
  if (*(int *)(g_renderCtx + *(int *)(g_renderCtx + 0x1318) * 4 + 0x1320) == 3) {
    temp_v6 = g_renderCtx + 0x1318 + *(int *)(g_renderCtx + 0x1318) * 4;
    temp_v5 = *(int *)(temp_v6 + 8);
    *(unsigned int *)(temp_v6 + 8) = 0;
    if (*(char *)(temp_v3 + 0x1330) != '\0' || temp_v5 != 0) {
      (**(romwright_code **)(temp_v3 + 0x1334))();
      *(unsigned char *)(temp_v3 + 0x1330) = 0;
    }
    temp_v0 = 1;
  }
  FUN_00168e00(*(short *)(temp_v1 + 8) + param_2,(int)*(short *)(temp_v1 + 10) + param_3 + temp_v7,
               (int)**(short **)(temp_v1 + 0xc),temp_v2);
  FUN_001835b4(2,0x32,0xd,param_2,param_3,0xce);
  temp_v1 = g_renderCtx;
  if (temp_v0) {
    piVar8 = (int *)(g_renderCtx + 0x1318);
    temp_v2 = piVar8[*piVar8 + 2];
    piVar8[*piVar8 + 2] = 3;
    if (*(char *)(temp_v1 + 0x1330) != '\0' || temp_v2 != 3) {
      (**(romwright_code **)(temp_v1 + 0x1334))();
      *(unsigned char *)(temp_v1 + 0x1330) = 0;
    }
  }
  renderPopStateStacks();
  efctSetSpeed();
  return;
}

} /* extern "C" */
