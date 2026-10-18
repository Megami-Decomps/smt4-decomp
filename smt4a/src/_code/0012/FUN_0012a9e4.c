/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012a9e4` (_code @ 0x12a9e4, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0012a9e4_arg0 fn_0012a9e4_arg0;
struct fn_0012a9e4_arg0 {
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
    unsigned char pad_0x94[0xec];
    undefined4 field_0x180; /* +0x180 */
    undefined1 field_0x184; /* +0x184 */
    unsigned char pad_0x185[0x3];
    undefined4 field_0x188; /* +0x188 */
    undefined4 field_0x18c; /* +0x18c */
    undefined1 field_0x190; /* +0x190 */
    undefined1 field_0x191; /* +0x191 */
    undefined1 field_0x192; /* +0x192 */
};

extern unsigned char DAT_00559c0c; /* 0x559c0c */
extern unsigned char DAT_00559c58; /* 0x559c58 */

extern int FUN_00115c7c(int);
extern unsigned int *FUN_002eca10(fn_0012a9e4_arg0 *, unsigned int, unsigned int *);
extern int FUN_002fafd8(unsigned int *, unsigned int);
extern int FUN_0030ca9c(int);
extern int FUN_0030cac0(int);


void FUN_0012a9e4(fn_0012a9e4_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4
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
  *puVar1 = (unsigned int)&DAT_00559c0c;
  puVar1[0x1a] = (unsigned int)&DAT_00559c58;
  *(unsigned char *)(puVar1 + 0x1e) = 1;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  temp_v0 = FUN_002fafd8(puVar1 + 0x26,0);
  temp_v0 = FUN_0030cac0(temp_v0 + 0x78);
  temp_v0 = FUN_00115c7c(temp_v0 + 0x10);
  temp_v0 = FUN_0030ca9c(temp_v0 + 0x2c);
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
