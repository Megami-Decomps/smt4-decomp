/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe144` (_code @ 0x2fe144, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001aba54. */
extern short FUN_003df57c(unsigned short, unsigned int);


int FUN_002fe144(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v2 = (unsigned int)*param_1;
  if (temp_v2 == 0) {
    return 0;
  }
  if (*param_2 != 0) {
    FUN_001aba54();
    temp_v3 = (unsigned int)*param_2;
    FUN_001aba54();
    if (temp_v2 != 0) {
      if (temp_v3 == 0) {
        return 0;
      }
      temp_v0 = FUN_003df57c(*param_1,1);
      temp_v1 = FUN_003df57c(*param_2,1);
      return (int)temp_v0 - (int)temp_v1;
    }
  }
  return 0;
}
