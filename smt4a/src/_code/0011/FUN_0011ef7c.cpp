/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011ef7c` (_code @ 0x11ef7c, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int FUN_002f4f00(unsigned char [64]);
int strHolderAssignU32Alias(unsigned char [64], unsigned int);
int FUN_002fbb92(unsigned char [64], unsigned int);
int FUN_00303cd8(unsigned char [64]);
int FUN_00303d10(unsigned char [64], int, int);
int FUN_00303d3a(unsigned char [64], int);
int onlineScopedLockRelease(unsigned char [12]);
int FUN_00303d74(int, int, unsigned char [64]);
int FUN_00303e66(int, unsigned int);

/* stack frame of param_7: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_7_stack;

extern unsigned char LAB_0011f3dd; /* 0x11f3dd */
extern unsigned char *DAT_00630374; /* 0x630374 */

extern int onlineContextGetInstance(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: FUN_002f4f00. */
/* Supplied declaration required: strHolderAssignU32Alias. */
/* Supplied declaration required: FUN_002fbb92. */
/* Supplied declaration required: FUN_00303cd8. */
/* Supplied declaration required: FUN_00303d10. */
extern int FUN_00303d1e(unsigned char *, int);
/* Supplied declaration required: FUN_00303d3a. */
extern int holderCheckBitsAllowed(int, unsigned int);
/* Supplied declaration required: onlineScopedLockRelease. */
/* Supplied declaration required: FUN_00303d74. */
/* Supplied declaration required: FUN_00303e66. */


int FUN_0011ef7c(int param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,
                unsigned int param_6,unsigned int param_7)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [64];
  unsigned char temp_v2 [12];
  int iStack_24;
  int iStack_20;
  unsigned int temp_v3;
  unsigned int uStack_18;
  
  iStack_24 = param_1;
  iStack_20 = param_2;
  temp_v3 = param_3;
  uStack_18 = param_4;
  temp_v0 = onlineContextGetInstance();
  FUN_002e6e34(temp_v2,temp_v0 + 0x58);
  FUN_00303cd8(temp_v1);
  FUN_00303d10(temp_v1,*(unsigned short *)(param_1 + 0x20),1);
  temp_v0 = FUN_00303d1e(temp_v1,param_2);
  if (temp_v0 != 0) {
    FUN_00303d3a(temp_v1,1);
    FUN_002fbb92(temp_v1,param_4);
    FUN_002fbb92(temp_v1,param_5);
    strHolderAssignU32Alias(temp_v1,param_6);
    FUN_002fbb92(temp_v1,param_7);
    if (param_2 != 0) {
      FUN_00303e66(param_2,temp_v3);
    }
    DAT_00630374 = &LAB_0011f3dd;
    if ((*(char *)(param_1 + 0x34) != '\0') && (temp_v0 = holderCheckBitsAllowed(param_1,0x10), temp_v0 != 0)) {
      onlineScopedLockRelease(temp_v2);
    }
    FUN_00303d74(param_1,param_2,temp_v1);
    FUN_002f4f00(temp_v1);
    _ZN9Obj55b28cD1Ev(temp_v2);
  }
  else {
    FUN_002f4f00(temp_v1);
    _ZN9Obj55b28cD1Ev(temp_v2);
    param_1 = 0;
  }
  return param_1;
}

} /* extern "C" */
