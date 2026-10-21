/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ada48` (_code @ 0x2ada48, 0x160 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0034a290(void);

extern int affinityShouldReplaceState(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0034a290. */


unsigned int FUN_002ada48(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v3 = 0;
  temp_v2 = 0;
  do {
    temp_v0 = (unsigned int)*(unsigned short *)(param_1 + temp_v2 * 2);
    if (((temp_v0 != 0) && (FUN_0034a290(), temp_v0 != 0)) &&
       (temp_v0 = *(unsigned int *)(temp_v0 + 0x44), (temp_v0 & 0x7ff) >> 6 == 5)) {
      if ((temp_v0 & 0xf0000) != 0) {
        if (param_2 == (temp_v0 & 0xffff) >> 0xb) {
          temp_v4 = 0;
          switch((temp_v0 & 0xfffff) >> 0x10) {
          case 1:
            temp_v4 = 5;
            break;
          case 2:
            temp_v4 = 1;
            break;
          case 3:
            temp_v4 = 3;
            break;
          case 4:
            temp_v4 = 4;
          }
          temp_v1 = affinityShouldReplaceState(temp_v3,temp_v4);
          if (temp_v1 != 0) {
            temp_v3 = temp_v4;
          }
        }
      }
      else {
        switch(param_2) {
        case 6:
        case 7:
          temp_v0 = temp_v0 & 0x100000;
          break;
        default:
          temp_v2 = temp_v2 + 1;
          if (temp_v2 >= 8) {
            return temp_v3;
          }
          continue;
        case 0xb:
          temp_v0 = temp_v0 & 0x400000;
          break;
        case 0xc:
          temp_v0 = temp_v0 & 0x800000;
          break;
        case 0xd:
          temp_v0 = temp_v0 & 0x1000000;
          break;
        case 0xe:
          temp_v0 = temp_v0 & 0x2000000;
          break;
        case 0xf:
          temp_v0 = temp_v0 & 0x4000000;
          break;
        case 0x10:
          temp_v0 = temp_v0 & 0x8000000;
        }
        if (temp_v0 != 0) {
          return 1;
        }
      }
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 8) {
      return temp_v3;
    }
  } while( 1 );
}

} /* extern "C" */
