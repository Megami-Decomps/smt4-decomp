/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00229098` (_code @ 0x229098, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;


void FUN_00229098(int *param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  
  temp_v1 = 1;
  temp_v0 = 1;
  **(unsigned int **)(*param_1 + 0x1fc0) = **(unsigned int **)(*param_1 + 0x1fc0) & 0xfffffbff;
  do {
    temp_v2 = temp_v1 + 1;
    temp_v0 = temp_v0 + 2;
    puVar4 = (unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v1 * 0x288);
    *puVar4 = *puVar4 & 0xfffffbff;
    temp_v1 = temp_v1 + 2;
    puVar4 = (unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v2 * 0x288);
    *puVar4 = *puVar4 & 0xfffffbff;
  } while (temp_v0 < 0x6d);
  return;
}
