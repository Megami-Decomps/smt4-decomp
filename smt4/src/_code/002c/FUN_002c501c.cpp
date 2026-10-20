#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044ea58; /* 0x44ea58 */


unsigned int FUN_002c501c(void)

{
  return *(unsigned int *)((*(int *)((unsigned char *)&DAT_0044ea58 + 0x4)) + 0x80);
}

} /* extern "C" */
