#include "romwright_types.h"

extern "C" {

int FUN_003f86f8(int);
int FUN_004715a8(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_00570280; /* 0x570280 */

/* Supplied declaration required: FUN_003f86f8. */
/* Supplied declaration required: FUN_004715a8. */


void FUN_003a7040(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_003f86f8(0x45);
  FUN_004715a8(DAT_00570280);
  return;
}

} /* extern "C" */
