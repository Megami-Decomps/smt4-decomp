#include "romwright_types.h"

extern "C" {

int scrSetResult(unsigned int);

/* Supplied declaration required: scrSetResult. */
extern unsigned int *FUN_002a8764(void);


unsigned int FUN_002e4158(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002a8764();
  scrSetResult(*puVar1);
  return 1;
}

} /* extern "C" */
