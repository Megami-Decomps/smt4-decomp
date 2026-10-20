#include "romwright_types.h"

extern "C" {

int FUN_002c34f8(void);

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */

/* Supplied declaration required: FUN_002c34f8. */


void FUN_002c5758(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  (*(unsigned int *)((unsigned char *)&DAT_0043e2a8 + 0x10)) = (*(unsigned int *)((unsigned char *)&DAT_0043e2a8 + 0x10)) & ~param_1;
  if ((*(unsigned int *)((unsigned char *)&DAT_0043e2a8 + 0x10)) != 0) {
    DAT_0043e2a8 = 0;
    FUN_002c34f8();
    return;
  }
  DAT_0043e2a8 = 1;
  FUN_002c34f8();
  return;
}

} /* extern "C" */
