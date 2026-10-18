/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002af3b4` (_code @ 0x2af3b4, 0x20c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002af3b4_arg0 fn_002af3b4_arg0;
struct fn_002af3b4_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x200];
    ushort field_0x208; /* +0x208 */
    byte field_0x20a; /* +0x20a */
};

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

/* Supplied declaration required: FUN_00130648. */
/* Supplied declaration required: FUN_001307f8. */
/* Supplied declaration required: FUN_001308dc. */
/* Supplied declaration required: FUN_001409a8. */
/* Supplied declaration required: FUN_00140bfc. */
/* Supplied declaration required: FUN_00141fd0. */
/* Supplied declaration required: FUN_002ac658. */
extern unsigned int FUN_002ac780(int, unsigned int);
extern int FUN_002bf684(void);


int FUN_002af3b4(fn_002af3b4_arg0 *param_1,unsigned int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 1 goto(s); 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  fn_002af3b4_arg0 *pfVar3;
  unsigned short temp_v2;
  fn_002af3b4_arg0 *pfVar5;
  
  if ((param_1->field_0x4 == 0) ||
     (temp_v0 = FUN_002bf684(), (temp_v0 == 0 || param_2 == 0xffffffff) || param_3 == 0)) {
    return 0;
  }
  pfVar5 = (fn_002af3b4_arg0 *)0x0;
  param_1->field_0x208 = param_1->field_0x208 + 1;
  if (param_1->field_0x20a != 0) goto LAB_002af470;
  switch(param_2 >> 0x18) {
  case 1:
    temp_v0 = param_1->field_0x4;
    FUN_00141fd0(temp_v0,param_2);
    if (temp_v0 == 1) {
      pfVar5 = param_1;
      FUN_001307f8(param_1,param_2,param_3,param_4,param_5);
      break;
    }
    if (temp_v0 == 3) {
      pfVar5 = param_1;
      FUN_001409a8(param_1,param_2,param_3,param_4,param_5,0xffffffff);
      break;
    }
  default:
LAB_002af470:
    pfVar5 = (fn_002af3b4_arg0 *)0x0;
    break;
  case 2:
    pfVar5 = param_1;
    FUN_00130648(param_1,param_2,param_3,param_4,param_5);
    break;
  case 3:
    pfVar5 = param_1;
    FUN_00140bfc(param_1,param_2,param_3,param_4,param_5);
    break;
  case 5:
    if ((param_4 & 8) != 0) {
      temp_v1 = FUN_002ac780(param_1->field_0x4,param_2);
      pfVar3 = param_1;
      FUN_002ac658(param_1,temp_v1,param_3,param_5,1);
      if (pfVar3 == (fn_002af3b4_arg0 *)0x0) break;
    }
    pfVar5 = (fn_002af3b4_arg0 *)0x1;
    break;
  case 6:
    temp_v1 = FUN_002ac780(param_1->field_0x4,param_2);
    pfVar3 = param_1;
    FUN_002ac658(param_1,temp_v1,param_3,param_5,1);
    if (pfVar3 != (fn_002af3b4_arg0 *)0x0) {
      pfVar5 = param_1;
      FUN_001308dc(param_1,pfVar3,param_3,param_5);
    }
  }
  temp_v2 = param_1->field_0x208 - 1;
  param_1->field_0x208 = temp_v2;
  if (temp_v2 == 0) {
    param_1->field_0x20a = 0;
  }
  return (int)pfVar5;
}
