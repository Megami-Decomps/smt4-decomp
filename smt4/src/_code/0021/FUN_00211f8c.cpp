#include "romwright_types.h"

extern "C" {

int FUN_0018af60(unsigned int, int, int);
int FUN_00296cc8(int);

/* Supplied declaration required: FUN_0018af60. */
/* Supplied declaration required: FUN_00296cc8. */


unsigned int FUN_00211f8c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  temp_v2 = FUN_00296cc8(2);
  if (temp_v1 < 0) {
    temp_v1 = 0;
  }
  if (temp_v2 < 0) {
    temp_v2 = 0;
  }
  FUN_0018af60(temp_v0,temp_v1,temp_v2);
  return 1;
}

} /* extern "C" */
