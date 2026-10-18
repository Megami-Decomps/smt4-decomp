/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012b20c` (_code @ 0x12b20c, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0012b20c_arg0 fn_0012b20c_arg0;
struct fn_0012b20c_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x64];
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    undefined4 field_0x70; /* +0x70 */
    undefined4 field_0x74; /* +0x74 */
    unsigned char pad_0x78[0x4];
    undefined4 field_0x7c; /* +0x7c */
    undefined4 field_0x80; /* +0x80 */
    undefined4 field_0x84; /* +0x84 */
    undefined4 field_0x88; /* +0x88 */
    undefined4 field_0x8c; /* +0x8c */
    undefined4 field_0x90; /* +0x90 */
    unsigned char pad_0x94[0x124];
    undefined4 field_0x1b8; /* +0x1b8 */
    undefined4 field_0x1bc; /* +0x1bc */
    undefined1 field_0x1c0; /* +0x1c0 */
    unsigned char pad_0x1c1[0x3];
    undefined4 field_0x1c4; /* +0x1c4 */
    undefined4 field_0x1c8; /* +0x1c8 */
    undefined1 field_0x1cc; /* +0x1cc */
    undefined1 field_0x1cd; /* +0x1cd */
    undefined1 field_0x1ce; /* +0x1ce */
};

extern unsigned char DAT_00559c78; /* 0x559c78 */
extern unsigned char DAT_00559cc4; /* 0x559cc4 */

extern int FUN_001145e4(int);
extern unsigned int *FUN_002eca10(fn_0012b20c_arg0 *, unsigned int, unsigned int *);
extern int FUN_002fafd8(unsigned int *, unsigned int);
extern int FUN_0030c9cc(int);
extern int FUN_0030ca9c(int);


void FUN_0012b20c(fn_0012b20c_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4
                 )

{
  unsigned int *puVar1;
  int temp_v0;
  int uStack_10;
  
  uStack_10 = param_4;
  puVar1 = (unsigned int *)FUN_002eca10(param_1,2,(unsigned int *)&uStack_10);
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *puVar1 = (unsigned int)&DAT_00559c78;
  puVar1[0x1a] = (unsigned int)&DAT_00559cc4;
  *(unsigned char *)(puVar1 + 0x1e) = 1;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  temp_v0 = FUN_002fafd8(puVar1 + 0x26,0);
  temp_v0 = FUN_0030c9cc(temp_v0 + 0x78);
  temp_v0 = FUN_001145e4(temp_v0 + 0x40);
  temp_v0 = FUN_0030ca9c(temp_v0 + 0x38);
  *(unsigned int *)(temp_v0 + 0x30) = 0;
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  *(unsigned char *)(temp_v0 + 0x38) = 0;
  *(unsigned int *)(temp_v0 + 0x3c) = 0;
  *(unsigned int *)(temp_v0 + 0x40) = 0;
  *(unsigned char *)(temp_v0 + 0x44) = 0;
  *(unsigned char *)(temp_v0 + 0x45) = 0;
  *(unsigned char *)(temp_v0 + 0x46) = 1;
  return;
}
