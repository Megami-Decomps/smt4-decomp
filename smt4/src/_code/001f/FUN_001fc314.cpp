/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fc314` (_code @ 0x1fc314, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00291e28(void);

/* Supplied declaration required: FUN_00291e28. */
extern int FUN_002d2a00(int);
extern unsigned int FUN_002d2a58(int, unsigned int);
extern char *FUN_002d4f64(int);


void FUN_001fc314(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  char *pcVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  temp_v0 = param_1;
  FUN_00291e28();
  if (0 < (int)temp_v0) {
    do {
      pcVar1 = (char *)FUN_002d4f64(temp_v2);
      temp_v0 = (unsigned int)*pcVar1;
      if (temp_v0 == 0xffffffff) {
        return;
      }
      if ((temp_v0 == param_1) && (temp_v0 = (unsigned int)(unsigned char)pcVar1[2], temp_v0 == 2)) {
        temp_v1 = FUN_002d2a00((int)pcVar1[3]);
        temp_v0 = 0;
        if (temp_v1 != 0) {
          temp_v0 = FUN_002d2a58((int)pcVar1[3],0);
        }
      }
      temp_v2 = temp_v2 + 1;
      FUN_00291e28();
    } while (temp_v2 < (int)temp_v0);
  }
  return;
}

} /* extern "C" */
