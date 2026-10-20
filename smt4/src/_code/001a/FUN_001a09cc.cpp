#include "romwright_types.h"

extern "C" {

int FUN_002cf150(unsigned int, unsigned int);
int FUN_002efd64(void);

extern int FUN_001ca720(void);
extern int FUN_002893d8(void);
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_002cf150. */
/* Supplied declaration required: FUN_002efd64. */


unsigned char FUN_001a09cc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002893d8();
  if (temp_v0 != 0) {
    temp_v0 = FUN_001ca720();
    if (temp_v0 != 0) {
      FUN_002efd64();
    }
    return temp_v0 != 0;
  }
  temp_v1 = scrGetArg(0);
  temp_v2 = scrGetArg(1);
  FUN_002cf150(temp_v1,temp_v2);
  return 0;
}

} /* extern "C" */
