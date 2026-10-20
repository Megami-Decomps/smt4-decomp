#include "romwright_types.h"

extern "C" {

int FUN_002c3424(unsigned int *);
int nn_applet_CTR_ReplySleepQuery(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_0046519c; /* 0x46519c */

/* Supplied declaration required: FUN_002c3424. */
/* Supplied declaration required: nn_applet_CTR_ReplySleepQuery. */


void FUN_00103cd0(void)

{
/* irregular: 2 native warning(s); review required */
  nn_applet_CTR_ReplySleepQuery(1);
  FUN_002c3424(&DAT_0046519c);
  return;
}

} /* extern "C" */
