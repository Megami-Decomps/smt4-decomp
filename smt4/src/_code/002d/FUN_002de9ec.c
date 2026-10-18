/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002de9ec` (_code @ 0x2de9ec, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00256fdc(unsigned int);
/* Supplied declaration required: FUN_00256fec. */
/* Supplied declaration required: FUN_00257108. */
/* Supplied declaration required: FUN_0025715c. */
/* Supplied declaration required: FUN_00268fc4. */
/* Supplied declaration required: FUN_0031a85c. */
/* Supplied declaration required: rt_memcpy_w. */


int FUN_002de9ec(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0;
  FUN_0031a85c();
  temp_v1 = *(unsigned int *)(param_1 + 0x13c);
  FUN_00268fc4();
  *(unsigned int *)(temp_v0 + 0x13c) = temp_v1;
  rt_memcpy_w(temp_v0 + 0x30,param_1 + 0x30,0x10c);
  if (*(int *)(param_1 + 0x144) != 0) {
    if (*(int *)(temp_v0 + 0x144) != 0) {
      FUN_0025715c();
    }
    temp_v1 = *(unsigned int *)(param_1 + 0x144);
    FUN_00256fec();
    *(unsigned int *)(temp_v0 + 0x144) = temp_v1;
  }
  else if (*(int *)(param_1 + 0x140) != 0) {
    if (*(int *)(temp_v0 + 0x140) != 0) {
      FUN_00257108();
    }
    temp_v1 = FUN_00256fdc(*(unsigned int *)(param_1 + 0x140));
    *(unsigned int *)(temp_v0 + 0x140) = temp_v1;
  }
  return temp_v0;
}
