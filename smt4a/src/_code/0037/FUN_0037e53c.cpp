/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037e53c` (_code @ 0x37e53c, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(unsigned int);
int FUN_001ad6d8(void);
int FUN_001f4998(unsigned int);
int FUN_00359370(int, int);
int FUN_003ae864(unsigned int);

extern unsigned int DAT_0057f4c4; /* 0x57f4c4 */

extern unsigned long long FUN_00164a9c(unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_001ad6d8. */
/* Supplied declaration required: FUN_001f4998. */
/* Supplied declaration required: FUN_00359370. */
/* Supplied declaration required: FUN_003ae864. */


void FUN_0037e53c(unsigned int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned long long temp_v4;
  
  FUN_001ad6d8();
  temp_v4 = FUN_00164a9c(param_1);
  temp_v2 = (int)((unsigned long long)temp_v4 >> 0x20);
  temp_v0 = (int)temp_v4;
  temp_v1 = *(int *)(temp_v0 + 0x5ec);
  if (temp_v1 != 0) {
    temp_v2 = *(int *)(temp_v0 + 0x5f0);
  }
  if ((temp_v1 != 0 && temp_v2 != 5) && (temp_v2 != 6)) {
    FUN_00359370(temp_v1,0);
  }
  *(unsigned int *)(temp_v0 + 0x5ec) = 0;
  temp_v3 = 0;
  *(unsigned int *)(temp_v0 + 0x5e8) = 0;
  do {
    temp_v2 = temp_v0 + temp_v3 * 4;
    FUN_003ae864(*(unsigned int *)(temp_v2 + 0x6cc));
    FUN_001f4998(*(unsigned int *)(temp_v2 + 0x65c));
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x1c);
  FUN_0019a5a0(DAT_0057f4c4);
  DAT_0057f4c4 = 0;
  return;
}

} /* extern "C" */
