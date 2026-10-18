/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126f04` (_code @ 0x126f04, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0044d100; /* 0x44d100 */
extern unsigned int DAT_0044d10c; /* 0x44d10c */
extern unsigned int DAT_004c40f8; /* 0x4c40f8 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001472f4. */
/* Supplied declaration required: FUN_0014732c. */
/* Supplied declaration required: FUN_0014734c. */
/* Supplied declaration required: FUN_00147370. */
/* Supplied declaration required: FUN_001538b8. */
/* Supplied declaration required: FUN_0015a4e8. */
/* Supplied declaration required: FUN_002bd27c. */
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */


void FUN_00126f04(unsigned int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  
  if ((int)param_1 < 0) {
    return;
  }
  if (param_1 < DAT_0044d10c) {
    FUN_002c38a4(&DAT_004c40f8);
    puVar1 = (unsigned int *)(DAT_0044d100 + param_1 * 0x70);
    software_interrupt(0x28);
    puVar1[0x1a] = DAT_0044d100;
    puVar1[0x1b] = param_1 * 7;
    FUN_0014732c(*puVar1,puVar1[0x10]);
    FUN_0014734c(*puVar1,1);
    FUN_001538b8(*puVar1,puVar1 + 2);
    FUN_001472f4(*puVar1,puVar1[0xf]);
    FUN_002bd27c(*puVar1);
    FUN_00147370(*puVar1);
    FUN_0015a4e8(*puVar1,0);
    FUN_002c3820(&DAT_004c40f8);
    return;
  }
  return;
}
