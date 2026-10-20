#include "romwright_types.h"

extern "C" {

int FUN_002c415c(int);

typedef int romwright_code(...);
extern int DAT_0043de68; /* 0x43de68 */

/* Supplied declaration required: FUN_002c415c. */


void FUN_001aa030(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043de68;
  if (*(int **)(DAT_0043de68 + 4) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(DAT_0043de68 + 4) + 4))(*(int **)(DAT_0043de68 + 4));
  }
  *(unsigned int *)(temp_v0 + 4) = 0;
  FUN_002c415c(temp_v0);
  DAT_0043de68 = 0;
  return;
}

} /* extern "C" */
