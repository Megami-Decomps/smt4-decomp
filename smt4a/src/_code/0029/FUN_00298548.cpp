/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00298548` (_code @ 0x298548, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e314(unsigned int);
int FUN_00157558(int);
int FUN_0016c4b8(int, int);
int FUN_002371b0(void);

typedef int romwright_code(...);
extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_0014e314. */
/* Supplied declaration required: FUN_00157558. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_002371b0. */


unsigned int FUN_00298548(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int temp_v4;
  
  temp_v0 = g_renderCtx;
  temp_v4 = *(unsigned int *)(*param_1 + 0x4d18);
  temp_v1 = FUN_001692ac(5,1);
  piVar5 = (int *)(temp_v0 + 0x1258);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  FUN_00157558(g_renderCtx);
  FUN_0016c4b8(g_renderCtx,0);
  FUN_0014e314(temp_v4);
  FUN_002371b0();
  temp_v0 = g_renderCtx;
  piVar5 = (int *)(g_renderCtx + 0x1258);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  return 0;
}

} /* extern "C" */
