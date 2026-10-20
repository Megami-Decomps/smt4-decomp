#include "romwright_types.h"

extern "C" {

extern int DAT_00587f0c; /* 0x587f0c */


unsigned int FUN_00314ba8(void)

{
  return *(unsigned int *)(DAT_00587f0c + 0x38);
}

} /* extern "C" */
