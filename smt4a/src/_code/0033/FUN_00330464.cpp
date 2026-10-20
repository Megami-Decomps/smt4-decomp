#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern int FUN_0019a37c(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_002360dc(void);
/* Supplied declaration required: scrSetResult. */
extern unsigned int FUN_003fd528(void);


unsigned int FUN_00330464(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_002360dc();
  temp_v1 = FUN_003fd528();
  temp_v2 = FUN_0019a37c(temp_v0,temp_v1,0x12);
  scrSetResult(temp_v2 == 0);
  return 1;
}

} /* extern "C" */
