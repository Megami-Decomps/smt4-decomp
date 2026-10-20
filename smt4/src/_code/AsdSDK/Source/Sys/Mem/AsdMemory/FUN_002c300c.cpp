#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00465170; /* 0x465170 */


unsigned int FUN_002c300c(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_00465170 + 0x8));
}

} /* extern "C" */
