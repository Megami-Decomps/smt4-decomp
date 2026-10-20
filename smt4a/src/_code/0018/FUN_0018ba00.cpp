#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005891d8; /* 0x5891d8 */


void FUN_0018ba00(void)

{
  (*(unsigned char *)((unsigned char *)&DAT_005891d8 + 0x2)) = 0;
  return;
}

} /* extern "C" */
