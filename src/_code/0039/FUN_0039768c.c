/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039768c` (_code @ 0x39768c, 0xa4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0039768c_arg0 fn_0039768c_arg0;
struct fn_0039768c_arg0 {
    unsigned char pad_0x0[0x1];
    byte field_0x1; /* +0x1 */
    unsigned char pad_0x2[0xa];
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0xa0];
    unsigned char field_0xb0; /* +0xb0 */
    unsigned char pad_0xb1[0x3];
    unsigned char field_0xb4; /* +0xb4 */
    unsigned char pad_0xb5[0x3];
    unsigned char field_0xb8; /* +0xb8 */
    unsigned char pad_0xb9[0x3];
    unsigned char field_0xbc; /* +0xbc */
    unsigned char pad_0xbd[0x3];
    unsigned char field_0xc0; /* +0xc0 */
    unsigned char pad_0xc1[0x1];
    unsigned char field_0xc2; /* +0xc2 */
    unsigned char pad_0xc3[0x3];
    unsigned char field_0xc6; /* +0xc6 */
    unsigned char pad_0xc7[0x3];
    unsigned char field_0xca; /* +0xca */
    unsigned char pad_0xcb[0x3];
    unsigned char field_0xce; /* +0xce */
    unsigned char pad_0xcf[0x3];
    unsigned char field_0xd2; /* +0xd2 */
    unsigned char pad_0xd3[0x581];
    unsigned char field_0x654; /* +0x654 */
    unsigned char pad_0x655[0x3];
    char field_0x658; /* +0x658 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_0019dfbc(unsigned int);
extern int FUN_00220bf8(void);
/* Supplied declaration required: FUN_002638fc. */
/* Supplied declaration required: FUN_00297178. */
/* Supplied declaration required: FUN_002971e4. */
extern int FUN_00297674(void);
extern int FUN_002a0f88(void);


void FUN_0039768c(fn_0039768c_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  if (param_1->field_0x658 != '\0') {
    temp_v0 = FUN_00220bf8();
    if (temp_v0 != 0) {
      FUN_002638fc(0);
    }
    temp_v0 = FUN_0019dfbc(*(unsigned int *)&param_1->field_0x654);
    if (temp_v0 == 2) {
      temp_v0 = FUN_00297674();
      if (temp_v0 != 0) {
        *(unsigned int *)&param_1->field_0xb0 = *(unsigned int *)&param_1->field_0xc2;
        *(unsigned int *)&param_1->field_0xb4 = *(unsigned int *)&param_1->field_0xc6;
        *(unsigned int *)&param_1->field_0xb8 = *(unsigned int *)&param_1->field_0xca;
        *(unsigned int *)&param_1->field_0xbc = *(unsigned int *)&param_1->field_0xce;
        *(unsigned short *)&param_1->field_0xc0 = *(unsigned short *)&param_1->field_0xd2;
      }
      FUN_00297178(param_1,2);
      return;
    }
  }
  else {
    temp_v0 = FUN_002a0f88();
    if (temp_v0 != 0) {
      FUN_002971e4(*(unsigned int *)&param_1->field_0x654,3);
      param_1->field_0x658 = '\x01';
    }
  }
  return;
}
