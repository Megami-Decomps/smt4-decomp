/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010cbe8` (_code @ 0x10cbe8, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [20], unsigned int);
int _ZN9Obj55b28cD1Ev(unsigned char [20], int, unsigned int, unsigned int);
int onlineTimeGetNow(unsigned int *);
int SBORROW4(...);

typedef struct fn_0010cbe8_arg0 fn_0010cbe8_arg0;
struct fn_0010cbe8_arg0 {
    unsigned char pad_0x0[0x8];
    int field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    uint field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
};

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern unsigned int onlineGetActiveLock(void);
/* Supplied declaration required: onlineTimeGetNow. */


void FUN_0010cbe8(fn_0010cbe8_arg0 *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char temp_v7 [20];
  
  temp_v0 = onlineGetActiveLock();
  FUN_002e6e34(temp_v7,temp_v0);
  onlineTimeGetNow(&temp_v5);
  temp_v2 = param_1->field_0x8;
  temp_v4 = temp_v5 - param_1->field_0x10;
  temp_v1 = (temp_v6 - param_1->field_0x14) - (unsigned int)(temp_v5 < param_1->field_0x10);
  temp_v3 = (int)temp_v2 >> 0x1f;
  if ((int)((temp_v3 - temp_v1) - (unsigned int)(temp_v2 < temp_v4)) < 0 !=
      (SBORROW4(temp_v3,temp_v1) != SBORROW4(temp_v3 - temp_v1,(unsigned int)(temp_v2 < temp_v4)))) {
    param_1->field_0x10 = temp_v5;
    param_1->field_0x14 = temp_v6;
  }
  _ZN9Obj55b28cD1Ev(temp_v7,temp_v6,temp_v5,temp_v2 - temp_v4);
  return;
}

} /* extern "C" */
