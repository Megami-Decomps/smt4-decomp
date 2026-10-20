/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001081b0` (_code @ 0x1081b0, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00117da4(int);
int FUN_002c39a4(unsigned int);

extern unsigned int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_00117da4. */
extern int jobGetWork(void);
/* Supplied declaration required: FUN_002c39a4. */


unsigned int FUN_001081b0(void)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v1 = jobGetWork();
  temp_v3 = *(char *)(temp_v1 + 0xedc) != '\0';
  temp_v0 = '\0';
  if (temp_v3) {
    temp_v0 = *(char *)(temp_v1 + 0xedd);
  }
  if (temp_v3 && temp_v0 != '\0') {
    temp_v3 = *(char *)(temp_v1 + 0xee5) != '\0';
    temp_v2 = 0;
    if (temp_v3) {
      temp_v2 = *(int *)(temp_v1 + 0xfdc);
    }
    if ((temp_v3 && temp_v2 != 0) && (*(char *)(temp_v1 + 0xfd8) == '\0')) {
      FUN_002c39a4(g_titleScene);
      FUN_00117da4(1);
      return 0;
    }
  }
  return 0;
}

} /* extern "C" */
