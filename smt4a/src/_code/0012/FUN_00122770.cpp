#include "romwright_types.h"

extern "C" {

int FUN_00122700(unsigned int *);
int FUN_002e6e14(void);

extern unsigned char DAT_0055b2f0; /* 0x55b2f0 */

/* Supplied declaration required: FUN_00122700. */
/* Supplied declaration required: FUN_002e6e14. */
extern int FUN_002f5966(unsigned int *);


int FUN_00122770(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055b2f0;
  FUN_00122700(param_1);
  if (param_1[1] != 0) {
    FUN_002e6e14();
  }
  temp_v0 = FUN_002f5966(param_1 + 2);
  return temp_v0 - 8;
}

} /* extern "C" */
