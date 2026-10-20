#include "romwright_types.h"

extern "C" {

int FUN_00223b0c(void);
int scrSetResult(unsigned int);

/* Supplied declaration required: FUN_00223b0c. */
/* Supplied declaration required: scrSetResult. */
extern unsigned int FUN_003bf44c(void);


unsigned int FUN_003188c8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_003bf44c();
  FUN_00223b0c();
  scrSetResult(temp_v0);
  return 1;
}

} /* extern "C" */
