/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126cd0` (_code @ 0x126cd0, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern char s__T_T__005c1c10[11]; /* 0x5c1c10 */
extern char s__T_T_005c1c24[9]; /* 0x5c1c24 */
extern unsigned char DAT_005c1c38; /* 0x5c1c38 */

/* Supplied declaration required: FUN_0030dd24. */


void FUN_00126cd0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  *(int *)(param_1 + 0xb18) = param_1 + 0x94;
  *(int *)(param_1 + 0xb24) = param_1 + 0x988;
  *(char **)(param_1 + 0xb20) = s__T_T__005c1c10;
  *(int *)(param_1 + 0xb30) = param_1 + 0xa7c;
  *(char **)(param_1 + 0xb2c) = s__T_T_005c1c24;
  *(unsigned char **)(param_1 + 0xb38) = &DAT_005c1c38;
  *(unsigned short *)(param_1 + 0x16b8) = 0;
  *(unsigned int *)(param_1 + 0x16bc) = 0;
  *(unsigned int *)(param_1 + 0x16b4) = 8;
  FUN_0030dd24();
  return;
}
