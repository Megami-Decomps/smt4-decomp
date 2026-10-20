#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00465170; /* 0x465170 */


unsigned int FUN_002ebb88(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_00465170 + 0x10));
}

} /* extern "C" */
