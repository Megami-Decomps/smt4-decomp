/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00292c0c` (_code @ 0x292c0c, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern signed char DAT_0044e140; /* 0x44e140 */
extern unsigned int *DAT_0044e144; /* 0x44e144 */

/* Supplied declaration required: FUN_00294f64. */
/* Supplied declaration required: FUN_002958f8. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */
/* Supplied declaration required: FUN_002f6590. */


void FUN_00292c0c(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0044e144;
  DAT_0044e140 = DAT_0044e140 - '\x01';
  if ('\0' < DAT_0044e140) {
    return;
  }
  if (*(short *)(DAT_0044e144 + 0x4bf) != 0) {
    FUN_002958f8((int)*(short *)(DAT_0044e144 + 0x4bf),1);
  }
  if ((0 < *(short *)((int)puVar1 + 0x12fe)) && (puVar1[0x79d] != 0)) {
    FUN_00294f64();
    puVar1[0x79d] = 0;
  }
  FUN_002c43b4(*puVar1,0);
  FUN_002c415c(puVar1);
  DAT_0044e144 = (unsigned int *)0x0;
  DAT_0044e140 = 0;
  FUN_002f6590();
  return;
}
