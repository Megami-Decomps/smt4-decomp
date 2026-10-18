/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011db00` (_code @ 0x11db00, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0011db00_arg0 fn_0011db00_arg0;
struct fn_0011db00_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x64];
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    undefined4 field_0x70; /* +0x70 */
    undefined4 field_0x74; /* +0x74 */
    undefined4 field_0x78; /* +0x78 */
    unsigned char pad_0x7c[0x8];
    undefined4 field_0x84; /* +0x84 */
    undefined4 field_0x88; /* +0x88 */
    unsigned char pad_0x8c[0x7c];
    undefined4 field_0x108; /* +0x108 */
    unsigned char pad_0x10c[0x4];
    undefined4 field_0x110; /* +0x110 */
    undefined4 field_0x114; /* +0x114 */
    undefined4 field_0x118; /* +0x118 */
    undefined4 field_0x11c; /* +0x11c */
    undefined4 field_0x120; /* +0x120 */
    unsigned char pad_0x124[0x38];
    undefined4 field_0x15c; /* +0x15c */
    undefined1 field_0x160; /* +0x160 */
    undefined1 field_0x161; /* +0x161 */
    unsigned char pad_0x162[0x2];
    undefined4 field_0x164; /* +0x164 */
    undefined1 field_0x168; /* +0x168 */
};

extern unsigned char LAB_0011db78; /* 0x11db78 */
extern unsigned char DAT_0055a9f8; /* 0x55a9f8 */
extern unsigned char DAT_0055aa44; /* 0x55aa44 */

extern int FUN_00120424(int);
extern int FUN_002e9300(unsigned int *, unsigned char *);
extern unsigned int *FUN_002eca10(fn_0011db00_arg0 *, unsigned int, unsigned int *);
extern int FUN_002ed912(int);
extern int FUN_002fafd8(int, unsigned int);


void FUN_0011db00(fn_0011db00_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4
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
  puVar1[0x1e] = 0;
  *puVar1 = (unsigned int)&DAT_0055a9f8;
  puVar1[0x1a] = (unsigned int)&DAT_0055aa44;
  temp_v0 = FUN_002e9300(puVar1 + 0x1f,&LAB_0011db78);
  *(unsigned int *)(temp_v0 + 8) = 0;
  *(unsigned int *)(temp_v0 + 0xc) = 0;
  temp_v0 = FUN_002fafd8(temp_v0 + 0x14,0);
  *(unsigned int *)(temp_v0 + 0x80) = 0;
  *(unsigned int *)(temp_v0 + 0x78) = 0;
  *(unsigned int *)(temp_v0 + 0x88) = 0;
  *(unsigned int *)(temp_v0 + 0x8c) = 0;
  *(unsigned int *)(temp_v0 + 0x90) = 0;
  *(unsigned int *)(temp_v0 + 0x84) = 0;
  temp_v0 = FUN_00120424(temp_v0 + 0x94);
  temp_v0 = FUN_002ed912(temp_v0 + 0x2c);
  *(unsigned int *)(temp_v0 + 0xc) = 0;
  *(unsigned char *)(temp_v0 + 0x10) = 0;
  *(unsigned char *)(temp_v0 + 0x11) = 0;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  *(unsigned char *)(temp_v0 + 0x18) = 0;
  return;
}
