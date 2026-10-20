#include "romwright_types.h"

extern "C" {

int FUN_004de8b8(unsigned int, int, unsigned int, int);

extern unsigned int DAT_0057113c; /* 0x57113c */

extern unsigned int FUN_00236038(void);
/* Supplied declaration required: FUN_004de8b8. */


unsigned int FUN_00373b98(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00236038();
  FUN_004de8b8(DAT_0057113c,0x1d,temp_v0,1);
  return 1;
}

} /* extern "C" */
