/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b2d0` (_code @ 0x10b2d0, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bfab0(unsigned int, unsigned int);
int FUN_002bfadc(int, unsigned int);
int FUN_002c39a4(unsigned int);

extern unsigned int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_002bfab0. */
/* Supplied declaration required: FUN_002bfadc. */
extern int FUN_002bff10(unsigned int);
extern int jobGetWork(void);
/* Supplied declaration required: FUN_002c39a4. */


unsigned char FUN_0010b2d0(void)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v2 = jobGetWork();
  temp_v3 = FUN_002bff10(0);
  if (temp_v3 != 0) {
    *(unsigned char *)(temp_v2 + 0xf65) = 1;
  }
  else if (*(char *)(temp_v2 + 0xf60) != '\0') {
    temp_v0 = *(char *)(temp_v2 + 0xf64);
    temp_v4 = temp_v0 == '\0';
    if (temp_v4) {
      temp_v0 = *(char *)(temp_v2 + 0xf65);
    }
    if ((temp_v4 && temp_v0 == '\0') && (*(char *)(temp_v2 + 0xf99) != '\0')) {
      FUN_002c39a4(g_titleScene);
      *(unsigned int *)(*(int *)(temp_v2 + 8) + 0x14) = 0x200;
      *(unsigned int *)(*(int *)(temp_v2 + 8) + 0x18) = 0x200;
      temp_v1 = 0;
      FUN_002bfadc(0,*(unsigned int *)(temp_v2 + 8));
      *(unsigned char *)(temp_v2 + 0xf62) = temp_v1;
      FUN_002bfab0(*(unsigned int *)(temp_v2 + 8),*(unsigned int *)(temp_v2 + 8));
      *(int *)(*(int *)(temp_v2 + 8) + 0x14) = *(int *)(*(int *)(temp_v2 + 8) + 0x14) >> 1;
      *(int *)(*(int *)(temp_v2 + 8) + 0x18) = *(int *)(*(int *)(temp_v2 + 8) + 0x18) >> 1;
      *(unsigned char *)(temp_v2 + 0xf64) = 1;
    }
  }
  return 0;
}

} /* extern "C" */
