#include "romwright_types.h"

extern "C" {

int FUN_0015a244(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_00640550; /* 0x640550 */

/* Supplied declaration required: FUN_0015a244. */
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_00138d1c(void)

{
/* irregular: 1 native warning(s); review required */
  nn_os_CriticalSection_Leave((unsigned int)&DAT_00640550);
  FUN_0015a244();
  return;
}

} /* extern "C" */
