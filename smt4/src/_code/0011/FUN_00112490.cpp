#include "romwright_types.h"

extern "C" {

extern int DAT_0044e32c; /* 0x44e32c */


void FUN_00112490(void)

{
  if (DAT_0044e32c != 0) {
    DAT_0044e32c = 0;
  }
  return;
}

} /* extern "C" */
