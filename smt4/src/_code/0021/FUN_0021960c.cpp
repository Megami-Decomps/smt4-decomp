/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021960c` (_code @ 0x21960c, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b4670(void);

/* Supplied declaration required: FUN_002b4670. */


int FUN_0021960c(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = (unsigned int)*param_1;
  FUN_002b4670();
  temp_v1 = (unsigned int)*param_2;
  FUN_002b4670();
  return (unsigned int)*(unsigned char *)(temp_v0 + 0x6f) - (unsigned int)*(unsigned char *)(temp_v1 + 0x6f);
}

} /* extern "C" */
