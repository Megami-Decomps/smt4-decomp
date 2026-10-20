#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);
int FUN_003283ac(int);

/* Supplied declaration required: FUN_0014aa78. */
/* Supplied declaration required: FUN_003283ac. */
extern int FUN_003ec7b0(void);


unsigned int FUN_0039d400(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_0014aa78();
  temp_v0 = FUN_003ec7b0();
  FUN_003283ac(temp_v0 != 0);
  return 1;
}

} /* extern "C" */
