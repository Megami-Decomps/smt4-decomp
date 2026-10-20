#include "romwright_types.h"

extern "C" {

int FUN_00294928(void);
int FUN_00294940(void);
int FUN_00294958(void);
int FUN_003252c4(void);
int FUN_003252dc(void);
int FUN_003252f4(void);

extern int scrGetArg(void);
/* Supplied declaration required: FUN_00294928. */
/* Supplied declaration required: FUN_00294940. */
/* Supplied declaration required: FUN_00294958. */
/* Supplied declaration required: FUN_003252c4. */
/* Supplied declaration required: FUN_003252dc. */
/* Supplied declaration required: FUN_003252f4. */


unsigned int FUN_00330fc4(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = scrGetArg();
  if (temp_v0 == 0) {
    FUN_00294928();
  }
  else if (temp_v0 == 1) {
    FUN_00294940();
  }
  else if (temp_v0 == 2) {
    FUN_00294958();
  }
  else if (temp_v0 == 10) {
    FUN_003252c4();
  }
  else if (temp_v0 == 0xb) {
    FUN_003252dc();
  }
  else if (temp_v0 == 0xc) {
    FUN_003252f4();
  }
  return 1;
}

} /* extern "C" */
