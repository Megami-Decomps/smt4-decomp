#include "romwright_types.h"

extern "C" {

int FUN_00272f54(void);
int FUN_00338ba4(void);

extern int lmapMainIsRunning(void);
/* Supplied declaration required: FUN_00272f54. */
/* Supplied declaration required: FUN_00338ba4. */
extern int mapMainIsBusy(void);


unsigned int FUN_003a7438(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = mapMainIsBusy();
  if (temp_v0 != 0) {
    FUN_00272f54();
  }
  else {
    temp_v0 = lmapMainIsRunning();
    if (temp_v0 != 0) {
      FUN_00338ba4();
    }
  }
  return 1;
}

} /* extern "C" */
