#include "romwright_types.h"

extern "C" {

int FUN_00169ddc(int);
int FUN_002e5924(int);
int FUN_003bb210(void);

/* Supplied declaration required: FUN_00169ddc. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_002e5924. */
/* Supplied declaration required: FUN_003bb210. */


unsigned char FUN_003ae704(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 == 0) {
    FUN_003bb210();
    FUN_002e5924(3);
    return 0;
  }
  temp_v0 = FUN_002deb84();
  if (temp_v0 == 1) {
    FUN_00169ddc(0x1000222);
    FUN_002e5924(1);
    return 0;
  }
  temp_v0 = FUN_002deb84();
  if (temp_v0 < 3) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
