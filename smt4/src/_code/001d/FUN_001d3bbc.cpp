#include "romwright_types.h"

extern "C" {

int FUN_00296cc8(...);

extern int FUN_002893d8(void);
/* Supplied declaration required: FUN_00296cc8. */
extern int FUN_002c1d5c(void);


unsigned int FUN_001d3bbc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  if (0 < temp_v0) {
    temp_v0 = FUN_002893d8();
    temp_v1 = FUN_00296cc8(0);
    if ((temp_v0 < temp_v1) &&
       ((temp_v0 = FUN_002c1d5c(), temp_v0 == 0 || (temp_v0 = FUN_002893d8(), temp_v0 < 1)))) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
