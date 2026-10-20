#include "romwright_types.h"

extern "C" {

int FUN_00301830(void);
int FUN_00303a48(void);

extern int lmapMainIsRunning(void);
extern int FUN_002b4cb0(void);
/* Supplied declaration required: FUN_00301830. */
/* Supplied declaration required: FUN_00303a48. */
extern int mapMainIsBusy(void);


unsigned int FUN_002a3cf4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = mapMainIsBusy();
  if ((temp_v0 != 0) || (temp_v0 = lmapMainIsRunning(), temp_v0 != 0)) {
    FUN_00303a48();
  }
  else {
    temp_v0 = FUN_002b4cb0();
    if (temp_v0 != 0) {
      FUN_00301830();
    }
  }
  return 1;
}

} /* extern "C" */
