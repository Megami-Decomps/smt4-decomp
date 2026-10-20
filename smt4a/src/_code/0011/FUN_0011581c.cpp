/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011581c` (_code @ 0x11581c, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;


void FUN_0011581c(int param_1,int param_2)

{
  (**(romwright_code **)(**(int **)(*(int *)(param_1 + 4) + (unsigned int)*(unsigned char *)(param_2 + 0x24) * 4) + 0x14))();
  return;
}

} /* extern "C" */
