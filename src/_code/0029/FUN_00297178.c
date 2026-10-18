/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00297178` (_code @ 0x297178, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00297178_arg0 fn_00297178_arg0;
struct fn_00297178_arg0 {
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

/* Supplied declaration required: FUN_0023282c. */
extern fn_00297178_arg0 *FUN_00297128(void);
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002c4b30. */


int FUN_00297178(fn_00297178_arg0 *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  fn_00297178_arg0 *pfVar3;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  param_1->field_0xc = 0;
  temp_v0 = param_1->field_0x1;
  param_1->field_0x1 = (unsigned char)param_2;
  if (param_2 != 2) {
    pfVar3 = param_1;
    if (param_2 == 4 || param_2 == 5) {
      pfVar3 = (fn_00297178_arg0 *)FUN_00297128();
      param_1->field_0x658 = 0;
    }
    return (int)pfVar3;
  }
  FUN_0023282c();
  if (temp_v0 != 4 && temp_v0 != 5) {
    FUN_002b8b78(*(unsigned short *)&param_1[1].field_0x2e4 & 0xff);
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
  FUN_002c4b30(temp_v2 + 0x3c,0x70);
  *(unsigned int *)(temp_v2 + 200) = 0;
  *(unsigned int *)(temp_v2 + 0xcc) = 0;
  *(unsigned int *)(temp_v2 + 0xd0) = 0;
  return 1;
}
