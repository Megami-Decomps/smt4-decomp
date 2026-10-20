#include "romwright_types.h"

extern "C" {

int scrGetArg(...);
int FUN_002df598(unsigned int, unsigned int);
int FUN_002e8530(void);

/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_002df598. */
/* Supplied declaration required: FUN_002e8530. */


unsigned int FUN_002fe938(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetArg(0);
  FUN_002df598(temp_v1,temp_v0);
  FUN_002e8530();
  return 1;
}

} /* extern "C" */
