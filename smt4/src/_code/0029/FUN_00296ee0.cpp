/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00296ee0` (_code @ 0x296ee0, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00232698(void);
int FUN_002b8838(int);
int FUN_002c4938(int, int);

typedef struct fn_00296ee0_arg0 fn_00296ee0_arg0;
struct fn_00296ee0_arg0 {
    unsigned char pad_0x0[0x1];
    byte field_0x1; /* +0x1 */
    unsigned char pad_0x2[0xa];
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x2d4];
    unsigned char field_0x2e4; /* +0x2e4 */
    unsigned char pad_0x2e5[0x36f];
    unsigned char field_0x654; /* +0x654 */
    unsigned char pad_0x655[0x3];
    undefined1 field_0x658; /* +0x658 */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_00232698. */
extern fn_00296ee0_arg0 *FUN_00296e90(void);
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: FUN_002c4938. */


int FUN_00296ee0(fn_00296ee0_arg0 *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  fn_00296ee0_arg0 *pfVar3;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  param_1->field_0xc = 0;
  temp_v0 = param_1->field_0x1;
  param_1->field_0x1 = (unsigned char)param_2;
  if (param_2 != 2) {
    pfVar3 = param_1;
    if (param_2 == 4 || param_2 == 5) {
      pfVar3 = (fn_00296ee0_arg0 *)FUN_00296e90();
      param_1->field_0x658 = 0;
    }
    return (int)pfVar3;
  }
  FUN_00232698();
  if (temp_v0 != 4 && temp_v0 != 5) {
    FUN_002b8838(*(unsigned short *)&param_1[1].field_0x2e4 & 0xff);
  }
  temp_v2 = *(int *)&param_1->field_0x654;
  if (*(int *)(*(int *)(temp_v2 + 0xb0) + 8) < 1) {
    return 0;
  }
  for (temp_v3 = 0; temp_v1 = *(char *)(*(int *)(temp_v2 + 0xb4) + temp_v3),
      *(char *)(temp_v2 + temp_v3) = temp_v1, temp_v1 != '\0'; temp_v3 = temp_v3 + 1) {
  }
  temp_v4 = *(unsigned int *)(*(int *)(temp_v2 + 0xb4) + 0x18);
  *(unsigned int *)(temp_v2 + 0x1c) = 0;
  *(unsigned int *)(temp_v2 + 0x20) = 0;
  *(unsigned int *)(temp_v2 + 0x24) = 0;
  *(unsigned int *)(temp_v2 + 0x28) = 0;
  *(unsigned int *)(temp_v2 + 0x2c) = 0;
  *(unsigned int *)(temp_v2 + 0x30) = 0;
  *(unsigned int *)(temp_v2 + 0x34) = 0;
  *(unsigned int *)(temp_v2 + 0x18) = temp_v4;
  *(unsigned int *)(temp_v2 + 0x38) = 0;
  FUN_002c4938(temp_v2 + 0x3c,0x70);
  *(unsigned int *)(temp_v2 + 200) = 0;
  *(unsigned int *)(temp_v2 + 0xcc) = 0;
  *(unsigned int *)(temp_v2 + 0xd0) = 0;
  return 1;
}

} /* extern "C" */
