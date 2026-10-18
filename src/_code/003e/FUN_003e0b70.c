/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e0b70` (_code @ 0x3e0b70, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern unsigned char DAT_004656d1; /* 0x4656d1 */

/* Supplied declaration required: FUN_00238ed4. */
extern unsigned int FUN_003596c4(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


unsigned int FUN_003e0b70(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = param_4;
  while( 1 ) {
    temp_v0 = FUN_003596c4(param_2,param_3,param_4,param_5,temp_v0);
    if ((temp_v0 & 0x80000000) == 0 || temp_v1 >= 2) {
      return temp_v0;
    }
    if (temp_v0 != 0xc8a10bf0) break;
    FUN_00238ed4(1,0);
    temp_v1 = temp_v1 + 1;
    DAT_004656d1 = 1;
    if (temp_v1 >= 3) {
      DAT_004656d1 = 1;
      return temp_v0;
    }
  }
  return temp_v0;
}
