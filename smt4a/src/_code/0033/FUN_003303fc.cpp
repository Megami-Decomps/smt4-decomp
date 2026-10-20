#include "romwright_types.h"

extern "C" {

extern signed char DAT_00580204; /* 0x580204 */


unsigned char FUN_003303fc(void)

{
  return DAT_00580204 != '\0';
}

} /* extern "C" */
