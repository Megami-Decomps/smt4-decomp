/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001214f8` (_code @ 0x1214f8, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001214f8_arg0 fn_001214f8_arg0;
struct fn_001214f8_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x5];
    undefined1 field_0x9; /* +0x9 */
    unsigned char pad_0xa[0x22];
    undefined4 field_0x2c; /* +0x2c */
    undefined4 field_0x30; /* +0x30 */
};

extern unsigned char DAT_0055b00c; /* 0x55b00c */

extern unsigned int *FUN_002e9f80(fn_001214f8_arg0 *);
/* Supplied declaration required: FUN_002ecbdc. */
extern int FUN_002ece14(unsigned int *, unsigned int);
extern int FUN_00303146(int, unsigned int);


void FUN_001214f8(fn_001214f8_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4
                 ,unsigned int param_5,unsigned int param_6)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002e9f80(param_1);
  *puVar1 = (unsigned int)&DAT_0055b00c;
  temp_v0 = FUN_002ece14(puVar1 + 3,param_2);
  *(unsigned int *)(temp_v0 + 0x24) = param_4;
  *(unsigned int *)(temp_v0 + 0x20) = param_3;
  temp_v0 = temp_v0 + 0x28;
  FUN_002ecbdc(temp_v0,param_5);
  temp_v0 = FUN_00303146(temp_v0 + 0x1c,param_6);
  *(unsigned char *)(temp_v0 - 0x47) = 1;
  return;
}
