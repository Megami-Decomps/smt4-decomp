#include "romwright_types.h"

extern "C" {

int FUN_00301830(void);
int FUN_00303a48(void);
int FUN_0031cea0(int);

extern int FUN_00164a34(void);
extern int FUN_00239194(void);
extern int FUN_002b4cb0(void);
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_00301830. */
/* Supplied declaration required: FUN_00303a48. */
/* Supplied declaration required: FUN_0031cea0. */
extern int MapMode_IsBusy(void);


unsigned int FUN_0039b59c(void)
{
  int temp_v0;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 == 0) {
    FUN_0031cea0(3);
  }
  temp_v0 = FUN_00239194();
  if (temp_v0 != 0) {
    temp_v0 = MapMode_IsBusy();
    if ((temp_v0 != 0) || (temp_v0 = FUN_00164a34(), temp_v0 != 0)) {
      FUN_00303a48();
    }
    else {
      temp_v0 = FUN_002b4cb0();
      if (temp_v0 != 0) {
        FUN_00301830();
      }
    }
    return 1;
  }
  return 0;
}
} /* extern "C" */
