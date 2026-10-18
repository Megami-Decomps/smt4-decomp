/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011cd14` (_code @ 0x11cd14, 0x114 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned short uRam004e8282; /* 0x4e8282 */
extern unsigned short uRam004ead42; /* 0x4ead42 */

extern int FUN_002bb274(void);


void FUN_0011cd14(int param_1)

{
  int temp_v0;
  unsigned int *puVar2;
  
  if (param_1 < 2) {
    param_1 = 2;
  }
  else if (param_1 >= 4) {
    param_1 = 3;
  }
  uRam004ead42 = (short)param_1;
  temp_v0 = FUN_002bb274();
  if (temp_v0 != 0) {
    puVar2 = *(unsigned int **)((unsigned int)uRam004e8282 * 4 + 0x4e8004);
    *(short *)(puVar2 + 4) = (short)param_1;
    *puVar2 = *puVar2 | 0x8000;
  }
  return;
}
