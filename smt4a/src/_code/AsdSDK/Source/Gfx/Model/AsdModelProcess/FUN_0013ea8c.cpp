#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(unsigned int *);

extern unsigned int DAT_005b3cd4; /* 0x5b3cd4 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);
extern unsigned int *FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019a5a0. */


void FUN_0013ea8c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)FUN_00164a9c();
  temp_v0 = FUN_00163e40(*puVar1);
  if (temp_v0 != 0) {
    FUN_001631d0(*puVar1,0);
  }
  temp_v0 = FUN_00163e40(puVar1[1]);
  if (temp_v0 != 0) {
    FUN_001631d0(puVar1[1],0);
  }
  temp_v0 = FUN_00163e40(puVar1[2]);
  if (temp_v0 != 0) {
    FUN_001631d0(puVar1[2],0);
  }
  FUN_0019a5a0(puVar1);
  DAT_005b3cd4 = 0;
  return;
}

} /* extern "C" */
