#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00573920; /* 0x573920 */


void FUN_003ebeb4(void)

{
  (*(unsigned int *)((unsigned char *)&DAT_00573920 + 0x24)) = 0;
  return;
}

} /* extern "C" */
