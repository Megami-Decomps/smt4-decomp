/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dcc78` (_code @ 0x2dcc78, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00249a44. */
/* Supplied declaration required: FUN_002890d0. */
extern int FUN_0028d498(void);


int FUN_002dcc78(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = (unsigned int)*param_1;
  FUN_00249a44();
  temp_v1 = (unsigned int)*param_2;
  FUN_00249a44();
  FUN_002890d0(*param_1);
  temp_v2 = FUN_0028d498();
  FUN_002890d0(*param_2);
  temp_v3 = FUN_0028d498();
  temp_v2 = temp_v2 - temp_v3;
  if (temp_v2 == 0) {
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v0 + 0x26) - (unsigned int)*(unsigned short *)(temp_v1 + 0x26);
  }
  return temp_v2;
}
