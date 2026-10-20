#include "romwright_types.h"

extern "C" {

int FUN_003e5c00(unsigned int);

typedef int romwright_code(...);
extern int DAT_00581288; /* 0x581288 */

/* Supplied declaration required: FUN_003e5c00. */


void FUN_002b92e0(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_003e5c00(*(unsigned int *)(DAT_00581288 + 0x1a8));
  if (*(int **)(DAT_00581288 + 0x1a8) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(DAT_00581288 + 0x1a8) + 4))(*(int **)(DAT_00581288 + 0x1a8));
  }
  *(unsigned int *)(DAT_00581288 + 0x1a8) = 0;
  return;
}

} /* extern "C" */
