#include "romwright_types.h"

extern "C" {

int FUN_002769b4(int, int, int);
int FUN_0027d5ac(unsigned int);
int FUN_00296cc8(...);
int FUN_002c57c8(int, int, int);

extern unsigned char DAT_0049f91c; /* 0x49f91c */

/* Supplied declaration required: FUN_002769b4. */
/* Supplied declaration required: FUN_0027d5ac. */
/* Supplied declaration required: FUN_00296cc8. */
/* Supplied declaration required: FUN_002c57c8. */


unsigned int FUN_002eeeb4(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00296cc8();
  FUN_00296cc8(1);
  FUN_0027d5ac(temp_v0);
  FUN_002769b4(0x18,1,0);
  (*(unsigned char *)((unsigned char *)&DAT_0049f91c + 0x2f8)) = 0;
  FUN_002c57c8(6,0,0);
  return 1;
}

} /* extern "C" */
