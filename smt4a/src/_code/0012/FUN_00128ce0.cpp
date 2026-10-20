#include "romwright_types.h"

extern "C" {

int FUN_002fd020(void);

extern int rt_malloc(unsigned int);
/* Supplied declaration required: FUN_002fd020. */


void FUN_00128ce0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = rt_malloc(8);
  if (temp_v0 != 0) {
    FUN_002fd020();
  }
  return;
}

} /* extern "C" */
