/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018feac` (_code @ 0x18feac, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019059c(int);
int FUN_001913e4(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0019059c. */
/* Supplied declaration required: FUN_001913e4. */


void FUN_0018feac(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(char *)(param_1 + 400) != '\0') {
    FUN_0019059c(param_1 + 0x11c);
    FUN_001913e4(param_1 + 0x13c);
    *(unsigned char *)(param_1 + 400) = 0;
  }
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned char *)(param_1 + 0xc) = 0x2f;
  *(unsigned char *)(param_1 + 0xd) = 0;
  return;
}

} /* extern "C" */
