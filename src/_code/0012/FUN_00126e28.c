/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126e28` (_code @ 0x126e28, 0xa4 bytes) from smt4.cxi.
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
/* Supplied declaration required: FUN_0014720c. */
/* Supplied declaration required: FUN_00147244. */
/* Supplied declaration required: FUN_00147264. */
/* Supplied declaration required: FUN_00147288. */
/* Supplied declaration required: FUN_001537c4. */
/* Supplied declaration required: FUN_0015a3f4. */
/* Supplied declaration required: FUN_002bd46c. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


void FUN_00126e28(unsigned int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  
  if ((int)param_1 < 0) {
    return;
  }
  if (param_1 < DAT_0044d10c) {
    FUN_002c3aa8(&DAT_004c40f8);
    puVar1 = (unsigned int *)(DAT_0044d100 + param_1 * 0x70);
    software_interrupt(0x28);
    puVar1[0x1a] = DAT_0044d100;
    puVar1[0x1b] = param_1 * 7;
    FUN_00147244(*puVar1,puVar1[0x10]);
    FUN_00147264(*puVar1,1);
    FUN_001537c4(*puVar1,puVar1 + 2);
    FUN_0014720c(*puVar1,puVar1[0xf]);
    FUN_002bd46c(*puVar1);
    FUN_00147288(*puVar1);
    FUN_0015a3f4(*puVar1,0);
    FUN_002c3a24(&DAT_004c40f8);
    return;
  }
  return;
}
