/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00112188` (_code @ 0x112188, 0x182 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00121104(int, unsigned int);
int sharedRefAddRef(void);
int vectorCopyHeader(int, unsigned int);
int FUN_002ea3c0(...);
int FUN_002ea3d0(int, unsigned int);
int FUN_002eca44(void);
int FUN_002fd6bc(int, unsigned int);

typedef struct fn_00112188_arg0 fn_00112188_arg0;
typedef struct fn_00112188_arg0_p88 fn_00112188_arg0_p88;
struct fn_00112188_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x5c];
    undefined4 field_0x60; /* +0x60 */
    undefined4 field_0x64; /* +0x64 */
    unsigned char pad_0x68[0x10];
    undefined4 field_0x78; /* +0x78 */
    unsigned char pad_0x7c[0xc];
    fn_00112188_arg0_p88 *field_0x88; /* +0x88 */
    unsigned char pad_0x8c[0x4];
    undefined4 field_0x90; /* +0x90 */
    undefined4 field_0x94; /* +0x94 */
    undefined4 field_0x98; /* +0x98 */
    undefined4 field_0x9c; /* +0x9c */
    undefined4 field_0xa0; /* +0xa0 */
    undefined4 field_0xa4; /* +0xa4 */
    undefined4 field_0xa8; /* +0xa8 */
    void *field_0xac; /* +0xac */
    undefined4 field_0xb0; /* +0xb0 */
    undefined4 field_0xb4; /* +0xb4 */
    unsigned char pad_0xb8[0xc0];
    undefined4 field_0x178; /* +0x178 */
    undefined4 field_0x17c; /* +0x17c */
    undefined4 field_0x180; /* +0x180 */
    undefined4 field_0x184; /* +0x184 */
    undefined4 field_0x188; /* +0x188 */
    undefined4 field_0x18c; /* +0x18c */
    unsigned char pad_0x190[0x14];
    undefined4 field_0x1a4; /* +0x1a4 */
    undefined1 field_0x1a8; /* +0x1a8 */
    unsigned char pad_0x1a9[0x1];
    undefined2 field_0x1aa; /* +0x1aa */
    unsigned char pad_0x1ac[0x4];
    undefined1 field_0x1b0; /* +0x1b0 */
    undefined1 field_0x1b1; /* +0x1b1 */
    unsigned char pad_0x1b2[0x2];
    undefined4 field_0x1b4; /* +0x1b4 */
    undefined4 field_0x1b8; /* +0x1b8 */
    undefined1 field_0x1bc; /* +0x1bc */
};
struct fn_00112188_arg0_p88 {
    unsigned char pad_0x0[0x30];
    undefined4 field_0x30; /* +0x30 */
    unsigned char pad_0x34[0x40];
    byte field_0x74; /* +0x74 */
    byte field_0x75; /* +0x75 */
};

/* stack frame of param_10: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp3C; /* 0x3c: local_3c */
} param_10_stack;

extern unsigned char LAB_00111b05; /* 0x111b05 */
extern unsigned char LAB_00112310; /* 0x112310 */
extern unsigned char LAB_00112334; /* 0x112334 */
extern unsigned char DAT_0055955c; /* 0x55955c */

extern int FUN_0010eea4(unsigned int *, int, unsigned char *);
/* Supplied declaration required: FUN_00121104. */
/* Supplied declaration required: sharedRefAddRef. */
extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
/* Supplied declaration required: vectorCopyHeader. */
extern int FUN_002e9ff4(int);
/* Supplied declaration required: FUN_002ea3c0. */
/* Supplied declaration required: FUN_002ea3d0. */
extern unsigned int *FUN_002eca10(fn_00112188_arg0 *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002eca44. */
extern unsigned int FUN_002fd694(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_002fd6bc. */


int FUN_00112188(fn_00112188_arg0 *param_1,unsigned int param_2,int param_3,unsigned int param_4,
                unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8,
                unsigned int param_9,unsigned char param_10)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char *puVar6;
  unsigned char temp_v4 [12];
  int temp_v5;
  unsigned char temp_v6 [4];
  unsigned char temp_v7 [16];
  fn_00112188_arg0 *pfStack_24;
  unsigned int uStack_20;
  int iStack_1c;
  unsigned int temp_v8;
  
  pfStack_24 = param_1;
  uStack_20 = param_2;
  iStack_1c = param_3;
  temp_v8 = param_4;
  puVar1 = (unsigned int *)FUN_002eca10(param_1,param_2,temp_v6);
  *puVar1 = (unsigned int)&DAT_0055955c;
  temp_v0 = FUN_0010eea4(puVar1 + 0x1a,param_3 + 8,&LAB_00112310);
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  temp_v0 = FUN_002e9ff4(temp_v0 + 0x14);
  *(int *)(temp_v0 + 0xc) = param_3;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  *(unsigned int *)(temp_v0 + 0x18) = 0;
  *(unsigned int *)(temp_v0 + 0x1c) = param_9;
  *(unsigned int *)(temp_v0 + 0x20) = 0;
  *(unsigned int *)(temp_v0 + 0x24) = 0;
  *(unsigned int *)(temp_v0 + 0x28) = 0;
  *(unsigned int *)(temp_v0 + 0x2c) = 0;
  *(unsigned int *)(temp_v0 + 0x30) = 0;
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  temp_v1 = FUN_002fd694((unsigned int *)(temp_v0 + 0x20),1);
  *(unsigned int *)(temp_v0 + 0x30) = temp_v1;
  *(unsigned int *)temp_v1 = temp_v1;
  *(int *)(*(int *)(temp_v0 + 0x30) + 4) = *(int *)(temp_v0 + 0x30);
  temp_v2 = temp_v0 + 0x3c;
  *(unsigned int *)(temp_v0 + 0x38) = 0;
  FUN_002eca44();
  temp_v2 = temp_v2 + 0x60;
  FUN_002eca44();
  *(unsigned int *)(temp_v2 + 0x60) = temp_v8;
  temp_v0 = temp_v2 + 0x78;
  *(unsigned int *)(temp_v2 + 100) = param_5;
  *(unsigned int *)(temp_v2 + 0x68) = param_6;
  *(unsigned int *)(temp_v2 + 0x6c) = param_8;
  *(unsigned int *)(temp_v2 + 0x70) = 0;
  *(unsigned int *)(temp_v2 + 0x74) = 0;
  FUN_00121104(temp_v0,param_7);
  *(unsigned char *)(temp_v0 + 0x18) = 0;
  *(unsigned short *)(temp_v0 + 0x1a) = 0;
  *(unsigned int *)(temp_v0 + 0x1c) = *(unsigned int *)(temp_v0 + 0x10);
  *(unsigned char *)(temp_v0 + 0x20) = param_10;
  *(unsigned char *)(temp_v0 + 0x21) = 0;
  *(unsigned int *)(temp_v0 + 0x24) = 0;
  *(unsigned int *)(temp_v0 + 0x28) = 0;
  *(unsigned char *)(temp_v0 + 0x2c) = 0;
  *(unsigned int *)(temp_v0 - 300) = 0;
  *(unsigned int *)(temp_v0 - 0x130) = 0x4000;
  if (*(int *)(temp_v0 - 0x14) != 0) {
    sharedRefAddRef();
  }
  if (*(int *)(temp_v0 - 0x10) != 0) {
    sharedRefAddRef();
  }
  temp_v5 = 0x10001;
  temp_v1 = FUN_002e7908(temp_v4,(unsigned int *)&temp_v5);
  vectorCopyHeader(temp_v0 - 0x114,temp_v1);
  if (*(char *)(*(int *)(temp_v0 - 0x108) + 0x74) != '\0') {
    temp_v1 = FUN_002ea3c0(temp_v7,0x111b45,0,&LAB_00112334);
    FUN_002fd6bc(temp_v0 - 0xf4,temp_v1);
  }
  temp_v2 = *(int *)(temp_v0 - 0x108);
  if ((*(char *)(temp_v2 + 0x75) != '\0') &&
     ((temp_v3 = *(unsigned int *)(temp_v2 + 0x30),
      (((temp_v3 & 0xff) != 0 || ((temp_v3 >> 8) & 0xff) != 0) || ((temp_v3 >> 0x10) & 0xff) != 0) ||
      temp_v3 >> 0x18 != 0 || (*(char *)(temp_v2 + 0x74) == '\0')))) {
    temp_v1 = FUN_002ea3c0(temp_v7,0x111ea5,0,&LAB_00112334);
    FUN_002fd6bc(temp_v0 - 0xf4,temp_v1);
  }
  if (*(int *)(temp_v0 + 0x14) != 0) {
    puVar6 = (unsigned char *)0x1120d1;
  }
  else {
    puVar6 = &LAB_00111b05;
  }
  temp_v1 = FUN_002ea3c0(temp_v7,puVar6,0,&LAB_00112334);
  FUN_002ea3d0(temp_v0 - 400,temp_v1);
  *(unsigned char *)(temp_v0 - 0x158) = 1;
  return temp_v0 - 400;
}

} /* extern "C" */
