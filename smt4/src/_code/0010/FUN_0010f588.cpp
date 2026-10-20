/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f588` (_code @ 0x10f588, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00472a58; /* 0x472a58 */

extern int FUN_002c1364(unsigned int *, char *, unsigned int, unsigned int);
extern int FUN_002c1398(void);
extern unsigned int FUN_002c30c4(char *);


int FUN_0010f588(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_00472a58 == 0) {
    temp_v0 = FUN_002c1398();
    if (temp_v0 < 0) {
      return temp_v0;
    }
    temp_v1 = FUN_002c30c4("am:app");
    temp_v0 = FUN_002c1364((unsigned int *)&DAT_00472a58,"am:app",temp_v1,0);
    if (temp_v0 < 0) {
      return temp_v0;
    }
  }
  return 0;
}

} /* extern "C" */
