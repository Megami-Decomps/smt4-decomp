#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

/* Supplied declaration required: FUN_003283ac. */
extern int FUN_0036f22c(void);


unsigned int FUN_0039b498(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0036f22c();
  if (temp_v0 != 0) {
    FUN_003283ac(1);
    return 1;
  }
  FUN_003283ac(0);
  return 0;
}

} /* extern "C" */
