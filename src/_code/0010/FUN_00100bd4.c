/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100bd4` (_code @ 0x100bd4, 0x1a bytes) from smt4.cxi.
 * It reads the retail function; it does not reproduce its bytes. build.py only checks that it compiles. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c607c. */
extern unsigned int *FUN_002c6840(void);


void FUN_00100bd4(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002c6840();
  temp_v0 = *puVar1;
  FUN_002c607c(param_1,0,10);
  *puVar1 = temp_v0;
  return;
}
