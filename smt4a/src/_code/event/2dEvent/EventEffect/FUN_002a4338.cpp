/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4338` (_code @ 0x2a4338, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int efctSetSpeed(void);
int FUN_001835b4(unsigned int, unsigned int, int, int, int, int);
int FUN_00183bb0(void);
int FUN_001879d0(int);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int DAT_0057f430; /* 0x57f430 */
extern int DAT_0057f434; /* 0x57f434 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_001879d0. */


unsigned int FUN_002a4338(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  float temp_v7;
  
  temp_v5 = *(int *)(param_1 + 8);
  temp_v0 = *(int *)(temp_v5 + 8);
  if (temp_v0 != 0 && temp_v0 != 5) {
    temp_v6 = DAT_0057f434 * 1000;
    FUN_00157558(g_renderCtx);
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
    efctSetSpeed();
    temp_v4 = 2;
    temp_v7 = 0.25f;
    if (*(char *)(temp_v5 + 0x14) != '\0') {
      temp_v4 = 0x3002;
    }
    FUN_001879d0(g_renderCtx);
    FUN_001835b4(temp_v4,DAT_0057f430,temp_v6,(int)temp_v7,0,0x2e);
    FUN_00183bb0();
    efctSetSpeed();
    temp_v0 = g_renderCtx;
    piVar5 = (int *)(g_renderCtx + 0x1258);
    temp_v5 = *piVar5;
    temp_v1 = piVar5[temp_v5 + 2];
    *piVar5 = temp_v5 - 1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v1 != piVar5[temp_v5 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
