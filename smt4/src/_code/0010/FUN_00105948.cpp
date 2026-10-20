#include "romwright_types.h"

extern "C" {

int FUN_002c4938(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_004d92f0; /* 0x4d92f0 */

/* Supplied declaration required: FUN_002c4938. */


void FUN_00105948(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_002c4938(&DAT_004d92f0,0x200);
  FUN_002c4938(0x4d94f0,0x200);
  return;
}

} /* extern "C" */
