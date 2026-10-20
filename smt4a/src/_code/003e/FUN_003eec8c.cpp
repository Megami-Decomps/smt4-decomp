#include "romwright_types.h"

extern "C" {

int aocHandleButtons(int, int);
int FUN_003fce8c(int, int);

/* Supplied declaration required: aocHandleButtons. */
extern int FUN_003fce08(int, unsigned int);
/* Supplied declaration required: FUN_003fce8c. */
extern int FUN_003fcf5c(int);


unsigned int FUN_003eec8c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v4 = 1;
  temp_v2 = 0;
  do {
    temp_v3 = *(int *)(param_1 + temp_v2 * 0x10 + 0x4d78);
    if (temp_v3 != 0) {
      temp_v0 = param_1 + temp_v2 * 8;
      if ((*(unsigned int *)(temp_v0 + 0x201c) & 1) == 0) {
        temp_v1 = FUN_003fcf5c(temp_v3);
        if (temp_v1 == 0) {
          temp_v4 = 0;
        }
        else {
          *(unsigned int *)(temp_v0 + 0x201c) = *(unsigned int *)(temp_v0 + 0x201c) | 1;
          aocHandleButtons(temp_v3,7);
        }
      }
      if ((*(unsigned int *)(temp_v0 + 0x201c) & 2) == 0) {
        temp_v1 = FUN_003fce08(temp_v3,0);
        if (temp_v1 == 0) {
          temp_v4 = 0;
        }
        else {
          FUN_003fce8c(temp_v3,0);
          *(unsigned int *)(temp_v0 + 0x201c) = *(unsigned int *)(temp_v0 + 0x201c) | 2;
        }
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0xc);
  return temp_v4;
}

} /* extern "C" */
