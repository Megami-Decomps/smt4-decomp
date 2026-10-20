#include "romwright_types.h"

extern "C" {

int FUN_002b89e4(int, int);

extern unsigned char DAT_0043e188; /* 0x43e188 */

/* Supplied declaration required: FUN_002b89e4. */


void FUN_00296e90(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0043e188 + 0x4));
  puVar2 = &DAT_0043e188;
  if ((*(int *)((unsigned char *)&DAT_0043e188 + 0x4)) != 0) {
    puVar2 = (unsigned char *)(unsigned int)*(unsigned char *)((*(int *)((unsigned char *)&DAT_0043e188 + 0x4)) + 8);
  }
  if ((*(int *)((unsigned char *)&DAT_0043e188 + 0x4)) != 0 && puVar2 != (unsigned char *)0x0) {
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043e188 + 0x4)) + 0x35) = 1;
    *(unsigned char *)(temp_v0 + 0xa10) = 1;
    FUN_002b89e4(temp_v0,*(unsigned char *)(temp_v0 + 9));
    *(unsigned char *)(temp_v0 + 8) = 3;
    *(unsigned char *)(temp_v0 + 0x34) = 0;
    *(unsigned char *)(temp_v0 + 0x35) = 0;
  }
  return;
}

} /* extern "C" */
