#include "romwright_types.h"

extern "C" {

int FUN_0013a410(void);
int FUN_002bb20c(void);

extern unsigned char DAT_0044e360; /* 0x44e360 */

/* Supplied declaration required: FUN_0013a410. */
/* Supplied declaration required: FUN_002bb20c. */
extern int FUN_002bb274(void);


void FUN_002b5904(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (param_1 != 0) {
    if ((*(signed char *)((unsigned char *)&DAT_0044e360 + 0x4)) != '\0') {
      FUN_0013a410();
      (*(signed char *)((unsigned char *)&DAT_0044e360 + 0x4)) = '\0';
    }
  }
  else {
    temp_v0 = FUN_002bb274();
    if (temp_v0 != 0) {
      FUN_002bb20c();
      (*(signed char *)((unsigned char *)&DAT_0044e360 + 0x4)) = '\x01';
    }
  }
  return;
}

} /* extern "C" */
