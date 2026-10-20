#include "romwright_types.h"

extern "C" {

int FUN_002c1b64(unsigned int, unsigned int);

extern int DAT_00447a78; /* 0x447a78 */
extern unsigned int DAT_0044ea00; /* 0x44ea00 */
extern int DAT_0049f91c; /* 0x49f91c */

/* Supplied declaration required: FUN_002c1b64. */


void FUN_002c8a7c(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00447a78 == 0) {
    return;
  }
  if (DAT_0049f91c >= 100) {
    FUN_002c1b64(DAT_0044ea00,*(unsigned int *)((*(int *)((unsigned char *)&DAT_00447a78 + 0x4)) + 0x88));
    return;
  }
  FUN_002c1b64(DAT_0044ea00,*(unsigned int *)((*(int *)((unsigned char *)&DAT_00447a78 + 0x4)) + 0x68));
  return;
}

} /* extern "C" */
