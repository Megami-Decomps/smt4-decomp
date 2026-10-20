#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002939f4(void);
extern int FUN_00296cc8(void);


unsigned int FUN_002dbebc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_002939f4();
  FUN_0028dcb0((int)(*(unsigned char *)(temp_v1 + 0x44b4) + 1) <= temp_v0);
  return 1;
}

} /* extern "C" */
