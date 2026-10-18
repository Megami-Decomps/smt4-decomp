/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023fc34` (_code @ 0x23fc34, 0x8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Removing unreachable block (ram,0x0023fc5c) */
/* WARNING: Removing unreachable block (ram,0x0023fc58) */
/* WARNING: Removing unreachable block (ram,0x0023fc48) */
/* WARNING: Removing unreachable block (ram,0x0023fc68) */
/* WARNING: Removing unreachable block (ram,0x0023fc6c) */

unsigned int FUN_0023fc34(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = 0x43;
  while( 1 ) {
    temp_v0 = *(int *)(param_1 + 0x1e98) + temp_v2 * 0x114;
    temp_v1 = *(unsigned int *)(temp_v0 + 0x50);
    if ((((temp_v1 & 1) != 0 && (temp_v1 & 0x80) != 0) && ((temp_v1 & 2) == 0)) &&
       ((*(unsigned int *)(temp_v0 + 0x54) & 4) == 0)) break;
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x6d) {
      return 1;
    }
  }
  return 0;
}
