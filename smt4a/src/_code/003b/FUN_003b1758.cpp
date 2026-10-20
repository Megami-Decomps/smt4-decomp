#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(unsigned short);
int FUN_003283ac(int);

/* Supplied declaration required: FUN_0019cac4. */
extern unsigned int FUN_00236038(void);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_003b1758(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  
  temp_v0 = FUN_00236038();
  int p = FUN_0019cac4(temp_v0);
  FUN_003283ac((*(unsigned short *)(p + 0x16) & 0xf) >> 3);
  return 1;
}

} /* extern "C" */
