#include "romwright_types.h"

extern "C" {

int FUN_0025930c(unsigned int, unsigned int);
int FUN_0026f960(unsigned int);

/* Supplied declaration required: FUN_0025930c. */
/* Supplied declaration required: FUN_0026f960. */
extern unsigned int FUN_00296cc8(unsigned int);


unsigned int FUN_00211f50(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(2);
  temp_v2 = FUN_00296cc8(1);
  FUN_0025930c(temp_v2,temp_v1);
  FUN_0026f960(temp_v0);
  return 2;
}

} /* extern "C" */
