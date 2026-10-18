/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b5318` (_code @ 0x2b5318, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int uRam00000000; /* 0x0 */
extern int iRam00000008; /* 0x8 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002b53bc) */
/* WARNING: Removing unreachable block (ram,0x002b53c4) */
/* WARNING: Removing unreachable block (ram,0x002b53f8) */
/* WARNING: Removing unreachable block (ram,0x002b5392) */

int FUN_002b5318(int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  if (param_1 == 0) {
    param_4 = param_4 + (param_2 >> 4);
    temp_v0 = 1;
    if (temp_v0 < param_4) {
      do {
        temp_v0 = temp_v0 + 2;
      } while (temp_v0 < param_4);
    }
    iRam00000008 = param_1;
    return 0;
  }
  if (param_1 != 0) {
    uRam00000000 = *(unsigned int *)(param_1 + 4);
  }
  if (*(int *)(param_1 + 4) != 0) {
    param_1 = param_1 + *(int *)(param_1 + 8);
  }
  else {
    param_1 = 0;
  }
  return param_1;
}
