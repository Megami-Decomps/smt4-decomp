/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011ccfc` (_code @ 0x11ccfc, 0x8a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003110a4(unsigned int *, unsigned int, unsigned int);

typedef struct fn_0011ccfc_arg0 fn_0011ccfc_arg0;
struct fn_0011ccfc_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x30];
    undefined4 field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x14];
    undefined4 field_0x4c; /* +0x4c */
    unsigned char pad_0x50[0x13c];
    undefined4 field_0x18c; /* +0x18c */
    undefined4 field_0x190; /* +0x190 */
    unsigned char pad_0x194[0x88];
    undefined4 field_0x21c; /* +0x21c */
    undefined4 field_0x220; /* +0x220 */
};

/* stack frame of param_9: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_9_stack;

extern unsigned char DAT_0055a934; /* 0x55a934 */
extern unsigned int DAT_00594a2c; /* 0x594a2c */
extern unsigned int DAT_00594a44; /* 0x594a44 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_002e760a(unsigned int);
extern unsigned int FUN_002e7614(int, unsigned int);
extern unsigned int *FUN_002f8574(fn_0011ccfc_arg0 *, unsigned int);
extern unsigned int FUN_00311092(unsigned int);
/* Supplied declaration required: FUN_003110a4. */


unsigned long long
FUN_0011ccfc(fn_0011ccfc_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
            unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8,
            unsigned int param_9)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  puVar1 = (unsigned int *)FUN_002f8574(param_1,param_2);
  *puVar1 = (unsigned int)&DAT_0055a934;
  puVar1 = puVar1 + 0x52;
  FUN_003110a4(puVar1,param_9,DAT_00594a44);
  puVar1 = puVar1 + 0x24;
  FUN_003110a4(puVar1,param_9,DAT_00594a44);
  puVar1[0x24] = param_6;
  puVar1[0x23] = param_5;
  puVar1[0x25] = param_8;
  temp_v2 = puVar1[-0x69];
  temp_v0 = FUN_00311092(puVar1[-99]);
  puVar1[-0x12] = temp_v2;
  puVar1[-0x13] = temp_v0;
  temp_v2 = puVar1[-0x69];
  temp_v0 = FUN_00311092(puVar1[-99]);
  puVar1[0x12] = temp_v2;
  puVar1[0x11] = temp_v0;
  temp_v1 = FUN_002e760a(0x20);
  temp_v0 = 0;
  if (temp_v1 != 0) {
    temp_v0 = FUN_002e7614(temp_v1,puVar1[-0x69]);
  }
  puVar1[-1] = temp_v0;
  puVar1[0x21] = DAT_00594a2c;
  return romwright_piece_4_4(param_7,puVar1 + -0x76);
}

} /* extern "C" */
