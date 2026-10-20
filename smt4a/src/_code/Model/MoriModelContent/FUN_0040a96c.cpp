/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040a96c` (_code @ 0x40a96c, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00178b04(...);

/* Supplied declaration required: FUN_00178b04. */
extern unsigned int FUN_00406260(void);


void FUN_0040a96c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0x1c;
  FUN_00178b04(0x1c,"c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelContent.cpp",0xfb);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_00406260();
  }
  *(unsigned int *)(param_1 + 8) = temp_v1;
  return;
}

} /* extern "C" */
