/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031cb74` (_code @ 0x31cb74, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0057f65c; /* 0x57f65c */


void FUN_0031cb74(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = DAT_0057f65c;
  *(unsigned char *)(DAT_0057f65c + 0x144e) = 1;
  *(unsigned char *)(temp_v0 + 0x1450) = 0;
  *(unsigned char *)(temp_v0 + 0x1451) = 0;
  *(unsigned char *)(temp_v0 + 0x1452) = 0;
  *(unsigned int *)(temp_v0 + 0x1484) = 0;
  *(unsigned int *)(temp_v0 + 0x1488) = param_1;
  return;
}
