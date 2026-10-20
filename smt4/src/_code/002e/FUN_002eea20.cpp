#include "romwright_types.h"

extern "C" {

int FUN_002c43b4(unsigned int, int);

extern unsigned int FUN_00296cc8(void);
extern int FUN_002bf244(void);
/* Supplied declaration required: FUN_002c43b4. */


unsigned int FUN_002eea20(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_002bf244();
  if (temp_v1 != 0) {
    FUN_002c43b4(temp_v0,0);
  }
  return 1;
}

} /* extern "C" */
