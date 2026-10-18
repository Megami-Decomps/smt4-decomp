/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c3de4` (_code @ 0x1c3de4, 0xec bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int *DAT_0044d198; /* 0x44d198 */

/* Supplied declaration required: FUN_002911ec. */
/* Supplied declaration required: FUN_00291a5c. */
/* Supplied declaration required: FUN_00291be8. */
/* Supplied declaration required: FUN_0029c650. */
/* Supplied declaration required: FUN_002a497c. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002aeb2c. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */
/* Supplied declaration required: FUN_00324138. */


void FUN_001c3de4(void)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0044d198;
  if (DAT_0044d198 != (unsigned int *)0x0) {
    FUN_00324138();
    if (*(short *)(puVar1 + 0x40) == 0x22) {
      FUN_0029c650(0xf);
      FUN_002911ec(0x3c);
    }
    FUN_002aeb2c(2,*(unsigned short *)((int)puVar1 + 0x102));
    temp_v0 = 0;
    do {
      if (puVar1[temp_v0 + 10] != 0) {
        FUN_002c45b8(puVar1[temp_v0 + 1],0);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 8);
    FUN_002a755c(puVar1[0x14]);
    FUN_002a755c(puVar1[0x15]);
    FUN_002c4360(puVar1[0x13]);
    FUN_002c4360(puVar1[0x12]);
    FUN_002c45b8(*puVar1,0);
    FUN_002c4360(puVar1);
    DAT_0044d198 = (unsigned int *)0x0;
    FUN_002a497c(0x35);
    FUN_002a497c(0x1a);
    FUN_00291a5c();
    FUN_00291be8();
    return;
  }
  return;
}
