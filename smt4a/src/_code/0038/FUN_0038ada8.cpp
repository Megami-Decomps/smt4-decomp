#include "romwright_types.h"

extern "C" {

int FUN_00291e50(unsigned int, unsigned int, unsigned int, unsigned int);

extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_00291e50. */


unsigned int FUN_0038ada8(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00236038(3);
  temp_v1 = FUN_00236038(2);
  temp_v2 = FUN_00236038(1);
  temp_v3 = FUN_00236038(0);
  FUN_00291e50(temp_v3,temp_v2,temp_v1,temp_v0);
  return 1;
}

} /* extern "C" */
