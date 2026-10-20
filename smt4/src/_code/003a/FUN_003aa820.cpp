#include "romwright_types.h"

extern "C" {

int FUN_003a8cc8(void);

extern unsigned char DAT_00422400; /* 0x422400 */

extern unsigned int *FUN_0022cb58(void);
/* Supplied declaration required: FUN_003a8cc8. */


unsigned int * FUN_003aa820(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_0022cb58();
  *puVar1 = (unsigned int)&DAT_00422400;
  FUN_003a8cc8();
  *(unsigned char *)(puVar1 + 0x169) = 0;
  return puVar1;
}

} /* extern "C" */
