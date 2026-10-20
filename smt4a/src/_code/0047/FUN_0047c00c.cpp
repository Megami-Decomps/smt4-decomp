/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047c00c` (_code @ 0x47c00c, 0x360 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int efctSetSpeed(void);
int renderCtxResetColorScale(...);
int FUN_0016c560(...);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int FUN_001879d0(int);

typedef int romwright_code(...);
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: FUN_0016c560. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_001879d0. */
extern int FUN_00341940(unsigned int);


void FUN_0047c00c(int param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  romwright_code *UNRECOVERED_JUMPTABLE;
  int *piVar5;
  float temp_v4;
  
  if (0 < *(int *)(param_1 + 4)) {
    FUN_00183bb0();
    efctSetSpeed();
    FUN_00157558(g_renderCtx);
    temp_v1 = g_renderCtx;
    temp_v0 = FUN_001692ac(1,0);
    piVar5 = (int *)(temp_v1 + 0x1258);
    temp_v2 = *piVar5;
    temp_v3 = piVar5[temp_v2 + 2];
    *piVar5 = temp_v2 + 1;
    piVar5[temp_v2 + 3] = temp_v0;
    if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v3 != temp_v0) {
      (**(romwright_code **)(temp_v1 + 0x1274))();
      *(unsigned char *)(temp_v1 + 0x1270) = 0;
    }
    temp_v1 = g_renderCtx;
    temp_v0 = packNibblesAndByte(6,7,0);
    piVar5 = (int *)(temp_v1 + 0x12b8);
    temp_v2 = *piVar5;
    temp_v3 = piVar5[temp_v2 + 2];
    *piVar5 = temp_v2 + 1;
    piVar5[temp_v2 + 3] = temp_v0;
    if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v3 != temp_v0) {
      (**(romwright_code **)(temp_v1 + 0x12d4))(temp_v0);
      *(unsigned char *)(temp_v1 + 0x12d0) = 0;
    }
    FUN_001879d0(g_renderCtx);
    temp_v4 = 0.36f;
    FUN_001879d0(g_renderCtx);
    temp_v0 = (int)temp_v4;
    temp_v1 = FUN_00341940(0x2f);
    if (temp_v1 != 0) {
      FUN_001835b4(2,0x2f,0x7a,temp_v0,0,0xb);
      FUN_001835b4(2,0x2f,0x7b,temp_v0,0,0xb);
    }
    temp_v1 = 0;
    do {
      if (-1 < *(int *)(temp_v1 * 0xc + 0x526318)) {
        efctSetSpeed();
        temp_v2 = FUN_001834a4(0x14,*(unsigned int *)(temp_v1 * 0xc + 0x526314));
        FUN_001835b4(2,0x14,*(unsigned int *)(temp_v1 * 0xc + 0x526318),*(short *)(temp_v2 + 8) + temp_v0,
                     (int)*(short *)(temp_v2 + 10),0xb);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x18);
    efctSetSpeed();
    temp_v1 = 0;
    do {
      temp_v2 = 0;
      do {
        FUN_001835b4(2,0x14,0x7f2,temp_v0 + temp_v2 * 0x20,temp_v1 << 5,0xb);
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 0xd);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 9);
    temp_v1 = 0;
    do {
      FUN_001835b4(2,0x14,temp_v1 + 0x7f4,temp_v0,0,0x10);
      temp_v2 = g_renderCtx;
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0xb);
    piVar5 = (int *)(g_renderCtx + 0x12b8);
    temp_v1 = *piVar5;
    temp_v0 = piVar5[temp_v1 + 2];
    *piVar5 = temp_v1 - 1;
    if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v0 != piVar5[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v2 + 0x12d4))(piVar5[temp_v1 + 1]);
      *(unsigned char *)(temp_v2 + 0x12d0) = 0;
    }
    temp_v1 = g_renderCtx;
    piVar5 = (int *)(g_renderCtx + 0x1258);
    temp_v0 = *piVar5;
    temp_v2 = piVar5[temp_v0 + 2];
    *piVar5 = temp_v0 - 1;
    if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v2 != piVar5[temp_v0 + 1]) {
      (**(romwright_code **)(temp_v1 + 0x1274))();
      *(unsigned char *)(temp_v1 + 0x1270) = 0;
    }
    FUN_00183bb0();
    efctSetSpeed();
    FUN_0016c560(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    temp_v1 = param_1 + *(int *)(param_1 + 4) * 8;
    UNRECOVERED_JUMPTABLE = *(romwright_code **)(temp_v1 + 0xb8);
    if ((UNRECOVERED_JUMPTABLE != (romwright_code *)0x0) ||
       (((*(unsigned int *)(temp_v1 + 0xbc) & 1) != 0 && (*(unsigned int *)(temp_v1 + 0xbc) != 0)))) {
      if ((*(unsigned int *)(temp_v1 + 0xbc) & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(romwright_code **)((unsigned char *)UNRECOVERED_JUMPTABLE +
                       *(int *)(param_1 + ((int)*(unsigned int *)(temp_v1 + 0xbc) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x0047c344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

} /* extern "C" */
