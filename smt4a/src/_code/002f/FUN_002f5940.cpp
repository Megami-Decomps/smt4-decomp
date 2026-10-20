#include "romwright_types.h"

extern "C" {

int FUN_00121cc4(void);
int FUN_002e75fa(void);
int FUN_002eb5f4(void);

/* Supplied declaration required: FUN_00121cc4. */
/* Supplied declaration required: FUN_002e75fa. */
extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_002eb5f4. */


void FUN_002f5940(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002eb5f4();
  if (temp_v0 != 0) {
    FUN_002eb5f4();
    FUN_002e75fa();
  }
  else {
    temp_v0 = FUN_002e760a(0x3c4);
    if (temp_v0 != 0) {
      FUN_00121cc4();
      return;
    }
  }
  return;
}

} /* extern "C" */
