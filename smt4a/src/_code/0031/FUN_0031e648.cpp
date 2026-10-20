/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031e648` (_code @ 0x31e648, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int FUN_002f0c18(int);
int FUN_002f1554(int);
int FUN_0034aae4(void);
int FUN_00418820(int);

extern int FUN_00162ea4(void);
/* Supplied declaration required: sysPlaySe. */
extern unsigned short scrGetArg(void);
extern int scrGetCommandFrame(void);
/* Supplied declaration required: FUN_002f0c18. */
extern int FUN_002f151c(void);
/* Supplied declaration required: FUN_002f1554. */
/* Supplied declaration required: FUN_0034aae4. */
/* Supplied declaration required: FUN_00418820. */


unsigned char FUN_0031e648(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetCommandFrame();
  if (temp_v1 == 0) {
    FUN_00418820(temp_v0);
    temp_v1 = FUN_00162ea4();
    if (temp_v1 != 0) {
      return 1;
    }
    FUN_002f0c18(0);
    FUN_002f1554(temp_v0);
  }
  temp_v1 = FUN_002f151c();
  if (temp_v1 != 0) {
    FUN_0034aae4();
    sysPlaySe(0x92);
  }
  return temp_v1 != 0;
}

} /* extern "C" */
