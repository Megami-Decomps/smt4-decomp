#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00573920; /* 0x573920 */


unsigned int FUN_002919a4(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_00573920 + 0x14));
}

} /* extern "C" */
