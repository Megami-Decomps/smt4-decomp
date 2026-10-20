#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern int FUN_00184964(int, int);
extern int scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_002cc2a0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = scrGetArg(2);
  temp_v1 = FUN_00184964(temp_v1 << 10,temp_v2 << 10);
  temp_v1 = temp_v1 / 100;
  scrSetResult(temp_v0 * temp_v1 >> 10);
  return 1;
}

} /* extern "C" */
