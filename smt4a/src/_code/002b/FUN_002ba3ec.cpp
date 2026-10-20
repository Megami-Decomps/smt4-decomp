#include "romwright_types.h"

extern "C" {

extern int DAT_00587f0c; /* 0x587f0c */


unsigned int FUN_002ba3ec(void)

{
  return *(unsigned int *)(DAT_00587f0c + 0x3c);
}

} /* extern "C" */
