#include "romwright_types.h"

extern "C" {

int scrSetResult(void);
int scrGetArg(...);
int FUN_0030a2c0(unsigned int, int, int, unsigned int);

/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_0030a2c0. */


unsigned int FUN_0022206c(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetArg(1);
  FUN_0030a2c0(*(unsigned int *)(temp_v0 * 4 + 0x43df70),0,0,temp_v1);
  scrSetResult();
  return 1;
}

} /* extern "C" */
