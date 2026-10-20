#include "romwright_types.h"

extern "C" {

int FUN_00324bc8(int, unsigned int, unsigned int);

extern unsigned char DAT_005f15fc; /* 0x5f15fc */

extern unsigned int FUN_00236038(void);
/* Supplied declaration required: FUN_00324bc8. */


unsigned int FUN_0037d5a0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00236038();
  FUN_00324bc8(0xc9,temp_v0,0xffffffff);
  (*(unsigned char *)((unsigned char *)&DAT_005f15fc + 0x574)) = 0;
  return 1;
}

} /* extern "C" */
