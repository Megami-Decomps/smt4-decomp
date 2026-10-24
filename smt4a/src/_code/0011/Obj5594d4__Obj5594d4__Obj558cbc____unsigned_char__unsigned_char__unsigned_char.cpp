/* NON_MATCHING: romwright 0.5.0 decompilation of `_ZN9Obj5594d4C1EP9Obj558cbchhh` (_code @ 0x11169c, 0xba bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55aff4D1Ev(unsigned char [12]);
int FUN_002eb924(int);
int FUN_002fd210(int);
int FUN_002fd25e(unsigned int, int);

typedef struct fn_0011169c_arg0 fn_0011169c_arg0;
struct fn_0011169c_arg0 {
    undefined4 field_0x0; /* +0x0 */
    undefined4 field_0x4; /* +0x4 */
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x8];
    void *field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x30];
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    unsigned char pad_0x50[0x4];
    undefined4 field_0x54; /* +0x54 */
    unsigned char pad_0x58[0x1c];
    undefined1 field_0x74; /* +0x74 */
    byte field_0x75; /* +0x75 */
    undefined1 field_0x76; /* +0x76 */
};

typedef int romwright_code(...);
/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_5_stack;

extern unsigned char LAB_0011175c; /* 0x11175c */
extern unsigned char DAT_00558d8c; /* 0x558d8c */
extern unsigned char DAT_005594dc; /* 0x5594dc */

extern int FUN_0010557c(int);
extern unsigned int *FUN_00116854(void);
extern unsigned int _ZN9Obj55aff4C1EPKt(unsigned char *, unsigned char *);
/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */
extern int onlineSockAddrConstruct(unsigned int *);
extern int *FUN_002ea704(void);
extern unsigned int FUN_002eb56c(void);
/* Supplied declaration required: FUN_002eb924. */
extern unsigned int *FUN_002fd1e8(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_002fd210. */
/* Supplied declaration required: FUN_002fd25e. */


int _ZN9Obj5594d4C1EP9Obj558cbchhh(fn_0011169c_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                unsigned char param_5)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  int *piVar4;
  int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4 [12];
  fn_0011169c_arg0 *pfStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int temp_v5;
  
  pfStack_24 = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  temp_v5 = param_4;
  puVar1 = (unsigned int *)FUN_00116854();
  *puVar1 = (unsigned int)&DAT_005594dc;
  temp_v0 = _ZN9Obj55aff4C1EPKt(temp_v4,&LAB_0011175c);
  puVar1 = (unsigned int *)FUN_002fd1e8(puVar1 + 2,temp_v0);
  *puVar1 = (unsigned int)&DAT_00558d8c;
  _ZN9Obj55aff4D1Ev(temp_v4);
  temp_v1 = onlineSockAddrConstruct(puVar1 + 8);
  *(unsigned int *)(temp_v1 + 0x24) = 0;
  *(unsigned int *)(temp_v1 + 0x2c) = param_2;
  temp_v1 = FUN_0010557c(temp_v1 + 0x30);
  *(char *)(temp_v1 + 0x1c) = (char)temp_v5;
  *(unsigned char *)(temp_v1 + 0x1d) = param_5;
  *(char *)(temp_v1 + 0x1e) = (char)param_3;
  *(unsigned int *)(temp_v1 - 0x10) = 0;
  *(unsigned char *)(temp_v1 - 8) = 0;
  temp_v0 = FUN_002eb56c();
  *(unsigned int *)(temp_v1 - 0x54) = temp_v0;
  FUN_002fd210(temp_v1 - 0x50);
  piVar4 = (int *)FUN_002ea704();
  temp_v2 = (**(romwright_code **)(*piVar4 + 0x28))();
  FUN_002eb924(*(int *)(temp_v2 + 0xc) + 0x80);
  piVar4 = (int *)FUN_002ea704();
  temp_v0 = (**(romwright_code **)(*piVar4 + 0x28))();
  FUN_002fd25e(temp_v0,0);
  temp_v3 = *(char *)(temp_v1 + 0x1d) == '\0';
  if (!temp_v3) {
    piVar4 = (int *)FUN_002ea704();
    temp_v0 = (**(romwright_code **)(*piVar4 + 0x28))();
  }
  else {
    piVar4 = (int *)FUN_002ea704();
    temp_v0 = (**(romwright_code **)(*piVar4 + 0x28))();
  }
  FUN_002fd25e(temp_v0,!temp_v3);
  return temp_v1 - 0x58;
}

} /* extern "C" */
