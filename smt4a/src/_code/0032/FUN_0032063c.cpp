/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032063c` (_code @ 0x32063c, 0x1f0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00182540(unsigned int);

typedef int romwright_code(...);
extern int g_renderCtx; /* 0x59dbb4 */

extern int jobGetWork(void);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00182540. */
extern int FUN_00387580(unsigned int);


unsigned int FUN_0032063c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  
  temp_v1 = jobGetWork();
  temp_v0 = g_renderCtx;
  if (*(char *)(temp_v1 + 0x10) != '\0') {
    temp_v2 = FUN_00387580(6);
    piVar6 = (int *)(temp_v0 + 0x1278);
    temp_v3 = *piVar6;
    temp_v4 = piVar6[temp_v3 + 2];
    *piVar6 = temp_v3 + 1;
    piVar6[temp_v3 + 3] = temp_v2;
    if (*(char *)(temp_v0 + 0x1290) != '\0' || temp_v4 != temp_v2) {
      (**(romwright_code **)(temp_v0 + 0x1294))();
      *(unsigned char *)(temp_v0 + 0x1290) = 0;
    }
    temp_v0 = g_renderCtx;
    temp_v2 = FUN_001692ac(1,0);
    piVar6 = (int *)(temp_v0 + 0x1258);
    temp_v3 = *piVar6;
    temp_v4 = piVar6[temp_v3 + 2];
    *piVar6 = temp_v3 + 1;
    piVar6[temp_v3 + 3] = temp_v2;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v4 != temp_v2) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
    temp_v0 = g_renderCtx;
    temp_v2 = packNibblesAndByte(6,1,0);
    piVar6 = (int *)(temp_v0 + 0x12b8);
    temp_v3 = *piVar6;
    temp_v4 = piVar6[temp_v3 + 2];
    *piVar6 = temp_v3 + 1;
    piVar6[temp_v3 + 3] = temp_v2;
    if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v4 != temp_v2) {
      (**(romwright_code **)(temp_v0 + 0x12d4))();
      *(unsigned char *)(temp_v0 + 0x12d0) = 0;
    }
    FUN_00182540(*(unsigned int *)(temp_v1 + 0xc));
    temp_v0 = g_renderCtx;
    piVar6 = (int *)(g_renderCtx + 0x12b8);
    temp_v1 = *piVar6;
    temp_v2 = piVar6[temp_v1 + 2];
    *piVar6 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v2 != piVar6[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x12d4))();
      *(unsigned char *)(temp_v0 + 0x12d0) = 0;
    }
    temp_v0 = g_renderCtx;
    piVar6 = (int *)(g_renderCtx + 0x1258);
    temp_v1 = *piVar6;
    temp_v2 = piVar6[temp_v1 + 2];
    *piVar6 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v2 != piVar6[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
    temp_v0 = g_renderCtx;
    piVar6 = (int *)(g_renderCtx + 0x1278);
    temp_v1 = *piVar6;
    temp_v2 = piVar6[temp_v1 + 2];
    *piVar6 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x1290) != '\0' || temp_v2 != piVar6[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1294))();
      *(unsigned char *)(temp_v0 + 0x1290) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
