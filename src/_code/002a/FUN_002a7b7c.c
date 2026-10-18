/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a7b7c` (_code @ 0x2a7b7c, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned int *DAT_0043e140; /* 0x43e140 */

/* Supplied declaration required: FUN_002b2520. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */
/* Supplied declaration required: FUN_003b8d2c. */
/* Supplied declaration required: FUN_003b9a2c. */


void FUN_002a7b7c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_lr; 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int unaff_r4;
  unsigned int unaff_r5;
  unsigned int unaff_r6;
  unsigned int in_lr;
  
  FUN_003b8d2c();
  FUN_003b9a2c(param_1);
  if (*(int *)(param_1 + 0xe5c) != 0) {
    FUN_002b2520(*(int *)(param_1 + 0xe5c));
  }
  *(unsigned int *)(param_1 + 0xe5c) = 0;
  puVar1 = DAT_0043e140;
  FUN_002c45b8(*DAT_0043e140,0,param_3,param_4,unaff_r4,unaff_r5,unaff_r6,in_lr);
  FUN_002c4360(puVar1);
  DAT_0043e140 = (unsigned int *)0x0;
  return;
}
