#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

extern int FUN_0020ea90(void);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_003b0700(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0020ea90();
  FUN_003283ac(*(unsigned char *)(temp_v0 + 0x1604c));
  return 1;
}

} /* extern "C" */
