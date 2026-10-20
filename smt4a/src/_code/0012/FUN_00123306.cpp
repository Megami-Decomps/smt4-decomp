#include "romwright_types.h"

extern "C" {

int FUN_002f32f8(unsigned int, unsigned int);

/* Supplied declaration required: FUN_002f32f8. */
extern unsigned int FUN_002fbb86(unsigned int);


void FUN_00123306(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002fbb86(param_2);
  FUN_002f32f8(param_1,temp_v0);
  return;
}

} /* extern "C" */
