/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002904ec` (_code @ 0x2904ec, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002adf14(char);
/* Supplied declaration required: FUN_002b6700. */
extern unsigned int FUN_002c3290(int);


unsigned int FUN_002904ec(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = param_1;
  FUN_002b6700();
  temp_v0 = FUN_002c3290(temp_v1 + 0x138);
  if ((temp_v0 < 2) && (*(char *)(temp_v1 + 0x138) == '0')) {
    temp_v0 = 0;
  }
  else if (*(char *)(temp_v1 + 0x147) == '\0') {
    temp_v0 = 1;
  }
  else {
    temp_v1 = FUN_002adf14(*(char *)(temp_v1 + 0x147));
    temp_v0 = (*(unsigned char *)(temp_v1 + param_1 * 4 + 0x202) & 4) >> 2;
  }
  return temp_v0;
}
