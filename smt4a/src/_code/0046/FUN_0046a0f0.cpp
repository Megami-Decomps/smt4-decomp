#include "romwright_types.h"

extern "C" {

unsigned short *FUN_001ad9b4(unsigned short *);

/* Supplied declaration required: FUN_001ad9b4. */


unsigned short FUN_0046a0f0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  
  puVar1 = (unsigned short *)(*(unsigned int *)(param_1 + 0xa0c) & 0xffff);
  puVar1 = FUN_001ad9b4(puVar1);
  return *puVar1;
}

} /* extern "C" */
