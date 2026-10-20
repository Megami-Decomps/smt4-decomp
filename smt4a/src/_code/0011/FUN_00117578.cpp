#include "romwright_types.h"

extern "C" {

int FUN_001240f6(void);

/* Supplied declaration required: FUN_001240f6. */
extern int FUN_002f6758(void);


void FUN_00117578(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002f6758();
  if (temp_v0 != 0) {
    FUN_001240f6();
  }
  return;
}

} /* extern "C" */
