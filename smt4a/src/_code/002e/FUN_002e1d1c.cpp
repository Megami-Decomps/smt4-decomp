/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1d1c` (_code @ 0x2e1d1c, 0x2ec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int FUN_00164b5c(int, int, int, unsigned int, unsigned int, int);
int efctSetSpeed(void);
int FUN_0016c410(...);
int FUN_0016c560(...);
int FUN_001834a4(int, int);
int FUN_00183bb0(void);
int FUN_0032d54c(...);
int FUN_003426c0(...);
int FUN_0036cb0c(...);
int FUN_0039a1b8(...);

typedef int romwright_code(...);
/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern int DAT_0057f118; /* 0x57f118 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c560. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_0032d54c. */
/* Supplied declaration required: FUN_003426c0. */
/* Supplied declaration required: FUN_0036cb0c. */
/* Supplied declaration required: FUN_0039a1b8. */


unsigned int FUN_002e1d1c(void)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  
  temp_v0 = DAT_0057f118;
  FUN_001834a4(0x2e,0xcf);
  temp_v7 = *(int *)(temp_v0 + 0x124);
  if (*(char *)(temp_v0 + 0x114) == '\0') {
    efctSetSpeed();
    return 0;
  }
  temp_v6 = *(unsigned int *)(temp_v0 + 0x3c);
  temp_v8 = *(unsigned int *)(temp_v0 + 0x40);
  efctSetSpeed();
  FUN_00157558(g_renderCtx);
  FUN_00183bb0();
  temp_v5 = g_renderCtx;
  temp_v1 = FUN_001692ac(1,0);
  piVar7 = (int *)(temp_v5 + 0x1258);
  temp_v3 = *piVar7;
  temp_v4 = piVar7[temp_v3 + 2];
  *piVar7 = temp_v3 + 1;
  piVar7[temp_v3 + 3] = temp_v1;
  if (*(char *)(temp_v5 + 0x1270) != '\0' || temp_v4 != temp_v1) {
    (**(romwright_code **)(temp_v5 + 0x1274))();
    *(unsigned char *)(temp_v5 + 0x1270) = 0;
  }
  temp_v5 = *(int *)(temp_v0 + 0x14c);
  if (temp_v5 != 1) {
    if (temp_v5 != 2) {
      if (temp_v5 != 5) {
        if (temp_v5 == 7) {
          FUN_00164b5c(2,0x2e,0x12,temp_v6,temp_v8,0xb);
        }
      }
      else {
        FUN_00164b5c(2,0x2e,0x17,temp_v6,temp_v8,0xb);
      }
    }
    else {
      FUN_00164b5c(2,0x2e,0x16,temp_v6,temp_v8,0xb);
    }
  }
  else {
    FUN_00164b5c(2,0x2e,0x15,temp_v6,temp_v8,0xb);
  }
  temp_v5 = *(int *)(temp_v0 + 0x14c);
  temp_v6 = 0;
  temp_v8 = 0;
  if (temp_v5 == 1) {
    temp_v6 = 2;
    temp_v8 = *(unsigned int *)(temp_v0 + 0x134);
  }
  else if (temp_v5 == 2) {
    temp_v6 = 1;
  }
  else {
    if (temp_v5 == 5) {
      temp_v6 = 3;
    }
    if (temp_v5 == 5 || temp_v5 == 7) {
      temp_v8 = *(unsigned int *)(temp_v0 + 0x134);
    }
  }
  FUN_003426c0(temp_v0 + 0x38,*(unsigned int *)(temp_v0 + 0x5c),*(unsigned int *)(temp_v0 + 0x58),
               *(unsigned int *)(temp_v0 + 0x124),*(unsigned int *)(temp_v0 + 0x120),temp_v8,temp_v6);
  if (temp_v7 < 0xb) {
    temp_v7 = 0xb;
  }
  if (*(int *)(temp_v0 + 0x14c) != 5 && *(int *)(temp_v0 + 0x14c) != 1) {
    temp_v2 = *(unsigned int *)(temp_v0 + 0x11c);
    FUN_0039a1b8(temp_v0 + 0x38,0,0,temp_v2 & 1,(temp_v2 & 2) >> 1,(temp_v2 & 4) >> 2,
                 *(unsigned int *)(temp_v0 + 0x118),*(unsigned int *)(temp_v0 + 0x120),temp_v7,
                 *(unsigned int *)(temp_v0 + 0x124));
  }
  if (*(char *)(temp_v0 + 0x12d) != '\0') {
    FUN_0036cb0c(*(unsigned int *)(temp_v0 + 0x5c),*(unsigned int *)(temp_v0 + 0x58),
                 *(unsigned int *)(temp_v0 + 0x120),temp_v8,*(unsigned int *)(temp_v0 + 0x128),
                 (int)*(char *)(temp_v0 + 0x138),*(unsigned int *)(temp_v0 + 0x130),temp_v6,
                 *(unsigned int *)(temp_v0 + 0x150));
  }
  FUN_0032d54c(temp_v0 + 0x38,*(unsigned int *)(temp_v0 + 0x124),*(unsigned int *)(temp_v0 + 0x120),temp_v8,
               *(unsigned int *)(temp_v0 + 0x128),temp_v6);
  temp_v0 = g_renderCtx;
  piVar7 = (int *)(g_renderCtx + 0x1258);
  temp_v7 = *piVar7;
  temp_v5 = piVar7[temp_v7 + 2];
  *piVar7 = temp_v7 - 1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v5 != piVar7[temp_v7 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  FUN_0016c560(g_renderCtx);
  FUN_0016c410(g_renderCtx);
  efctSetSpeed();
  return 0;
}

} /* extern "C" */
