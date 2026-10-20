/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00418714` (_code @ 0x418714, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ad9b4(void);

extern int FUN_001ab940(char);
/* Supplied declaration required: FUN_001ad9b4. */
extern unsigned int wstrlen(int);


unsigned int FUN_00418714(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v1 = param_1;
  FUN_001ad9b4();
  temp_v0 = wstrlen(temp_v1 + 0xc4);
  temp_v2 = temp_v0 == 1;
  if (temp_v0 < 2) {
    temp_v2 = *(char *)(temp_v1 + 0xc4) == '0';
  }
  if (temp_v2) {
    temp_v0 = 0;
  }
  else if (*(char *)(temp_v1 + 0xd3) == '\0') {
    temp_v0 = 1;
  }
  else {
    temp_v1 = FUN_001ab940(*(char *)(temp_v1 + 0xd3));
    temp_v0 = (*(unsigned char *)(temp_v1 + param_1 * 4 + 0x2a2) & 4) >> 2;
  }
  return temp_v0;
}

} /* extern "C" */
