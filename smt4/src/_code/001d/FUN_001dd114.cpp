#include "romwright_types.h"

extern "C" {

int FUN_002629a0(unsigned int, int);
int scrGetArg(...);

/* Supplied declaration required: FUN_002629a0. */
/* Supplied declaration required: scrGetArg. */


unsigned int FUN_001dd114(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetArg(1);
  if (temp_v1 < 0) {
    temp_v1 = 0;
  }
  FUN_002629a0(temp_v0,temp_v1);
  return 1;
}

} /* extern "C" */
