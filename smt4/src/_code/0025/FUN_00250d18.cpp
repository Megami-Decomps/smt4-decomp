/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00250d18` (_code @ 0x250d18, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c0c74(unsigned int);

/* Supplied declaration required: FUN_002c0c74. */
extern int FUN_002c0cc4(unsigned int);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);


unsigned short FUN_00250d18(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_002c0cec(9,3);
  temp_v3 = (param_1 - param_2) + 10;
  if ((int)temp_v3 < 0) {
    temp_v3 = 0;
  }
  temp_v1 = FUN_002c0c74(temp_v0);
  if (temp_v1 <= temp_v3) {
    temp_v2 = FUN_002c0c74(temp_v0);
    temp_v3 = temp_v2 - 1;
  }
  temp_v2 = FUN_002c0cc4(temp_v0);
  return *(unsigned short *)(temp_v2 + temp_v3 * 2);
}

} /* extern "C" */
