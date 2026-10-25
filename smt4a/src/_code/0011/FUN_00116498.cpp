/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00116498` (_code @ 0x116498, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_strcpy(unsigned int, unsigned int);
int _ZN9Obj55aff4aSERKS_(int, unsigned int);
int FUN_002ea3d0(int, unsigned int);
int FUN_002eca44(unsigned int *);

typedef struct fn_00116498_arg0 fn_00116498_arg0;
struct fn_00116498_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x64];
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    unsigned char pad_0x70[0x88];
    undefined4 field_0xf8; /* +0xf8 */
    undefined4 field_0xfc; /* +0xfc */
    undefined4 field_0x100; /* +0x100 */
    undefined4 field_0x104; /* +0x104 */
    undefined4 field_0x108; /* +0x108 */
};

extern unsigned char LAB_0011653c; /* 0x11653c */
extern unsigned char DAT_00559ce4; /* 0x559ce4 */

extern int libc_strlen(unsigned int);
/* Supplied declaration required: libc_strcpy. */
extern int strInit(int);
extern unsigned int FUN_002e784e(int, unsigned char *, unsigned int);
/* Supplied declaration required: _ZN9Obj55aff4aSERKS_. */
extern int _ZN9Obj55aff4C1Ev(int);
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
extern int FUN_002ec75c(unsigned int *);
extern unsigned int *FUN_002eca10(fn_00116498_arg0 *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002eca44. */
extern int FUN_002fafd8(int, unsigned int);


int FUN_00116498(fn_00116498_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8,
                unsigned int param_9,unsigned int param_10)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [16];
  unsigned char temp_v4 [4];
  
  puVar1 = (unsigned int *)FUN_002eca10(param_1,2,temp_v4);
  *puVar1 = (unsigned int)&DAT_00559ce4;
  puVar1 = puVar1 + 0x1e;
  FUN_002eca44(puVar1);
  temp_v0 = FUN_002ec75c(puVar1 + 0x18);
  temp_v0 = _ZN9Obj55aff4C1Ev(temp_v0 + 0x18);
  temp_v0 = FUN_002fafd8(temp_v0 + 0x20,0);
  temp_v0 = strInit(temp_v0 + 0x78);
  *(unsigned int *)(temp_v0 - 0x11c) = param_3;
  *(unsigned int *)(temp_v0 - 0x120) = param_2;
  _ZN9Obj55aff4aSERKS_(temp_v0 - 0x98,param_5);
  temp_v1 = libc_strlen(param_6);
  temp_v2 = FUN_002e784e(temp_v1 + 1,&LAB_0011653c,0);
  *(unsigned int *)(temp_v0 - 0x90) = temp_v2;
  libc_strcpy(temp_v2,param_6);
  *(unsigned int *)(temp_v0 - 0x8c) = param_7;
  *(unsigned int *)(temp_v0 + 0x20) = param_4;
  *(unsigned int *)(temp_v0 - 0x88) = param_9;
  *(unsigned int *)(temp_v0 - 0x84) = param_8;
  *(unsigned int *)(temp_v0 - 0x80) = param_10;
  temp_v2 = FUN_002ea3c0(temp_v3,0x116255,0,&LAB_0011653c);
  FUN_002ea3d0(temp_v0 - 0x188,temp_v2);
  *(unsigned char *)(temp_v0 - 0x150) = 0;
  return temp_v0 - 0x188;
}

} /* extern "C" */
