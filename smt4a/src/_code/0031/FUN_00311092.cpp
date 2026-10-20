#include "romwright_types.h"

extern "C" {

int FUN_00301490(void);

extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_00301490. */


void FUN_00311092(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002e760a(0x40);
  if (temp_v0 != 0) {
    FUN_00301490();
  }
  return;
}

} /* extern "C" */
