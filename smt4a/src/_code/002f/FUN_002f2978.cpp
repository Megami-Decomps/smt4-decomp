/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2978` (_code @ 0x2f2978, 0xaa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineSockAddrCopy(unsigned int *, unsigned int);
int FUN_00310040(...);

typedef struct fn_002f2978_arg0 fn_002f2978_arg0;
struct fn_002f2978_arg0 {
    void *field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x28];
    unsigned char field_0x2c; /* +0x2c */
    unsigned char pad_0x2d[0xf];
    void *field_0x3c; /* +0x3c */
    byte field_0x40; /* +0x40 */
    byte field_0x41; /* +0x41 */
};

typedef int romwright_code(...);
/* stack frame of param_5: 6 slot(s), 22 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned short sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_5_stack;

/* Supplied declaration required: onlineSockAddrCopy. */
/* Supplied declaration required: FUN_00310040. */


unsigned int
FUN_002f2978(fn_002f2978_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
            unsigned int *param_5)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar5;
  romwright_code *pcVar6;
  unsigned int temp_v3;
  unsigned short temp_v4;
  unsigned int temp_v5 [2];
  fn_002f2978_arg0 *pfStack_24;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int uStack_18;
  
  pfStack_24 = param_1;
  temp_v6 = param_2;
  temp_v7 = param_3;
  uStack_18 = param_4;
  if (param_1->field_0x41 == 0) {
    FUN_00310040(param_1,4,param_5);
    return 0xffffffff;
  }
  if (param_1->field_0x40 != 0) {
    param_5[0xf] = (unsigned int)param_1;
    *(unsigned char *)((int)param_5 + 0x35) = 2;
    *param_5 = param_2;
    param_5[1] = param_3;
    onlineSockAddrCopy(param_5 + 4,param_4);
    param_5[2] = 0;
    piVar1 = (int *)param_1->field_0x3c;
    if (piVar1 == (int *)0x0) {
      return 0xffffffff;
    }
    temp_v5[0] = 0;
    if (param_1->field_0x2c != '\0') {
      temp_v0 = param_5[6];
      temp_v3 = (temp_v0 << 0x18) | (((temp_v0 >> 8) & 0xff) << 0x10) | (((temp_v0 >> 0x10) & 0xff) << 8)
                 | (temp_v0 >> 0x18);
      temp_v4 = (*(unsigned short *)((int)param_5 + 0x16) << 8) | (*(unsigned short *)((int)param_5 + 0x16) >> 8);
      puVar5 = &temp_v3;
      piVar1 = (int *)param_1->field_0x3c;
      pcVar6 = *(romwright_code **)(*piVar1 + 0x10);
    }
    else {
      puVar5 = temp_v5;
      pcVar6 = *(romwright_code **)(*piVar1 + 0x20);
    }
    temp_v1 = (*pcVar6)(piVar1,temp_v6,temp_v7,puVar5);
    param_5[2] = temp_v5[0];
    temp_v2 = FUN_00310040(param_1,temp_v1,param_5);
    if (temp_v2 == 0) {
      return 0xffffffff;
    }
  }
  else {
    FUN_00310040(param_1,0,param_5);
  }
  return 0;
}

} /* extern "C" */
