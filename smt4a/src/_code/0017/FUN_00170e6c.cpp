#include "romwright_types.h"

extern "C" {

int FUN_0016e758(void);
int FUN_00189938(void);

extern unsigned char DAT_005891b0; /* 0x5891b0 */

/* Supplied declaration required: FUN_0016e758. */
/* Supplied declaration required: FUN_00189938. */
extern int FUN_001c6e20(void);


void FUN_00170e6c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (param_1 != 0) {
    if ((*(signed char *)((unsigned char *)&DAT_005891b0 + 0x4)) != '\0') {
      FUN_00189938();
      (*(signed char *)((unsigned char *)&DAT_005891b0 + 0x4)) = '\0';
    }
  }
  else {
    temp_v0 = FUN_001c6e20();
    if (temp_v0 != 0) {
      FUN_0016e758();
      (*(signed char *)((unsigned char *)&DAT_005891b0 + 0x4)) = '\x01';
    }
  }
  return;
}

} /* extern "C" */
