/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00229328` (_code @ 0x229328, 0x37c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int efctSetSpeed(void);
int FUN_0016c410(int);
int FUN_0016c560(int);
int FUN_001835b4(int, int, int, int, int, int);
int FUN_004b0164(int, unsigned int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
extern unsigned int FUN_001654d8(int);
extern unsigned int FUN_001654e4(int);
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c560. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_004b0164. */
extern int FUN_004b6b1c(int);


unsigned int FUN_00229328(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  int temp_v6;
  unsigned char temp_v7;
  
  temp_v6 = *(int *)(param_1 + 4);
  if ((temp_v6 != 0) && (temp_v0 = FUN_004b6b1c(temp_v6), temp_v0 != 0)) {
    FUN_00157558(g_renderCtx);
    temp_v0 = g_renderCtx;
    temp_v1 = FUN_001692ac(1,0);
    piVar7 = (int *)(temp_v0 + 0x1258);
    temp_v4 = *piVar7;
    temp_v5 = piVar7[temp_v4 + 2];
    *piVar7 = temp_v4 + 1;
    piVar7[temp_v4 + 3] = temp_v1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v5 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
    temp_v1 = g_renderCtx;
    temp_v0 = *(int *)(temp_v6 + 0x4364);
    temp_v7 = temp_v0 == 0xd;
    if (temp_v7) {
      temp_v0 = *(int *)(temp_v6 + 0x436c);
    }
    if ((temp_v7 && temp_v0 == 5) && (*(char *)(temp_v6 + 0x8de) == '\0')) {
      if (*(int *)(temp_v6 + 0x437c) < 0x10) {
        temp_v0 = *(int *)(temp_v6 + 0x437c) * -0x1e;
        if (temp_v0 < -0xf0) {
          temp_v0 = -0xf0;
        }
        temp_v4 = FUN_00169294(6,1,0);
        piVar7 = (int *)(temp_v1 + 0x12b8);
        temp_v5 = piVar7[*piVar7 + 2];
        piVar7[*piVar7 + 2] = temp_v4;
        if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v5 != temp_v4) {
          (**(romwright_code **)(temp_v1 + 0x12d4))();
          *(unsigned char *)(temp_v1 + 0x12d0) = 0;
        }
        if (-0xf0 < temp_v0) {
          FUN_001835b4(2,0x1d,0x113,0,temp_v0,0xf1);
        }
        FUN_001835b4(2,0x1d,0x114,0,temp_v0 + 0xf0,0xf1);
        temp_v0 = g_renderCtx;
        temp_v1 = FUN_00169294(6,7,0);
        piVar7 = (int *)(temp_v0 + 0x12b8);
        temp_v4 = piVar7[*piVar7 + 2];
        piVar7[*piVar7 + 2] = temp_v1;
        if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v4 != temp_v1) {
          (**(romwright_code **)(temp_v0 + 0x12d4))();
          *(unsigned char *)(temp_v0 + 0x12d0) = 0;
        }
      }
      if (*(int *)(temp_v6 + 0x437c) >= 9) {
        efctSetSpeed();
        FUN_001835b4(2,0x1d,0x115,0,0,0xf2);
        efctSetSpeed();
      }
    }
    temp_v0 = g_renderCtx;
    piVar7 = (int *)(g_renderCtx + 0x1258);
    temp_v1 = *piVar7;
    temp_v4 = piVar7[temp_v1 + 2];
    *piVar7 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v4 != piVar7[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1274))(piVar7[temp_v1 + 1]);
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
    temp_v0 = g_renderCtx;
    if (*(int *)(temp_v6 + 0x4364) < 10) {
      if (*(int *)(temp_v6 + 0x4364) != 0) {
        temp_v1 = FUN_001692ac(1,0);
        piVar7 = (int *)(temp_v0 + 0x1258);
        temp_v4 = *piVar7;
        temp_v5 = piVar7[temp_v4 + 2];
        *piVar7 = temp_v4 + 1;
        piVar7[temp_v4 + 3] = temp_v1;
        if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v5 != temp_v1) {
          (**(romwright_code **)(temp_v0 + 0x1274))();
          *(unsigned char *)(temp_v0 + 0x1270) = 0;
        }
        temp_v2 = FUN_001654d8(temp_v6 + 0x20);
        temp_v3 = FUN_001654e4(temp_v6 + 0x20);
        FUN_004b0164(temp_v6,temp_v2,temp_v3);
        temp_v6 = g_renderCtx;
        piVar7 = (int *)(g_renderCtx + 0x1258);
        temp_v0 = *piVar7;
        temp_v1 = piVar7[temp_v0 + 2];
        *piVar7 = temp_v0 - 1;
        if (*(char *)(temp_v6 + 0x1270) != '\0' || temp_v1 != piVar7[temp_v0 + 1]) {
          (**(romwright_code **)(temp_v6 + 0x1274))();
          *(unsigned char *)(temp_v6 + 0x1270) = 0;
        }
      }
      temp_v6 = g_renderCtx;
      temp_v0 = FUN_00169294(6,7,0);
      piVar7 = (int *)(temp_v6 + 0x12b8);
      temp_v1 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = temp_v0;
      if (*(char *)(temp_v6 + 0x12d0) != '\0' || temp_v1 != temp_v0) {
        (**(romwright_code **)(temp_v6 + 0x12d4))();
        *(unsigned char *)(temp_v6 + 0x12d0) = 0;
      }
      FUN_0016c560(g_renderCtx);
      FUN_0016c410(g_renderCtx);
      return 0;
    }
  }
  return 0;
}

} /* extern "C" */
