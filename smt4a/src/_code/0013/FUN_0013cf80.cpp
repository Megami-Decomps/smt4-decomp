/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013cf80` (_code @ 0x13cf80, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00154edc(int, unsigned int);
int FUN_00157558(unsigned int);

extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00154edc. */
/* Supplied declaration required: FUN_00157558. */
extern int jobGetWork(void);


char FUN_0013cf80(void)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v2 = jobGetWork();
  *(unsigned char *)(temp_v2 + 0xffd) = 0;
  temp_v3 = *(char *)(temp_v2 + 0xff4) != '\0';
  temp_v0 = '\0';
  if (temp_v3) {
    temp_v0 = *(char *)(temp_v2 + 0xff5);
  }
  if ((temp_v3 && temp_v0 != '\0') && (temp_v0 = '\0', *(int *)(temp_v2 + 0x1490) != 0)) {
    if ((*(char *)(temp_v2 + 0x148c) == '\0') && (*(char *)(temp_v2 + 0x1040) == '\0')) {
      FUN_00157558(g_renderCtx);
      *(unsigned int *)(*(int *)(temp_v2 + 0x1038) + 0x14) = 0x200;
      *(unsigned int *)(*(int *)(temp_v2 + 0x1038) + 0x18) = 0x200;
      temp_v1 = 0;
      FUN_00154edc(0,*(unsigned int *)(temp_v2 + 0x1038));
      *(unsigned char *)(temp_v2 + 0xffc) = temp_v1;
      *(unsigned char *)(temp_v2 + 0xffd) = 1;
      return '\0';
    }
    temp_v0 = '\0';
  }
  return temp_v0;
}

} /* extern "C" */
