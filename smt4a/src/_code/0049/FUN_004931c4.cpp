#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00587fdc; /* 0x587fdc */


unsigned char FUN_004931c4(void)

{
  return (*(int *)((unsigned char *)&DAT_00587fdc + 0x4)) > 100;
}

} /* extern "C" */
