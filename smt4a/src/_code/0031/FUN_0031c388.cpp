#include "romwright_types.h"

extern "C" {

int FUN_00270c58(unsigned int);
int FUN_003b5050(void);

extern unsigned char DAT_005f15fc; /* 0x5f15fc */

extern unsigned int FUN_00236038(void);
/* Supplied declaration required: FUN_00270c58. */
/* Supplied declaration required: FUN_003b5050. */


unsigned int FUN_0031c388(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00236038();
  FUN_003b5050();
  (*(unsigned int *)((unsigned char *)&DAT_005f15fc + 0x454)) = 0xffffffff;
  FUN_00270c58(temp_v0);
  return 3;
}

} /* extern "C" */
