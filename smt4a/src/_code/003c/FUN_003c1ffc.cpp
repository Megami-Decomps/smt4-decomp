#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int scrSetResult(unsigned int);

extern int DAT_00573c50; /* 0x573c50 */

/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: scrSetResult. */
extern int FUN_003eb1cc(void);


unsigned int FUN_003c1ffc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  btlGetMainState();
  temp_v0 = FUN_003eb1cc();
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned int *)(DAT_00573c50 + 0x18);
  }
  else {
    temp_v1 = 2;
  }
  scrSetResult(temp_v1);
  return 1;
}

} /* extern "C" */
