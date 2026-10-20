#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(unsigned int);

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002939f4(void);
extern int FUN_00296cc8(unsigned int);


unsigned int FUN_002f12c8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002939f4();
  temp_v1 = FUN_00296cc8(0);
  FUN_0028dcb0(*(unsigned int *)(temp_v0 + temp_v1 * 4 + 0x22a8));
  return 1;
}

} /* extern "C" */
