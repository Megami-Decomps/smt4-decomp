/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e5618` (_code @ 0x2e5618, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scriptReadStackValueAsFloat(int);
int eventTexSetJobParam(void);
int scrSetResult(unsigned int);
int eventTexStoreHandle(unsigned int);
int FUN_0039b0f8(unsigned int);

extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: scriptReadStackValueAsFloat. */
/* Supplied declaration required: eventTexSetJobParam. */
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: eventTexStoreHandle. */
/* Supplied declaration required: FUN_0039b0f8. */
extern int eventTexHasMissingValue(void);


unsigned int FUN_002e5618(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = scrGetArg(0);
  scriptReadStackValueAsFloat(1);
  scriptReadStackValueAsFloat(2);
  temp_v1 = eventTexHasMissingValue();
  temp_v2 = 0;
  if (temp_v1 != 0) {
    FUN_0039b0f8(temp_v0);
    eventTexSetJobParam();
    eventTexStoreHandle(temp_v0);
    temp_v2 = temp_v0;
  }
  scrSetResult(temp_v2);
  return 1;
}

} /* extern "C" */
