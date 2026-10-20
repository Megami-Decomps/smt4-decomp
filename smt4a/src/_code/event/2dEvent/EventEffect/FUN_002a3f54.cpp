/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a3f54` (_code @ 0x2a3f58, 0x22c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int efctSetSpeed(void);
int FUN_001835b4(int, unsigned int, int, int, int, int);
int FUN_00183bb0(void);
int FUN_001879d0(int);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char DAT_0057f3e8; /* 0x57f3e8 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_001879d0. */


unsigned int FUN_002a3f54(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  float temp_v6;
  
  temp_v5 = *(int *)(param_1 + 4);
  if (*(unsigned int *)(temp_v5 + 8) >= 2 && *(unsigned int *)(temp_v5 + 8) != 5) {
    temp_v2 = *(int *)(*(int *)(temp_v5 + 0x18) * 0xc + 0x57f3ec);
    FUN_00157558(g_renderCtx);
    temp_v1 = g_renderCtx;
    temp_v0 = FUN_001692ac(1,0);
    piVar7 = (int *)(temp_v1 + 0x1258);
    temp_v3 = *piVar7;
    temp_v4 = piVar7[temp_v3 + 2];
    *piVar7 = temp_v3 + 1;
    piVar7[temp_v3 + 3] = temp_v0;
    if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v4 != temp_v0) {
      (**(romwright_code **)(temp_v1 + 0x1274))();
      *(unsigned char *)(temp_v1 + 0x1270) = 0;
    }
    temp_v1 = g_renderCtx;
    temp_v0 = *(int *)(temp_v5 + 0x18);
    if ((temp_v0 == 3 || temp_v0 == 4) || temp_v0 == 5) {
      temp_v0 = packNibblesAndByte(6,1,0);
      piVar7 = (int *)(temp_v1 + 0x12b8);
      temp_v3 = *piVar7;
      temp_v4 = piVar7[temp_v3 + 2];
      *piVar7 = temp_v3 + 1;
      piVar7[temp_v3 + 3] = temp_v0;
      if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v4 != temp_v0) {
        (**(romwright_code **)(temp_v1 + 0x12d4))();
        *(unsigned char *)(temp_v1 + 0x12d0) = 0;
      }
    }
    efctSetSpeed();
    temp_v6 = 0.25f;
    FUN_001879d0(g_renderCtx);
    FUN_001835b4(2,*(unsigned int *)(&DAT_0057f3e8 + *(int *)(temp_v5 + 0x18) * 0xc),temp_v2 * 1000,
                 (int)temp_v6,0,0x2e);
    temp_v1 = g_renderCtx;
    temp_v5 = *(int *)(temp_v5 + 0x18);
    if ((temp_v5 == 3 || temp_v5 == 4) || temp_v5 == 5) {
      piVar7 = (int *)(g_renderCtx + 0x12b8);
      temp_v5 = *piVar7;
      temp_v0 = piVar7[temp_v5 + 2];
      *piVar7 = temp_v5 - 1;
      if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v0 != piVar7[temp_v5 + 1]) {
        (**(romwright_code **)(temp_v1 + 0x12d4))();
        *(unsigned char *)(temp_v1 + 0x12d0) = 0;
      }
    }
    FUN_00183bb0();
    efctSetSpeed();
    temp_v5 = g_renderCtx;
    piVar7 = (int *)(g_renderCtx + 0x1258);
    temp_v1 = *piVar7;
    temp_v0 = piVar7[temp_v1 + 2];
    *piVar7 = temp_v1 - 1;
    if (*(char *)(temp_v5 + 0x1270) != '\0' || temp_v0 != piVar7[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v5 + 0x1274))();
      *(unsigned char *)(temp_v5 + 0x1270) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
