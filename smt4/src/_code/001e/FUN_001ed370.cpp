#include "romwright_types.h"

extern "C" {

int FUN_00289234(int);
int scrGetArg(...);
int eventTexSetCurrent(void);
int FUN_0031bc80(int, int, unsigned int);

/* Supplied declaration required: FUN_00289234. */
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: eventTexSetCurrent. */
/* Supplied declaration required: FUN_0031bc80. */


unsigned int FUN_001ed370(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetArg(1);
  temp_v0 = FUN_0031bc80(temp_v0,1,temp_v1);
  if (temp_v0 != 0) {
    eventTexSetCurrent();
    FUN_00289234(temp_v0);
  }
  return 1;
}

} /* extern "C" */
