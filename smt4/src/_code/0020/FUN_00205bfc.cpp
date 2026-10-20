#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_00296cc8(unsigned int);
extern int FUN_00296d6c(int, int);


unsigned int FUN_00205bfc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  temp_v2 = FUN_00296cc8(2);
  temp_v1 = FUN_00296d6c(temp_v1 << 10,temp_v2 << 10);
  temp_v1 = temp_v1 / 100;
  FUN_0028dcb0(temp_v0 * temp_v1 >> 10);
  return 1;
}

} /* extern "C" */
