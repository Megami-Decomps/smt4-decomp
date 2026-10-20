#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);

/* Supplied declaration required: FUN_0014aa78. */
extern int FUN_003e8460(void);


unsigned char FUN_003a9170(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_0014aa78();
  temp_v0 = FUN_003e8460();
  return temp_v0 != 0;
}

} /* extern "C" */
