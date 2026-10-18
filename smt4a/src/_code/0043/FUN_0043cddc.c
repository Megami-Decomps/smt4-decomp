/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043cddc` (_code @ 0x43cddc, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;


void FUN_0043cddc(int param_1)

{
  *(unsigned int *)(param_1 + 4) = 0x67452301;
  *(unsigned int *)(param_1 + 8) = 0xefcdab89;
  *(unsigned int *)(param_1 + 0xc) = 0x98badcfe;
  *(unsigned int *)(param_1 + 0x10) = 0x10325476;
  *(unsigned int *)(param_1 + 0x14) = 0;
  return;
}
