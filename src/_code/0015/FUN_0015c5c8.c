/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015c5c8` (_code @ 0x15c5c8, 0xf4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0015c5c8_arg0 fn_0015c5c8_arg0;
struct fn_0015c5c8_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    int field_0x10; /* +0x10 */
    void *field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x4];
    int field_0x1c; /* +0x1c */
    int field_0x20; /* +0x20 */
};

typedef int romwright_code();
/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

extern int FUN_0015d944(int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0015dadc. */
/* Supplied declaration required: FUN_002b4ddc. */
/* Supplied declaration required: FUN_002b4e44. */


int FUN_0015c5c8(fn_0015c5c8_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                unsigned int param_5)

{
/* irregular: 3 native warning(s); review required */
  void *pvVar1;
  int temp_v0;
  int temp_v1;
  romwright_code *pcVar4;
  int temp_v2;
  unsigned int temp_v3;
  
  if (param_1->field_0x10 <= param_1->field_0x1c - param_1->field_0x20) {
    if (param_1->field_0x4 != 0) {
      pvVar1 = param_1->field_0x8;
      temp_v0 = (int)pvVar1 - 0x58;
      if (*(int *)((int)pvVar1 - 0x18) <= (int)param_3) {
        temp_v2 = *(int *)((int)pvVar1 - 0x50);
        pcVar4 = *(romwright_code **)((int)pvVar1 - 0x4c);
        temp_v3 = *(unsigned int *)((int)pvVar1 - 0x48);
        FUN_002b4e44(temp_v0);
        FUN_002b4ddc(temp_v0);
        if (pcVar4 != (romwright_code *)0x0) {
          (*pcVar4)(temp_v0,2,temp_v3);
        }
        if (temp_v2 == 0) {
          return 0;
        }
      }
      else {
        return 0;
      }
    }
    else {
      return 0;
    }
  }
  pvVar1 = param_1->field_0x14;
  temp_v1 = (int)pvVar1 - 0x58;
  temp_v2 = FUN_0015d944(temp_v1,param_2,param_3,param_4,param_5);
  temp_v0 = 0;
  if (temp_v2 != 0) {
    *(unsigned int *)((int)pvVar1 - 0x18) = param_3 & 0xff;
    FUN_0015dadc(param_1,temp_v1);
    temp_v0 = temp_v1;
  }
  return temp_v0;
}
