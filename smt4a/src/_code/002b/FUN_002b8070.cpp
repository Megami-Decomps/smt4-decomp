#include "romwright_types.h"

extern "C" {

int FUN_001aea28(unsigned int, unsigned int);

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_0058103c; /* 0x58103c */

/* Supplied declaration required: FUN_001aea28. */


void FUN_002b8070(void)

{
/* irregular: 1 native warning(s); review required */
  int p = DAT_0058103c + 0xcc5c;
  FUN_001aea28(DAT_0056fcc0,*(unsigned int *)(*(int *)(p + 0x1c) + 4));
  return;
}

} /* extern "C" */
