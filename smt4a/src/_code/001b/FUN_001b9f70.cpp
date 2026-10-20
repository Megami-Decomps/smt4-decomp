#include "romwright_types.h"

extern "C" {

int FUN_001b6660(unsigned int, int);

/* Supplied declaration required: FUN_001b6660. */
extern unsigned int FUN_001c35d8(void);


int FUN_001b9f70(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_001c35d8();
  FUN_001b6660(temp_v0,param_1 + 0x88);
  return param_1;
}

} /* extern "C" */
