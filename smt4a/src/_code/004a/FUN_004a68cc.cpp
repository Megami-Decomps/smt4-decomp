#include "romwright_types.h"

extern "C" {

int FUN_004a4bc8(void);

extern unsigned char DAT_0055c8d8; /* 0x55c8d8 */

/* Supplied declaration required: FUN_004a4bc8. */
extern unsigned int *FUN_004a82cc(void);


unsigned int * FUN_004a68cc(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_004a82cc();
  *puVar1 = (unsigned int)&DAT_0055c8d8;
  FUN_004a4bc8();
  *(unsigned char *)(puVar1 + 0x218) = 0;
  return puVar1;
}

} /* extern "C" */
