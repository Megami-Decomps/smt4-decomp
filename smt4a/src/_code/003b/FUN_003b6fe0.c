/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b6fe0` (_code @ 0x3b6fe0, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_005f19f1; /* 0x5f19f1 */
extern unsigned int DAT_005f19f4; /* 0x5f19f4 */
extern unsigned int DAT_005f19f8; /* 0x5f19f8 */
extern unsigned int DAT_005f19fc; /* 0x5f19fc */

/* Supplied declaration required: FUN_00180008. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_0046a33c. */
extern int QuestCenterMode_IsBusy(void);
/* Supplied declaration required: QuestCenter_GetActiveEntry. */


unsigned char FUN_003b6fe0(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 == 0) {
    FUN_00180008(0);
    QuestCenter_GetActiveEntry();
    FUN_0046a33c();
    if (DAT_005f19f1 != '\0') {
      DAT_005f19f1 = '\0';
      DAT_005f19f4 = 0;
      DAT_005f19f8 = 0;
      DAT_005f19fc = 0;
    }
  }
  temp_v0 = QuestCenterMode_IsBusy();
  return temp_v0 == 0;
}
