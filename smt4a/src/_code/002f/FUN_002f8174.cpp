/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f8174` (_code @ 0x2f8174, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f5940(void);

typedef struct fn_002f8174_arg0 fn_002f8174_arg0;
struct fn_002f8174_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x64];
    undefined4 field_0x68; /* +0x68 */
    unsigned char pad_0x6c[0xc];
    undefined4 field_0x78; /* +0x78 */
    unsigned char pad_0x7c[0x30];
    undefined4 field_0xac; /* +0xac */
    undefined4 field_0xb0; /* +0xb0 */
    undefined4 field_0xb4; /* +0xb4 */
    undefined4 field_0xb8; /* +0xb8 */
};

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

extern unsigned char DAT_00558e44; /* 0x558e44 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int _ZN12OnlineResultC1ERKj(unsigned int *, unsigned int *);
extern unsigned int *FUN_002eca10(fn_002f8174_arg0 *, unsigned int, unsigned int *);
extern int FUN_002f5928(int, unsigned int);
/* Supplied declaration required: FUN_002f5940. */


unsigned long long
FUN_002f8174(fn_002f8174_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
            unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int uStack_1c;
  unsigned int uStack_18;
  
  temp_v2 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  puVar1 = (unsigned int *)FUN_002eca10(param_1,0,(unsigned int *)&uStack_1c);
  temp_v1 = 0;
  puVar1[0x1a] = 0;
  *puVar1 = (unsigned int)&DAT_00558e44;
  temp_v2 = 0x80010001;
  temp_v0 = _ZN12OnlineResultC1ERKj(puVar1 + 0x1b,(unsigned int *)&temp_v2);
  *(unsigned int *)(temp_v0 + 0xc) = temp_v1;
  temp_v0 = FUN_002f5928(temp_v0 + 0x10,1);
  *(unsigned int *)(temp_v0 + 0x34) = param_3;
  *(unsigned int *)(temp_v0 + 0x30) = param_2;
  *(unsigned int *)(temp_v0 + 0x38) = param_4;
  *(unsigned int *)(temp_v0 + 0x3c) = param_5;
  FUN_002f5940();
  return romwright_piece_4_4(temp_v2,temp_v0 - 0x7c);
}

} /* extern "C" */
