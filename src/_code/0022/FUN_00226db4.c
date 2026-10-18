/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00226db4` (_code @ 0x226db4, 0x1c8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00226db4_arg0 fn_00226db4_arg0;
struct fn_00226db4_arg0 {
    unsigned char pad_0x0[0x3040];
    undefined1 field_0x3040; /* +0x3040 */
    unsigned char pad_0x3041[0x7];
    void *field_0x3048; /* +0x3048 */
    undefined4 field_0x304c; /* +0x304c */
    short *field_0x3050; /* +0x3050 */
    short *field_0x3054; /* +0x3054 */
};

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00226c24. */
/* Supplied declaration required: FUN_00226d54. */
/* Supplied declaration required: FUN_002278e4. */
/* Supplied declaration required: FUN_0023c6c0. */
/* Supplied declaration required: FUN_0023c85c. */
/* Supplied declaration required: FUN_0023f3d8. */
extern int FUN_0034cb90(unsigned int);


void FUN_00226db4(fn_00226db4_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 7 native warning(s); review required */
  int temp_v0;
  short *psVar2;
  int temp_v1;
  short *psVar4;
  unsigned int in_fpscr;
  float in_s0;
  
  temp_v0 = FUN_0034cb90(param_1->field_0x304c);
  if (temp_v0 == 0) {
    FUN_00226d54(param_1->field_0x304c);
    temp_v0 = (int)in_s0;
    if (param_1->field_0x3050[2] == temp_v0) {
      FUN_002278e4(0,0,(int)param_1->field_0x3050[3]);
    }
    psVar2 = param_1->field_0x3054;
    if ((*(unsigned char *)(psVar2 + 4) & 1) != 0) {
      psVar4 = param_1->field_0x3050 + 4;
    }
    else {
      psVar4 = param_1->field_0x3050 + 8;
    }
    if (psVar4[2] == temp_v0) {
      temp_v1 = (int)*(short *)((int)param_1->field_0x3048 + 0x62);
      VectorSignedToFloat((int)psVar2[0x45],(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)psVar2[0x44],(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_0023c85c(param_1,temp_v1,temp_v1,7,1,3);
    }
    if (psVar4[3] == temp_v0) {
      temp_v1 = (int)*(short *)((int)param_1->field_0x3048 + 0x62);
      VectorSignedToFloat((int)param_1->field_0x3054[0x48],(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)param_1->field_0x3054[0x49],(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_0023c85c(param_1,temp_v1,temp_v1,7,2,3);
    }
    psVar2 = param_1->field_0x3054;
    if (psVar2[7] == temp_v0) {
      FUN_0023f3d8(0,0,(int)psVar2[8],10,param_1->field_0x3048,(int)psVar2[6],0,0,0xffffffff);
    }
    if (psVar2[10] == temp_v0) {
      FUN_0023f3d8(0,0,(int)psVar2[0xb],9,param_1->field_0x3048,(int)psVar2[9],0,0,0xffffffff);
    }
    if (psVar2[0xc] == temp_v0) {
      FUN_0023c6c0(0,0,(int)psVar2[0xd],0,0);
    }
    FUN_00226c24(param_1,(int)(short)temp_v0,3);
  }
  temp_v0 = FUN_0034cb90(param_1->field_0x304c);
  if (temp_v0 != 0) {
    param_1->field_0x3040 = 0xd;
  }
  return;
}
