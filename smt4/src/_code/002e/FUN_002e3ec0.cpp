#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002939f4(void);
extern int FUN_00296cc8(unsigned int);


unsigned int FUN_002e3ec0(void)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = FUN_00296cc8(0);
  temp_v2 = FUN_002939f4();
  temp_v0 = *(short *)(temp_v2 + 0x4968);
  temp_v3 = FUN_002939f4();
  temp_v2 = (int)temp_v0;
  if ((int)temp_v0 < (int)*(short *)(temp_v3 + 0x496a)) {
    temp_v2 = (int)*(short *)(temp_v3 + 0x496a);
  }
  FUN_0028dcb0(temp_v2 <= temp_v1);
  return 1;
}

} /* extern "C" */
