#include "romwright_types.h"

extern "C" {

int FUN_001f4e20(int, int);
int FUN_002360dc(void);
int FUN_002392b8(void);

extern unsigned char DAT_005f15fc; /* 0x5f15fc */

/* Supplied declaration required: FUN_001f4e20. */
/* Supplied declaration required: FUN_002360dc. */
/* Supplied declaration required: FUN_002392b8. */


unsigned int FUN_0031d528(void)

{
/* irregular: 3 native warning(s); review required */
  FUN_002360dc();
  FUN_002392b8();
  FUN_001f4e20(0,1);
  (*(unsigned int *)((unsigned char *)&DAT_005f15fc + 0x484)) = 0;
  return 1;
}

} /* extern "C" */
