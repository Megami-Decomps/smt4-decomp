#include "romwright_types.h"

extern "C" {

int FUN_00124282(unsigned int, unsigned int);

/* Supplied declaration required: FUN_00124282. */
extern unsigned int FUN_002ea0e4(void);


void FUN_002fa794(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002ea0e4();
  FUN_00124282(param_2,temp_v0);
  return;
}

} /* extern "C" */
