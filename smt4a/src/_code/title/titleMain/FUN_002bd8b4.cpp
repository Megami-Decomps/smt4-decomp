#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(void);

extern unsigned char DAT_0058916c; /* 0x58916c */

extern int FUN_00184e20(unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */


unsigned int FUN_002bd8b4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (*(unsigned int * *)((unsigned char *)&DAT_0058916c + 0x4));
  if ((*(unsigned int * *)((unsigned char *)&DAT_0058916c + 0x4)) != (unsigned int *)0x0) {
    temp_v0 = FUN_00184e20(*(*(unsigned int * *)((unsigned char *)&DAT_0058916c + 0x4)));
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 1) == '\0')) {
      return 1;
    }
    if ((*(unsigned int * *)((unsigned char *)&DAT_0058916c + 0x4)) != (unsigned int *)0x0) {
      FUN_0019a5a0();
      (*(unsigned int * *)((unsigned char *)&DAT_0058916c + 0x4)) = (unsigned int *)0x0;
    }
  }
  return 0;
}

} /* extern "C" */
