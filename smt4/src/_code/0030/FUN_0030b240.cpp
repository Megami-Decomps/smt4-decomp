#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);
int FUN_002939f4(void);

extern int FUN_002499b4(void);
/* Supplied declaration required: FUN_0028dcb0. */
/* Supplied declaration required: FUN_002939f4. */
extern int FUN_00296cc8(void);


unsigned int FUN_0030b240(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  FUN_002939f4();
  temp_v1 = FUN_002499b4();
  if (temp_v1 != 0) {
    { int lim = *(unsigned short *)(temp_v1 + 0x1cc); FUN_0028dcb0(temp_v0 <= lim); }
  }
  else {
    FUN_0028dcb0(0);
  }
  return 1;
}

} /* extern "C" */
