/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004abba8` (_code @ 0x4abba8, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b24dc(int);
int FUN_002fb4b8(int);
int FUN_0034ee5c(int, unsigned int, int);

typedef struct fn_004abba8_arg0 fn_004abba8_arg0;
struct fn_004abba8_arg0 {
    unsigned char pad_0x0[0x387c];
    undefined4 field_0x387c; /* +0x387c */
    undefined4 field_0x3880; /* +0x3880 */
    unsigned char pad_0x3884[0xc];
    undefined4 field_0x3890; /* +0x3890 */
    unsigned char pad_0x3894[0x3ac];
    undefined4 field_0x3c40; /* +0x3c40 */
    unsigned char pad_0x3c44[0xbc8];
    undefined2 field_0x480c; /* +0x480c */
    unsigned char pad_0x480e[0x10];
    undefined2 field_0x481e; /* +0x481e */
    undefined2 field_0x4820; /* +0x4820 */
    undefined2 field_0x4822; /* +0x4822 */
    unsigned char pad_0x4824[0xc];
    undefined2 field_0x4830; /* +0x4830 */
    unsigned char pad_0x4832[0x1e];
    undefined4 field_0x4850; /* +0x4850 */
    unsigned char pad_0x4854[0x3];
    byte field_0x4857; /* +0x4857 */
    unsigned char pad_0x4858[0x2c39];
    undefined1 field_0x7491; /* +0x7491 */
    unsigned char pad_0x7492[0x12f2];
    undefined1 field_0x8784; /* +0x8784 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_002b24dc. */
/* Supplied declaration required: FUN_002fb4b8. */
/* Supplied declaration required: FUN_0034ee5c. */


void FUN_004abba8(fn_004abba8_arg0 *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057a9c8;
  FUN_002fb4b8(DAT_0057a9c8 + 8);
  FUN_002b24dc(temp_v0 + 0x24bc);
  FUN_0034ee5c(temp_v0 + 0x28c4,param_2,0);
  return;
}

} /* extern "C" */
