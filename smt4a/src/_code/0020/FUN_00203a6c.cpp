#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00570d58; /* 0x570d58 */


void FUN_00203a6c(unsigned int param_1)

{
  DAT_00570d58 = param_1;
  return;
}

} /* extern "C" */
