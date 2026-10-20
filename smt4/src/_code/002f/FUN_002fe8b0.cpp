#include "romwright_types.h"

extern "C" {

int FUN_001e2478(unsigned int, unsigned int, unsigned int, unsigned int);

/* Supplied declaration required: FUN_001e2478. */
extern unsigned int scrGetArg(unsigned int);


unsigned int FUN_002fe8b0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = scrGetArg(3);
  temp_v1 = scrGetArg(2);
  temp_v2 = scrGetArg(1);
  temp_v3 = scrGetArg(0);
  FUN_001e2478(temp_v3,temp_v2,temp_v1,temp_v0);
  return 1;
}

} /* extern "C" */
