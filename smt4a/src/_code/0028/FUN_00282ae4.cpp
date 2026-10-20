#include "romwright_types.h"

extern "C" {

int FUN_00236038(int);
int FUN_00285020(int);
int FUN_003d2588(int, unsigned int);

/* Supplied declaration required: FUN_00236038. */
extern int FUN_0023a5d8(void);
/* Supplied declaration required: FUN_00285020. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_003d2588. */


unsigned char FUN_00282ae4(void)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = FUN_002deb84();
  if (temp_v1 == 0) {
    temp_v0 = FUN_00236038(0);
    temp_v2 = FUN_00236038(1);
    temp_v1 = FUN_00236038(2);
    FUN_00285020(temp_v1 != 0);
    FUN_003d2588((int)temp_v0,temp_v2);
  }
  temp_v1 = FUN_0023a5d8();
  return temp_v1 != 0;
}

} /* extern "C" */
