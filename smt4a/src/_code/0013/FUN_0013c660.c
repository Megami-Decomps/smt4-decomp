/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013c660` (_code @ 0x13c660, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001509fc. */
/* Supplied declaration required: FUN_001537b0. */
extern int FUN_00164a9c(void);


unsigned int FUN_0013c660(void)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  temp_v1 = FUN_00164a9c();
  temp_v2 = temp_v1 + 0xf00;
  temp_v3 = *(char *)(temp_v1 + 0xfa4) != '\0';
  temp_v0 = '\0';
  if (temp_v3) {
    temp_v0 = *(char *)(temp_v1 + 0xfa5);
  }
  if (temp_v3 && temp_v0 != '\0') {
    temp_v2 = (unsigned int)*(unsigned char *)(temp_v1 + 0xfad);
  }
  if ((((temp_v3 && temp_v0 != '\0') && temp_v2 != 0) && (*(int *)(temp_v1 + 0x1490) != 0)) &&
     (*(char *)(temp_v1 + 0x148c) == '\0')) {
    if (*(char *)(temp_v1 + 0x1494) != '\0') {
      FUN_001537b0();
    }
    else {
      FUN_001509fc(1);
    }
  }
  return 0;
}
