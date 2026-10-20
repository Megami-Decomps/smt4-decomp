#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

/* Supplied declaration required: scrSetResult. */
extern int scrGetArg(unsigned int);
extern int FUN_002c2950(void);


unsigned int FUN_0031c1c4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002c2950();
  temp_v1 = scrGetArg(0);
  scrSetResult(*(short *)(temp_v0 + temp_v1 * 2 + 0xd5c) == 0);
  return 1;
}

} /* extern "C" */
