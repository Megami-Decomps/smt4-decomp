#include "romwright_types.h"

extern "C" {

int FUN_00169ddc(int);
int FUN_002852f0(int);
int FUN_002c76c0(...);
int FUN_002e5924(int);
int FUN_0035c6ac(void);

/* Supplied declaration required: FUN_00169ddc. */
/* Supplied declaration required: FUN_002852f0. */
/* Supplied declaration required: FUN_002c76c0. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_002e5924. */
/* Supplied declaration required: FUN_0035c6ac. */


unsigned char FUN_00385b3c(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 == 0) {
    FUN_002c76c0(1);
    FUN_0035c6ac();
    FUN_002e5924(3);
    return 0;
  }
  temp_v0 = FUN_002deb84();
  if (temp_v0 != 1) {
    temp_v0 = FUN_002deb84();
    if (temp_v0 >= 3) {
      FUN_002c76c0(0xffffffff);
      FUN_002852f0(0);
    }
    return temp_v0 >= 3;
  }
  FUN_00169ddc(0x1000222);
  FUN_002e5924(1);
  return 0;
}

} /* extern "C" */
