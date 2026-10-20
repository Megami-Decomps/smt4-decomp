#include "romwright_types.h"

extern "C" {

int FUN_002939f4(void);

/* Supplied declaration required: FUN_002939f4. */
extern int FUN_003367c4(void);


unsigned char FUN_00312598(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_002939f4();
  temp_v0 = FUN_003367c4();
  return temp_v0 != 0;
}

} /* extern "C" */
