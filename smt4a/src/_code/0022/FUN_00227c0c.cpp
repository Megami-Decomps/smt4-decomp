#include "romwright_types.h"

extern "C" {

int FUN_00333784(unsigned int, unsigned int);
int FUN_00371b74(void);

extern unsigned int FUN_00236038(unsigned int);
extern int FUN_00268690(void);
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_00333784. */
/* Supplied declaration required: FUN_00371b74. */


unsigned char FUN_00227c0c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 != 0) {
    temp_v0 = FUN_00268690();
    if (temp_v0 != 0) {
      FUN_00371b74();
    }
    return temp_v0 != 0;
  }
  temp_v1 = FUN_00236038(0);
  temp_v2 = FUN_00236038(1);
  FUN_00333784(temp_v1,temp_v2);
  return 0;
}

} /* extern "C" */
