#include "romwright_types.h"

extern "C" {

int FUN_002e3328(void);
int FUN_004162a4(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_004162a4. */


void FUN_00416294(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_004162a4();
  FUN_002e3328();
  return;
}

} /* extern "C" */
