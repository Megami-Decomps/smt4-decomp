#include "romwright_types.h"

extern "C" {

int FUN_0038e720(int);

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

/* Supplied declaration required: FUN_0038e720. */


void FUN_004abb94(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_0038e720((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 8);
  return;
}

} /* extern "C" */
