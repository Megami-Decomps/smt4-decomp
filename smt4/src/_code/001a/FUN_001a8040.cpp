#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e098; /* 0x44e098 */
extern unsigned int DAT_004c53c4; /* 0x4c53c4 */
extern unsigned int DAT_004c53e4; /* 0x4c53e4 */

extern int FUN_002c564c(unsigned int);


void FUN_001a8040(unsigned int param_1)

{
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_002c564c(1);
  if (temp_v0 == 0) {
    puVar2 = (unsigned int *)0x0;
    if ((*(int *)((unsigned char *)&DAT_0044e098 + 0x4)) == 0) {
      puVar2 = &DAT_004c53c4;
    }
    else if ((*(int *)((unsigned char *)&DAT_0044e098 + 0x4)) == 1) {
      puVar2 = &DAT_004c53e4;
    }
    if ((puVar2[7] & 2) != 0) {
      puVar2[1] = 0;
      puVar2[4] = 0;
      puVar2[2] = param_1;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0x13;
    }
  }
  return;
}

} /* extern "C" */
