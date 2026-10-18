/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001bde6c` (_code @ 0x1bde6c, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001bde6c_arg2 fn_001bde6c_arg2;
struct fn_001bde6c_arg2 {
    unsigned char pad_0x0[0x4];
    byte field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    int field_0x8; /* +0x8 */
    int field_0xc; /* +0xc */
    unsigned char pad_0x10[0x4];
    int field_0x14; /* +0x14 */
};

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_001bdef4. */


/* WARNING: Removing unreachable block (ram,0x001bdf00) */
/* WARNING: Removing unreachable block (ram,0x001bdf14) */

void FUN_001bde6c(int param_1,int *param_2,fn_001bde6c_arg2 *param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  romwright_code *pcVar5;
  int uStack_6c;
  int iStack_68;
  int iStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_54;
  unsigned int uStack_4c;
  int iStack_44;
  unsigned int uStack_3c;
  int iStack_2c;
  
  temp_v0 = param_3->field_0x14 + param_1;
  if (param_3->field_0x4 != 0) {
    FUN_001bdef4(temp_v0,param_2,1,0);
    FUN_001bdef4(param_3->field_0x8 + param_1,param_2,0);
    FUN_001bdef4(param_3->field_0xc + param_1,param_2,0,1);
    return;
  }
  FUN_001bdef4(temp_v0,param_2,1,0);
  param_1 = param_3->field_0x8 + param_1;
  uStack_4c = 400;
  temp_v3 = *param_2;
  temp_v0 = param_2[2];
  if (temp_v0 == 0) {
    temp_v1 = 0x18;
  }
  else {
    temp_v1 = 0;
    switch(temp_v0) {
    case 1:
      temp_v1 = 3;
      break;
    case 2:
    case 3:
    case 4:
      temp_v1 = 2;
    }
    temp_v1 = temp_v1 << 3;
  }
  uStack_54 = (unsigned int)param_2[3] >> 2;
  iStack_44 = temp_v1 << 2;
  switch(temp_v0) {
  case 0:
  case 1:
    iStack_68 = uStack_54 * 4 + 3;
    pcVar5 = (romwright_code *)0x1c7e34;
    uStack_60 = 3;
    break;
  case 2:
  case 3:
  case 4:
    iStack_68 = uStack_54 * 4 + 2;
    pcVar5 = (romwright_code *)0x1c7dc4;
    uStack_60 = 2;
    break;
  default:
    return;
  }
  iStack_64 = uStack_54 << 2;
  uStack_5c = 0;
  uStack_6c = 0;
  if (param_1 != 0) {
    uStack_3c = 0;
    iStack_2c = uStack_54 * 8;
    do {
      temp_v2 = 0;
      temp_v0 = temp_v3;
      do {
        (*pcVar5)(param_1,temp_v0,uStack_54,&uStack_6c);
        temp_v2 = temp_v2 + 8;
        temp_v0 = temp_v0 + temp_v1;
        param_1 = param_1 + temp_v1 * 8;
      } while (temp_v2 < 0xf0);
      temp_v3 = temp_v3 + iStack_2c * 4;
      param_1 = param_1 + iStack_44 * 4;
      uStack_3c = uStack_3c + 8;
    } while (uStack_3c < uStack_4c);
  }
  return;
}
