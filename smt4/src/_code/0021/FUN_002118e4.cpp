/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002118e4` (_code @ 0x2118e4, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern unsigned char DAT_0043e188; /* 0x43e188 */


unsigned int FUN_002118e4(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0043e188 + 0x8));
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043e188 + 0x8)) + 0x7c) = 3;
  *(unsigned int *)(temp_v0 + 0x70) = param_1;
  *(unsigned int *)(temp_v0 + 0x74) = param_1;
  *(unsigned char *)(temp_v0 + 0x81) = 0;
  *(unsigned int *)(temp_v0 + 100) = 0;
  return 1;
}

} /* extern "C" */
