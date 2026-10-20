/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010c470` (_code @ 0x10c470, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002eb164(...);

typedef struct fn_0010c470_arg1 fn_0010c470_arg1;
struct fn_0010c470_arg1 {
    unsigned char pad_0x0[0x10];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x14];
    byte field_0x25; /* +0x25 */
    byte field_0x26; /* +0x26 */
    unsigned char pad_0x27[0x15];
    ushort field_0x3c; /* +0x3c */
    unsigned char pad_0x3e[0x27];
    unsigned char field_0x65; /* +0x65 */
    unsigned char pad_0x66[0x6];
    undefined1 field_0x6c; /* +0x6c */
    undefined1 field_0x6d; /* +0x6d */
    undefined2 field_0x6e; /* +0x6e */
    undefined1 field_0x70; /* +0x70 */
    undefined1 field_0x71; /* +0x71 */
    undefined2 field_0x72; /* +0x72 */
};

/* stack frame of param_4: 2 slot(s), 3 byte(s) */
typedef struct {
    unsigned char sp10; /* 0x10: local_10 */
    unsigned short sp14; /* 0x14: local_14 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_002eb164. */


void FUN_0010c470(unsigned int param_1,fn_0010c470_arg1 *param_2,unsigned int param_3,unsigned int param_4
                 )

{
/* irregular: 1 native warning(s); review required */
  fn_0010c470_arg1 *pfStack_18;
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  param_2->field_0x6c = param_2->field_0x25;
  temp_v1 = romwright_piece_3_1((int)((unsigned int)param_4 >> 8),param_2->field_0x26);
  param_2->field_0x6d = param_2->field_0x26;
  param_2->field_0x6e = param_2->field_0x3c;
  param_2->field_0x70 = param_2->field_0x65;
  param_2->field_0x71 = param_2[1].field_0x10;
  pfStack_18 = param_2;
  temp_v0 = param_3;
  FUN_002eb164(&pfStack_18);
  param_2->field_0x72 = (unsigned short)temp_v0;
  return;
}

} /* extern "C" */
