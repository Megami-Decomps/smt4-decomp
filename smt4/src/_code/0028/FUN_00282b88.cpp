#include "romwright_types.h"

extern "C" {

int FUN_002c415c(void);

extern unsigned char DAT_0044de28; /* 0x44de28 */

extern int FUN_002b2378(unsigned int);
/* Supplied declaration required: FUN_002c415c. */


unsigned int FUN_00282b88(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (*(unsigned int * *)((unsigned char *)&DAT_0044de28 + 0x4));
  if ((*(unsigned int * *)((unsigned char *)&DAT_0044de28 + 0x4)) != (unsigned int *)0x0) {
    temp_v0 = FUN_002b2378(*(*(unsigned int * *)((unsigned char *)&DAT_0044de28 + 0x4)));
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 1) == '\0')) {
      return 1;
    }
    if ((*(unsigned int * *)((unsigned char *)&DAT_0044de28 + 0x4)) != (unsigned int *)0x0) {
      FUN_002c415c();
      (*(unsigned int * *)((unsigned char *)&DAT_0044de28 + 0x4)) = (unsigned int *)0x0;
    }
  }
  return 0;
}

} /* extern "C" */
