#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f588; /* 0x57f588 */


void FUN_001695a0(void)

{
  if ((*(int *)((unsigned char *)&DAT_0057f588 + 0x4)) != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x4)) + 0x19c5) = 0x15;
  }
  return;
}

} /* extern "C" */
