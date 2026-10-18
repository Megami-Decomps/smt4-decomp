/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013d030` (_code @ 0x13d030, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

extern int FUN_001546e8(void);
/* Supplied declaration required: FUN_00154edc. */
/* Supplied declaration required: FUN_00157558. */
extern int FUN_00164a9c(void);


unsigned int FUN_0013d030(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = FUN_00164a9c();
  *(unsigned char *)(temp_v1 + 0xffe) = 0;
  temp_v2 = FUN_001546e8();
  if ((((temp_v2 == 0) && (*(char *)(temp_v1 + 0xff4) != '\0')) && (*(char *)(temp_v1 + 0xff5) != '\0'))
     && (((*(int *)(temp_v1 + 0x1490) != 0 && (*(char *)(temp_v1 + 0x148c) == '\0')) &&
         (*(char *)(temp_v1 + 0x1040) == '\0')))) {
    FUN_00157558(DAT_0059dbb4);
    *(unsigned int *)(*(int *)(temp_v1 + 0x103c) + 0x14) = 0x200;
    *(unsigned int *)(*(int *)(temp_v1 + 0x103c) + 0x18) = 0x200;
    temp_v0 = 0;
    FUN_00154edc(0,*(unsigned int *)(temp_v1 + 0x103c));
    *(unsigned char *)(temp_v1 + 0xffc) = temp_v0;
    *(unsigned char *)(temp_v1 + 0xffe) = 1;
    return 0;
  }
  return 0;
}
