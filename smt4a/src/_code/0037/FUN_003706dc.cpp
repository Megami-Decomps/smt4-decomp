#include "romwright_types.h"

extern "C" {

int FUN_0036af24(void);
int FUN_00376fa4(unsigned int);
int FUN_003847ac(unsigned int, unsigned int);

extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_0036af24. */
/* Supplied declaration required: FUN_00376fa4. */
/* Supplied declaration required: FUN_003847ac. */


unsigned int FUN_003706dc(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = scrGetArg(2);
  FUN_003847ac(temp_v1,temp_v2);
  FUN_00376fa4(temp_v0);
  FUN_0036af24();
  return 1;
}

} /* extern "C" */
