#include "romwright_types.h"

extern "C" {

extern unsigned int *DAT_0057f568; /* 0x57f568 */

extern int FUN_00184e20(unsigned int);


unsigned int FUN_002b4cb0(void)

{
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0057f568;
  if ((DAT_0057f568 != (unsigned int *)0x0) &&
     ((temp_v0 = FUN_00184e20(*DAT_0057f568), temp_v0 != 0 || (*(char *)(puVar1 + 1) == '\0')))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
