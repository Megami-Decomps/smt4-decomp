/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010004a` (_code @ 0x10004a, 0x9e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int inputGetKeyFlags(unsigned int);
extern int *FUN_002e2a98(void);


unsigned int FUN_0010004a(unsigned int param_1)

{
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  piVar2 = (int *)FUN_002e2a98();
  if (*(char *)(*piVar2 + 0x100) == '\0') {
    temp_v1 = inputGetKeyFlags(param_1);
    return temp_v1;
  }
  if (param_1 < 0x10000) {
    temp_v0 = -1;
    temp_v4 = 0x2e3;
    while (temp_v3 = temp_v0, temp_v4 - temp_v3 >= 2) {
      temp_v2 = (temp_v3 + temp_v4) / 2;
      temp_v5 = temp_v2 * 6;
      if (((param_1 - *(unsigned short *)(temp_v5 + 0x54f1f4)) & 0xffff) <
          (*(unsigned short *)(temp_v5 + 0x54f1f6) & 0x3fff)) {
        if (temp_v4 - temp_v3 < 2) {
          return 0;
        }
        return *(unsigned int *)
                ((*(unsigned short *)(temp_v5 + 0x54f1f8) >>
                  (((param_1 - *(unsigned short *)(temp_v2 * 6 + 0x54f1f4)) &
                    ~(-1 << (unsigned int)(*(unsigned short *)(temp_v5 + 0x54f1f6) >> 0xe)) & 0x3f) << 2) & 0xf) * 4 +
                0x54f1bc);
      }
      temp_v0 = temp_v2;
      if ((int)param_1 < (int)(unsigned int)*(unsigned short *)(temp_v5 + 0x54f1f4)) {
        temp_v0 = temp_v3;
        temp_v4 = temp_v2;
      }
    }
  }
  return 0;
}

} /* extern "C" */
