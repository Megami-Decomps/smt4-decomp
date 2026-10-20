#include "romwright_types.h"

extern "C" {

int FUN_001aea28(unsigned int, unsigned int);

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_0058103c; /* 0x58103c */

/* Supplied declaration required: FUN_001aea28. */


void FUN_00312a5c(void)

{
/* irregular: 1 native warning(s); review required */
  int *p = (int *)(DAT_0058103c + 0xcc3c);
  unsigned int *q = (unsigned int *)p[7];
  FUN_001aea28(DAT_0056fcc0,q[1]);
  return;
}

} /* extern "C" */
