#include "romwright_types.h"

extern "C" {

int FUN_00291e50(unsigned int, unsigned int, unsigned int, unsigned int);

extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_00291e50. */


unsigned int FUN_0038ada8(void)

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
  FUN_00291e50(temp_v3,temp_v2,temp_v1,temp_v0);
  return 1;
}

} /* extern "C" */
