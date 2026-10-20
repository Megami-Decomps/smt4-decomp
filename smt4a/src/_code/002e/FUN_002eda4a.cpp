#include "romwright_types.h"

extern "C" {

int FUN_002e9318(int);

/* Supplied declaration required: FUN_002e9318. */
extern int FUN_002eda5a(int);


void FUN_002eda4a(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002eda5a(param_1 + 8);
  FUN_002e9318(temp_v0 - 8);
  return;
}

} /* extern "C" */
