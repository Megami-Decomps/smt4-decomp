/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013dbb4` (_code @ 0x13dbb4, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00154edc(int, unsigned int);
int FUN_00155024(unsigned int, unsigned int);
int FUN_00157558(unsigned int);

extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

extern int FUN_001546e8(unsigned int);
/* Supplied declaration required: FUN_00154edc. */
/* Supplied declaration required: FUN_00155024. */
/* Supplied declaration required: FUN_00157558. */
extern int FUN_00164a9c(void);


unsigned char FUN_0013dbb4(void)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v2 = FUN_00164a9c();
  temp_v3 = FUN_001546e8(0);
  if (temp_v3 != 0) {
    *(unsigned char *)(temp_v2 + 0x1045) = 1;
  }
  else if (*(char *)(temp_v2 + 0x1040) != '\0') {
    temp_v0 = *(char *)(temp_v2 + 0x1044);
    temp_v4 = temp_v0 == '\0';
    if (temp_v4) {
      temp_v0 = *(char *)(temp_v2 + 0x1045);
    }
    if (temp_v4 && temp_v0 == '\0') {
      FUN_00157558(DAT_0059dbb4);
      *(unsigned int *)(*(int *)(temp_v2 + 8) + 0x14) = 0x200;
      *(unsigned int *)(*(int *)(temp_v2 + 8) + 0x18) = 0x200;
      temp_v1 = 0;
      FUN_00154edc(0,*(unsigned int *)(temp_v2 + 8));
      *(unsigned char *)(temp_v2 + 0x1042) = temp_v1;
      FUN_00155024(*(unsigned int *)(temp_v2 + 8),*(unsigned int *)(temp_v2 + 8));
      *(int *)(*(int *)(temp_v2 + 8) + 0x14) = *(int *)(*(int *)(temp_v2 + 8) + 0x14) >> 1;
      *(int *)(*(int *)(temp_v2 + 8) + 0x18) = *(int *)(*(int *)(temp_v2 + 8) + 0x18) >> 1;
      *(unsigned char *)(temp_v2 + 0x1044) = 1;
    }
  }
  return 0;
}

} /* extern "C" */
