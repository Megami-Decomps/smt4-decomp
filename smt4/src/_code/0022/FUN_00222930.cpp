#include "romwright_types.h"

extern "C" {

int FUN_002769b4(unsigned int, unsigned int, unsigned int);
int FUN_002c57c8(int, int, int);

extern unsigned char DAT_0049f91c; /* 0x49f91c */

/* Supplied declaration required: FUN_002769b4. */
extern unsigned int FUN_00296cc8(unsigned int);
/* Supplied declaration required: FUN_002c57c8. */


unsigned int FUN_00222930(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  temp_v2 = FUN_00296cc8(2);
  FUN_002769b4(temp_v0,temp_v1,temp_v2);
  (*(unsigned char *)((unsigned char *)&DAT_0049f91c + 0x2f8)) = 0;
  FUN_002c57c8(8,0,0);
  return 1;
}

} /* extern "C" */
