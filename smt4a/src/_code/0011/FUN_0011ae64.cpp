/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011ae64` (_code @ 0x11ae64, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55b28cC1EPv(...);
int _ZN9Obj55b28cD1Ev(...);
int _ZN9Obj55aff4aSERKS_(...);
int onlineStringSetFromRaw(...);
int FUN_002ea3d0(...);
int FUN_002f12d0(...);
int FUN_002f76ca(...);

/* stack frame of param_7: 3 slot(s), 6 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned char sp54; /* 0x54: local_54 */
    unsigned char sp58; /* 0x58: local_58 */
} param_7_stack;

extern unsigned char LAB_0011af0c; /* 0x11af0c */
extern int DAT_00589558; /* 0x589558 */
extern unsigned char DAT_0062d704; /* 0x62d704 */

extern int libc_strncmp(unsigned char *, unsigned char *, unsigned int);
extern int onlineContextGetInstance(void);
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: _ZN9Obj55aff4aSERKS_. */
/* Supplied declaration required: onlineStringSetFromRaw. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002f12d0. */
/* Supplied declaration required: FUN_002f76ca. */


void FUN_0011ae64(unsigned int param_1,int param_2,unsigned int param_3,int param_4,unsigned int param_5,
                 unsigned int param_6,unsigned int param_7)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar3;
  unsigned char temp_v2 [4];
  unsigned char temp_v3 [4];
  unsigned char temp_v4 [12];
  unsigned char temp_v5 [16];
  unsigned char temp_v6 [16];
  unsigned int temp_v7;
  int iStack_20;
  unsigned int uStack_1c;
  int iStack_18;
  
  puVar3 = temp_v2;
  temp_v7 = param_1;
  iStack_20 = param_2;
  uStack_1c = param_3;
  iStack_18 = param_4;
  temp_v0 = onlineContextGetInstance();
  _ZN9Obj55b28cC1EPv(temp_v4,temp_v0 + 0x58);
  *(unsigned int *)(param_2 + 0x68) = param_3;
  *(int *)(param_2 + 0x6c) = param_4;
  _ZN9Obj55aff4aSERKS_(param_2 + 0x70,param_5);
  *(unsigned int *)(param_2 + 0x78) = param_7;
  FUN_002f76ca(param_6,"normaltoken");
  if ((DAT_00589558 == param_4) &&
     (temp_v0 = libc_strncmp(&DAT_0062d704,&LAB_0011af0c,0x40), temp_v0 != 0)) {
    onlineStringSetFromRaw(*(unsigned int *)(param_2 + 0x78),&DAT_0062d704);
    temp_v1 = FUN_002ea3c0(temp_v6,0x11af99,0,&LAB_0011af0c);
    FUN_002ea3d0(param_2,temp_v1);
    puVar3 = temp_v3;
    temp_v3[0] = 1;
  }
  else {
    temp_v1 = FUN_002ea3c0(temp_v5,0x11af15,0,&LAB_0011af0c);
    FUN_002ea3d0(param_2,temp_v1);
    temp_v2[0] = 1;
  }
  FUN_002f12d0(temp_v7,puVar3);
  _ZN9Obj55b28cD1Ev(temp_v4);
  return;
}

} /* extern "C" */
