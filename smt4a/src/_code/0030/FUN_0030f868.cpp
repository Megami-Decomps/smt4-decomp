#include "romwright_types.h"

extern "C" {

int FUN_002e6e26(void);

/* Supplied declaration required: FUN_002e6e26. */
extern int FUN_0030f78c(void);
extern int FUN_0030f84e(void);


unsigned int FUN_0030f868(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_002e6e26();
  temp_v0 = FUN_0030f78c();
  if (temp_v0 == 0) {
    return 0;
  }
  FUN_002e6e26();
  temp_v0 = FUN_0030f84e();
  if (temp_v0 == 0) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
