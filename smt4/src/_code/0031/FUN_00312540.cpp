#include "romwright_types.h"

extern "C" {

int FUN_00245228(unsigned int, int, unsigned int);

/* Supplied declaration required: FUN_00245228. */
extern int FUN_00245278(unsigned int, unsigned int);
extern unsigned int FUN_002939f4(void);
extern unsigned int FUN_00296cc8(unsigned int);
extern int FUN_0033b35c(unsigned int, unsigned int);


unsigned char FUN_00312540(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_002939f4();
  temp_v2 = FUN_0033b35c(temp_v1,0);
  if (temp_v2 != 0) {
    temp_v2 = FUN_00245278(temp_v1,0);
    return temp_v2 != 0;
  }
  FUN_00245228(temp_v1,0,temp_v0);
  return 0;
}

} /* extern "C" */
