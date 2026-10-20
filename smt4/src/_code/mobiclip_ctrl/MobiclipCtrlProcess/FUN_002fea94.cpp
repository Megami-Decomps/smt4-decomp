#include "romwright_types.h"

extern "C" {

int FUN_002a4d14(void);
int FUN_002c415c(int);
int FUN_002c6a10(void);

extern unsigned char DAT_0044d048; /* 0x44d048 */

/* Supplied declaration required: FUN_002a4d14. */
extern int FUN_002c08f0(unsigned int);
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c6a10. */


void FUN_002fea94(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_002a4d14();
  temp_v0 = FUN_002c08f0(param_1);
  if (*(int *)(temp_v0 + 100) != 0) {
    FUN_002c6a10();
    *(unsigned int *)(temp_v0 + 100) = 0;
  }
  FUN_002c415c(temp_v0);
  (*(unsigned int *)((unsigned char *)&DAT_0044d048 + 0x4)) = 0;
  return;
}

} /* extern "C" */
