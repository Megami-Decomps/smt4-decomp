#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);
int FUN_003ef960(unsigned int, int);

extern unsigned int FUN_0014aa78(void);
extern int FUN_00192798(void);
extern int FUN_00236038(void);
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003ef960. */


unsigned int FUN_003c691c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_0014aa78();
  FUN_003ef960(temp_v1,4);
  temp_v2 = FUN_00192798();
  FUN_003283ac(*(unsigned short *)(temp_v2 + temp_v0 * 4));
  return 1;
}

} /* extern "C" */
