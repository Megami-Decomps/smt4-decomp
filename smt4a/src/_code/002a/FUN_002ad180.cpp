/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ad180` (_code @ 0x2ad180, 0x288 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int renderCtxResetColorScale(int);
int skinObjectUpdateMatrices(int);
int FUN_002609d8(unsigned int, int, int);

typedef int romwright_code(...);
extern int g_eventTex; /* 0x57f3b0 */
extern int g_renderCtx; /* 0x59dbb4 */

extern int jobIsValid(unsigned int);
extern int jobGetWork(void);
extern int jobGetStatus(unsigned int);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: skinObjectUpdateMatrices. */
/* Supplied declaration required: FUN_002609d8. */
extern int FUN_00387580(unsigned int);


unsigned int FUN_002ad180(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  
  temp_v0 = jobGetWork();
  temp_v4 = g_renderCtx;
  temp_v1 = FUN_001692ac(1,0);
  piVar5 = (int *)(temp_v4 + 0x1258);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v4 + 0x1270) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v4 + 0x1274))();
    *(unsigned char *)(temp_v4 + 0x1270) = 0;
  }
  temp_v4 = g_renderCtx;
  temp_v1 = FUN_00387580(6);
  piVar5 = (int *)(temp_v4 + 0x1278);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v4 + 0x1290) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v4 + 0x1294))();
    *(unsigned char *)(temp_v4 + 0x1290) = 0;
  }
  temp_v4 = g_renderCtx;
  temp_v1 = packNibblesAndByte(6,7,0);
  piVar5 = (int *)(temp_v4 + 0x12b8);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v4 + 0x12d0) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v4 + 0x12d4))();
    *(unsigned char *)(temp_v4 + 0x12d0) = 0;
  }
  temp_v4 = 0;
  if (temp_v4 < *(int *)(temp_v0 + 0x44)) {
    do {
      temp_v1 = temp_v0 + temp_v4 * 4;
      if (*(char *)(g_eventTex + 0x8c) != '\0') {
        temp_v2 = jobIsValid(*(unsigned int *)(temp_v1 + 4));
        if (temp_v2 != 0) {
          FUN_002609d8(*(unsigned int *)(temp_v1 + 4),(int)*(float *)(temp_v0 + 0x90),
                       (int)*(float *)(temp_v0 + 0x94));
        }
      }
      else {
        temp_v2 = jobIsValid(*(unsigned int *)(temp_v1 + 4));
        if ((temp_v2 != 0) && (temp_v2 = jobGetStatus(*(unsigned int *)(temp_v1 + 4)), temp_v2 == 4)) {
          FUN_002609d8(*(unsigned int *)(temp_v1 + 4),(int)*(float *)(temp_v0 + 0x90),
                       (int)*(float *)(temp_v0 + 0x94));
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < *(int *)(temp_v0 + 0x44));
  }
  temp_v4 = g_renderCtx;
  piVar5 = (int *)(g_renderCtx + 0x12b8);
  temp_v0 = *piVar5;
  temp_v1 = piVar5[temp_v0 + 2];
  *piVar5 = temp_v0 - 1;
  if (*(char *)(temp_v4 + 0x12d0) != '\0' || temp_v1 != piVar5[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v4 + 0x12d4))();
    *(unsigned char *)(temp_v4 + 0x12d0) = 0;
  }
  temp_v4 = g_renderCtx;
  piVar5 = (int *)(g_renderCtx + 0x1258);
  temp_v0 = *piVar5;
  temp_v1 = piVar5[temp_v0 + 2];
  *piVar5 = temp_v0 - 1;
  if (*(char *)(temp_v4 + 0x1270) != '\0' || temp_v1 != piVar5[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v4 + 0x1274))();
    *(unsigned char *)(temp_v4 + 0x1270) = 0;
  }
  temp_v4 = g_renderCtx;
  piVar5 = (int *)(g_renderCtx + 0x1278);
  temp_v0 = *piVar5;
  temp_v1 = piVar5[temp_v0 + 2];
  *piVar5 = temp_v0 - 1;
  if (*(char *)(temp_v4 + 0x1290) != '\0' || temp_v1 != piVar5[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v4 + 0x1294))();
    *(unsigned char *)(temp_v4 + 0x1290) = 0;
  }
  skinObjectUpdateMatrices(g_renderCtx);
  renderCtxResetColorScale(g_renderCtx);
  return 0;
}

} /* extern "C" */
