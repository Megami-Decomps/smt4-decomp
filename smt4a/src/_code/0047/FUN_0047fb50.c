/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047fb50` (_code @ 0x47fb50, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00192608. */
extern int FUN_003dfe60(void);


unsigned int FUN_0047fb50(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_003dfe60();
  FUN_00192608();
  if ((param_1 != 0) &&
     ((((temp_v0 = *(unsigned char *)(param_1 + 0x30), (temp_v0 & 1) != 0 && (temp_v1 == 4)) ||
       (((temp_v0 & 4) != 0 && (temp_v1 == 5)))) || (((temp_v0 & 2) != 0 && (temp_v1 == 1)))))) {
    return 1;
  }
  return 0;
}
