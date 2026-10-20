#include "romwright_types.h"

extern "C" {

int scrGetArg(...);

extern int FUN_002893d8(void);
/* Supplied declaration required: scrGetArg. */
extern int FUN_002c1d5c(void);


unsigned int FUN_001d3bbc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  if (0 < temp_v0) {
    temp_v0 = FUN_002893d8();
    temp_v1 = scrGetArg(0);
    if ((temp_v0 < temp_v1) &&
       ((temp_v0 = FUN_002c1d5c(), temp_v0 == 0 || (temp_v0 = FUN_002893d8(), temp_v0 < 1)))) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
