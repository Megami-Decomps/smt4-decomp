/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00109824` (_code @ 0x109824, 0x126 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011778e(...);
int FUN_002e7232(...);
int FUN_002e7378(...);
int strAssign(...);
int FUN_002e7658(...);
int FUN_002eb17c(...);
int FUN_002ed258(...);
int ringSetLimit(...);

typedef struct fn_00109824_arg3 fn_00109824_arg3;
struct fn_00109824_arg3 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    int field_0x18; /* +0x18 */
};

typedef int romwright_code(...);
/* stack frame of param_5: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_5_stack;

#ifndef ROMWRIGHT_STORAGE_s______00594975_9_1_DEFINED
#define ROMWRIGHT_STORAGE_s______00594975_9_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s______00594975_9_1 {
    char whole[9];
    unsigned char u1[9];
    signed char s1[9];
};
typedef char romwright_storage_s______00594975_9_1_size_check[(sizeof(union romwright_storage_s______00594975_9_1) == 9) ? 1 : -1];
typedef char romwright_storage_s______00594975_9_1_u1_width_check[(sizeof(((union romwright_storage_s______00594975_9_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s______00594975_9_1_s1_width_check[(sizeof(((union romwright_storage_s______00594975_9_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s______00594975_9_1 s______00594975; /* 0x594975 */

extern int *FUN_0011595c(int, int);
/* Supplied declaration required: FUN_0011778e. */
/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: FUN_002e7378. */
/* Supplied declaration required: strAssign. */
extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_002e7658. */
/* Supplied declaration required: FUN_002eb17c. */
extern int FUN_002eb5f4(void);
extern int FUN_002eb7d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002ed258. */
/* Supplied declaration required: ringSetLimit. */
extern int FUN_002eff84(void);
extern int *FUN_002f2a44(void);
extern int FUN_002f2a70(int *);


int * FUN_00109824(int param_1,int param_2,unsigned int param_3,fn_00109824_arg3 *param_4,
                  unsigned char *param_5)

{
/* irregular: 1 goto(s); 8 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int *temp_v3;
  unsigned char temp_v4 [16];
  int temp_v5;
  int temp_v6;
  unsigned int uStack_1c;
  fn_00109824_arg3 *pfStack_18;
  
  temp_v5 = param_1;
  temp_v6 = param_2;
  uStack_1c = param_3;
  pfStack_18 = param_4;
  if (*(char *)(param_1 + 0x144) != '\0') {
    temp_v0 = FUN_002eb7d0(0x118,0);
    if ((temp_v0 != 0) &&
       (piVar2 = (int *)FUN_0011595c(temp_v0,param_4->field_0x10), piVar2 != (int *)0x0)) {
      if ((piVar2[0x36] != 0) && (temp_v0 = FUN_002eff84(), temp_v0 != 0)) goto LAB_00109882;
      (**(romwright_code **)(*piVar2 + 4))(piVar2);
    }
    *param_5 = 1;
    piVar2 = (int *)0x0;
  }
  else {
    temp_v0 = FUN_002e760a(0x118);
    if (temp_v0 != 0) {
      piVar2 = (int *)FUN_002f2a44();
    }
    else {
      piVar2 = (int *)0x0;
    }
LAB_00109882:
    FUN_002eb17c(piVar2,param_3);
    FUN_002ed258(temp_v4,param_4);
    if (s______00594975.whole[0] != '\0') {
      temp_v1 = 0;
      temp_v0 = FUN_002eb5f4();
      temp_v3 = (int *)(temp_v0 + 0xd4);
      while ((temp_v0 = (**(romwright_code **)(*temp_v3 + 0x1c))(temp_v3,temp_v4,piVar2,&temp_v2),
             temp_v0 != 0 && (temp_v0 = FUN_002f2a70(piVar2), temp_v0 != 0))) {
        temp_v0 = temp_v6;
        FUN_0011778e(temp_v6,piVar2);
        if (temp_v0 == 0) break;
        temp_v1 = temp_v1 + temp_v2;
      }
      if (temp_v1 != 0) {
        temp_v0 = param_4->field_0x10 - temp_v1;
        if (temp_v0 == 0) {
          param_4->field_0x10 = 0;
          param_4->field_0x18 = 0;
          FUN_002e7232(piVar2);
          FUN_002e7658(temp_v4);
          piVar2 = (int *)0x0;
          return piVar2;
        }
        strAssign(param_4,param_4->field_0xc + param_4->field_0x18 + temp_v1,temp_v0,0);
        param_4->field_0x10 = temp_v0;
      }
      FUN_002e7378(temp_v4,0);
    }
    temp_v0 = (**(romwright_code **)(**(int **)(temp_v5 + 0x11c) + 0x18))
                      (*(int **)(temp_v5 + 0x11c),temp_v4,piVar2,&temp_v2);
    if (temp_v0 != 0) {
      ringSetLimit(param_4,param_4->field_0x18 + temp_v2);
    }
    else {
      FUN_002e7232(piVar2);
      piVar2 = (int *)0x0;
    }
    FUN_002e7658(temp_v4);
  }
  return piVar2;
}

} /* extern "C" */
