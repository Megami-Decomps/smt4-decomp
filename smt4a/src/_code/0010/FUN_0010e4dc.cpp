/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010e4dc` (_code @ 0x10e4dc, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011bc64(void);
int FUN_00122fcc(unsigned int, unsigned int, int);
int asdOperatorDeleteArray(void);
int onlineContextGetInstance(void);
int sharedRefAddRef(unsigned int);
int _Znwj(int);
int _ZN9Obj55aff4C1EPKt(unsigned char [4], unsigned char *);
int _ZN9Obj55aff4D1Ev(unsigned char [4]);
int onlineObjectThreadRootStart(int, int);
int FUN_002f8da8(void);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
} param_1_stack;

extern unsigned char LAB_0010e638; /* 0x10e638 */
extern unsigned char LAB_0010e664; /* 0x10e664 */
extern unsigned char DAT_0055888c; /* 0x55888c */
extern unsigned char DAT_00559154; /* 0x559154 */
extern signed char DAT_00594967; /* 0x594967 */
extern signed char DAT_00594969; /* 0x594969 */
extern signed char DAT_0059496a; /* 0x59496a */
#ifndef ROMWRIGHT_STORAGE_s______0059496b_9_1_DEFINED
#define ROMWRIGHT_STORAGE_s______0059496b_9_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s______0059496b_9_1 {
    char whole[9];
    unsigned char u1[9];
    signed char s1[9];
};
typedef char romwright_storage_s______0059496b_9_1_size_check[(sizeof(union romwright_storage_s______0059496b_9_1) == 9) ? 1 : -1];
typedef char romwright_storage_s______0059496b_9_1_u1_width_check[(sizeof(((union romwright_storage_s______0059496b_9_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s______0059496b_9_1_s1_width_check[(sizeof(((union romwright_storage_s______0059496b_9_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s______0059496b_9_1 s______0059496b; /* 0x59496b */
extern signed char DAT_0059497a; /* 0x59497a */
extern unsigned int DAT_00594a40; /* 0x594a40 */
extern unsigned int DAT_00594a44; /* 0x594a44 */

extern unsigned int FUN_0010efb6(int, unsigned int, unsigned int);
extern int *FUN_00116770(void);
/* Supplied declaration required: FUN_0011bc64. */
/* Supplied declaration required: FUN_00122fcc. */
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: onlineContextGetInstance. */
/* Supplied declaration required: sharedRefAddRef. */
/* Supplied declaration required: _Znwj. */
/* Supplied declaration required: _ZN9Obj55aff4C1EPKt. */
/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */
extern unsigned int *FUN_002eb77c(int, unsigned int, unsigned char *);
/* Supplied declaration required: onlineObjectThreadRootStart. */
extern unsigned int *FUN_002f58d0(int, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002f8da8. */


void FUN_0010e4dc(int param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int *piVar4;
  unsigned char temp_v2 [4];
  unsigned char temp_v3 [4];
  unsigned char temp_v4 [8];
  
  if ((DAT_00594967 != '\0') || (DAT_00594969 != '\0')) {
    if (*(int *)(param_1 + 0x14c) == 0) {
      temp_v0 = _Znwj(0x34);
      if (temp_v0 != 0) {
        _ZN9Obj55aff4C1EPKt(temp_v3,&LAB_0010e638);
        puVar2 = (unsigned int *)FUN_002f58d0(temp_v0,temp_v3,DAT_00594a40);
        puVar2[0xb] = 0;
        *puVar2 = (unsigned int)&DAT_0055888c;
        puVar2[10] = 0;
        puVar2[9] = 0;
        *(unsigned int **)(param_1 + 0x14c) = puVar2;
        _ZN9Obj55aff4D1Ev(temp_v3);
      }
      else {
        *(unsigned int *)(param_1 + 0x14c) = 0;
      }
      temp_v0 = *(int *)(param_1 + 0x14c);
      *(unsigned int *)(temp_v0 + 0x24) = 0x10e415;
      *(unsigned int *)(temp_v0 + 0x28) = 0;
      *(int *)(temp_v0 + 0x2c) = param_1;
      *(unsigned int *)(temp_v0 + 0x30) = 0;
      onlineObjectThreadRootStart(temp_v0,0);
    }
  }
  else if ((*(int *)(param_1 + 0x154) == 0) && (temp_v0 = onlineContextGetInstance(), temp_v0 != 0)) {
    temp_v0 = _Znwj(0x40);
    if (temp_v0 != 0) {
      _ZN9Obj55aff4C1EPKt(temp_v2,&LAB_0010e664);
      puVar2 = (unsigned int *)FUN_002eb77c(temp_v0,0,temp_v4);
      puVar2[0xf] = param_1;
      *puVar2 = (unsigned int)&DAT_00559154;
      *(unsigned int **)(param_1 + 0x154) = puVar2;
      _ZN9Obj55aff4D1Ev(temp_v2);
      temp_v1 = *(unsigned int *)(param_1 + 0x154);
    }
    else {
      *(unsigned int *)(param_1 + 0x154) = 0;
      temp_v1 = 0;
    }
    sharedRefAddRef(temp_v1);
    temp_v1 = onlineContextGetInstance();
    FUN_00122fcc(temp_v1,*(unsigned int *)(param_1 + 0x154),0);
  }
  if (DAT_0059496a != '\0') {
    if (*(int **)(param_1 + 0x150) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(param_1 + 0x150) + 0xc))();
      if (*(int **)(param_1 + 0x150) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(param_1 + 0x150) + 4))();
      }
      *(unsigned int *)(param_1 + 0x150) = 0;
      if (*(int *)(param_1 + 0x2d0) != 0) {
        FUN_002f8da8();
        asdOperatorDeleteArray();
        *(unsigned int *)(param_1 + 0x2d0) = 0;
      }
    }
    if (DAT_0059497a != '\0') {
      temp_v0 = _Znwj(0x38);
      temp_v1 = 0;
      if (temp_v0 != 0) {
        temp_v1 = FUN_0010efb6(temp_v0,DAT_00594a44,*(unsigned int *)(param_1 + 100));
      }
      *(unsigned int *)(param_1 + 0x2d0) = temp_v1;
    }
    else {
      *(unsigned int *)(param_1 + 0x2d0) = 0;
    }
    if (s______0059496b.whole[0] != '\x01') {
      temp_v0 = _Znwj(0x7c);
      piVar4 = (int *)0x0;
      if (temp_v0 != 0) {
        piVar4 = (int *)FUN_00116770();
      }
    }
    else {
      piVar4 = (int *)_Znwj(0x11c);
      if (piVar4 != (int *)0x0) {
        FUN_0011bc64();
      }
    }
    *(int **)(param_1 + 0x150) = piVar4;
    (**(romwright_code **)(*piVar4 + 8))();
  }
  return;
}

} /* extern "C" */
