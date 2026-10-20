#include "romwright_types.h"

extern "C" {

extern int DAT_00465058; /* 0x465058 */


void FUN_0010a52c(void)

{
  DAT_00465058 = 1 - DAT_00465058;
  return;
}

} /* extern "C" */
