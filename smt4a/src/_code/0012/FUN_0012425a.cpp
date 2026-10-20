#include "romwright_types.h"

extern "C" {

int FUN_00300b18(int, int);

extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_00300b18. */


void FUN_0012425a(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002e760a(0x44);
  if (temp_v0 != 0) {
    FUN_00300b18(temp_v0,0);
  }
  return;
}

} /* extern "C" */
