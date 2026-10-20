#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int FUN_003eaa14(void);
int FUN_004bcb54(unsigned int);
int FUN_004bd354(unsigned int, int);

/* Supplied declaration required: btlGetMainState. */
extern unsigned int FUN_0015688c(void);
/* Supplied declaration required: FUN_003eaa14. */
/* Supplied declaration required: FUN_004bcb54. */
extern int FUN_004bd340(unsigned int, unsigned int);
/* Supplied declaration required: FUN_004bd354. */


unsigned int FUN_003b1cf4(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0015688c();
  temp_v1 = FUN_004bd340(temp_v0,1);
  if (temp_v1 != 0) {
    FUN_004bcb54(temp_v0);
    FUN_004bd354(temp_v0,1);
    btlGetMainState();
    FUN_003eaa14();
  }
  return 1;
}

} /* extern "C" */
