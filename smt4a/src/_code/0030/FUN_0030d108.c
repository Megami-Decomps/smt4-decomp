/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030d108` (_code @ 0x30d108, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055a884; /* 0x55a884 */
extern unsigned char DAT_0055ad28; /* 0x55ad28 */

extern int FUN_0030d3f4(unsigned int *, int);


void FUN_0030d108(unsigned int param_1,unsigned int *param_2,int param_3)

{
  int temp_v0;
  
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = (unsigned int)&DAT_0055ad28;
    *(unsigned char *)(param_2 + 1) = *(unsigned char *)(param_3 + 4);
    *(unsigned char *)((int)param_2 + 5) = *(unsigned char *)(param_3 + 5);
    temp_v0 = FUN_0030d3f4(param_2 + 2,param_3 + 8);
    *(unsigned char **)(temp_v0 - 8) = &DAT_0055a884;
  }
  return;
}
