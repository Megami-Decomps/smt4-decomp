#include "romwright_types.h"

extern "C" {

int FUN_00184c00(int, int, int);
int FUN_00388758(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0057f108; /* 0x57f108 */

/* Supplied declaration required: FUN_00184c00. */
/* Supplied declaration required: FUN_00388758. */


void FUN_00237650(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_00388758(1);
  FUN_00184c00(DAT_0057f108 + 0x1634,7,0);
  return;
}

} /* extern "C" */
