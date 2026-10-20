#include "romwright_types.h"

extern "C" {

int FUN_002e9598(unsigned int *, unsigned int);

extern unsigned char DAT_00559504; /* 0x559504 */

/* Supplied declaration required: FUN_002e9598. */
extern unsigned int *FUN_002fd284(void);


unsigned int * FUN_002f7b34(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002fd284();
  *puVar1 = (unsigned int)&DAT_00559504;
  FUN_002e9598(puVar1 + 2,param_2);
  FUN_002e9598(puVar1 + 4,param_3);
  return puVar1;
}

} /* extern "C" */
