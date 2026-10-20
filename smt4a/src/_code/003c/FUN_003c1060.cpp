#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f588; /* 0x57f588 */


void FUN_003c1060(void)

{
  if ((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0x30) = 1;
  }
  return;
}

} /* extern "C" */
