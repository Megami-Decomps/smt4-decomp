#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int FUN_00295228(unsigned int, unsigned int);

/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_00295228. */
extern unsigned int scrGetArg(unsigned int);


unsigned int FUN_0030bb94(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  btlGetMainState();
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  FUN_00295228(temp_v0,temp_v1);
  return 1;
}

} /* extern "C" */
