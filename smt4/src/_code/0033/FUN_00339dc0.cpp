#include "romwright_types.h"

extern "C" {

int FUN_0027dd9c(unsigned int);
int FUN_0027de24(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_00435d18; /* 0x435d18 */

/* Supplied declaration required: FUN_0027dd9c. */
/* Supplied declaration required: FUN_0027de24. */


void FUN_00339dc0(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_0027de24(DAT_00435d18);
  FUN_0027dd9c(DAT_00435d18);
  return;
}

} /* extern "C" */
