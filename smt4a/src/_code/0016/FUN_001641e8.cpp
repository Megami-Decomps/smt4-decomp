#include "romwright_types.h"

extern "C" {

extern unsigned int *DAT_00573920; /* 0x573920 */

extern int FUN_00184e20(unsigned int);


unsigned int FUN_001641e8(void)

{
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_00573920;
  if ((DAT_00573920 != (unsigned int *)0x0) &&
     ((temp_v0 = FUN_00184e20(*DAT_00573920), temp_v0 != 0 || (*(char *)(puVar1 + 0x21) == '\0')))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
