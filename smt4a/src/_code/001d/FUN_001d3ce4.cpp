/* NON_MATCHING: found outside every function: branched to by FUN_001d3b94; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001d3ce4 for reference (not compiled; its own view of the boundaries):

long long FUN_001d3ce4(unsigned int param_1,unsigned int param_2)

{
  unsigned int in_r12;
  
  if ((in_r12 & 0x100000) == 0) {
    return (unsigned long long)param_2 << 0x20;
  }
  if ((in_r12 & 0x70000) != 0) {
    return CONCAT44(~(in_r12 << 0xf) << 1,param_1);
  }
  return CONCAT44(param_2,0x30000000);
}
*/
#include "common.h"
