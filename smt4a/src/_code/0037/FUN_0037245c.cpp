#include "romwright_types.h"

extern "C" {

extern unsigned short *gameGetPlayerData(void);


void FUN_0037245c(unsigned int param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned short *puVar1;
  
  puVar1 = (unsigned short *)gameGetPlayerData();
  if (puVar1 != (unsigned short *)0x0) {
    switch(param_1) {
    case 0:
      *param_2 = (unsigned int)*puVar1;
      *param_3 = 0x3d;
      return;
    case 1:
      *param_2 = (unsigned int)puVar1[1];
      *param_3 = 0xb5;
      return;
    case 2:
      *param_2 = (unsigned int)puVar1[2];
      *param_3 = 0x30d;
      return;
    case 3:
      *param_2 = (unsigned int)puVar1[3];
      *param_3 = 0x12d;
      return;
    case 4:
      *param_2 = (unsigned int)puVar1[4];
      *param_3 = 0x1a5;
      return;
    case 5:
      *param_2 = (unsigned int)puVar1[5];
      *param_3 = 0x21d;
      return;
    case 6:
      *param_2 = (unsigned int)puVar1[6];
      *param_3 = 0x295;
      return;
    }
  }
  return;
}

} /* extern "C" */
