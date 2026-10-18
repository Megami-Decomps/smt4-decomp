/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026533c` (_code @ 0x26533c, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_00447060; /* 0x447060 */
extern signed char DAT_0049fc64; /* 0x49fc64 */

/* Supplied declaration required: FUN_00264b68. */
/* Supplied declaration required: FUN_002653ac. */
/* Supplied declaration required: FUN_00265e24. */
/* Supplied declaration required: FUN_0026617c. */
/* Supplied declaration required: FUN_002fb7a0. */


void FUN_0026533c(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00447060;
  if (DAT_0049fc64 == '\0') {
    if (*(char *)(DAT_00447060 + 0xb) != '\0') {
      FUN_002fb7a0();
    }
    else {
      FUN_00264b68(DAT_00447060);
    }
  }
  FUN_0026617c(temp_v0);
  FUN_00265e24(temp_v0);
  if (*(int *)(DAT_00447060 + 0x40) != 100) {
    FUN_002653ac();
    return;
  }
  return;
}
