#include "romwright_types.h"

extern "C" {

int FUN_00236038(int);
int FUN_0031caec(void);
int FUN_0039b7fc(void);

/* Supplied declaration required: FUN_00236038. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_0031caec. */
extern int FUN_0035c3a8(void);
/* Supplied declaration required: FUN_0039b7fc. */


unsigned char FUN_002c1440(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 != 0) {
    temp_v0 = FUN_0035c3a8();
    if (temp_v0 != 0) {
      FUN_0039b7fc();
    }
    return temp_v0 != 0;
  }
  FUN_00236038(0);
  FUN_0031caec();
  return 0;
}

} /* extern "C" */
