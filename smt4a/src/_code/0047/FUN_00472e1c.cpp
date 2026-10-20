/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00472e1c` (_code @ 0x472e1c, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int renderCtxResetColorScale(int);
int FUN_0016c560(int);
int FUN_001835b4(int, int, int, int, int, int);
int FUN_00183bb0(void);

typedef int romwright_code(...);
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int g_renderCtx; /* 0x59dbb4 */

extern unsigned int *jobGetWork(void);
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: FUN_0016c560. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */


unsigned int FUN_00472e1c(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar6;
  
  puVar2 = (unsigned int *)jobGetWork();
  temp_v0 = g_renderCtx;
  if ((*(char *)((int)puVar2 + 0x415) != '\0') && ((*puVar2 & 0x10) != 0)) {
    temp_v1 = FUN_001692ac(1,0);
    piVar6 = (int *)(temp_v0 + 0x1258);
    temp_v2 = *piVar6;
    temp_v3 = piVar6[temp_v2 + 2];
    *piVar6 = temp_v2 + 1;
    piVar6[temp_v2 + 3] = temp_v1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v3 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
    efctSetSpeed();
    FUN_001835b4(2,8,0x14f,0,0,6);
    efctSetSpeed();
    temp_v0 = g_renderCtx;
    piVar6 = (int *)(g_renderCtx + 0x1258);
    temp_v1 = *piVar6;
    temp_v2 = piVar6[temp_v1 + 2];
    *piVar6 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v2 != piVar6[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
    FUN_00183bb0();
    FUN_0016c560(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
  }
  return 0;
}

} /* extern "C" */
