#include "romwright_types.h"

extern "C" {

int FUN_001aea28(unsigned int, unsigned int);

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_0058103c; /* 0x58103c */

/* Supplied declaration required: FUN_001aea28. */


void FUN_00312a30(void)

{
/* irregular: 1 native warning(s); review required */
  char *q = (char *)DAT_0058103c + 0xcc00;
  char *r = q + 0x1c;
  FUN_001aea28(DAT_0056fcc0,*(unsigned int *)(*(int *)(r + 0x1c) + 4));
  return;
}

} /* extern "C" */
