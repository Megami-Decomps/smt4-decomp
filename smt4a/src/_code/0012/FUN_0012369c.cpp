/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012369c` (_code @ 0x12369c, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00103a74(unsigned int, int, unsigned int);
int _ZN12OnlineResultC1ERKj(unsigned int, unsigned int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned char LAB_00123718; /* 0x123718 */

/* Supplied declaration required: FUN_00103a74. */
/* Supplied declaration required: _ZN12OnlineResultC1ERKj. */
extern int wstrstrU16(int, unsigned char *);


void FUN_0012369c(unsigned int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int uStack_24;
  int iStack_20;
  int iStack_1c;
  unsigned int temp_v5;
  
  uStack_24 = param_1;
  iStack_20 = param_2;
  iStack_1c = param_3;
  temp_v5 = param_4;
  if (*(int *)(param_2 + 0x60) != 0) {
    if (param_3 != 0) {
      temp_v0 = wstrstrU16(*(int *)(param_2 + 0x60),&LAB_00123718);
      if ((temp_v0 != 0) && (temp_v1 = *(int *)(param_2 + 0x60), temp_v1 != temp_v0)) {
        temp_v4 = (temp_v0 - temp_v1) >> 1;
        temp_v3 = 0;
        while( 1 ) {
          if (temp_v4 <= temp_v3) {
            FUN_00103a74(param_1,param_3,temp_v5);
            return;
          }
          temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + temp_v3 * 2);
          if ((((temp_v2 - 0x41 >= 0x1a) && (temp_v2 - 0x61 >= 0x1a)) && (temp_v2 - 0x30 >= 10)) &&
             ((temp_v2 != 0x2d && (temp_v2 != 0x5f)))) break;
          temp_v3 = temp_v3 + 1;
        }
      }
      temp_v4 = 0x80050003;
    }
    else {
      temp_v4 = 0x8001000a;
    }
  }
  else {
    temp_v4 = 0x8001000c;
  }
  _ZN12OnlineResultC1ERKj(param_1,&temp_v4);
  return;
}

} /* extern "C" */
