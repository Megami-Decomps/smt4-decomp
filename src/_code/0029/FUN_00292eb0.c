/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00292eb0` (_code @ 0x292eb0, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern signed char DAT_0044e140; /* 0x44e140 */
extern unsigned int *DAT_0044e144; /* 0x44e144 */

/* Supplied declaration required: FUN_00295208. */
/* Supplied declaration required: FUN_00295b9c. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */
/* Supplied declaration required: FUN_002f6550. */


void FUN_00292eb0(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0044e144;
  DAT_0044e140 = DAT_0044e140 - '\x01';
  if ('\0' < DAT_0044e140) {
    return;
  }
  if (*(short *)(DAT_0044e144 + 0x4bf) != 0) {
    FUN_00295b9c((int)*(short *)(DAT_0044e144 + 0x4bf),1);
  }
  if ((0 < *(short *)((int)puVar1 + 0x12fe)) && (puVar1[0x79d] != 0)) {
    FUN_00295208();
    puVar1[0x79d] = 0;
  }
  FUN_002c45b8(*puVar1,0);
  FUN_002c4360(puVar1);
  DAT_0044e144 = (unsigned int *)0x0;
  DAT_0044e140 = 0;
  FUN_002f6550();
  return;
}
