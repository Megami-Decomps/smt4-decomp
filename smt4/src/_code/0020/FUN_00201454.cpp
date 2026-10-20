#include "romwright_types.h"

extern "C" {

int FUN_00254434(unsigned int, unsigned int);
int FUN_0027db40(void);

/* Supplied declaration required: FUN_00254434. */
extern unsigned int FUN_002592d8(void);
/* Supplied declaration required: FUN_0027db40. */
extern unsigned int scrGetArg(unsigned int);


unsigned int FUN_00201454(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002592d8();
  temp_v1 = scrGetArg(0);
  FUN_00254434(temp_v1,temp_v0);
  FUN_0027db40();
  return 2;
}

} /* extern "C" */
