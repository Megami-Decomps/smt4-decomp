#include "romwright_types.h"

extern "C" {

int rt_malloc(void);

typedef int romwright_code(...);
extern unsigned char g_flagBlock; /* 0x594958 */

/* Supplied declaration required: rt_malloc. */


void FUN_00114a88(int param_1)
{
  if ((*(romwright_code * *)((unsigned char *)&g_flagBlock + 0x68)) != (romwright_code *)0x0) {
    (*(*(romwright_code * *)((unsigned char *)&g_flagBlock + 0x68)))(param_1);
    return;
  }
  rt_malloc();
}
} /* extern "C" */
