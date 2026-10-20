#include "romwright_types.h"

extern "C" {

int sysMemClear(unsigned int, int);

extern int DAT_005b40e0; /* 0x5b40e0 */
extern int DAT_005b40e4; /* 0x5b40e4 */
extern unsigned char DAT_0061a470; /* 0x61a470 */

/* Supplied declaration required: sysMemClear. */


void FUN_0016117c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0061a470 + 0x9c));
  if (temp_v0 == 0) {
    return;
  }
  if (*(int *)(temp_v0 + 4) == 0 && *(int *)(temp_v0 + 0x18) == 0) {
    return;
  }
  sysMemClear(*(unsigned int *)(temp_v0 + 0x18),*(int *)(temp_v0 + 0x20) * 0x1c);
  *(unsigned int *)(temp_v0 + 0xc) = 0;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0x20) = 0;
  *(unsigned int *)(temp_v0 + 0x28) = 0;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  *(unsigned int *)(temp_v0 + 0x24) = 0;
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  *(unsigned int *)(temp_v0 + 0x30) = 0;
  DAT_005b40e0 = *(int *)(temp_v0 + 4);
  DAT_005b40e4 = DAT_005b40e0 + *(int *)(temp_v0 + 8);
  return;
}

} /* extern "C" */
