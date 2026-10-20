/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eeb4c` (_code @ 0x3eeb4c, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004fe764(int, int, int, int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int g_btlScriptUnit; /* 0x57113c */

extern int btlUnitGet(unsigned int);
/* Supplied declaration required: FUN_004fe764. */


void FUN_003eeb4c(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v1 = btlUnitGet(g_btlScriptUnit);
  temp_v2 = temp_v1 + 0x500;
  temp_v0 = *(short *)(temp_v1 + 0x5b0);
  temp_v3 = temp_v0 < 0;
  if (temp_v3) {
    temp_v0 = *(short *)(temp_v1 + 0x5b2);
  }
  if (temp_v3 && temp_v0 < 0) {
    temp_v3 = *(short *)(temp_v1 + 0x5b4) < 0;
    if (temp_v3) {
      temp_v2 = (int)*(short *)(temp_v1 + 0x5b6);
    }
    if (((temp_v3 && temp_v2 < 0) && (-1 < param_2)) &&
       (temp_v2 = (int)*(short *)(*(int *)(param_1 + 0x1ffc) + param_2 * 0x408 + 8), -1 < temp_v2)) {
      FUN_004fe764(0,0,*(int *)(param_1 + 0x1ed4) + temp_v2 * 0x1d0,8,5);
    }
  }
  return;
}

} /* extern "C" */
