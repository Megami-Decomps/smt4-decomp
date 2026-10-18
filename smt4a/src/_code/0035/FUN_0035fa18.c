/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035fa18` (_code @ 0x35fa18, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0035fa18(int param_1)

{
  int temp_v0;
  
  if (param_1 != 0) {
    switch(*(unsigned int *)(param_1 + 0x387c)) {
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x18:
    case 0x19:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x28:
    case 0x2a:
    case 0x2e:
    case 0x2f:
    case 0x30:
      return 1;
    case 0x27:
      temp_v0 = *(int *)(param_1 + 0x3880);
      if (temp_v0 == 0x1d || temp_v0 == 0x20) {
        return 1;
      }
      if (temp_v0 == 0x1e || temp_v0 == 0x19) {
        return 1;
      }
    }
  }
  return 0;
}
