#include "romwright_types.h"

extern "C" {

int scrGetArg(...);
int FUN_0035243c(unsigned int, unsigned int);
int FUN_00363c20(void);

/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_0035243c. */
/* Supplied declaration required: FUN_00363c20. */


unsigned int FUN_0038ae30(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetArg(0);
  FUN_0035243c(temp_v1,temp_v0);
  FUN_00363c20();
  return 1;
}

} /* extern "C" */
