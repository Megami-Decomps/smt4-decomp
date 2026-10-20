#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f588; /* 0x57f588 */


void FUN_003c3e14(void)

{
  if ((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0x30) = 0;
  }
  return;
}

} /* extern "C" */
