/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c7c54` (_code @ 0x2c7c54, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f280; /* 0x57f280 */

extern int FUN_002a4860(void);
extern int FUN_002a4894(int);


unsigned char FUN_002c7c54(void)

{
  int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = DAT_0057f280;
  temp_v1 = 0x69;
  if (*(char *)(DAT_0057f280 + 0x74c) != '\0') {
    temp_v2 = DAT_0057f280 + 0x788;
    temp_v3 = FUN_002a4860();
    temp_v2 = FUN_002a4894(temp_v2);
    temp_v1 = *(unsigned char *)(temp_v2 + temp_v3 + temp_v0 + 0x758);
  }
  return temp_v1;
}

} /* extern "C" */
