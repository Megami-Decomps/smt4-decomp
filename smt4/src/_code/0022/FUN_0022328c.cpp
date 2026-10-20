/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022328c` (_code @ 0x22328c, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00269dc8(int);
int FUN_00296934(void);
int buttonHelpSetPreset(int);
int FUN_003115b4(int);
int FUN_00348b00(int);

/* Supplied declaration required: FUN_00269dc8. */
extern int scrGetCommandFrame(void);
/* Supplied declaration required: FUN_00296934. */
extern unsigned short scrGetArg(void);
/* Supplied declaration required: buttonHelpSetPreset. */
extern int FUN_002c1d5c(void);
extern int FUN_00311594(void);
/* Supplied declaration required: FUN_003115b4. */
/* Supplied declaration required: FUN_00348b00. */


unsigned char FUN_0022328c(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetCommandFrame();
  if (temp_v1 == 0) {
    FUN_00348b00(temp_v0);
    temp_v1 = FUN_002c1d5c();
    if (temp_v1 != 0) {
      return 1;
    }
    FUN_00269dc8(0);
    FUN_003115b4(temp_v0);
  }
  temp_v1 = FUN_00311594();
  if (temp_v1 != 0) {
    FUN_00296934();
    buttonHelpSetPreset(0x90);
  }
  return temp_v1 != 0;
}

} /* extern "C" */
