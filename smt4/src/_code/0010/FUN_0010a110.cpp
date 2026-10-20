/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a110` (_code @ 0x10a110, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001137fc(int);
int FUN_002c39a4(unsigned int);

extern unsigned int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_001137fc. */
extern int FUN_002bff10(unsigned int);
extern int jobGetWork(void);
/* Supplied declaration required: FUN_002c39a4. */


unsigned char FUN_0010a110(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = jobGetWork();
  if ((((*(char *)(temp_v0 + 0xf60) != '\0') && (*(char *)(temp_v0 + 0xf63) != '\0')) &&
      (temp_v1 = FUN_002bff10(0), temp_v1 == 0)) && (*(char *)(temp_v0 + 0xc) != '\0')) {
    FUN_002c39a4(g_titleScene);
    FUN_001137fc(0);
  }
  return 0;
}

} /* extern "C" */
