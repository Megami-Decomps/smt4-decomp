#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

extern unsigned int DAT_0043427c; /* 0x43427c */

extern int FUN_00245854(unsigned int, unsigned int);
extern int FUN_0027e928(unsigned int);
/* Supplied declaration required: FUN_0028dcb0. */
extern unsigned int FUN_00296cc8(void);


unsigned int FUN_0030b28c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_0027e928(DAT_0043427c);
  temp_v1 = FUN_00245854(*(unsigned int *)(temp_v1 + 0x20),temp_v0);
  if (temp_v1 != 0) {
    FUN_0028dcb0(1);
    return 1;
  }
  FUN_0028dcb0(0);
  return 1;
}

} /* extern "C" */
