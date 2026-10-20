#include "romwright_types.h"

extern "C" {

int FUN_003bcf80(int);

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

/* Supplied declaration required: FUN_003bcf80. */


void FUN_004aaa94(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10));
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 0x74a0) = 5;
  FUN_003bcf80(temp_v0 + 0x24bc);
  return;
}

} /* extern "C" */
