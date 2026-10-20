#include "romwright_types.h"

extern "C" {

int FUN_002fd020(void);

extern int FUN_002e6dac(unsigned int);
/* Supplied declaration required: FUN_002fd020. */


void FUN_00128ce0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002e6dac(8);
  if (temp_v0 != 0) {
    FUN_002fd020();
  }
  return;
}

} /* extern "C" */
