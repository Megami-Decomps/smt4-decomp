#include "romwright_types.h"

extern "C" {

int FUN_00287728(int);
int FUN_0029c3b0(int);
int FUN_002ae7e8(int);
int FUN_002ae898(int, int);
int FUN_002c415c(unsigned int *);
int FUN_002c43b4(unsigned int, int);

extern unsigned int *DAT_00432cc8; /* 0x432cc8 */

/* Supplied declaration required: FUN_00287728. */
/* Supplied declaration required: FUN_0029c3b0. */
/* Supplied declaration required: FUN_002ae7e8. */
/* Supplied declaration required: FUN_002ae898. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_002f4b38(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_00432cc8;
  *(unsigned char *)((int)DAT_00432cc8 + 5) = 1;
  if (*(char *)(puVar1 + 1) != '\0') {
    FUN_00287728(0);
    FUN_00287728(1);
  }
  temp_v0 = 0;
  do {
    FUN_002ae898(0x34,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0xc);
  FUN_002ae7e8(0x34);
  FUN_0029c3b0(0xf);
  FUN_002c43b4(*puVar1,0);
  FUN_002c415c(puVar1);
  DAT_00432cc8 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
