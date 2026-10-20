#include "romwright_types.h"

extern "C" {

int FUN_00169ddc(int);
int scrGetArg(int);
int FUN_002e486c(int);
int FUN_00480e30(unsigned int, int);
int FUN_00480fc0(unsigned int, int);

/* Supplied declaration required: FUN_00169ddc. */
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_002e486c. */
extern int FUN_003311b8(void);
/* Supplied declaration required: FUN_00480e30. */
/* Supplied declaration required: FUN_00480fc0. */


unsigned int FUN_0034dddc(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  if (temp_v1 < 0) {
    FUN_00480fc0(temp_v0,-temp_v1);
  }
  else {
    FUN_00480e30(temp_v0,temp_v1);
  }
  temp_v2 = FUN_003311b8();
  if (temp_v2 != 0) {
    FUN_00169ddc(0x1000215);
    FUN_002e486c(temp_v1);
  }
  return 1;
}

} /* extern "C" */
