#include "romwright_types.h"

extern "C" {

int FUN_002c415c(void);

extern unsigned char DAT_00434278; /* 0x434278 */

/* Supplied declaration required: FUN_002c415c. */


void FUN_001a9a4c(void)

{
/* irregular: 1 native warning(s); review required */
  if ((*(int *)((unsigned char *)&DAT_00434278 + 0x4)) != 0) {
    FUN_002c415c();
    (*(int *)((unsigned char *)&DAT_00434278 + 0x4)) = 0;
  }
  return;
}

} /* extern "C" */
