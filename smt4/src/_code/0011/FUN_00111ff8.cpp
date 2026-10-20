#include "romwright_types.h"

extern "C" {

extern int DAT_004655c0; /* 0x4655c0 */


void FUN_00111ff8(void)

{
  if (DAT_004655c0 != 0) {
    DAT_004655c0 = 0;
  }
  return;
}

} /* extern "C" */
