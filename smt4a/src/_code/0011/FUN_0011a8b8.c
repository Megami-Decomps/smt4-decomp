/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011a8b8` (_code @ 0x11a8b8, 0x102 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0011a8b8_arg0 fn_0011a8b8_arg0;
struct fn_0011a8b8_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x19c];
    undefined4 field_0x1a0; /* +0x1a0 */
    unsigned char pad_0x1a4[0x4];
    undefined4 field_0x1a8; /* +0x1a8 */
    undefined4 field_0x1ac; /* +0x1ac */
    undefined4 field_0x1b0; /* +0x1b0 */
    undefined4 field_0x1b4; /* +0x1b4 */
    void *field_0x1b8; /* +0x1b8 */
    undefined4 field_0x1bc; /* +0x1bc */
};

/* stack frame of param_8: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_8_stack;

extern unsigned char DAT_0055a38c; /* 0x55a38c */

extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
/* Supplied declaration required: FUN_002e9acc. */
/* Supplied declaration required: FUN_002e9afe. */
extern int FUN_002e9ff4(int);
extern int FUN_002ea974(int);
extern unsigned int *FUN_002eb77c(fn_0011a8b8_arg0 *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002eca44. */
/* Supplied declaration required: FUN_002fafd8. */
extern int FUN_002fd5d4(int, unsigned int);
extern unsigned int FUN_00306e84(unsigned int *, unsigned int);


int FUN_0011a8b8(fn_0011a8b8_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                unsigned int param_5,unsigned int param_6,unsigned int *param_7,unsigned int param_8)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int uStack_38;
  unsigned int uStack_34;
  unsigned char temp_v2 [12];
  int temp_v3;
  unsigned char temp_v4 [12];
  
  puVar1 = (unsigned int *)FUN_002eb77c(param_1,2,temp_v4);
  *puVar1 = (unsigned int)&DAT_0055a38c;
  temp_v0 = FUN_002fafd8(puVar1 + 0x10,0);
  temp_v0 = FUN_002fafd8(temp_v0 + 0x88,0);
  temp_v0 = temp_v0 + 0x78;
  FUN_002eca44();
  *(unsigned int *)(temp_v0 + 0x60) = param_2;
  *(unsigned int *)(temp_v0 + 0x68) = 0;
  *(unsigned int *)(temp_v0 + 0x6c) = 0;
  *(unsigned int *)(temp_v0 + 0x70) = 0;
  *(unsigned int *)(temp_v0 + 0x74) = 0;
  *(unsigned int *)(temp_v0 + 0x78) = 0;
  *(unsigned int *)(temp_v0 + 0x7c) = 0;
  temp_v1 = FUN_00306e84((unsigned int *)(temp_v0 + 0x68),1);
  *(unsigned int *)(temp_v0 + 0x78) = temp_v1;
  *(unsigned int *)temp_v1 = temp_v1;
  *(int *)(*(int *)(temp_v0 + 0x78) + 4) = *(int *)(temp_v0 + 0x78);
  temp_v0 = FUN_002ea974(temp_v0 + 0x80);
  temp_v0 = FUN_002e9ff4(temp_v0 + 0x68);
  temp_v0 = FUN_002fd5d4(temp_v0 + 0xc,param_3);
  *(unsigned int *)(temp_v0 + 0x68) = param_5;
  *(unsigned int *)(temp_v0 + 0x6c) = param_6;
  *(unsigned int *)(temp_v0 + 0x70) = *param_7;
  *(unsigned int *)(temp_v0 + 0x74) = 0;
  *(unsigned int *)(temp_v0 + 0x78) = 0;
  *(unsigned int *)(temp_v0 + 0x84) = 0;
  *(unsigned char *)(temp_v0 - 0x1f9) = 0;
  FUN_002e9acc(&uStack_38,param_8);
  *(unsigned int *)(temp_v0 + 0x74) = uStack_38;
  *(unsigned int *)(temp_v0 + 0x78) = uStack_34;
  temp_v3 = 0x10001;
  temp_v1 = FUN_002e7908(temp_v2,(unsigned int *)&temp_v3);
  FUN_002e9afe(temp_v0 - 0xc,temp_v1);
  *(unsigned int *)(temp_v0 - 0x17c) = 0;
  *(unsigned int *)(temp_v0 - 0x178) = 0;
  *(unsigned int *)(temp_v0 - 0x174) = 0;
  *(unsigned int *)(temp_v0 + 0x7c) = 0;
  *(unsigned int *)(temp_v0 + 0x80) = 0;
  *(unsigned int *)(temp_v0 - 0x90) = 0;
  if (*(int *)(temp_v0 + 0x70) != 0) {
    *(int *)(*(int *)(temp_v0 + 0x70) + 0x1b4) = temp_v0 - 0x234;
  }
  *(unsigned char *)(temp_v0 - 0x1fc) = 1;
  return temp_v0 - 0x234;
}
