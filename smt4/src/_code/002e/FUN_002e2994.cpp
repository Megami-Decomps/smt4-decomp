#include "romwright_types.h"

extern "C" {

int scrSetResult(void);
int scrGetArg(...);
int FUN_00298fa0(int, unsigned int);

/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_00298fa0. */


unsigned int FUN_002e2994(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetArg(1);
  FUN_00298fa0(temp_v0,temp_v1);
  scrSetResult();
  return 1;
}

} /* extern "C" */
