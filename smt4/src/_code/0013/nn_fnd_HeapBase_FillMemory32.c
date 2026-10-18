/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fnd_HeapBase_FillMemory32` (_code @ 0x13a5e4, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_3_stack;


void nn_fnd_HeapBase_FillMemory32(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = param_3;
  }
  return;
}
