/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f4bc` (_code @ 0x30f4bc, 0x92 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001208a0(int);
int _ZN9Obj55b28cC1EPv(...);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int onlineJobSetStateReady(int);
int sharedRefAddRef(int);
int listIteratorNext4(int *);
int FUN_0030f8a2(int, int, unsigned int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

extern unsigned char DAT_0062e558; /* 0x62e558 */
extern unsigned char DAT_0062e6a0; /* 0x62e6a0 */

/* Supplied declaration required: FUN_001208a0. */
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: onlineJobSetStateReady. */
/* Supplied declaration required: sharedRefAddRef. */
extern int wordRefsDiffer_0030f88a(int *, int);
/* Supplied declaration required: listIteratorNext4. */
/* Supplied declaration required: FUN_0030f8a2. */


void FUN_0030f4bc(int param_1,unsigned int param_2)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  unsigned char *puVar4;
  int temp_v2;
  unsigned char temp_v3 [12];
  unsigned char temp_v4 [12];
  unsigned char temp_v5 [12];
  int temp_v6;
  int iStack_1c;
  unsigned int temp_v7;
  
  temp_v2 = *(int *)(param_1 + 0x130);
  puVar4 = &DAT_0062e558;
  temp_v6 = param_1 + 0x138;
  puVar3 = &DAT_0062e558;
  iStack_1c = param_1;
  temp_v7 = param_2;
  while (temp_v1 = wordRefsDiffer_0030f88a(&temp_v2,temp_v6), temp_v0 = temp_v2, temp_v1 != 0) {
    sharedRefAddRef(temp_v2);
    onlineJobSetStateReady(temp_v0);
    if (*(char *)(temp_v0 + 0x39) != '\0') {
      puVar4 = &DAT_0062e6a0;
    }
    if (*(char *)(temp_v0 + 0x38) != '\0') {
      puVar3 = (unsigned char *)(param_1 + 0x88);
    }
    _ZN9Obj55b28cC1EPv(temp_v3,puVar4);
    _ZN9Obj55b28cC1EPv(temp_v4,param_1 + 0x58);
    _ZN9Obj55b28cC1EPv(temp_v5,puVar3);
    FUN_0030f8a2(param_1,temp_v0,temp_v7);
    _ZN9Obj55b28cD1Ev(temp_v5);
    _ZN9Obj55b28cD1Ev(temp_v4);
    _ZN9Obj55b28cD1Ev(temp_v3);
    FUN_001208a0(temp_v0);
    listIteratorNext4(&temp_v2);
  }
  return;
}

} /* extern "C" */
