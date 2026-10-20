#include "romwright_types.h"

extern "C" {

int FUN_0030ea58(int, unsigned int);

extern int DAT_005702f8; /* 0x5702f8 */
extern unsigned char DAT_005c6000;

/* Supplied declaration required: FUN_0030ea58. */


unsigned int FUN_0035bcdc(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if ((int)temp_v1 < DAT_005702f8) {
    do {
      temp_v0 = FUN_0030ea58((int)(&DAT_005c6000 + (temp_v1 & 0xff) * 0x148 + 1),param_1);
      if (temp_v0 == 0) {
        return temp_v1 & 0xff;
      }
      temp_v1 = temp_v1 + 1;
    } while ((int)temp_v1 < DAT_005702f8);
  }
  return 0xff;
}

} /* extern "C" */
