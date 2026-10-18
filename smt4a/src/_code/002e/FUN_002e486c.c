/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e486c` (_code @ 0x2e486c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern int DAT_0057f590; /* 0x57f590 */


unsigned int FUN_002e486c(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = DAT_0057f590;
  *(unsigned char *)(DAT_0057f590 + 0x8d) = 3;
  *(unsigned int *)(temp_v0 + 0x80) = param_1;
  *(unsigned int *)(temp_v0 + 0x84) = param_1;
  *(unsigned char *)(temp_v0 + 0x93) = 0;
  *(unsigned int *)(temp_v0 + 0x74) = 0;
  return 1;
}
