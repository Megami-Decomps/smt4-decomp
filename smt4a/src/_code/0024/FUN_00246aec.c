/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246aec` (_code @ 0x246aec, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_00581280; /* 0x581280 */

/* Supplied declaration required: FUN_0020ef94. */
/* Supplied declaration required: FUN_00353d1c. */


void FUN_00246aec(void)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  temp_v0 = 0x3f;
  do {
    piVar1 = *(int **)(DAT_00581280 + temp_v0 * 0x3c + 0x40);
    if (piVar1 != (int *)0x0) {
      (**(romwright_code **)(*piVar1 + 4))();
      *(unsigned int *)(DAT_00581280 + temp_v0 * 0x3c + 0x40) = 0;
    }
    temp_v0 = temp_v0 - 1;
  } while (-1 < temp_v0);
  FUN_00353d1c();
  FUN_0020ef94();
  return;
}
