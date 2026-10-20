/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a836c` (_code @ 0x3a836c, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022d1a8(...);
int FUN_0022e0fc(...);
int FUN_0029e17c(...);
int FUN_002a0cc8(...);
int FUN_002b8838(...);

typedef struct fn_003a836c_arg0 fn_003a836c_arg0;
struct fn_003a836c_arg0 {
    unsigned char pad_0x0[0x14];
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x3];
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0xf];
    undefined4 field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x68];
    char field_0x94; /* +0x94 */
    unsigned char pad_0x95[0x3b];
    short field_0xd0; /* +0xd0 */
    short field_0xd2; /* +0xd2 */
    unsigned char pad_0xd4[0x4d0];
    byte field_0x5a4; /* +0x5a4 */
    byte field_0x5a5; /* +0x5a5 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_0043d9c8; /* 0x43d9c8 */

/* Supplied declaration required: FUN_0022d1a8. */
/* Supplied declaration required: FUN_0022e0fc. */
extern int FUN_0029e130(void);
/* Supplied declaration required: FUN_0029e17c. */
extern int FUN_0029e1c8(void);
/* Supplied declaration required: FUN_002a0cc8. */
extern int FUN_002a0d0c(void);
/* Supplied declaration required: FUN_002b8838. */


void FUN_003a836c(fn_003a836c_arg0 *param_1)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned char *pbVar3;
  unsigned char temp_v2;
  
  temp_v1 = FUN_0029e1c8();
  if (temp_v1 != 0) {
    FUN_0029e17c();
    FUN_002b8838(0x2d);
    FUN_002a0cc8(0);
    *(unsigned int *)&param_1->field_0x14 = 2;
    *(unsigned int *)&param_1->field_0x18 = 0;
  }
  else {
    temp_v1 = FUN_0029e130();
    if (temp_v1 != 0x4b) {
      (*(unsigned int *)((unsigned char *)&DAT_0043d9c8 + 0x4)) = 0xffffffff;
      if (*(short *)(param_1 + 1) != 0) {
        temp_v1 = FUN_002a0d0c();
        pbVar3 = (unsigned char *)(temp_v1 + 0xf);
        temp_v2 = *pbVar3 & 0x7f;
        if (temp_v2 == 1) {
          temp_v0 = '\x06';
        }
        else if (temp_v2 == 2) {
          temp_v0 = '\x04';
        }
        else if (temp_v2 == 3) {
          temp_v0 = '\x16';
        }
        else if (temp_v2 == 7) {
          temp_v0 = '\x18';
        }
        else {
          temp_v0 = '\x06';
          *pbVar3 = (*pbVar3 & 0x80) | 1;
        }
        if ((*pbVar3 & 0x80) != 0) {
          temp_v0 = temp_v0 + '\x01';
        }
        FUN_0022e0fc(param_1 + 1,temp_v0);
      }
      FUN_0022d1a8(param_1);
      return;
    }
  }
  return;
}

} /* extern "C" */
