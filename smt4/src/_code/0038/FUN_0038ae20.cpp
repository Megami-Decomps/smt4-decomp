#include "romwright_types.h"

extern "C" {

int FUN_00234660(void);
int FUN_002b2368(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00234660. */
/* Supplied declaration required: FUN_002b2368. */


void FUN_0038ae20(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_00234660();
  FUN_002b2368();
  return;
}

} /* extern "C" */
