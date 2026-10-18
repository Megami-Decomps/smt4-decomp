/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd940` (_code @ 0x2bd940, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int uRam00000002; /* 0x2 */
extern unsigned short uRam00000006; /* 0x6 */

/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_002c54f0. */


void FUN_002bd940(int param_1)

{
/* irregular: irregular input(s): in_r12; 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int unaff_r6;
  unsigned int in_r12;
  unsigned int temp_v0;
  
  if (param_1 != 0) {
    puVar1 = (unsigned int *)0x10000;
    FUN_002c54f0(0x10000,0x100,0,0x48,0);
  }
  else {
    puVar1 = (unsigned int *)0x10000;
    FUN_002c54f0(0x10000,0x100,0,0x48,1);
  }
  temp_v0 = 0x2bd9b0;
  FUN_002c4b30();
  puVar1[2] = 0x10000;
  puVar1[1] = 0xde1;
  puVar1[0xe] = unaff_r6;
  puVar1[0xf] = in_r12;
  puVar1[0x10] = temp_v0;
  uRam00000002 = *puVar1;
  uRam00000006 = *(unsigned short *)(puVar1 + 1);
  return;
}
