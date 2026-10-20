#include "romwright_types.h"

extern "C" {

int rt_malloc(int);

typedef int romwright_code(...);
extern unsigned char g_flagBlock; /* 0x594958 */

/* Supplied declaration required: rt_malloc. */


void FUN_001149f0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if ((*(romwright_code * *)((unsigned char *)&g_flagBlock + 0x6c)) != (romwright_code *)0x0) {
    (*(*(romwright_code * *)((unsigned char *)&g_flagBlock + 0x6c)))(param_1);
    return;
  }
  rt_malloc(param_1);
  return;
}

} /* extern "C" */
