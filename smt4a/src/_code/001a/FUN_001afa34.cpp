#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_006443d0; /* 0x6443d0 */


unsigned int FUN_001afa34(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_006443d0 + 0x32c));
}

} /* extern "C" */
