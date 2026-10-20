#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int FUN_002e3328(void);

typedef int romwright_code(...);
extern unsigned int *DAT_00588e2c; /* 0x588e2c */

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: FUN_002e3328. */


void FUN_0020e6a0(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_00588e2c;
  if (DAT_00588e2c != (unsigned int *)0x0) {
    if ((int *)DAT_00588e2c[2] != (int *)0x0) {
      (**(romwright_code **)(*(int *)DAT_00588e2c[2] + 0x10))(DAT_00588e2c[2]);
      if ((int *)puVar1[2] != (int *)0x0) {
        (**(romwright_code **)(*(int *)puVar1[2] + 4))(puVar1[2]);
      }
      puVar1[2] = 0;
    }
    *(unsigned char *)(puVar1 + 1) = 1;
    jobStop(*puVar1,0);
    if (DAT_00588e2c != (unsigned int *)0x0) {
      FUN_002e3328();
      DAT_00588e2c = (unsigned int *)0x0;
    }
  }
  return;
}

} /* extern "C" */
