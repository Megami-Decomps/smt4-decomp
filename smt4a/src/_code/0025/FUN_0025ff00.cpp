#include "romwright_types.h"

extern "C" {

int FUN_00208a34(int, unsigned int);
int scrGetArg(int);

/* Supplied declaration required: FUN_00208a34. */
/* Supplied declaration required: scrGetArg. */
extern int FUN_0023a5d8(void);
extern int FUN_002deb84(void);


unsigned char FUN_0025ff00(void)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = FUN_002deb84();
  if (temp_v1 == 0) {
    temp_v0 = scrGetArg(0);
    temp_v2 = scrGetArg(1);
    FUN_00208a34((int)temp_v0,temp_v2);
  }
  temp_v1 = FUN_0023a5d8();
  return temp_v1 != 0;
}

} /* extern "C" */
