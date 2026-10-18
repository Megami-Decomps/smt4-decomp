/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010cc4c` (_code @ 0x10cc4c, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0010cc4c_arg1 fn_0010cc4c_arg1;
struct fn_0010cc4c_arg1 {
    unsigned char pad_0x0[0x4];
    byte field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    ushort field_0x18; /* +0x18 */
    ushort field_0x1a; /* +0x1a */
};

extern unsigned char DAT_00559018; /* 0x559018 */

extern int FUN_002f6b9c(unsigned int *, fn_0010cc4c_arg1 *);


int FUN_0010cc4c(unsigned int *param_1,fn_0010cc4c_arg1 *param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  *param_1 = (unsigned int)&DAT_00559018;
  *(unsigned char *)(param_1 + 1) = param_2->field_0x4;
  param_1[2] = param_2->field_0x8;
  temp_v1 = param_2->field_0x10;
  param_1[5] = param_2->field_0x14;
  param_1[4] = temp_v1;
  *(unsigned short *)(param_1 + 6) = param_2->field_0x18;
  *(unsigned short *)((int)param_1 + 0x1a) = param_2->field_0x1a;
  temp_v0 = FUN_002f6b9c(param_1 + 7,param_2 + 1);
  return temp_v0 - 0x1c;
}
