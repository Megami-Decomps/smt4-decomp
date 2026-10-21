/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00326e94` (_code @ 0x326e94, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy_w(...);

typedef struct fn_00326e94_arg0 fn_00326e94_arg0;
struct fn_00326e94_arg0 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x4];
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
};

extern int DAT_0044ea8c; /* 0x44ea8c */
extern unsigned int DAT_0044ea94; /* 0x44ea94 */
extern unsigned char DAT_0044f5e8; /* 0x44f5e8 */
extern unsigned char DAT_0044f630; /* 0x44f630 */
extern int DAT_0044f714; /* 0x44f714 */
extern unsigned char *DAT_0044f71c; /* 0x44f71c */
extern unsigned int DAT_0044f720; /* 0x44f720 */
extern int DAT_0044f864; /* 0x44f864 */
extern unsigned char DAT_004d8b40; /* 0x4d8b40 */
extern unsigned int DAT_004d8ba8; /* 0x4d8ba8 */
extern unsigned char DAT_004d8ca0; /* 0x4d8ca0 */

extern unsigned int linkedFindItemByIndex(unsigned int, int);
/* Supplied declaration required: rt_memcpy_w. */


fn_00326e94_arg0 * FUN_00326e94(fn_00326e94_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = linkedFindItemByIndex(DAT_0044ea94,DAT_0044f864 + DAT_0044ea8c);
  rt_memcpy_w(&DAT_004d8b40,temp_v0,0x90);
  rt_memcpy_w(&DAT_004d8b40,&DAT_004d8ca0,0x80);
  if ((DAT_004d8ba8 & 2) != 0) {
    DAT_0044f71c = &DAT_0044f5e8;
    DAT_0044f720 = 3;
    if (DAT_0044f714 >= 4) {
      DAT_0044f714 = 0;
    }
  }
  else {
    DAT_0044f71c = &DAT_0044f630;
    DAT_0044f720 = 9;
    if (DAT_0044f714 == 0) {
      DAT_0044f714 = 1;
    }
  }
  return param_1;
}

} /* extern "C" */
