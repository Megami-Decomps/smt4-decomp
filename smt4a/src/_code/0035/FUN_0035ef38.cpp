#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

extern int FUN_0014aa78(void);
extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_0035ef38(void)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = FUN_00236038(0);
  temp_v2 = FUN_0014aa78();
  temp_v0 = *(short *)(temp_v2 + 0x4c70);
  temp_v3 = FUN_0014aa78();
  temp_v2 = (int)temp_v0;
  if ((int)temp_v0 < (int)*(short *)(temp_v3 + 0x4c72)) {
    temp_v2 = (int)*(short *)(temp_v3 + 0x4c72);
  }
  FUN_003283ac(temp_v2 <= temp_v1);
  return 1;
}

} /* extern "C" */
