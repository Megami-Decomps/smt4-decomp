/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037bc74` (_code @ 0x37bc74, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421924; /* 0x421924 */
extern unsigned char DAT_00421944; /* 0x421944 */

extern int FUN_0037b9d4(unsigned int *);


int FUN_0037bc74(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00421924;
  param_1[3] = (unsigned int)&DAT_00421944;
  if (*(char *)((int)param_1 + 0x261) == '\0') {
    *(unsigned char *)(param_1 + 0x98) = 0;
    *(unsigned char *)((int)param_1 + 0x261) = 1;
    param_1[4] = 0;
  }
  temp_v0 = FUN_0037b9d4(param_1 + 3);
  return temp_v0 - 0xc;
}
