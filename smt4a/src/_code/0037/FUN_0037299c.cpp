#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

extern unsigned int DAT_0057113c; /* 0x57113c */

extern int FUN_00236038(void);
/* Supplied declaration required: FUN_003283ac. */
extern int FUN_004ee568(unsigned int);


unsigned int FUN_0037299c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_004ee568(DAT_0057113c);
  if (*(int *)(*(int *)(temp_v1 + 0x28) + 0x228) + 1 == temp_v0) {
    FUN_003283ac(1);
    return 1;
  }
  FUN_003283ac(0);
  return 1;
}

} /* extern "C" */
