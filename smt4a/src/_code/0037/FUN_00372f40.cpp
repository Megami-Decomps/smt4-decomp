#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

extern unsigned int DAT_0057113c; /* 0x57113c */

extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */
extern int FUN_004ee568(unsigned int);


unsigned int FUN_00372f40(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v2 = 0;
  if (temp_v0 == 0) {
    temp_v2 = 7;
  }
  else if (temp_v0 == 1) {
    temp_v2 = 8;
  }
  else if (temp_v0 == 2) {
    temp_v2 = 10;
  }
  else if (temp_v0 == 3) {
    temp_v2 = 0xb;
  }
  temp_v0 = FUN_00236038(1);
  temp_v1 = FUN_004ee568(DAT_0057113c);
  int *pb = (int *)*(int *)(temp_v1 + 0x20);
  int *pe = pb + temp_v2;
  FUN_003283ac(pe[0x1d] == temp_v0);
  return 1;
}

} /* extern "C" */
