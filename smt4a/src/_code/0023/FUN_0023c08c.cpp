#include "romwright_types.h"

extern "C" {

int FUN_001681cc(int);
int FUN_00224880(unsigned int);
int FUN_003343f0(int);

extern int DAT_0057f290; /* 0x57f290 */

/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_00224880. */
extern int FUN_00275f44(unsigned int, int);
/* Supplied declaration required: FUN_003343f0. */


unsigned int FUN_0023c08c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0057f290;
  if (DAT_0057f290 != 0) {
    if (*(char *)(DAT_0057f290 + 0x430) != '\0') {
      *(int *)(DAT_0057f290 + 0x488) = param_1;
    }
    else {
      temp_v1 = FUN_00275f44(*(unsigned int *)(DAT_0057f290 + 0x42c),param_1);
      if (temp_v1 != 0) {
        FUN_00224880(*(unsigned int *)(temp_v0 + 0x42c));
        if (((!(param_1 == 8 || param_1 == 9)) && (!(param_1 == 10 || param_1 == 0xb))) &&
           (!(param_1 == 0xc || param_1 == 0xe))) {
          if (param_1 == 0xd) {
            FUN_003343f0(1);
          }
        }
        else {
          FUN_003343f0(1);
          FUN_001681cc(0xa0);
        }
        *(unsigned int *)(temp_v0 + 0x488) = 0xffffffff;
        *(int *)(temp_v0 + 0x434) = param_1;
        *(unsigned char *)(temp_v0 + 0x430) = 1;
        return 1;
      }
    }
  }
  return 0;
}

} /* extern "C" */
