/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023c154` (_code @ 0x23c154, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_5_stack;


void FUN_0023c154(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
  *(unsigned int *)(*(int *)(param_1 + 0x2310) + *(int *)(param_1 + 0x2314) * 0x10) = param_2;
  *(unsigned int *)(*(int *)(param_1 + 0x2310) + *(int *)(param_1 + 0x2314) * 0x10 + 4) = param_3;
  *(unsigned int *)(*(int *)(param_1 + 0x2310) + *(int *)(param_1 + 0x2314) * 0x10 + 8) = param_4;
  *(unsigned int *)(*(int *)(param_1 + 0x2310) + *(int *)(param_1 + 0x2314) * 0x10 + 0xc) = param_5;
  *(int *)(param_1 + 0x2314) = *(int *)(param_1 + 0x2314) + 1;
  return;
}
