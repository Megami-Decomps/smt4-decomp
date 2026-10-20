#include "romwright_types.h"

extern "C" {

int FUN_002205a4(unsigned int, unsigned int, unsigned int);

/* Supplied declaration required: FUN_002205a4. */
extern unsigned int FUN_00296cc8(unsigned int);


unsigned int FUN_002d8880(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  temp_v2 = FUN_00296cc8(2);
  FUN_002205a4(temp_v0,temp_v1,temp_v2);
  return 1;
}

} /* extern "C" */
