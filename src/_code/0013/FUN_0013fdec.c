/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013fdec` (_code @ 0x13fdec, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001408ac. */
/* Supplied declaration required: FUN_002b93f0. */


void FUN_0013fdec(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(char *)(param_1 + 0x180) != '\0') {
    if ((*(unsigned int *)(param_1 + 0x110) & 0xfffffffe) != 0) {
      FUN_002b93f0(*(unsigned int *)(param_1 + 0x110) & 0xfffffffe);
      *(unsigned int *)(param_1 + 0x110) = 0;
    }
    FUN_001408ac(param_1 + 300);
    *(unsigned char *)(param_1 + 0x180) = 0;
  }
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned char *)(param_1 + 8) = 0x2f;
  *(unsigned char *)(param_1 + 9) = 0;
  return;
}
