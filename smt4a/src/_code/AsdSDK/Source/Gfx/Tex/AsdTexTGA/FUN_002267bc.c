/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002267bc` (_code @ 0x2267bc, 0x18c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002267bc_arg0 fn_002267bc_arg0;
struct fn_002267bc_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x8];
    uint field_0x14; /* +0x14 */
    uint field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    int field_0x28; /* +0x28 */
};

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

/* Supplied declaration required: FUN_0019a37c. */
/* Supplied declaration required: FUN_0019d4d8. */
/* Supplied declaration required: rt_memcpy. */


void FUN_002267bc(fn_002267bc_arg0 *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  temp_v2 = FUN_0019a37c(param_2 + 0x12,"NW4C_Tga Ver1.0",0x10);
  if (temp_v2 == 0) {
    temp_v0 = *(unsigned char *)(param_2 + 0xd);
    temp_v1 = *(unsigned char *)(param_2 + 0xc);
    param_1->field_0x18 = (unsigned int)*(unsigned char *)(param_2 + 0xe) + (unsigned int)*(unsigned char *)(param_2 + 0xf) * 0x100;
    param_1->field_0x14 = (unsigned int)temp_v1 + (unsigned int)temp_v0 * 0x100;
    param_1->field_0x8 = param_4;
    param_1->field_0x4 = 0xde1;
    param_2 = param_2 + *(int *)(param_2 + 0x22);
    while( 1 ) {
      temp_v2 = FUN_0019a37c(param_2,"nw4c_txd",8);
      if (temp_v2 == 0) {
        param_1->field_0x28 = *(int *)(param_2 + 8) - 0xc;
        temp_v5 = 1;
        temp_v4 = 0x80;
        temp_v3 = 0x10000;
        FUN_0019d4d8(0x10000,0x100,0,param_1->field_0x28);
        param_1->field_0x24 = temp_v3;
        rt_memcpy();
      }
      temp_v2 = FUN_0019a37c(param_2,"nw4c_tfm",8);
      if (temp_v2 == 0) {
        temp_v4 = 0;
        temp_v5 = 0;
        rt_memcpy(&temp_v4,param_2 + 0xc,*(int *)(param_2 + 8) - 0xc);
        temp_v2 = FUN_0019a37c(&temp_v4,"Etc1_a4",8);
        if (temp_v2 == 0) {
          param_1->field_0x20 = 0x1401;
          param_1->field_0x1c = 0x675b;
        }
        else {
          temp_v2 = FUN_0019a37c(&temp_v4,"Etc1",8);
          if (temp_v2 == 0) {
            param_1->field_0x1c = 0x675a;
            param_1->field_0x20 = 0x1401;
          }
        }
      }
      temp_v2 = FUN_0019a37c(param_2,"nw4c_end",8);
      if (temp_v2 == 0) break;
      param_2 = param_2 + *(int *)(param_2 + 8);
    }
  }
  return;
}
