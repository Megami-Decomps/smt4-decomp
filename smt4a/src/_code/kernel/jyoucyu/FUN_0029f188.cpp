/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029f188` (_code @ 0x29f188, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e314(int, int, int);
int FUN_00157558(int);
int efctSetSpeed(void);
int FUN_0016c4b8(int, int);
int FUN_001835b4(int, int, int, int, int, int);
int FUN_00183bb0(void);

typedef int romwright_code(...);
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int DAT_0057ffbc; /* 0x57ffbc */
extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_0014e314. */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */


unsigned int FUN_0029f188(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  
  temp_v0 = DAT_0057ffbc;
  if (*(int *)(DAT_0057ffbc + 8) < 100) {
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
    efctSetSpeed();
    FUN_00183bb0();
    FUN_0016c4b8(g_renderCtx,0);
    FUN_0014e314(0xff,0xff,0xff);
    if (*(int *)(temp_v0 + 8) < 100) {
      FUN_001835b4(2,8,0x18a,0,0,0xb);
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
    efctSetSpeed();
  }
  return 0;
}

} /* extern "C" */
