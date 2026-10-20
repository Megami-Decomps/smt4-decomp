#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_003bb088(unsigned int);

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(void);
extern unsigned int FUN_00236038(void);
/* Supplied declaration required: FUN_003bb088. */


unsigned int FUN_00261194(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_00163e40();
  if (temp_v1 != 0) {
    FUN_003bb088(temp_v0);
    FUN_001631d0(temp_v0,0);
  }
  return 1;
}

} /* extern "C" */
