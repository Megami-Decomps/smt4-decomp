/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bc850` (_code @ 0x4bc850, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(void);

/* Supplied declaration required: FUN_0019cac4. */
extern int FUN_004bb80c(void);


unsigned int FUN_004bc850(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v0 = FUN_004bb80c();
  if (temp_v0 == 0) {
    return 0;
  }
  temp_v4 = 0;
  temp_v5 = temp_v4;
  do {
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v0 + temp_v4 * 2 + 0x14);
    if ((temp_v3 != 0) && (temp_v1 = temp_v3, FUN_0019cac4(), temp_v1 != 0)) {
      if ((*(unsigned short *)(temp_v1 + 2) & 0x8000) != 0) {
        return temp_v3;
      }
      if ((temp_v5 == 0) ||
         (temp_v2 = temp_v5, FUN_0019cac4(),
         (*(unsigned short *)(temp_v2 + 2) & 0x7fff) < (*(unsigned short *)(temp_v1 + 2) & 0x7fff))) {
        temp_v5 = temp_v3;
      }
    }
    temp_v4 = temp_v4 + 1;
  } while ((int)temp_v4 < 6);
  return temp_v5;
}

} /* extern "C" */
