/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00340edc` (_code @ 0x340edc, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00317534(...);

typedef struct fn_00340edc_arg0 fn_00340edc_arg0;
struct fn_00340edc_arg0 {
    void *field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x4c];
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
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern int FUN_003174bc(void);
/* Supplied declaration required: FUN_00317534. */


void FUN_00340edc(fn_00340edc_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4
                 )

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  int temp_v0;
  unsigned int in_s0;
  
  temp_v0 = FUN_003174bc();
  if (temp_v0 != 0) {
    *(unsigned int *)(temp_v0 + 0x20c) = in_s0;
    *(unsigned int *)(temp_v0 + 0x210) = param_3;
    *(unsigned char *)(temp_v0 + 4) = 4;
    *(unsigned int *)(temp_v0 + 0x214) = param_4;
    FUN_00317534(param_1);
    return;
  }
  return;
}

} /* extern "C" */
