#include "romwright_types.h"

extern "C" {

int FUN_0016c4b8(unsigned int, unsigned int);

extern unsigned char DAT_0058103c;
extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */
extern int DAT_005f15fc; /* 0x5f15fc */

/* Supplied declaration required: FUN_0016c4b8. */


void FUN_00325a24(void)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)&DAT_0058103c == 0) {
    return;
  }
  if (DAT_005f15fc >= 100) {
    FUN_0016c4b8(DAT_0059dbb4,*(unsigned int *)(*(int *)((unsigned char *)&DAT_0058103c + 0x4) + 0xa4));
    return;
  }
  FUN_0016c4b8(DAT_0059dbb4,*(unsigned int *)(*(int *)((unsigned char *)&DAT_0058103c + 0x4) + 0x80));
  return;
}

} /* extern "C" */
