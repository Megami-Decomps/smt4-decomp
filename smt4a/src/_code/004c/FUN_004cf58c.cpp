/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cf58c` (_code @ 0x4cf58c, 0x22c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_001834a4(int, int);
int FUN_001835b4(int, int, int, int, int, int);
int FUN_00183bb0(void);
int FUN_001879d0(int);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_001879d0. */


void FUN_004cf58c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int in_fpscr;
  float temp_v4;
  
  temp_v0 = g_renderCtx;
  if (*(char *)(param_1 + 0x25) != '\0') {
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
    FUN_00183bb0();
    FUN_001834a4(0x22,3000);
    temp_v4 = 0.35f;
    FUN_001879d0(g_renderCtx);
    temp_v4 = (float)VectorSignedToFloat((int)temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001835b4(2,0x22,3000,(int)temp_v4,0,2);
    temp_v0 = g_renderCtx;
    piVar5 = (int *)(g_renderCtx + 0x1258);
    temp_v1 = *piVar5;
    temp_v2 = piVar5[temp_v1 + 2];
    *piVar5 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1274))(piVar5[temp_v1 + 1]);
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
    efctSetSpeed();
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
    FUN_00183bb0();
    FUN_001834a4(0x22,1000);
    temp_v4 = 0.28f;
    FUN_001879d0(g_renderCtx);
    temp_v4 = (float)VectorSignedToFloat((int)temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001835b4(2,0x22,1000,(int)temp_v4,0,6);
    temp_v0 = g_renderCtx;
    piVar5 = (int *)(g_renderCtx + 0x1258);
    temp_v1 = *piVar5;
    temp_v2 = piVar5[temp_v1 + 2];
    *piVar5 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
    efctSetSpeed();
    return;
  }
  return;
}

} /* extern "C" */
