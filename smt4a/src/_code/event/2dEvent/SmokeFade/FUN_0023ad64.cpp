/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023ad64` (_code @ 0x23ad64, 0x1f0 bytes) from smt4a.cxi.
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
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int DAT_0057f480; /* 0x57f480 */
extern int DAT_0057f484; /* 0x57f484 */
extern unsigned int DAT_0057f48c; /* 0x57f48c */
extern int DAT_0057f490; /* 0x57f490 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_001879d0. */


unsigned char FUN_0023ad64(int *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  
  if (*(char *)(*param_1 + 0x24) != '\0') {
    FUN_00183bb0();
    FUN_00157558(g_renderCtx);
    temp_v3 = g_renderCtx;
    temp_v0 = FUN_001692ac(1,0);
    piVar4 = (int *)(temp_v3 + 0x1258);
    temp_v1 = *piVar4;
    temp_v2 = piVar4[temp_v1 + 2];
    *piVar4 = temp_v1 + 1;
    piVar4[temp_v1 + 3] = temp_v0;
    if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v2 != temp_v0) {
      (**(romwright_code **)(temp_v3 + 0x1274))();
      *(unsigned char *)(temp_v3 + 0x1270) = 0;
    }
    temp_v3 = DAT_0057f484 * 1000;
    efctSetSpeed();
    FUN_001835b4(2,DAT_0057f480,temp_v3,0,0,0xfa);
    temp_v3 = g_renderCtx;
    temp_v0 = FUN_00169294(6,1,0);
    piVar4 = (int *)(temp_v3 + 0x12b8);
    temp_v1 = *piVar4;
    temp_v2 = piVar4[temp_v1 + 2];
    *piVar4 = temp_v1 + 1;
    piVar4[temp_v1 + 3] = temp_v0;
    if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v2 != temp_v0) {
      (**(romwright_code **)(temp_v3 + 0x12d4))();
      *(unsigned char *)(temp_v3 + 0x12d0) = 0;
    }
    FUN_001879d0(g_renderCtx);
    temp_v3 = DAT_0057f490 * 1000;
    efctSetSpeed();
    FUN_001835b4(2,DAT_0057f48c,temp_v3,0,0,0xfb);
    temp_v3 = g_renderCtx;
    piVar4 = (int *)(g_renderCtx + 0x12b8);
    temp_v0 = *piVar4;
    temp_v1 = piVar4[temp_v0 + 2];
    *piVar4 = temp_v0 - 1;
    if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v1 != piVar4[temp_v0 + 1]) {
      (**(romwright_code **)(temp_v3 + 0x12d4))();
      *(unsigned char *)(temp_v3 + 0x12d0) = 0;
    }
    FUN_00183bb0();
    efctSetSpeed();
    temp_v3 = g_renderCtx;
    piVar4 = (int *)(g_renderCtx + 0x1258);
    temp_v0 = *piVar4;
    temp_v1 = piVar4[temp_v0 + 2];
    *piVar4 = temp_v0 - 1;
    if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v1 != piVar4[temp_v0 + 1]) {
      (**(romwright_code **)(temp_v3 + 0x1274))();
      *(unsigned char *)(temp_v3 + 0x1270) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
