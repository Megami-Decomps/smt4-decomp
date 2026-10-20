/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025bb34` (_code @ 0x25bb34, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002aa568(unsigned char *, unsigned int);

extern unsigned char DAT_004d9880; /* 0x4d9880 */
extern unsigned char DAT_004d9d88; /* 0x4d9d88 */

/* Supplied declaration required: FUN_002aa568. */


int FUN_0025bb34(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = 0;
  do {
    if (param_1 != 0) {
      if (param_1 != 1) {
        if (param_1 != 2) {
          if (param_1 != 3) {
            temp_v1 = -1;
          }
          else {
            puVar1 = (unsigned char *)(param_3 * 0x284 + 0x4da798 + temp_v0 * 0x4c);
            puVar1 = puVar1 + 4;
            if ((temp_v1 == 0) && (FUN_002aa568(puVar1,param_2), puVar1 == (unsigned char *)0x0)) {
              return temp_v0;
            }
          }
        }
        else {
          puVar1 = (unsigned char *)(param_3 * 0x284 + 0x4da290 + temp_v0 * 0x4c);
          puVar1 = puVar1 + 4;
          if ((temp_v1 == 0) && (FUN_002aa568(puVar1,param_2), puVar1 == (unsigned char *)0x0)) {
            return temp_v0;
          }
        }
      }
      else {
        puVar1 = &DAT_004d9d88 + temp_v0 * 0x4c + param_3 * 0x284;
        puVar1 = puVar1 + 4;
        if ((temp_v1 == 0) && (FUN_002aa568(puVar1,param_2), puVar1 == (unsigned char *)0x0)) {
          return temp_v0;
        }
      }
    }
    else {
      puVar1 = &DAT_004d9880 + temp_v0 * 0x4c + param_3 * 0x284;
      puVar1 = puVar1 + 4;
      if ((temp_v1 == 0) && (FUN_002aa568(puVar1,param_2), puVar1 == (unsigned char *)0x0)) {
        return temp_v0;
      }
    }
    temp_v0 = (int)(short)((short)temp_v0 + 1);
    if (temp_v0 >= 8) {
      return temp_v1;
    }
  } while( 1 );
}

} /* extern "C" */
