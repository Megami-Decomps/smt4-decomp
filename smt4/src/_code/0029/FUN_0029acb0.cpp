#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e140; /* 0x44e140 */


int FUN_0029acb0(void)

{
  return (*(int *)((unsigned char *)&DAT_0044e140 + 0x4)) + 0x1300;
}

} /* extern "C" */
