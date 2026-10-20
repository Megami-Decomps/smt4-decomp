/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ed0dc` (_code @ 0x2ed0dc, 0x8a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(unsigned int *, int);
int FUN_002e9318(unsigned char [12]);
int FUN_00307134(unsigned int *, unsigned int);

typedef struct fn_002ed0dc_arg0 fn_002ed0dc_arg0;
struct fn_002ed0dc_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x28];
    undefined4 field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0x10];
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    void *field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    undefined1 field_0x58; /* +0x58 */
    undefined1 field_0x59; /* +0x59 */
    unsigned char pad_0x5a[0x2];
    undefined4 field_0x5c; /* +0x5c */
    undefined4 field_0x60; /* +0x60 */
    undefined4 field_0x64; /* +0x64 */
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    void *field_0x70; /* +0x70 */
    undefined4 field_0x74; /* +0x74 */
    undefined4 field_0x78; /* +0x78 */
    undefined4 field_0x7c; /* +0x7c */
};

extern unsigned char LAB_002ed16c; /* 0x2ed16c */
extern unsigned char DAT_0055a400; /* 0x55a400 */

extern int FUN_0012f32c(void);
/* Supplied declaration required: sysMemClear. */
extern unsigned int FUN_002e9300(unsigned char *, unsigned char *);
/* Supplied declaration required: FUN_002e9318. */
extern unsigned int *initVtable00558fb4(fn_002ed0dc_arg0 *, unsigned int);
extern unsigned int FUN_0030710c(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_00307134. */


unsigned int * FUN_002ed0dc(fn_002ed0dc_arg0 *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned char temp_v2 [12];
  
  puVar1 = (unsigned int *)initVtable00558fb4(param_1,1);
  *puVar1 = (unsigned int)&DAT_0055a400;
  puVar1[0x10] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  *(unsigned char *)(puVar1 + 0x16) = 0;
  *(unsigned char *)((int)puVar1 + 0x59) = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  temp_v0 = FUN_0012f32c();
  puVar1[0x14] = temp_v0;
  *(unsigned int *)(temp_v0 + 4) = 0;
  *(unsigned int *)(puVar1[0x14] + 8) = puVar1[0x14];
  *(unsigned int *)(puVar1[0x14] + 0xc) = puVar1[0x14];
  puVar3 = puVar1 + 0x18;
  puVar1[0x17] = param_2;
  sysMemClear(puVar3,0x18);
  *puVar3 = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  temp_v1 = FUN_0030710c(puVar3,1);
  puVar1[0x1c] = temp_v1;
  *(unsigned int *)temp_v1 = temp_v1;
  *(unsigned int *)(puVar1[0x1c] + 4) = puVar1[0x1c];
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0xb] = puVar1[0xb] | 8;
  temp_v1 = FUN_002e9300(temp_v2,&LAB_002ed16c);
  FUN_00307134(puVar1,temp_v1);
  FUN_002e9318(temp_v2);
  return puVar1;
}

} /* extern "C" */
