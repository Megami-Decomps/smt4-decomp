/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00262c1c` (_code @ 0x262c1c, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;


void FUN_00262c1c(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = 0;
  do {
    puVar2 = (unsigned int *)(temp_v0 * 8 + 0x4d94f0);
    if (*(int *)(temp_v0 * 8 + 0x4d94f4) == 0) break;
    temp_v0 = temp_v0 + 1;
    puVar2 = (unsigned int *)0x0;
  } while (temp_v0 < 0x40);
  puVar2[1] = param_1;
  *puVar2 = param_2;
  return;
}
