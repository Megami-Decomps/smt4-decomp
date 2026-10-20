#include "romwright_types.h"

extern "C" {

int asdMdlManagerDestroy(void);

extern int asdMdlManagerClone(unsigned int, unsigned int);
/* Supplied declaration required: asdMdlManagerDestroy. */


void FUN_003b2524(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (*(short *)(param_2 + 0xc) == 3) {
    if (*(int *)(param_1 + 0x54) != 0) {
      asdMdlManagerDestroy();
    }
    temp_v0 = asdMdlManagerClone(*(unsigned int *)(param_2 + 0x54),0);
    *(int *)(param_1 + 0x54) = temp_v0;
    *(unsigned int *)(*(int *)(*(int *)(*(int *)(*(int *)(temp_v0 + 8) + 0x2c) + 0x220) + 8) + 0x28) = 1
    ;
  }
  *(unsigned short *)(param_1 + 0xc) = *(unsigned short *)(param_2 + 0xc);
  return;
}

} /* extern "C" */
