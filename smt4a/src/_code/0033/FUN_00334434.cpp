#include "romwright_types.h"

extern "C" {

int FUN_0026fd50(int, unsigned int, int, unsigned int);

extern unsigned char DAT_00588fd0; /* 0x588fd0 */

/* Supplied declaration required: FUN_0026fd50. */


void FUN_00334434(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)((unsigned char *)&DAT_00588fd0 + 0x4);
  FUN_0026fd50(temp_v0 + 0x19d0,param_1,0,param_3);
  if (param_2 != 0) {
    *(unsigned int *)(temp_v0 + 0x19d8) = *(unsigned int *)(temp_v0 + 0x19e0);
    *(unsigned int *)(temp_v0 + 0x19dc) = *(unsigned int *)(temp_v0 + 0x19e4);
  }
  return;
}

} /* extern "C" */
