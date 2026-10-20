/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00298678` (_code @ 0x298678, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int renderCtxResetColorScale(int);
int skinObjectUpdateMatrices(int);
int FUN_0028cb88(int);

typedef int romwright_code(...);
extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: skinObjectUpdateMatrices. */
extern int asdTMTexTableNodeIsLoaded(unsigned int, int);
extern int FUN_00284e94(void);
/* Supplied declaration required: FUN_0028cb88. */


unsigned int FUN_00298678(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v4 = *(int *)(param_1 + 0x10);
  if (temp_v4 != 0) {
    temp_v2 = 0;
    temp_v3 = temp_v2;
    do {
      temp_v0 = asdTMTexTableNodeIsLoaded(0xc,temp_v2);
      if (temp_v0 != 0) {
        temp_v3 = temp_v3 + 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 6);
    temp_v2 = 0;
    do {
      temp_v0 = asdTMTexTableNodeIsLoaded(0xd,temp_v2);
      if (temp_v0 != 0) {
        temp_v3 = temp_v3 + 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 5);
    if (temp_v3 >= 11) {
      FUN_00157558(g_renderCtx);
      temp_v3 = g_renderCtx;
      temp_v2 = FUN_001692ac(1,0);
      piVar3 = (int *)(temp_v3 + 0x1258);
      temp_v0 = *piVar3;
      temp_v1 = piVar3[temp_v0 + 2];
      *piVar3 = temp_v0 + 1;
      piVar3[temp_v0 + 3] = temp_v2;
      if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v1 != temp_v2) {
        (**(romwright_code **)(temp_v3 + 0x1274))();
        *(unsigned char *)(temp_v3 + 0x1270) = 0;
      }
      temp_v3 = FUN_00284e94();
      if (temp_v3 != 0) {
        FUN_0028cb88(temp_v4 + 0x28c4);
      }
      temp_v4 = g_renderCtx;
      piVar3 = (int *)(g_renderCtx + 0x1258);
      temp_v3 = *piVar3;
      temp_v2 = piVar3[temp_v3 + 2];
      *piVar3 = temp_v3 - 1;
      if (*(char *)(temp_v4 + 0x1270) != '\0' || temp_v2 != piVar3[temp_v3 + 1]) {
        (**(romwright_code **)(temp_v4 + 0x1274))();
        *(unsigned char *)(temp_v4 + 0x1270) = 0;
      }
      skinObjectUpdateMatrices(g_renderCtx);
      renderCtxResetColorScale(g_renderCtx);
      return 0;
    }
  }
  return 0;
}

} /* extern "C" */
