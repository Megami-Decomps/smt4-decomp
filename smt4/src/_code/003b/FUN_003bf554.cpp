#include "romwright_types.h"

extern "C" {

int FUN_00282924(unsigned int, unsigned int);

/* Supplied declaration required: FUN_00282924. */
extern unsigned int FUN_002939f4(void);


unsigned int FUN_003bf554(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002939f4();
  FUN_00282924(temp_v0,param_1);
  return 0;
}

} /* extern "C" */
