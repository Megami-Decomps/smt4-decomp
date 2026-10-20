#include "romwright_types.h"

extern "C" {

int FUN_002c5df4(void);

extern unsigned char DAT_005f15fc; /* 0x5f15fc */
extern unsigned char DAT_0060fc08; /* 0x60fc08 */

/* Supplied declaration required: FUN_002c5df4. */


void FUN_0023a52c(void)

{
/* irregular: 1 native warning(s); review required */
  if (((*(signed char *)((unsigned char *)&DAT_0060fc08 + 0x394)) != '\0') && ((*(signed char *)((unsigned char *)&DAT_005f15fc + 0x27)) != '\0')) {
    FUN_002c5df4();
    return;
  }
  return;
}

} /* extern "C" */
