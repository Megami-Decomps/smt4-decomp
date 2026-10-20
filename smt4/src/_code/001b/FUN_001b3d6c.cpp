#include "romwright_types.h"

extern "C" {

int FUN_00152bec(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_004474d8; /* 0x4474d8 */

/* Supplied declaration required: FUN_00152bec. */


void FUN_001b3d6c(void)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(DAT_004474d8 + 0xc) != 0) {
    FUN_00152bec();
  }
  if (*(int *)(DAT_004474d8 + 0x10) != 0) {
    FUN_00152bec();
    return;
  }
  return;
}

} /* extern "C" */
