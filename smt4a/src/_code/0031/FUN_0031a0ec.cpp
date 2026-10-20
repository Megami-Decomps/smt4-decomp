/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031a0ec` (_code @ 0x31a0ec, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern int FUN_001ab888(void);
extern int FUN_001ba514(unsigned short);
extern unsigned short scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */
extern int isPartySlotBit1Clear(void);


unsigned int FUN_0031a0ec(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = FUN_001ba514(temp_v0);
  if ((temp_v1 < 0) || (temp_v2 = isPartySlotBit1Clear(), temp_v2 == 0)) {
    scrSetResult(0);
    return 1;
  }
  temp_v2 = 0;
  do {
    temp_v3 = FUN_001ab888();
    if (*(char *)(temp_v3 + temp_v2 + 0x1ca0) == temp_v1) {
      scrSetResult(0);
      return 1;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 3);
  temp_v2 = 0;
  do {
    temp_v3 = FUN_001ab888();
    if (*(char *)(temp_v3 + temp_v2 + 0x1ca0) < '\0') {
      temp_v3 = FUN_001ab888();
      *(char *)(temp_v3 + temp_v2 + 0x1ca0) = (char)temp_v1;
      break;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 3);
  scrSetResult(1);
  return 1;
}

} /* extern "C" */
