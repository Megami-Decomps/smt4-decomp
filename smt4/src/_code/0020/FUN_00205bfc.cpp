#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

/* Supplied declaration required: scrSetResult. */
extern int scrGetArg(unsigned int);
extern int FUN_00296d6c(int, int);


unsigned int FUN_00205bfc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = scrGetArg(2);
  temp_v1 = FUN_00296d6c(temp_v1 << 10,temp_v2 << 10);
  temp_v1 = temp_v1 / 100;
  scrSetResult(temp_v0 * temp_v1 >> 10);
  return 1;
}

} /* extern "C" */
