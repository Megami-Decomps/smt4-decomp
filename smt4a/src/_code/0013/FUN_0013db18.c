/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013db18` (_code @ 0x13db18, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00154edc. */
/* Supplied declaration required: FUN_00155024. */
/* Supplied declaration required: FUN_00157558. */
extern int FUN_00164a9c(void);


unsigned char FUN_0013db18(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_00164a9c();
  if ((*(char *)(temp_v1 + 0x1040) != '\0') && (*(char *)(temp_v1 + 0x1043) == '\0')) {
    FUN_00157558(DAT_0059dbb4);
    *(unsigned int *)(*(int *)(temp_v1 + 4) + 0x14) = 0x200;
    *(unsigned int *)(*(int *)(temp_v1 + 4) + 0x18) = 0x200;
    temp_v0 = 0;
    FUN_00154edc(0,*(unsigned int *)(temp_v1 + 4));
    *(unsigned char *)(temp_v1 + 0x1042) = temp_v0;
    FUN_00155024(*(unsigned int *)(temp_v1 + 4),*(unsigned int *)(temp_v1 + 4));
    *(int *)(*(int *)(temp_v1 + 4) + 0x14) = *(int *)(*(int *)(temp_v1 + 4) + 0x14) >> 1;
    *(int *)(*(int *)(temp_v1 + 4) + 0x18) = *(int *)(*(int *)(temp_v1 + 4) + 0x18) >> 1;
    *(unsigned char *)(temp_v1 + 0x1043) = 1;
  }
  return 0;
}
