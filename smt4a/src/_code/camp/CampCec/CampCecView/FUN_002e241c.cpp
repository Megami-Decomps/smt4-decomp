/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e241c` (_code @ 0x2e241c, 0x208 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int efctSetSpeed(void);
int FUN_0016c560(int);
int FUN_002a2210(unsigned int, int, int, int, int, int);
int FUN_00359c78(int, int, int);
int FUN_0036c8a0(int, int);
int FUN_0036c91c(int, int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
int FUN_0036ca3c(int, int, int, unsigned int, int);

typedef int romwright_code(...);
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int g_campCecView; /* 0x57f130 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c560. */
extern int FUN_001834a4(unsigned int, int);
/* Supplied declaration required: FUN_002a2210. */
extern int FUN_00330a80(int);
/* Supplied declaration required: FUN_00359c78. */
/* Supplied declaration required: FUN_0036c8a0. */
/* Supplied declaration required: FUN_0036c91c. */
/* Supplied declaration required: FUN_0036ca3c. */
extern unsigned int FUN_0037d478(void);


unsigned int FUN_002e241c(void)

{
/* irregular: 8 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int *piVar9;
  int temp_v8;
  int temp_v9;
  
  temp_v1 = g_campCecView;
  FUN_00157558(g_renderCtx);
  temp_v8 = g_renderCtx;
  temp_v2 = FUN_001692ac(1,0);
  piVar9 = (int *)(temp_v8 + 0x1258);
  temp_v5 = *piVar9;
  temp_v6 = piVar9[temp_v5 + 2];
  *piVar9 = temp_v5 + 1;
  piVar9[temp_v5 + 3] = temp_v2;
  if (*(char *)(temp_v8 + 0x1270) != '\0' || temp_v6 != temp_v2) {
    (**(romwright_code **)(temp_v8 + 0x1274))();
    *(unsigned char *)(temp_v8 + 0x1270) = 0;
  }
  temp_v3 = FUN_0037d478();
  FUN_0036ca3c(temp_v1 + 0xa0,0,0,temp_v3,0);
  temp_v8 = 0;
  do {
    temp_v2 = FUN_00330a80(*(int *)(temp_v1 + 0x118) + temp_v8);
    temp_v0 = *(short *)(temp_v2 + 0x60);
    temp_v7 = *(int *)(temp_v1 + 0x114);
    temp_v5 = *(int *)(temp_v1 + 0x118);
    temp_v6 = FUN_001834a4(0x2e,temp_v8 + 0x96);
    temp_v9 = (int)*(short *)(temp_v6 + 10);
    temp_v6 = (int)*(short *)(temp_v6 + 8);
    FUN_002a2210(*(unsigned int *)(temp_v1 + temp_v8 * 4 + 0x104),temp_v2,temp_v1 + temp_v8 * 0x14 + 0xb4,
                 temp_v6,temp_v9,temp_v0 == 0);
    if ((temp_v7 == temp_v5 + temp_v8) && (*(int *)(temp_v1 + 0xe0) == 0)) {
      FUN_00359c78(temp_v1 + 0xf0,temp_v6,temp_v9);
    }
    if (((*(unsigned char *)(temp_v2 + 0x20) & 0x10) != 0) && (*(int *)(temp_v1 + 0xe0) == 0)) {
      FUN_0036c8a0(temp_v6,temp_v9);
    }
    temp_v8 = temp_v8 + 1;
  } while (temp_v8 < 3);
  temp_v4 = *(unsigned int *)(temp_v1 + 300);
  FUN_0036c91c(temp_v1 + 0xdc,0,0,temp_v4 & 1,(temp_v4 & 2) >> 1,(temp_v4 & 4) >> 2,
               *(unsigned int *)(temp_v1 + 0x114),*(unsigned int *)(temp_v1 + 0x118),
               *(unsigned int *)(temp_v1 + 0x120));
  temp_v1 = g_renderCtx;
  piVar9 = (int *)(g_renderCtx + 0x1258);
  temp_v8 = *piVar9;
  temp_v2 = piVar9[temp_v8 + 2];
  *piVar9 = temp_v8 - 1;
  if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v2 != piVar9[temp_v8 + 1]) {
    (**(romwright_code **)(temp_v1 + 0x1274))();
    *(unsigned char *)(temp_v1 + 0x1270) = 0;
  }
  FUN_0016c560(g_renderCtx);
  efctSetSpeed();
  return 0;
}

} /* extern "C" */
