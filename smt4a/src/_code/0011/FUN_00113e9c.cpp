/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00113e9c` (_code @ 0x113e9c, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00113d9c(unsigned int *);
int FUN_0012cf14(int);

extern unsigned char DAT_00559600; /* 0x559600 */
extern unsigned char g_flagBlock; /* 0x594958 */

/* Supplied declaration required: FUN_00113d9c. */
/* Supplied declaration required: FUN_0012cf14. */
extern int FUN_002f5966(unsigned int *);


int FUN_00113e9c(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00559600;
  FUN_00113d9c(param_1);
  (*(unsigned char *)((unsigned char *)&g_flagBlock + 0x5)) = 0;
  temp_v0 = FUN_002f5966(param_1 + 6);
  temp_v0 = temp_v0 - 0x14;
  FUN_0012cf14(temp_v0);
  return temp_v0 - 4;
}

} /* extern "C" */
