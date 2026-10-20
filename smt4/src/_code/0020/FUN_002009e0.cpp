#include "romwright_types.h"

extern "C" {

int FUN_0030a530(void);
int FUN_0031c0e4(void);

extern int FUN_002893d8(void);
extern int FUN_002cd9e4(void);
/* Supplied declaration required: FUN_0030a530. */
/* Supplied declaration required: FUN_0031c0e4. */


unsigned char FUN_002009e0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002893d8();
  if (temp_v0 != 0) {
    temp_v0 = FUN_002cd9e4();
    if (temp_v0 != 0) {
      FUN_0031c0e4();
    }
    return temp_v0 != 0;
  }
  FUN_0030a530();
  return 0;
}

} /* extern "C" */
