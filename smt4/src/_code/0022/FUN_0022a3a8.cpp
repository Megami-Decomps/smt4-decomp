#include "romwright_types.h"

extern "C" {

int FUN_00259b50(...);

typedef struct fn_0022a3a8_arg0 fn_0022a3a8_arg0;
struct fn_0022a3a8_arg0 {
    void *field_0x0; /* +0x0 */
    undefined1 field_0x4; /* +0x4 */
    undefined1 field_0x5; /* +0x5 */
    unsigned char pad_0x6[0x4a];
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
    unsigned char pad_0x84[0x18c];
    undefined4 field_0x210; /* +0x210 */
    undefined4 field_0x214; /* +0x214 */
};

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_6_stack;

extern int FUN_00254db0(void);
/* Supplied declaration required: FUN_00259b50. */


void FUN_0022a3a8(fn_0022a3a8_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4
                 ,unsigned int param_5,unsigned char param_6)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00254db0();
  if (temp_v0 != 0) {
    *(unsigned int *)(temp_v0 + 0x208) = param_3;
    *(unsigned char *)(temp_v0 + 4) = 3;
    *(unsigned int *)(temp_v0 + 0x210) = param_4;
    *(unsigned int *)(temp_v0 + 0x214) = param_5;
    *(unsigned char *)(temp_v0 + 5) = param_6;
    FUN_00259b50(param_1);
    return;
  }
  return;
}

} /* extern "C" */
