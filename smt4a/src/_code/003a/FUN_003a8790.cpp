/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8790` (_code @ 0x3a8790, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(void);
int FUN_001aba54(void);
int FUN_003283ac(unsigned int);

extern unsigned int DAT_0057113c; /* 0x57113c */

/* Supplied declaration required: FUN_0019cac4. */
/* Supplied declaration required: FUN_001aba54. */
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */
extern int FUN_004ee568(unsigned int);


unsigned int FUN_003a8790(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_004ee568(DAT_0057113c);
  temp_v1 = *(int *)(temp_v1 + 0x20);
  if (*(int *)(temp_v1 + 0x3f8) != 0) {
    temp_v5 = 0;
    do {
      temp_v2 = (unsigned int)*(unsigned short *)(*(int *)(temp_v1 + 0x3f8) + temp_v5 * 2 + 0x34);
      FUN_001aba54();
      if ((temp_v2 != 0) && (temp_v0 == (*(unsigned int *)(temp_v2 + 0x28) & 0xffff) >> 0xb)) {
        temp_v4 = 1;
        FUN_003283ac(temp_v4);
        return 1;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 8);
  }
  if (*(int *)(temp_v1 + 0x3fc) != 0) {
    temp_v5 = 0;
    do {
      temp_v2 = (unsigned int)*(unsigned short *)(*(int *)(temp_v1 + 0x3fc) + temp_v5 * 2 + 0x34);
      FUN_001aba54();
      if ((temp_v2 != 0) && (temp_v0 == (*(unsigned int *)(temp_v2 + 0x28) & 0xffff) >> 0xb)) {
        temp_v4 = 1;
        FUN_003283ac(temp_v4);
        return 1;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 8);
  }
  if (*(int *)(temp_v1 + 0x404) != 0) {
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0x166);
    FUN_0019cac4();
    temp_v1 = 0;
    do {
      temp_v3 = (unsigned int)*(unsigned short *)(temp_v2 + temp_v1 * 2 + 0x50);
      FUN_001aba54();
      if ((temp_v3 != 0) && (temp_v0 == (*(unsigned int *)(temp_v3 + 0x28) & 0xffff) >> 0xb)) {
        temp_v4 = 1;
        FUN_003283ac(temp_v4);
        return 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 8);
  }
  temp_v4 = 0;
  FUN_003283ac(temp_v4);
  return 1;
}

} /* extern "C" */
