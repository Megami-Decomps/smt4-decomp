#include "romwright_types.h"

extern "C" {

int FUN_002c4938(unsigned int, int);

extern int DAT_004652a0; /* 0x4652a0 */
extern int DAT_004652a4; /* 0x4652a4 */
extern unsigned char DAT_004c6290; /* 0x4c6290 */

/* Supplied declaration required: FUN_002c4938. */


void FUN_002c2428(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_004c6290 + 0x9c));
  if (temp_v0 == 0) {
    return;
  }
  if (*(int *)(temp_v0 + 4) == 0 && *(int *)(temp_v0 + 0x18) == 0) {
    return;
  }
  FUN_002c4938(*(unsigned int *)(temp_v0 + 0x18),*(int *)(temp_v0 + 0x20) * 0x1c);
  *(unsigned int *)(temp_v0 + 0xc) = 0;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0x20) = 0;
  *(unsigned int *)(temp_v0 + 0x28) = 0;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  *(unsigned int *)(temp_v0 + 0x24) = 0;
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  *(unsigned int *)(temp_v0 + 0x30) = 0;
  DAT_004652a0 = *(int *)(temp_v0 + 4);
  DAT_004652a4 = DAT_004652a0 + *(int *)(temp_v0 + 8);
  return;
}

} /* extern "C" */
