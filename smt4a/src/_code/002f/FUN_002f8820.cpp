/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f8820` (_code @ 0x2f8820, 0x230 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001099b8(int, unsigned int, int, int);
int FUN_00109ee2(void);
int FUN_0010e83a(int, int, unsigned int);
int FUN_00114c8e(int, int *);
int FUN_002e7232(int);
int FUN_002eb338(int *, unsigned int *, int);
int FUN_002eb588(unsigned int *);
int FUN_002ede60(int *, int);
int FUN_002f2cb2(unsigned int, int, int);
int FUN_002f9056(...);
int FUN_002f9086(int, int, int *, unsigned int);
int FUN_002f9156(int, int, int *, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 15 slot(s), 60 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_1_stack;

extern signed char DAT_0059496a; /* 0x59496a */
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

/* Supplied declaration required: FUN_001099b8. */
extern int FUN_00109ec4(int, int, unsigned int *);
/* Supplied declaration required: FUN_00109ee2. */
extern int FUN_00109f28(void);
/* Supplied declaration required: FUN_0010e83a. */
extern int FUN_001109c4(unsigned int *);
/* Supplied declaration required: FUN_00114c8e. */
/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: FUN_002eb338. */
/* Supplied declaration required: FUN_002eb588. */
/* Supplied declaration required: FUN_002ede60. */
/* Supplied declaration required: FUN_002f2cb2. */
extern int FUN_002f86cc(int, unsigned int);
extern int FUN_002f9048(unsigned int);
/* Supplied declaration required: FUN_002f9056. */
extern int FUN_002f905e(int, unsigned int *);
extern int FUN_002f9072(int, unsigned int *);
/* Supplied declaration required: FUN_002f9086. */
/* Supplied declaration required: FUN_002f9156. */


void FUN_002f8820(int param_1)

{
/* irregular: 2 goto(s); 12 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5 [2];
  unsigned char temp_v6 [20];
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  int temp_v17;
  int temp_v18;
  int temp_v19;
  
  FUN_002eb588(&temp_v14);
  temp_v13 = param_1 + 0x2c0;
  if ((((s______00594975.whole[0] != '\0') &&
       (temp_v1 = FUN_002f9048(*(unsigned int *)(param_1 + 500)), temp_v1 != 0)) &&
      (*(int *)(param_1 + 0x208) != 0)) &&
     (*(unsigned int *)(temp_v13 + 0xc) < temp_v15 ||
      temp_v15 - *(unsigned int *)(temp_v13 + 0xc) < (unsigned int)(*(unsigned int *)(temp_v13 + 8) <= temp_v14))) {
    FUN_002f2cb2(*(unsigned int *)(param_1 + 500),param_1 + 0x1f8,
                 *(unsigned short *)(*(int *)(param_1 + 0x1fc) + 0x86));
    FUN_002eb338(&temp_v4,&temp_v14,0xf);
    *(unsigned int *)(param_1 + 0x2c8) = temp_v4;
    *(int *)(param_1 + 0x2cc) = temp_v5[0];
  }
  temp_v0 = 0;
  temp_v10 = param_1 + 0x284;
  temp_v16 = 0;
  temp_v9 = param_1 + 0x294;
  temp_v19 = param_1 + 0x100;
  temp_v18 = param_1 + 0x6c;
  do {
    while( 1 ) {
      while( 1 ) {
        if (*(int *)(*(int *)(param_1 + 500) + 0x14) == 0 || temp_v0) {
          if (*(char *)(temp_v18 + 4) != '\0') {
            for (temp_v1 = *(int *)(param_1 + 0x164); *(int *)(param_1 + 0x168) != temp_v1;
                temp_v1 = temp_v1 + 8) {
              temp_v3 = *(int *)(temp_v1 + 4);
              do {
                temp_v2 = temp_v3;
                FUN_00109ee2();
              } while (temp_v2 != 0);
            }
          }
          *(char *)(param_1 + 0x148) = (char)temp_v16;
          return;
        }
        temp_v17 = *(int *)(*(int *)(param_1 + 500) + 8);
        temp_v12 = (unsigned int)*(unsigned short *)(temp_v17 + 0x86);
        temp_v8 = FUN_002f86cc(param_1,temp_v12);
        if (temp_v8 != 0) break;
        temp_v5[0] = temp_v17;
        (**(romwright_code **)(**(int **)(param_1 + 500) + 0x14))
                  (temp_v6,*(int **)(param_1 + 500),temp_v5);
      }
      if ((*(char *)(temp_v18 + 4) != '\0') || (*(char *)(temp_v8 + 0x50) == '\0')) break;
      temp_v0 = 1;
    }
    FUN_002ede60(&temp_v4,temp_v17 + 0xdc);
    temp_v11 = (unsigned int)*(unsigned char *)(temp_v17 + 0x66);
    if ((DAT_0059496a == '\0') && (temp_v11 != 0)) {
      FUN_002f9056(temp_v8);
    }
    temp_v7 = *(int *)(param_1 + 100);
    temp_v1 = FUN_002f905e(temp_v9,(unsigned int *)&temp_v4);
    if (temp_v1 != 0) {
      temp_v7 = temp_v7 - 0x2c;
    }
    else {
      temp_v1 = FUN_002f9072(temp_v10,(unsigned int *)&temp_v4);
      if (temp_v1 != 0) {
        temp_v7 = temp_v7 - 0x18;
      }
    }
    temp_v1 = temp_v8;
    FUN_001099b8(temp_v8,*(unsigned int *)(param_1 + 500),param_1 + 0x1f8,temp_v7);
    temp_v7 = temp_v1;
    if (temp_v1 != 0) {
      *(char *)(temp_v1 + 0x1d) = (char)temp_v11;
      temp_v1 = FUN_001109c4((unsigned int *)&temp_v4);
      if (temp_v1 != 0) {
        temp_v1 = param_1;
        FUN_0010e83a(param_1,temp_v7,temp_v12);
        if (temp_v1 != 0) {
          FUN_002e7232(temp_v7);
        }
        else {
LAB_002f8962:
          *(int *)(temp_v13 + 0x14) = *(int *)(temp_v13 + 0x14) + 1;
          if (*(char *)(temp_v18 + 4) != '\0') {
            temp_v1 = FUN_00109f28();
          }
          else {
            temp_v1 = FUN_00109ec4(temp_v8,temp_v7,(unsigned int *)&temp_v4);
          }
          if (temp_v1 == 0) {
            temp_v0 = 1;
            temp_v16 = 1;
          }
        }
      }
      else {
        temp_v1 = FUN_002f905e(temp_v9,(unsigned int *)&temp_v4);
        if (temp_v1 != 0) {
          FUN_002f9086(temp_v9,temp_v7,&temp_v4,temp_v12);
        }
        else {
          temp_v1 = FUN_002f9072(temp_v10,(unsigned int *)&temp_v4);
          if (temp_v1 == 0) {
            temp_v1 = *(int *)(temp_v19 + 0x10);
            if ((temp_v1 != 0) && (FUN_00114c8e(temp_v1,&temp_v4), temp_v1 != 0)) {
              FUN_002e7232(temp_v7);
              goto LAB_002f895e;
            }
            goto LAB_002f8962;
          }
          FUN_002f9156(temp_v10,temp_v7,&temp_v4,temp_v12);
        }
      }
    }
    else {
LAB_002f895e:
      temp_v0 = 1;
    }
    if ((DAT_0059496a == '\0') && (temp_v11 != 0)) {
      FUN_002f9056(temp_v8,0x40);
    }
  } while( 1 );
}

} /* extern "C" */
