/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c8a2c` (_code @ 0x3c8a2c, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy_w(...);

typedef struct fn_003c8a2c_arg0 fn_003c8a2c_arg0;
struct fn_003c8a2c_arg0 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x4];
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
};

extern int DAT_0059dbec; /* 0x59dbec */
extern unsigned int DAT_0059dbf4; /* 0x59dbf4 */
extern unsigned char DAT_0059e738; /* 0x59e738 */
extern unsigned char DAT_0059e780; /* 0x59e780 */
extern int DAT_0059e864; /* 0x59e864 */
extern unsigned char *DAT_0059e86c; /* 0x59e86c */
extern unsigned int DAT_0059e870; /* 0x59e870 */
extern int DAT_0059e9b4; /* 0x59e9b4 */
extern unsigned char DAT_00634bc0; /* 0x634bc0 */
extern unsigned int DAT_00634c28; /* 0x634c28 */
extern unsigned char DAT_00634d20; /* 0x634d20 */

extern unsigned int FUN_00300778(unsigned int, int);
/* Supplied declaration required: rt_memcpy_w. */


fn_003c8a2c_arg0 * FUN_003c8a2c(fn_003c8a2c_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00300778(DAT_0059dbf4,DAT_0059e9b4 + DAT_0059dbec);
  rt_memcpy_w(&DAT_00634bc0,temp_v0,0x90);
  rt_memcpy_w(&DAT_00634bc0,&DAT_00634d20,0x80);
  if ((DAT_00634c28 & 2) != 0) {
    DAT_0059e86c = &DAT_0059e738;
    DAT_0059e870 = 3;
    if (DAT_0059e864 >= 4) {
      DAT_0059e864 = 0;
    }
  }
  else {
    DAT_0059e86c = &DAT_0059e780;
    DAT_0059e870 = 9;
    if (DAT_0059e864 == 0) {
      DAT_0059e864 = 1;
    }
  }
  return param_1;
}

} /* extern "C" */
