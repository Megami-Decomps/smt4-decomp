#include "romwright_types.h"

extern "C" {

int FUN_002769b4(int, unsigned int, unsigned int);

extern unsigned char DAT_0049f91c; /* 0x49f91c */

/* Supplied declaration required: FUN_002769b4. */
extern unsigned int FUN_00296cc8(void);


unsigned int FUN_002f6168(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00296cc8();
  FUN_002769b4(0xc9,temp_v0,0xffffffff);
  (*(unsigned char *)((unsigned char *)&DAT_0049f91c + 0x2f8)) = 0;
  return 1;
}

} /* extern "C" */
