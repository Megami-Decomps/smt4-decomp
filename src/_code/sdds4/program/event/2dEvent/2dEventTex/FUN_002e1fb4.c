/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1fb4` (_code @ 0x2e1fb4, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int *DAT_0043ded0; /* 0x43ded0 */

/* Supplied declaration required: FUN_001dbaa0. */
/* Supplied declaration required: FUN_0026e8fc. */
extern int FUN_002bf41c(unsigned int);
/* Supplied declaration required: FUN_002c45b8. */


void FUN_002e1fb4(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if ((DAT_0043ded0 != (unsigned int *)0x0) && (temp_v0 = FUN_002bf41c(*DAT_0043ded0), temp_v0 != 0)) {
    temp_v0 = 0;
    do {
      temp_v1 = FUN_002bf41c(*(unsigned int *)(temp_v0 * 4 + 0x493790));
      if (temp_v1 != 0) {
        FUN_0026e8fc(*(unsigned int *)(temp_v0 * 4 + 0x493790),0);
        FUN_001dbaa0(*(unsigned int *)(temp_v0 * 4 + 0x493790));
      }
      *(unsigned int *)(temp_v0 * 4 + 0x493790) = 0;
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
    FUN_002c45b8(*DAT_0043ded0,0);
    return;
  }
  return;
}
