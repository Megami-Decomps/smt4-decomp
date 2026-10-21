/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00321544` (_code @ 0x321544, 0x148 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int renderCtxResetColorScale(int);
int skinObjectUpdateMatrices(int);
int FUN_001879d0(int);
int FUN_003d939c(int);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
extern int g_btlTalkBustUp; /* 0x5710dc */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00157558. */
extern int aocJobIsValid(void);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: skinObjectUpdateMatrices. */
/* Supplied declaration required: FUN_001879d0. */
extern int btlMainIsSecondJobValid(void);
/* Supplied declaration required: FUN_003d939c. */


unsigned int FUN_00321544(void)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned int in_fpscr;
  float temp_v5;
  
  temp_v0 = g_btlTalkBustUp;
  if (g_btlTalkBustUp != 0) {
    FUN_00157558(g_renderCtx);
    temp_v2 = g_renderCtx;
    temp_v1 = FUN_001692ac(1,0);
    piVar6 = (int *)(temp_v2 + 0x1258);
    temp_v3 = *piVar6;
    temp_v4 = piVar6[temp_v3 + 2];
    *piVar6 = temp_v3 + 1;
    piVar6[temp_v3 + 3] = temp_v1;
    if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v4 != temp_v1) {
      (**(romwright_code **)(temp_v2 + 0x1274))();
      *(unsigned char *)(temp_v2 + 0x1270) = 0;
    }
    if ((*(char *)(temp_v0 + 0x2f4) != '\0') && (*(int *)(temp_v0 + 0x2e8) == 2)) {
      temp_v5 = 0.27f;
      FUN_001879d0(g_renderCtx);
      temp_v1 = (int)temp_v5;
      temp_v2 = aocJobIsValid();
      if ((temp_v2 != 0) || (temp_v2 = btlMainIsSecondJobValid(), temp_v2 != 0)) {
        temp_v5 = 0.26f;
        FUN_001879d0(g_renderCtx);
        temp_v1 = (int)temp_v5;
      }
      VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_003d939c(temp_v0);
    }
    temp_v0 = g_renderCtx;
    piVar6 = (int *)(g_renderCtx + 0x1258);
    temp_v2 = *piVar6;
    temp_v1 = piVar6[temp_v2 + 2];
    *piVar6 = temp_v2 - 1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v1 != piVar6[temp_v2 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
  }
  return 0;
}

} /* extern "C" */
