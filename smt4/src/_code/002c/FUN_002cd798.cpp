#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern unsigned int FUN_0024bb38(void);
extern unsigned int FUN_002592d8(void);
/* Supplied declaration required: scrSetResult. */
extern int FUN_002b4414(unsigned int, unsigned int, unsigned int);


unsigned int FUN_002cd798(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_002592d8();
  temp_v1 = FUN_0024bb38();
  temp_v2 = FUN_002b4414(temp_v0,temp_v1,0x12);
  scrSetResult(temp_v2 == 0);
  return 1;
}

} /* extern "C" */
