#include "romwright_types.h"

extern "C" {

int jyoucyuGetTableEntry(int);

/* Supplied declaration required: jyoucyuGetTableEntry. */


void FUN_00394cc4(void)

{
/* irregular: 1 native warning(s); review required */
  jyoucyuGetTableEntry(1);
  return;
}

} /* extern "C" */
