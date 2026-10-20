/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00108754` (_code @ 0x108754, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bfadc(int, unsigned int);
int FUN_002c39a4(unsigned int);

extern unsigned int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_002bfadc. */
extern int jobGetWork(void);
/* Supplied declaration required: FUN_002c39a4. */


char FUN_00108754(void)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v2 = jobGetWork();
  *(unsigned char *)(temp_v2 + 0xee5) = 0;
  temp_v3 = *(char *)(temp_v2 + 0xedc) != '\0';
  temp_v0 = '\0';
  if (temp_v3) {
    temp_v0 = *(char *)(temp_v2 + 0xedd);
  }
  if ((temp_v3 && temp_v0 != '\0') && (temp_v0 = '\0', *(int *)(temp_v2 + 0xfdc) != 0)) {
    if ((*(char *)(temp_v2 + 0xfd8) == '\0') && (*(char *)(temp_v2 + 0xf28) == '\0')) {
      FUN_002c39a4(g_titleScene);
      temp_v1 = 0;
      *(unsigned int *)(*(int *)(temp_v2 + 0xf20) + 0x14) = 0x200;
      *(unsigned int *)(*(int *)(temp_v2 + 0xf20) + 0x18) = 0x200;
      FUN_002bfadc(0,*(unsigned int *)(temp_v2 + 0xf20));
      *(unsigned char *)(temp_v2 + 0xee4) = temp_v1;
      *(unsigned char *)(temp_v2 + 0xee5) = 1;
      return '\0';
    }
    temp_v0 = '\0';
  }
  return temp_v0;
}

} /* extern "C" */
