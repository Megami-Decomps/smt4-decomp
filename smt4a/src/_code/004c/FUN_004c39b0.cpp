#include "romwright_types.h"

extern "C" {

int FUN_0035bd94(int, unsigned int, int);
int FUN_003df6a4(unsigned int, int);
int FUN_004bccd0(int, unsigned int);

/* Supplied declaration required: FUN_0035bd94. */
/* Supplied declaration required: FUN_003df6a4. */
/* Supplied declaration required: FUN_004bccd0. */


void FUN_004c39b0(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  
  if (*(int *)(param_1 + 0x3f8) != 0) {
    FUN_003df6a4(param_2,1);
    return;
  }
  temp_v0 = *(int *)(param_1 + 0x3fc);
  temp_v1 = temp_v0 == 0;
  if (temp_v1) {
    temp_v0 = *(int *)(param_1 + 0x400);
  }
  if (temp_v1 && temp_v0 == 0) {
    if (*(int *)(param_1 + 0x404) == 0) {
      return;
    }
    FUN_0035bd94(*(unsigned short *)(param_1 + 0x166),param_2,8);
    return;
  }
  FUN_004bccd0(temp_v0,param_2);
  return;
}

} /* extern "C" */
