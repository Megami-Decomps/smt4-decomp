#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(unsigned int);

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002939f4(void);
extern unsigned int FUN_00296cc8(void);


unsigned int FUN_002f1030(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  if (temp_v0 < 0x10) {
    temp_v1 = FUN_002939f4();
    FUN_0028dcb0(*(unsigned int *)(temp_v1 + temp_v0 * 4 + 0x497c));
  }
  return 1;
}

} /* extern "C" */
