/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003075d4` (_code @ 0x3075d4, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char spC; /* 0xc: local_c */
} param_3_stack;


void FUN_003075d4(unsigned char *param_1,unsigned char *param_2,unsigned char *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (unsigned char *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}
