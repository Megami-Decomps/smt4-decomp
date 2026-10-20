#include "romwright_types.h"

extern "C" {

int FUN_00137ee0(int, int, int);
int FUN_00236038(...);
int FUN_00324bc8(int, int, int);
int FUN_00376fb8(unsigned int);

extern unsigned char DAT_005f15fc; /* 0x5f15fc */

/* Supplied declaration required: FUN_00137ee0. */
/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_00324bc8. */
/* Supplied declaration required: FUN_00376fb8. */


unsigned int FUN_0037019c(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00236038();
  FUN_00236038(1);
  FUN_00376fb8(temp_v0);
  FUN_00324bc8(0x18,1,0);
  (*(unsigned char *)((unsigned char *)&DAT_005f15fc + 0x574)) = 0;
  FUN_00137ee0(6,0,0);
  return 1;
}

} /* extern "C" */
