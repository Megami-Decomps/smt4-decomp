/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dece8` (_code @ 0x2dece8, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobGetWork(void);
int renderCtxResetColorScale(int);
int FUN_0016c560(int);

typedef int romwright_code(...);
extern unsigned char g_btlEffect; /* 0x5737f0 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: jobGetWork. */
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: FUN_0016c560. */
extern int FUN_00387580(unsigned int);


unsigned int FUN_002dece8(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned char temp_v6;
  
  jobGetWork();
  temp_v3 = g_renderCtx;
  temp_v0 = (*(int *)((unsigned char *)&g_btlEffect + 0x18));
  if ((*(int *)((unsigned char *)&g_btlEffect + 0x18)) != 0) {
    temp_v1 = *(unsigned int *)((*(int *)((unsigned char *)&g_btlEffect + 0x18)) + 0x339c);
    temp_v6 = (temp_v1 & 2) != 0;
    if (temp_v6) {
      temp_v1 = *(unsigned int *)((*(int *)((unsigned char *)&g_btlEffect + 0x18)) + 0x33a8);
    }
    if (temp_v6 && temp_v1 != 0) {
      temp_v2 = FUN_00387580(6);
      piVar7 = (int *)(temp_v3 + 0x1278);
      temp_v4 = *piVar7;
      temp_v5 = piVar7[temp_v4 + 2];
      *piVar7 = temp_v4 + 1;
      piVar7[temp_v4 + 3] = temp_v2;
      if (*(char *)(temp_v3 + 0x1290) != '\0' || temp_v5 != temp_v2) {
        (**(romwright_code **)(temp_v3 + 0x1294))();
        *(unsigned char *)(temp_v3 + 0x1290) = 0;
      }
      (**(romwright_code **)(**(int **)(temp_v0 + 0x33a8) + 0xc))();
      temp_v0 = g_renderCtx;
      piVar7 = (int *)(g_renderCtx + 0x1278);
      temp_v3 = *piVar7;
      temp_v2 = piVar7[temp_v3 + 2];
      *piVar7 = temp_v3 - 1;
      if (*(char *)(temp_v0 + 0x1290) != '\0' || temp_v2 != piVar7[temp_v3 + 1]) {
        (**(romwright_code **)(temp_v0 + 0x1294))(piVar7[temp_v3 + 1]);
        *(unsigned char *)(temp_v0 + 0x1290) = 0;
      }
      FUN_0016c560(g_renderCtx);
      renderCtxResetColorScale(g_renderCtx);
    }
  }
  return 0;
}

} /* extern "C" */
