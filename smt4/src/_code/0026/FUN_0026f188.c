/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026f188` (_code @ 0x26f188, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int DAT_0043da2c; /* 0x43da2c */

/* Supplied declaration required: FUN_00296ae8. */


void FUN_0026f188(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043da2c;
  *(unsigned char *)(DAT_0043da2c + 0x55c) = 1;
  *(unsigned char *)(temp_v0 + 0x4cb) = 1;
  if (param_1 != 0) {
    FUN_00296ae8(*(unsigned int *)(temp_v0 + 0x558),3,0xffffffff,0,3,param_1,param_2);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  *(unsigned char *)(temp_v0 + 0x4cb) = 0;
  *(unsigned char *)(temp_v0 + 0x55c) = 0;
  *(unsigned int *)(temp_v0 + 0x558) = 0;
                    /* WARNING: Treating indirect jump as return */
  return;
}
