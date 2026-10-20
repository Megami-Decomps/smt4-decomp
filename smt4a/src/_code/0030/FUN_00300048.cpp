#include "romwright_types.h"

extern "C" {

int FUN_00120f5c(unsigned int, int);
int FUN_002ea704(void);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_00120f5c. */
/* Supplied declaration required: FUN_002ea704. */


void FUN_00300048(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002ea704();
  if (temp_v0 != 0) {
    piVar2 = (int *)FUN_002ea704();
    temp_v1 = (**(romwright_code **)(*piVar2 + 0x2c))(piVar2);
    FUN_00120f5c(temp_v1,0);
  }
  return;
}

} /* extern "C" */
