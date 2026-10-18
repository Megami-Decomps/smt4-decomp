/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011e0d4` (_code @ 0x11e0d4, 0x8a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0011e0d4_arg0 fn_0011e0d4_arg0;
struct fn_0011e0d4_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x64];
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    unsigned char pad_0x70[0x80];
    undefined4 field_0xf0; /* +0xf0 */
    undefined4 field_0xf4; /* +0xf4 */
    undefined4 field_0xf8; /* +0xf8 */
    unsigned char pad_0xfc[0x9c];
    undefined4 field_0x198; /* +0x198 */
};

extern unsigned char LAB_0011e164; /* 0x11e164 */
extern unsigned char DAT_0055aaa0; /* 0x55aaa0 */

extern int FUN_002e3390(unsigned int);
/* Supplied declaration required: FUN_002e342c. */
extern int FUN_002e7634(int);
extern unsigned int FUN_002e784e(int, unsigned char *, unsigned int);
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
extern int FUN_002ec75c(unsigned int *);
extern unsigned int *FUN_002eca10(fn_0011e0d4_arg0 *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002eca44. */
extern int FUN_002fafd8(int, unsigned int);


int FUN_0011e0d4(fn_0011e0d4_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [16];
  unsigned char temp_v4 [4];
  
  puVar1 = (unsigned int *)FUN_002eca10(param_1,2,temp_v4);
  *puVar1 = (unsigned int)&DAT_0055aaa0;
  puVar1 = puVar1 + 0x1e;
  FUN_002eca44(puVar1);
  temp_v0 = FUN_002ec75c(puVar1 + 0x18);
  *(unsigned int *)(temp_v0 + 0x24) = param_8;
  temp_v0 = FUN_002fafd8(temp_v0 + 0x28,0);
  temp_v0 = FUN_002e7634(temp_v0 + 0x78);
  *(unsigned int *)(temp_v0 - 0x10c) = param_3;
  *(unsigned int *)(temp_v0 - 0x110) = param_2;
  *(unsigned int *)(temp_v0 - 0x84) = param_6;
  *(unsigned int *)(temp_v0 - 0x80) = param_7;
  *(unsigned int *)(temp_v0 + 0x20) = param_4;
  temp_v1 = FUN_002e3390(param_5);
  temp_v2 = FUN_002e784e(temp_v1 + 1,&LAB_0011e164,0);
  *(unsigned int *)(temp_v0 - 0x88) = temp_v2;
  FUN_002e342c(temp_v2,param_5);
  temp_v2 = FUN_002ea3c0(temp_v3,0x11def1,0,&LAB_0011e164);
  FUN_002ea3d0(temp_v0 - 0x178,temp_v2);
  return temp_v0 - 0x178;
}
