#include "romwright_types.h"

extern "C" {

int FUN_002e6354(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_00635370; /* 0x635370 */

/* Supplied declaration required: FUN_002e6354. */


void FUN_0013a11c(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e6354(&DAT_00635370,0x200);
  FUN_002e6354(0x635570,0x200);
  return;
}

} /* extern "C" */
