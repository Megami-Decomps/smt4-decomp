#include "romwright_types.h"

extern "C" {

int FUN_001800b8(unsigned int);
int FUN_0019a5a0(int);

extern unsigned int DAT_0057f65c; /* 0x57f65c */

extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_001800b8. */
/* Supplied declaration required: FUN_0019a5a0. */


void FUN_0013c1a0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  FUN_001800b8(*(unsigned int *)(temp_v0 + 4));
  FUN_001800b8(*(unsigned int *)(temp_v0 + 8));
  FUN_001800b8(*(unsigned int *)(temp_v0 + 0x1038));
  FUN_001800b8(*(unsigned int *)(temp_v0 + 0x103c));
  FUN_0019a5a0(temp_v0);
  DAT_0057f65c = 0;
  return;
}

} /* extern "C" */
