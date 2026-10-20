#include "romwright_types.h"

extern "C" {

int scrSetResult(unsigned int);

/* Supplied declaration required: scrSetResult. */
extern int btlGetMainState(void);
extern unsigned int scrGetArg(void);


unsigned int FUN_002f1030(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  if (temp_v0 < 0x10) {
    temp_v1 = btlGetMainState();
    scrSetResult(*(unsigned int *)(temp_v1 + temp_v0 * 4 + 0x497c));
  }
  return 1;
}

} /* extern "C" */
