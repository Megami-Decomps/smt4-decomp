#include "romwright_types.h"

extern "C" {

int FUN_002aa568(int, unsigned int);

extern int DAT_00433278; /* 0x433278 */
extern unsigned char DAT_00478000;

/* Supplied declaration required: FUN_002aa568. */


unsigned int FUN_0024a808(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if ((int)temp_v1 < DAT_00433278) {
    do {
      temp_v0 = FUN_002aa568((int)(&DAT_00478000 + (temp_v1 & 0xff) * 0x148 + 1),param_1);
      if (temp_v0 == 0) {
        return temp_v1 & 0xff;
      }
      temp_v1 = temp_v1 + 1;
    } while ((int)temp_v1 < DAT_00433278);
  }
  return 0xff;
}

} /* extern "C" */
