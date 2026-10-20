#include "romwright_types.h"

extern "C" {

int FUN_0031cfb4(void);
int scrSetResult(void);

/* Supplied declaration required: FUN_0031cfb4. */
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_0031a0d8(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_0031cfb4();
  scrSetResult();
  return 1;
}

} /* extern "C" */
