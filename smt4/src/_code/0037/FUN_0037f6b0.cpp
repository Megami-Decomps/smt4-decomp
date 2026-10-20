#include "romwright_types.h"

extern "C" {

int FUN_0037c280(unsigned int, int);

extern unsigned int FUN_002bd440(void);
/* Supplied declaration required: FUN_0037c280. */


void FUN_0037f6b0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002bd440();
  FUN_0037c280(temp_v0,param_1 + 0x50);
  *(unsigned char *)(param_1 + 0xd) = 1;
  return;
}

} /* extern "C" */
