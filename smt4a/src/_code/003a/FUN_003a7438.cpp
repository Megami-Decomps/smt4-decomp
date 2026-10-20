#include "romwright_types.h"

extern "C" {

int FUN_00272f54(void);
int FUN_00338ba4(void);

extern int FUN_00164a34(void);
/* Supplied declaration required: FUN_00272f54. */
/* Supplied declaration required: FUN_00338ba4. */
extern int MapMode_IsBusy(void);


unsigned int FUN_003a7438(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = MapMode_IsBusy();
  if (temp_v0 != 0) {
    FUN_00272f54();
  }
  else {
    temp_v0 = FUN_00164a34();
    if (temp_v0 != 0) {
      FUN_00338ba4();
    }
  }
  return 1;
}

} /* extern "C" */
