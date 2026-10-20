/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013e7c4` (_code @ 0x13e7c4, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00154edc(int, unsigned int);
int FUN_00157558(unsigned int);

extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00154edc. */
/* Supplied declaration required: FUN_00157558. */
extern int jobGetWork(void);


unsigned int FUN_0013e7c4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  
  temp_v1 = jobGetWork();
  if ((*(char *)(temp_v1 + 0x144e) != '\0') && (*(char *)(temp_v1 + 0x1450) == '\0')) {
    FUN_00157558(g_renderCtx);
    *(unsigned int *)(*(int *)(temp_v1 + 4) + 0x14) = 0x200;
    *(unsigned int *)(*(int *)(temp_v1 + 4) + 0x18) = 0x200;
    temp_v0 = 0;
    FUN_00154edc(0,*(unsigned int *)(temp_v1 + 4));
    *(unsigned char *)(temp_v1 + 0x144f) = temp_v0;
    *(unsigned char *)(temp_v1 + 0x1450) = 1;
    return 0;
  }
  return 0;
}

} /* extern "C" */
