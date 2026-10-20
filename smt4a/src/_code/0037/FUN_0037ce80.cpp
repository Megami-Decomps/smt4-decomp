/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037ce80` (_code @ 0x37ce80, 0x16c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017ffa8(...);
int FUN_00183bb0(void);
int FUN_00184e64(...);
int FUN_001ad9b4(void);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

/* Supplied declaration required: FUN_0017ffa8. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_00184e64. */
extern int FUN_0019f18c(int);
/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_001bd100(int);
extern int FUN_00418584(void);


void FUN_0037ce80(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 goto(s); 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00418584();
  temp_v1 = FUN_001bd100(param_1);
  if (temp_v1 != 0) {
    if (temp_v0 == 0) {
      temp_v2 = 0x408;
      FUN_0017ffa8(2,0xb,temp_v2,param_2,param_3,param_4);
      FUN_00183bb0();
      return;
    }
    temp_v3 = 0x40f;
  }
  else {
    temp_v1 = FUN_0019f18c(param_1);
    temp_v3 = 0x41b;
    temp_v2 = 0x41a;
    if (temp_v1 != 0) goto joined_r0x0037cee4;
    FUN_001ad9b4();
    switch(*(unsigned char *)(param_1 + 6)) {
    case 0:
      if (temp_v0 == 0) {
        temp_v2 = 0x403;
        FUN_0017ffa8(2,0xb,temp_v2,param_2,param_3,param_4);
        FUN_00183bb0();
        return;
      }
      temp_v3 = 0x40a;
      break;
    case 1:
    case 6:
      if (temp_v0 == 0) {
        temp_v2 = 0x404;
        FUN_0017ffa8(2,0xb,temp_v2,param_2,param_3,param_4);
        FUN_00183bb0();
        return;
      }
      temp_v3 = 0x40b;
      break;
    case 2:
    case 3:
      if (temp_v0 == 0) {
        temp_v2 = 0x406;
        FUN_0017ffa8(2,0xb,temp_v2,param_2,param_3,param_4);
        FUN_00183bb0();
        return;
      }
      temp_v3 = 0x40d;
      break;
    case 4:
    case 5:
      if (temp_v0 == 0) {
        temp_v2 = 0x405;
        FUN_0017ffa8(2,0xb,temp_v2,param_2,param_3,param_4);
        FUN_00183bb0();
        return;
      }
      temp_v3 = 0x40c;
      break;
    default:
      temp_v3 = 0;
      temp_v2 = 0;
      goto joined_r0x0037cee4;
    case 8:
    case 9:
    case 0xb:
joined_r0x0037cee4:
      if (temp_v0 == 0) {
        FUN_0017ffa8(2,0xb,temp_v2,param_2,param_3,param_4);
        FUN_00183bb0();
        return;
      }
      break;
    case 10:
      if (temp_v0 == 0) {
        temp_v2 = 0x41c;
        FUN_0017ffa8(2,0xb,temp_v2,param_2,param_3,param_4);
        FUN_00183bb0();
        return;
      }
      temp_v3 = 0x41d;
      break;
    case 0xc:
      return;
    }
  }
  temp_v2 = temp_v3;
  FUN_00184e64(0x57d8ffff);
  FUN_0017ffa8(2,0xb,temp_v2,param_2,param_3,param_4);
  FUN_00183bb0();
  return;
}

} /* extern "C" */
