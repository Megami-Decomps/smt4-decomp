/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013c7dc` (_code @ 0x13c7dc, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00150d38(int);
int FUN_00157558(unsigned int);

extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00150d38. */
extern int FUN_001546e8(unsigned int);
/* Supplied declaration required: FUN_00157558. */
extern int FUN_00164a9c(void);


unsigned int FUN_0013c7dc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00164a9c();
  temp_v1 = FUN_001546e8(0);
  if ((((temp_v1 == 0) && (*(char *)(temp_v0 + 0xff4) != '\0')) && (*(char *)(temp_v0 + 0xff5) != '\0'))
     && (((*(char *)(temp_v0 + 0xffe) != '\0' && (*(int *)(temp_v0 + 0x1490) != 0)) &&
         (*(char *)(temp_v0 + 0x148c) == '\0')))) {
    FUN_00157558(DAT_0059dbb4);
    FUN_00150d38(0);
    return 0;
  }
  return 0;
}

} /* extern "C" */
