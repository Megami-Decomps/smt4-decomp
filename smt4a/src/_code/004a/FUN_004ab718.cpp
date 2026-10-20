#include "romwright_types.h"

extern "C" {

int FUN_003f995c(unsigned int);

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

/* Supplied declaration required: FUN_003f995c. */


void FUN_004ab718(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_003f995c(*(unsigned int *)((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 0x7488));
  return;
}

} /* extern "C" */
