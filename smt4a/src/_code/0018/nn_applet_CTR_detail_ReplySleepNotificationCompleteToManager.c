/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_detail_ReplySleepNotificationCompleteToManager` (_code @ 0x18ba14, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00189a38. */
/* Supplied declaration required: FUN_0018b70c. */
/* Supplied declaration required: FUN_0018b868. */
/* Supplied declaration required: FUN_0018b964. */
extern int FUN_001a366c(void);


void nn_applet_CTR_detail_ReplySleepNotificationCompleteToManager(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_0018b868();
  FUN_0018b70c();
  temp_v0 = FUN_001a366c();
  if (temp_v0 < 0) {
    FUN_00189a38(temp_v0,0x18ba2c);
  }
  FUN_0018b964();
  return;
}
