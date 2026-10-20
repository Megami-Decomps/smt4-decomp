#include "romwright_types.h"

extern "C" {

int FUN_00152bec(unsigned int);

extern int DAT_00447a78; /* 0x447a78 */

/* Supplied declaration required: FUN_00152bec. */


void FUN_002480f8(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *p = (unsigned int *)(DAT_00447a78 + 0xcc30);
  FUN_00152bec(p[7]);
  return;
}

} /* extern "C" */
