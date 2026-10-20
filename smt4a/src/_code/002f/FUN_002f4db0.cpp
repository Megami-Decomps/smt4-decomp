/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4db0` (_code @ 0x2f4db0, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;


void FUN_002f4db0(unsigned int param_1,int *param_2)

{
  (**(romwright_code **)(*param_2 + 0x78))();
  return;
}

} /* extern "C" */
