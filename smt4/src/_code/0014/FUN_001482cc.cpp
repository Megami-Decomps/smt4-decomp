#include "romwright_types.h"

extern "C" {

int FUN_002bb308(void);
int FUN_002bb378(void);

extern unsigned int FUN_00150030(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bb308. */
/* Supplied declaration required: FUN_002bb378. */


unsigned int FUN_001482cc(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_002bb378();
  temp_v0 = FUN_00150030(param_1,param_2);
  FUN_002bb308();
  return temp_v0;
}

} /* extern "C" */
