/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eda88` (_code @ 0x3eda88, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192550(void);

/* Supplied declaration required: FUN_00192550. */
extern unsigned int FUN_001ba3d4(unsigned int);


unsigned int FUN_003eda88(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0;
  while ((temp_v0 = temp_v2, FUN_00192550(), temp_v0 == 0 || ((*(unsigned int *)(temp_v0 + 0x68) & 8) == 0))) {
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x7df) {
      return 0;
    }
  }
  if (temp_v2 - 1 >= 0x7de) {
    return 0;
  }
  temp_v1 = FUN_001ba3d4(temp_v2);
  return temp_v1;
}

} /* extern "C" */
