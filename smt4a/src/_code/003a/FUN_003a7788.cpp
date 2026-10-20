#include "romwright_types.h"

extern "C" {

extern int DAT_0057f268; /* 0x57f268 */


void FUN_003a7788(void)

{
  if (DAT_0057f268 != 0) {
    *(unsigned short *)(DAT_0057f268 + 0xa04) = 0;
  }
  return;
}

} /* extern "C" */
