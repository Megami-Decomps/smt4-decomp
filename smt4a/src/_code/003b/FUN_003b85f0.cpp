#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(unsigned short);
int FUN_003283ac(int);

/* Supplied declaration required: FUN_0019cac4. */
extern unsigned int FUN_00236038(void);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_003b85f0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0019cac4(FUN_00236038());
  FUN_003283ac((*(unsigned short *)(temp_v0 + 0x16) & 0x3f) >> 5);
  return 1;
}

} /* extern "C" */
