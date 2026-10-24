/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011d93c` (_code @ 0x11d93c, 0xd6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55aff4D1Ev(unsigned char [8]);
int _ZN9Obj55aff4aSERKS_(int, unsigned char [8]);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea41e(unsigned char [12], int);
int FUN_002fecdc(unsigned char [8], int, unsigned char *);
int FUN_00306f3e(int, unsigned char *);
int FUN_00306f9a(unsigned char [8], unsigned char *, int);
int FUN_00310e7a(...);
int FUN_00310ec8(int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp24; /* 0x24: local_24 */
} param_1_stack;

extern unsigned char LAB_0011da18; /* 0x11da18 */
extern unsigned char LAB_0011da28; /* 0x11da28 */
extern unsigned char LAB_0011da38; /* 0x11da38 */

extern unsigned char *_ZN12OnlineResultC1ERKj(unsigned char *, unsigned int *);
/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */
/* Supplied declaration required: _ZN9Obj55aff4aSERKS_. */
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
/* Supplied declaration required: FUN_002ea41e. */
/* Supplied declaration required: FUN_002fecdc. */
/* Supplied declaration required: FUN_00306f3e. */
/* Supplied declaration required: FUN_00306f9a. */
/* Supplied declaration required: FUN_00310e7a. */
/* Supplied declaration required: FUN_00310ec8. */


void FUN_0011d93c(int param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  unsigned int *puVar4;
  unsigned char temp_v2 [8];
  unsigned char temp_v3 [8];
  unsigned char temp_v4 [12];
  int temp_v5;
  unsigned char temp_v6 [12];
  int temp_v7;
  
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x6c));
  if (temp_v0 != 0) {
    if (*(char *)(param_1 + 0xa0) != '\x02') {
      **(unsigned char **)(param_1 + 0x164) = 1;
      FUN_002ea41e(temp_v6,param_1 + 0x90);
      puVar3 = temp_v6;
      FUN_00310ec8(param_1,puVar3);
      return;
    }
    FUN_00310e7a(temp_v2,param_1 + 300);
    FUN_00310e7a(temp_v3,temp_v2,param_1 + 0x13c);
    temp_v1 = param_1 + 0x7c;
    _ZN9Obj55aff4aSERKS_(temp_v1,temp_v3);
    _ZN9Obj55aff4D1Ev(temp_v3);
    _ZN9Obj55aff4D1Ev(temp_v2);
    temp_v0 = temp_v1;
    FUN_00306f3e(temp_v1,&LAB_0011da18);
    if ((temp_v0 != 0) && (temp_v0 = temp_v1, FUN_00306f3e(temp_v1,&LAB_0011da28), temp_v0 != 0)) {
      FUN_00306f9a(temp_v2,&LAB_0011da28,temp_v1);
    }
    else {
      FUN_002fecdc(temp_v2,temp_v1,&LAB_0011da38);
    }
    _ZN9Obj55aff4aSERKS_(temp_v1,temp_v2);
    _ZN9Obj55aff4D1Ev(temp_v2);
    if (*(int *)(param_1 + 0x11c) == 0) {
      *(unsigned int *)(param_1 + 0x11c) = 1;
    }
    puVar4 = (unsigned int *)&temp_v5;
    temp_v5 = 0x10001;
    puVar3 = temp_v4;
  }
  else {
    puVar4 = (unsigned int *)&temp_v7;
    temp_v7 = 0x80010004;
    puVar3 = temp_v6;
  }
  puVar3 = (unsigned char *)_ZN12OnlineResultC1ERKj(puVar3,puVar4);
  FUN_00310ec8(param_1,puVar3);
  return;
}

} /* extern "C" */
