/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022a594` (_code @ 0x22a594, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0022a594_arg0 fn_0022a594_arg0;
struct fn_0022a594_arg0 {
    void *field_0x0; /* +0x0 */
    undefined1 field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x4b];
    undefined4 field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    undefined4 field_0x58; /* +0x58 */
    undefined4 field_0x5c; /* +0x5c */
    unsigned char pad_0x60[0x8];
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    unsigned char pad_0x70[0xc];
    undefined4 field_0x7c; /* +0x7c */
    undefined4 field_0x80; /* +0x80 */
    unsigned char pad_0x84[0x184];
    undefined4 field_0x208; /* +0x208 */
    unsigned char pad_0x20c[0x4];
    undefined4 field_0x210; /* +0x210 */
    undefined4 field_0x214; /* +0x214 */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern int FUN_00254ff0(void);
/* Supplied declaration required: FUN_00259d88. */


void FUN_0022a594(fn_0022a594_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00254ff0();
  if (temp_v0 != 0) {
    *(unsigned char *)(temp_v0 + 4) = 2;
    *(unsigned int *)(temp_v0 + 0x208) = param_3;
    *(unsigned int *)(temp_v0 + 0x210) = 0;
    *(unsigned int *)(temp_v0 + 0x214) = 1;
    FUN_00259d88(param_1);
    return;
  }
  return;
}
