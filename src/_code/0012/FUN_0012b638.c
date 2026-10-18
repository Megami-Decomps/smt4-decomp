/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012b638` (_code @ 0x12b638, 0xf0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0012b638_arg1 fn_0012b638_arg1;
struct fn_0012b638_arg1 {
    unsigned char pad_0x0[0xc8];
    undefined4 field_0xc8; /* +0xc8 */
    unsigned char pad_0xcc[0x14];
    int field_0xe0; /* +0xe0 */
    int field_0xe4; /* +0xe4 */
};

/* stack frame of param_2: 6 slot(s), 18 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned char sp3F; /* 0x3f: local_3f */
    unsigned char sp40; /* 0x40: local_40 */
} param_2_stack;

/* Supplied declaration required: FUN_0013c104. */
/* Supplied declaration required: FUN_0013d460. */
/* Supplied declaration required: FUN_0013d938. */


void FUN_0012b638(int *param_1,fn_0012b638_arg1 *param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int *puVar3;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int uStack_34;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  *param_1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x270;
  FUN_0013d460(param_1,param_2);
  temp_v2 = param_2->field_0xe0;
  temp_v1 = 0;
  if (temp_v1 < temp_v2) {
    do {
      if (param_2->field_0xe4 != 0) {
        temp_v0 = (int)&param_2->field_0xe4 + param_2->field_0xe4;
      }
      else {
        temp_v0 = 0;
      }
      piVar2 = (int *)(temp_v0 + temp_v1 * 4);
      temp_v0 = *piVar2;
      if (temp_v0 != 0) {
        temp_v0 = temp_v0 + (int)piVar2;
      }
      else {
        temp_v0 = 0;
      }
      if (*(int *)(temp_v0 + 0x30) != 0) {
        puVar3 = (unsigned int *)(temp_v0 + 0x30 + *(int *)(temp_v0 + 0x30));
      }
      else {
        puVar3 = (unsigned int *)0x0;
      }
      FUN_0013d938(param_1,*puVar3);
      temp_v3 = 1;
      temp_v4 = 1;
      temp_v7 = 0;
      temp_v8 = 0;
      temp_v5 = 0;
      temp_v6 = 0;
      uStack_34 = 1;
      FUN_0013c104(param_1,temp_v0,&temp_v3);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v2);
  }
  return;
}
