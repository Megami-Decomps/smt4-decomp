#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e140; /* 0x44e140 */


unsigned char FUN_0022e520(void)

{
  return (*(int *)((unsigned char *)&DAT_0044e140 + 0x4)) != 0;
}

} /* extern "C" */
