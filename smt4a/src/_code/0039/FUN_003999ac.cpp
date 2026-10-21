/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003999ac` (_code @ 0x3999ac, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdModelCommandBlockRelease(void);
int cursorResetFromParam(void);
int asdGxGetPresetIndex(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int g_renderCtx; /* 0x59dbb4 */
extern int DAT_005b3fe4; /* 0x5b3fe4 */
extern int DAT_005b3fe8; /* 0x5b3fe8 */

/* Supplied declaration required: asdModelCommandBlockRelease. */
/* Supplied declaration required: cursorResetFromParam. */
extern unsigned int FUN_00169d8c(void);
extern unsigned int FUN_00169db4(void);
/* Supplied declaration required: asdGxGetPresetIndex. */


void FUN_003999ac(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  asdGxGetPresetIndex();
  temp_v1 = FUN_00169d8c();
  asdGxGetPresetIndex();
  temp_v2 = FUN_00169db4();
  cursorResetFromParam();
  temp_v0 = DAT_005b3fe4;
  if (*(int *)(g_renderCtx + *(int *)(g_renderCtx + 0x1318) * 4 + 0x1320) == 0) {
    temp_v1 = 0;
  }
  else {
    temp_v3 = *(unsigned int *)(g_renderCtx + *(int *)(g_renderCtx + 0x1338) * 4 + 0x1340);
    temp_v4 = ((temp_v3 >> 0x10) + (param_1 >> 0x10)) - 1;
    if ((int)temp_v4 < 0) {
      temp_v4 = 0;
    }
    else if (temp_v2 <= temp_v4) {
      temp_v4 = temp_v2 - 1;
    }
    temp_v2 = (temp_v3 & 0xffff) + (param_1 & 0xffff);
    temp_v3 = temp_v2 - 1;
    if ((int)temp_v3 < 0) {
      temp_v1 = 0;
    }
    else {
      if (temp_v3 < temp_v1) {
        temp_v1 = temp_v2;
      }
      temp_v1 = (temp_v1 - 1) * 0x10000;
    }
    temp_v1 = temp_v1 | temp_v4;
  }
  *(unsigned int *)(DAT_005b3fe4 + DAT_005b3fe8 * 4) = temp_v1;
  *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4 + 4) = 0xf0067;
  DAT_005b3fe8 = DAT_005b3fe8 + 2;
  asdModelCommandBlockRelease();
  return;
}

} /* extern "C" */
