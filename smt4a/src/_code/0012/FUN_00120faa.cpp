#include "romwright_types.h"

extern "C" {

int FUN_002e9538(int, unsigned int);

/* Supplied declaration required: FUN_002e9538. */
extern unsigned int FUN_002ea93c(unsigned int);


void FUN_00120faa(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002ea93c(param_2);
  FUN_002e9538(param_1 + 0x10,temp_v0);
  return;
}

} /* extern "C" */
