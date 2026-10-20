/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a40f4` (_code @ 0x4a40f4, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001681cc(...);
int FUN_003343f0(...);
int FUN_0035d8a4(...);
int FUN_004a3e04(...);
int FUN_004a84e8(...);

typedef struct fn_004a40f4_arg0 fn_004a40f4_arg0;
struct fn_004a40f4_arg0 {
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
    unsigned char pad_0xd4[0x78c];
    byte field_0x860; /* +0x860 */
    byte field_0x861; /* +0x861 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_0057f0b4; /* 0x57f0b4 */

/* Supplied declaration required: FUN_001681cc. */
extern int FUN_0023b258(void);
extern int FUN_0026140c(void);
extern int FUN_002c7c54(void);
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: FUN_0035d8a4. */
/* Supplied declaration required: FUN_004a3e04. */
/* Supplied declaration required: FUN_004a84e8. */


void FUN_004a40f4(fn_004a40f4_arg0 *param_1)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned char *pbVar3;
  unsigned char temp_v2;
  
  temp_v1 = FUN_0023b258();
  if (temp_v1 != 0) {
    FUN_0035d8a4();
    FUN_001681cc(0x2f);
    FUN_003343f0(0);
    *(unsigned int *)&param_1->field_0x14 = 2;
    *(unsigned int *)&param_1->field_0x18 = 0;
  }
  else {
    temp_v1 = FUN_002c7c54();
    if (temp_v1 != 0x69) {
      (*(unsigned int *)((unsigned char *)&DAT_0057f0b4 + 0x4)) = 0xffffffff;
      if (*(short *)(param_1 + 1) != 0) {
        temp_v1 = FUN_0026140c();
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
        FUN_004a84e8(param_1 + 1,temp_v0);
      }
      FUN_004a3e04(param_1);
      return;
    }
  }
  return;
}

} /* extern "C" */
