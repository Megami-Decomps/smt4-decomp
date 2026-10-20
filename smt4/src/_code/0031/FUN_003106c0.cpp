#include "romwright_types.h"

extern "C" {

int FUN_002c0cec(int, int);

extern int FUN_002c0cc4(void);
/* Supplied declaration required: FUN_002c0cec. */


int FUN_003106c0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_002c0cec(0x15,0);
  temp_v0 = FUN_002c0cc4();
  return temp_v0 + param_1 * 100;
}

} /* extern "C" */
