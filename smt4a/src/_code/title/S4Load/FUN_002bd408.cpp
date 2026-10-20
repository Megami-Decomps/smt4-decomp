#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(void);
int FUN_0019c364(void);
int FUN_00237210(unsigned int);

extern unsigned int *DAT_00589154; /* 0x589154 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_00237210. */


void FUN_002bd408(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_00589154;
  if (DAT_00589154[0xaa] != 0) {
    FUN_0019a5a0();
  }
  if (puVar1[0xab] != 0) {
    FUN_0019a5a0();
  }
  if (puVar1[0xac] != 0) {
    FUN_0019c364();
  }
  if (puVar1[5] != 0) {
    FUN_0019a5a0();
    puVar1[5] = 0;
  }
  FUN_00237210(puVar1[0xae]);
  FUN_001631d0(*puVar1,0);
  *(unsigned char *)(puVar1 + 1) = 1;
  if (DAT_00589154 != (unsigned int *)0x0) {
    FUN_0019a5a0();
    DAT_00589154 = (unsigned int *)0x0;
  }
  return;
}

} /* extern "C" */
