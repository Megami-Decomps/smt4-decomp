#include "romwright_types.h"

extern "C" {

unsigned int FUN_002b45e8(unsigned int);

/* Supplied declaration required: FUN_002b45e8. */
extern int FUN_002b63ac(void);


void FUN_00283f30(unsigned int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002b63ac();
  *param_1 = *(unsigned int *)(temp_v0 + 0x34);
  param_1[1] = *(unsigned int *)(temp_v0 + 0x38);
  param_1[2] = *(unsigned int *)(temp_v0 + 0x3c);
  param_1[3] = *(unsigned int *)(temp_v0 + 0x40);
  if (param_2 != 0) {
    temp_v1 = FUN_002b45e8(*(unsigned short *)(temp_v0 + 0xc));
    if (temp_v1 != 0) {
      *(unsigned short *)(param_1 + 4) = *(unsigned short *)(temp_v1 + 0x6a);
    }
  }
  return;
}

} /* extern "C" */
