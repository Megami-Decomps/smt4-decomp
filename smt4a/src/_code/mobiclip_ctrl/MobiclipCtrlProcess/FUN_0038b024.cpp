#include "romwright_types.h"

extern "C" {

int FUN_0013a618(int);
int FUN_0019a5a0(int);
int FUN_001ad6d8(void);
int FUN_002e3494(void);

extern unsigned char DAT_00588038; /* 0x588038 */

/* Supplied declaration required: FUN_0013a618. */
extern int FUN_00164a9c(unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_001ad6d8. */
/* Supplied declaration required: FUN_002e3494. */


void FUN_0038b024(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_001ad6d8();
  temp_v0 = FUN_00164a9c(param_1);
  if (*(char *)(temp_v0 + 0x79) != '\0') {
    *(unsigned char *)(temp_v0 + 0x79) = 0;
    FUN_0013a618(1);
  }
  if (*(int *)(temp_v0 + 100) != 0) {
    FUN_002e3494();
    *(unsigned int *)(temp_v0 + 100) = 0;
  }
  FUN_0019a5a0(temp_v0);
  (*(unsigned int *)((unsigned char *)&DAT_00588038 + 0x4)) = 0;
  return;
}

} /* extern "C" */
