#include "romwright_types.h"

extern "C" {

int FUN_003f2230(unsigned int, int, unsigned int);

extern unsigned int btlGetMainState(void);
extern unsigned int scrGetArg(unsigned int);
extern int FUN_003e7b2c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003f2230. */
extern int FUN_003f25b4(unsigned int, unsigned int);


unsigned char FUN_003a90f0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = btlGetMainState();
  temp_v2 = FUN_003f25b4(temp_v1,0);
  if (temp_v2 != 0) {
    temp_v2 = FUN_003e7b2c(temp_v1,0);
    return temp_v2 != 0;
  }
  FUN_003f2230(temp_v1,0,temp_v0);
  return 0;
}

} /* extern "C" */
