/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00107724` (_code @ 0x107724, 0x5a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00107724_arg0 fn_00107724_arg0;
struct fn_00107724_arg0 {
    void *field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x4];
    byte field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x5b];
    undefined4 field_0x64; /* +0x64 */
    unsigned char pad_0x68[0xe4];
    byte field_0x14c; /* +0x14c */
    unsigned char pad_0x14d[0x3];
    uint field_0x150; /* +0x150 */
};

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned char DAT_00538904; /* 0x538904 */

extern int *FUN_002e4e86(unsigned int *, unsigned char *);
/* Supplied declaration required: FUN_002ea704. */


int FUN_00107724(fn_00107724_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = param_4;
  temp_v0 = FUN_002ea704();
  temp_v1 = *(int *)(temp_v0 + 100);
  temp_v2 = temp_v1 - 0x40;
  piVar2 = (int *)FUN_002ea704();
  temp_v0 = (**(romwright_code **)(*piVar2 + 0x2c))();
  if (*(char *)(temp_v0 + 8) != '\0') {
    temp_v3 = 0x24;
    piVar2 = (int *)FUN_002e4e86((unsigned int *)&temp_v3,&DAT_00538904);
    temp_v2 = temp_v2 - *piVar2;
  }
  else {
    piVar2 = (int *)FUN_002ea704();
    temp_v0 = (**(romwright_code **)(*piVar2 + 0x28))();
    if (((*(char *)(temp_v0 + 4) != '\0') || (param_1->field_0x14c == 0)) ||
       ((param_1->field_0x14c == 1 && ((param_1->field_0x150 & 0xff) == 0)))) {
      temp_v2 = temp_v1 - 100;
    }
  }
  return temp_v2;
}
