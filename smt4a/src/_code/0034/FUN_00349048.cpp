#include "romwright_types.h"

extern "C" {

int FUN_00324bc8(unsigned int, unsigned int, unsigned int);

extern unsigned char DAT_005f15fc; /* 0x5f15fc */

extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_00324bc8. */


unsigned int FUN_00349048(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_00236038(2);
  FUN_00324bc8(temp_v0,temp_v1,temp_v2);
  (*(unsigned char *)((unsigned char *)&DAT_005f15fc + 0x574)) = 0;
  return 1;
}

} /* extern "C" */
