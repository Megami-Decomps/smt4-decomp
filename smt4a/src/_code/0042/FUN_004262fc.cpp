#include "romwright_types.h"

extern "C" {

int FUN_004265f8(void);
int FUN_00432084(void);
int FUN_00432104(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern signed char DAT_005891a4; /* 0x5891a4 */

/* Supplied declaration required: FUN_004265f8. */
/* Supplied declaration required: FUN_00432084. */
/* Supplied declaration required: FUN_00432104. */


void FUN_004262fc(void)

{
/* irregular: 3 native warning(s); review required */
  if (DAT_005891a4 != '\0') {
    FUN_00432084();
    DAT_005891a4 = '\0';
    FUN_00432104();
  }
  FUN_004265f8();
  return;
}

} /* extern "C" */
