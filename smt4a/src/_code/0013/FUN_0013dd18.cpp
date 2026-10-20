/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013dd18` (_code @ 0x13dd18, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014a960(int);
int FUN_00157558(unsigned int);

extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_0014a960. */
extern int FUN_001546e8(unsigned int);
/* Supplied declaration required: FUN_00157558. */
extern int jobGetWork(void);


unsigned char FUN_0013dd18(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = jobGetWork();
  if (((*(char *)(temp_v0 + 0x144e) != '\0') && (*(char *)(temp_v0 + 0x1450) != '\0')) &&
     (temp_v0 = FUN_001546e8(0), temp_v0 == 0)) {
    FUN_00157558(g_renderCtx);
    FUN_0014a960(0);
    return 0;
  }
  return 0;
}

} /* extern "C" */
