/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049f300` (_code @ 0x49f300, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int efctSetSpeed(void);
int FUN_0016c410(int);
int FUN_001835b4(int, int, int, int, int, int);
int FUN_0049d594(int);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_0049d594. */


unsigned int FUN_0049f300(int param_1)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  
  if (*(char *)(param_1 + 4) != '\0' && *(char *)(param_1 + 4) != '\x02') {
    FUN_00157558(g_renderCtx);
    temp_v1 = g_renderCtx;
    temp_v2 = FUN_001692ac(1,0);
    piVar6 = (int *)(temp_v1 + 0x1258);
    temp_v3 = *piVar6;
    temp_v4 = piVar6[temp_v3 + 2];
    *piVar6 = temp_v3 + 1;
    piVar6[temp_v3 + 3] = temp_v2;
    if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v4 != temp_v2) {
      (**(romwright_code **)(temp_v1 + 0x1274))();
      *(unsigned char *)(temp_v1 + 0x1270) = 0;
    }
    temp_v0 = *(char *)(param_1 + 4);
    if (temp_v0 != '\a') {
      if (!(temp_v0 == '\b' || temp_v0 == '\t')) {
        FUN_0049d594(param_1);
      }
      else if (*(char *)(param_1 + 0x474) != '\0') {
        FUN_001835b4(2,0x33,0x7e,0,0,0xc9);
      }
    }
    efctSetSpeed();
    temp_v1 = g_renderCtx;
    piVar6 = (int *)(g_renderCtx + 0x1258);
    temp_v2 = *piVar6;
    temp_v3 = piVar6[temp_v2 + 2];
    *piVar6 = temp_v2 - 1;
    if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v3 != piVar6[temp_v2 + 1]) {
      (**(romwright_code **)(temp_v1 + 0x1274))();
      *(unsigned char *)(temp_v1 + 0x1270) = 0;
    }
    temp_v1 = g_renderCtx;
    temp_v2 = packNibblesAndByte(6,7,0);
    piVar6 = (int *)(temp_v1 + 0x12b8);
    temp_v3 = piVar6[*piVar6 + 2];
    piVar6[*piVar6 + 2] = temp_v2;
    if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v3 != temp_v2) {
      (**(romwright_code **)(temp_v1 + 0x12d4))();
      *(unsigned char *)(temp_v1 + 0x12d0) = 0;
    }
    FUN_0016c410(g_renderCtx);
  }
  return 0;
}

} /* extern "C" */
