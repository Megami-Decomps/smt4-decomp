/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bf0a4` (_code @ 0x3bf0a4, 0x134 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002533f4(unsigned int, unsigned int, int);

extern int randRange(unsigned int);
/* Supplied declaration required: FUN_002533f4. */
extern int btlGetMainState(void);


unsigned int FUN_003bf0a4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v1 = btlGetMainState();
  if ((*(unsigned int *)(temp_v1 + 0x44ac) & 0x20) != 0) {
    if (*(unsigned int *)(temp_v1 + 0x2f30) < 0xd) {
      return 1;
    }
    *(unsigned int *)(temp_v1 + 0x2f30) = 2;
    return 1;
  }
  temp_v2 = *(unsigned int *)(temp_v1 + 0x44a0);
  if (((temp_v2 & 0x200) != 0 || (temp_v2 & 0x40000) != 0) || (temp_v2 & 0x400000) != 0) {
    return 0;
  }
  if ((-1 < *(int *)(temp_v1 + 0xc0)) && (*(unsigned char *)(temp_v1 + 0x44b7) >= 3)) {
    return 0;
  }
  temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0x11a);
  if (temp_v2 != 0) {
    if (-1 < *(int *)(temp_v1 + 0xc0)) {
      *(unsigned int *)(temp_v1 + 0xc0) = temp_v2;
      return 1;
    }
    temp_v3 = *(int *)(temp_v1 + 0xc4);
  }
  else {
    temp_v0 = *(unsigned short *)(temp_v1 + 0x118);
    if ((*(unsigned int *)(temp_v1 + 0x44a8) & 0x20000000) == 0 && temp_v0 == 0) {
      return 0;
    }
    temp_v3 = randRange(99);
    if ((*(unsigned int *)(temp_v1 + 0x44a8) & 0x20000000) != 0) {
      temp_v3 = -1;
    }
    if ((int)((unsigned int)*(unsigned char *)(temp_v1 + 0x44b5) * 3 + (unsigned int)temp_v0) <= temp_v3) {
      return 0;
    }
    temp_v2 = *(unsigned int *)(temp_v1 + 0x144);
    FUN_002533f4(temp_v2,*(unsigned int *)(temp_v1 + 0x148),1);
    if (temp_v2 == 0) {
      return 0;
    }
    if (-1 < *(int *)(temp_v1 + 0xc0)) {
      *(unsigned int *)(temp_v1 + 0xc0) = temp_v2;
      return 1;
    }
    temp_v3 = *(int *)(temp_v1 + 0xc4);
  }
  if (-1 < temp_v3) {
    *(unsigned int *)(temp_v1 + 0xc4) = temp_v2;
    return 1;
  }
  return 0;
}

} /* extern "C" */
