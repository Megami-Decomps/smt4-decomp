#include "romwright_types.h"

extern "C" {

int FUN_003bbcb4(unsigned int);

extern int g_cecProcess; /* 0x43de68 */

/* Supplied declaration required: FUN_003bbcb4. */


void FUN_0025461c(void)

{
/* irregular: 1 native warning(s); review required */
  if (g_cecProcess != 0) {
    FUN_003bbcb4(*(unsigned int *)(g_cecProcess + 4));
    return;
  }
  return;
}

} /* extern "C" */
