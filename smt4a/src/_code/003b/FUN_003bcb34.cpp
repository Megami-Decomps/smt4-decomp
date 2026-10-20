#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(unsigned int);
int FUN_003283ac(int);

/* Supplied declaration required: FUN_0019cac4. */
extern unsigned int FUN_00236038(void);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_003bcb34(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_0019cac4(temp_v0);
  FUN_003283ac((*(unsigned char *)(temp_v1 + 0xa5) & 3) >> 1);
  return 1;
}

} /* extern "C" */
