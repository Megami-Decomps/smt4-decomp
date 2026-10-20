#include "romwright_types.h"

extern "C" {

int FUN_002bef70(unsigned int);
int FUN_002c2428(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_00465058; /* 0x465058 */
extern unsigned int DAT_00465064; /* 0x465064 */

/* Supplied declaration required: FUN_002bef70. */
/* Supplied declaration required: FUN_002c2428. */


void FUN_0010af10(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002bef70((&DAT_00465064)[DAT_00465058 ^ 1]);
  FUN_002c2428();
  return;
}

} /* extern "C" */
