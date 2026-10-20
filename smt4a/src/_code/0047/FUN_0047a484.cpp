/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047a484` (_code @ 0x47a484, 0x264 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int FUN_00164b5c(int, int, int, int, int, int);
int efctSetSpeed(void);
int FUN_0016c410(...);
int FUN_0016c560(...);
int FUN_001835b4(int, int, int, int, int, int);
int FUN_00183bb0(void);
int FUN_002a482c(unsigned int *);
int FUN_0031d174(unsigned int *);
int FUN_00344cd0(...);
int FUN_00479b6c(unsigned int *, int, int, int);
int FUN_004d0a8c(unsigned int *, unsigned int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c560. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_002a482c. */
/* Supplied declaration required: FUN_0031d174. */
/* Supplied declaration required: FUN_00344cd0. */
/* Supplied declaration required: FUN_00479b6c. */
extern int FUN_004cfe4c(unsigned int *);
/* Supplied declaration required: FUN_004d0a8c. */


void FUN_0047a484(unsigned int *param_1)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int temp_v6;
  
  if ((*param_1 & 0x10000) == 0) {
    FUN_00157558(g_renderCtx);
    FUN_00183bb0();
    efctSetSpeed();
    temp_v1 = g_renderCtx;
    temp_v0 = FUN_001692ac(1,0);
    piVar7 = (int *)(temp_v1 + 0x1258);
    temp_v4 = *piVar7;
    temp_v5 = piVar7[temp_v4 + 2];
    *piVar7 = temp_v4 + 1;
    piVar7[temp_v4 + 3] = temp_v0;
    if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v5 != temp_v0) {
      (**(romwright_code **)(temp_v1 + 0x1274))();
      *(unsigned char *)(temp_v1 + 0x1270) = 0;
    }
    FUN_00164b5c(2,0x2f,7,0,0,0x81);
    temp_v1 = FUN_002a482c(param_1 + 0x90);
    FUN_0031d174(param_1 + 0x90);
    temp_v6 = param_1[0x91];
    temp_v0 = 0;
    if (temp_v0 < (int)temp_v6) {
      do {
        temp_v4 = FUN_004cfe4c(param_1 + 0x90);
        FUN_00479b6c(param_1,temp_v0,temp_v1 + temp_v0,temp_v4 == temp_v1 + temp_v0);
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (int)temp_v6);
    }
    FUN_001835b4(2,0x2f,0x51,0,0,0x81);
    temp_v2 = FUN_0031d174(param_1 + 0x90);
    temp_v3 = FUN_002a482c(param_1 + 0x90);
    FUN_004d0a8c(param_1 + 0xba,temp_v3,temp_v2);
    temp_v1 = (int)(short)param_1[0xd0];
    temp_v0 = (int)(short)param_1[0xcf];
    temp_v4 = (int)*(short *)((int)param_1 + 0x33e);
    if ((char)param_1[0xd3] == '\0') {
      temp_v1 = -1;
      temp_v0 = -1;
      temp_v4 = -1;
    }
    FUN_00344cd0(param_1[0xce],0,0,0x2f,0x4b,0x4c,0x4d,0x47,0x49,0x48,0x4a,temp_v1,temp_v0,temp_v4,0x81,0)
    ;
    temp_v1 = g_renderCtx;
    piVar7 = (int *)(g_renderCtx + 0x1258);
    temp_v0 = *piVar7;
    temp_v4 = piVar7[temp_v0 + 2];
    *piVar7 = temp_v0 - 1;
    if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v4 != piVar7[temp_v0 + 1]) {
      (**(romwright_code **)(temp_v1 + 0x1274))();
      *(unsigned char *)(temp_v1 + 0x1270) = 0;
    }
    FUN_00183bb0();
    efctSetSpeed();
    FUN_0016c560(g_renderCtx);
    FUN_0016c410(g_renderCtx);
    return;
  }
  return;
}

} /* extern "C" */
