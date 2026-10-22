/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034dc3c` (_code @ 0x34dc3c, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int renderPopStateStacks(void);
int FUN_00168e00(int, int, int, int);
int FUN_001835b4(int, int, int, int, int, int);
int renderCtxCalculateStereoParallax(int);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: renderPopStateStacks. */
/* Supplied declaration required: FUN_00168e00. */
extern int FUN_001834a4(int, int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: renderCtxCalculateStereoParallax. */


void FUN_0034dc3c(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  float temp_v5;
  
  temp_v2 = FUN_001834a4(param_1[0xb],param_1[0xc]);
  temp_v5 = 0.26f;
  renderCtxCalculateStereoParallax(g_renderCtx);
  temp_v1 = g_renderCtx;
  temp_v0 = 0;
  if (*(int *)(g_renderCtx + *(int *)(g_renderCtx + 0x1318) * 4 + 0x1320) == 3) {
    temp_v4 = g_renderCtx + 0x1318 + *(int *)(g_renderCtx + 0x1318) * 4;
    temp_v3 = *(int *)(temp_v4 + 8);
    *(unsigned int *)(temp_v4 + 8) = 0;
    if (*(char *)(temp_v1 + 0x1330) != '\0' || temp_v3 != 0) {
      (**(romwright_code **)(temp_v1 + 0x1334))();
      *(unsigned char *)(temp_v1 + 0x1330) = 0;
    }
    temp_v0 = 1;
  }
  FUN_00168e00((int)*(short *)(temp_v2 + 8) + param_1[2] + (int)temp_v5,
               (int)*(short *)(temp_v2 + 10) + param_1[3],param_1[4],param_1[5]);
  FUN_001835b4(2,param_1[0xb],param_1[0xc],*param_1 + (int)temp_v5,param_1[1],0x15);
  temp_v1 = g_renderCtx;
  if (temp_v0) {
    piVar6 = (int *)(g_renderCtx + 0x1318);
    temp_v2 = piVar6[*piVar6 + 2];
    piVar6[*piVar6 + 2] = 3;
    if (*(char *)(temp_v1 + 0x1330) != '\0' || temp_v2 != 3) {
      (**(romwright_code **)(temp_v1 + 0x1334))();
      *(unsigned char *)(temp_v1 + 0x1330) = 0;
    }
  }
  renderPopStateStacks();
  return;
}

} /* extern "C" */
