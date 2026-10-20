/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00399ab4` (_code @ 0x399ab4, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001664bc(void);
int FUN_00167ba0(void);
int FUN_0036bbe0(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int g_renderCtx; /* 0x59dbb4 */
extern int DAT_005b3fe4; /* 0x5b3fe4 */
extern int DAT_005b3fe8; /* 0x5b3fe8 */

/* Supplied declaration required: FUN_001664bc. */
/* Supplied declaration required: FUN_00167ba0. */
extern unsigned int FUN_00169d8c(void);
extern unsigned int FUN_00169db4(void);
/* Supplied declaration required: FUN_0036bbe0. */


void FUN_00399ab4(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  FUN_0036bbe0();
  temp_v1 = FUN_00169d8c();
  FUN_0036bbe0();
  temp_v2 = FUN_00169db4();
  FUN_00167ba0();
  temp_v0 = DAT_005b3fe4;
  if (*(int *)(g_renderCtx + *(int *)(g_renderCtx + 0x1318) * 4 + 0x1320) != 0) {
    temp_v5 = param_1 >> 0x10;
    param_1 = param_1 & 0xffff;
    temp_v4 = temp_v5;
    if (temp_v2 <= temp_v5) {
      temp_v4 = temp_v2 - 1;
    }
    temp_v3 = param_1;
    if (temp_v1 <= param_1) {
      temp_v3 = temp_v1 - 1;
    }
    temp_v4 = temp_v4 | (temp_v3 << 0x10);
    temp_v3 = *(unsigned int *)(g_renderCtx + *(int *)(g_renderCtx + 0x1358) * 4 + 0x1360);
    temp_v5 = (temp_v5 + (temp_v3 >> 0x10)) - 1;
    if ((int)temp_v5 < 0) {
      temp_v5 = 0;
    }
    else if (temp_v2 <= temp_v5) {
      temp_v5 = temp_v2 - 1;
    }
    param_1 = param_1 + (temp_v3 & 0xffff);
    temp_v2 = param_1 - 1;
    if ((int)temp_v2 < 0) {
      temp_v1 = 0;
    }
    else {
      if (temp_v2 < temp_v1) {
        temp_v1 = param_1;
      }
      temp_v1 = (temp_v1 - 1) * 0x10000;
    }
    temp_v5 = temp_v5 | temp_v1;
  }
  else {
    temp_v4 = 0;
    temp_v5 = (temp_v2 - 1) | (temp_v1 * 0x10000 - 0x10000);
  }
  *(unsigned int *)(DAT_005b3fe4 + DAT_005b3fe8 * 4) = temp_v4;
  *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4 + 4) = 0xf0066;
  DAT_005b3fe8 = DAT_005b3fe8 + 2;
  *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4) = temp_v5;
  *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4 + 4) = 0xf0067;
  DAT_005b3fe8 = DAT_005b3fe8 + 2;
  FUN_001664bc();
  return;
}

} /* extern "C" */
