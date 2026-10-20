#include "romwright_types.h"

extern "C" {

extern int DAT_0057f290; /* 0x57f290 */

extern int FUN_0026272c(void);


unsigned int FUN_002c90b0(void)

{
  int temp_v0;
  
  if (DAT_0057f290 == 0) {
    return 0;
  }
  if (*(int *)(DAT_0057f290 + 0x925c) != 0 && (*(char *)(DAT_0057f290 + 0x430) == '\0' || FUN_0026272c() == 0)) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
