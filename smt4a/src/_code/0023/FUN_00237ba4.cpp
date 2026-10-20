/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00237ba4` (_code @ 0x237ba4, 0x1f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobGetWork(void);
int FUN_0016c410(int);
int FUN_0016c560(int);
int taskRunPhase(int);

typedef int romwright_code(...);
extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: jobGetWork. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c560. */
extern int FUN_00387580(unsigned int);
/* Supplied declaration required: taskRunPhase. */


unsigned int FUN_00237ba4(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  jobGetWork();
  temp_v0 = g_renderCtx;
  temp_v1 = FUN_00387580(6);
  piVar5 = (int *)(temp_v0 + 0x1278);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x1290) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x1294))();
    *(unsigned char *)(temp_v0 + 0x1290) = 0;
  }
  temp_v0 = g_renderCtx;
  temp_v1 = FUN_001692ac(1,0);
  piVar5 = (int *)(temp_v0 + 0x1258);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  temp_v0 = g_renderCtx;
  temp_v1 = packNibblesAndByte(6,1,0);
  piVar5 = (int *)(temp_v0 + 0x12b8);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  taskRunPhase(0);
  temp_v0 = g_renderCtx;
  piVar5 = (int *)(g_renderCtx + 0x12b8);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  temp_v0 = g_renderCtx;
  piVar5 = (int *)(g_renderCtx + 0x1258);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  temp_v0 = g_renderCtx;
  piVar5 = (int *)(g_renderCtx + 0x1278);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1290) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1294))();
    *(unsigned char *)(temp_v0 + 0x1290) = 0;
  }
  FUN_0016c560(g_renderCtx);
  FUN_0016c410(g_renderCtx);
  return 0;
}

} /* extern "C" */
