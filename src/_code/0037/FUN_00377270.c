/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00377270` (_code @ 0x377270, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;


void FUN_00377270(int *param_1)

{
  (**(romwright_code **)(*param_1 + 0x10))();
  return;
}
