#include "romwright_types.h"

extern "C" {

extern int DAT_0043dd68; /* 0x43dd68 */

extern int FUN_002a0ce8(void);


unsigned int FUN_00269d4c(void)

{
  int temp_v0;
  int base = DAT_0043dd68;
  
  if (base == 0) {
    return base;
  }
  if (*(int *)(base + 0x95d8) != 0) {
    if (*(char *)(base + 0x430) == '\0' || (temp_v0 = FUN_002a0ce8(), temp_v0 == 0)) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
