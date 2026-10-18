/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041460c` (_code @ 0x41460c, 0x1f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
} param_2_stack;

extern unsigned char LAB_00414804; /* 0x414804 */
extern unsigned char LAB_0041480c; /* 0x41480c */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00117bc8. */
/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002e9590. */
/* Supplied declaration required: FUN_002e9afe. */
/* Supplied declaration required: FUN_002ea100. */
extern int FUN_002f4e86(int);
extern int FUN_0030ffe0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_004130c0. */
/* Supplied declaration required: FUN_004311c0. */


void FUN_0041460c(int param_1,int param_2)

{
/* irregular: 2 unstructured edge(s); 2 goto(s); 9 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [8];
  unsigned char temp_v7 [4];
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int uStack_2c;
  unsigned int temp_v16;
  unsigned char temp_v17 [8];
  
  temp_v16 = *(unsigned int *)(param_2 + 0x40);
  temp_v15 = *(unsigned int *)(param_2 + 0x38);
  uStack_2c = *(unsigned int *)(param_2 + 0x3c);
  FUN_002e9afe(param_1 + 0x7c);
  temp_v0 = FUN_002f4e86(param_1 + 0x7c);
  if (temp_v0 == 0) {
    *(unsigned char *)(param_1 + 0xfc) = 1;
  }
  else {
    temp_v1 = 0x19a2;
    FUN_004311c0(0x19a2);
    temp_v9 = 0;
    temp_v10 = 0;
    temp_v11 = 0;
    temp_v12 = 0;
    temp_v13 = 0;
    temp_v14 = 0;
    FUN_00100388(&temp_v9,&LAB_00414804,temp_v1,temp_v4);
    temp_v0 = *(int *)(param_1 + 0xe8);
    if (*(int *)(param_1 + 0xec) != temp_v0) {
      while (*(int *)(temp_v0 + 0xc) == 0 && *(int *)(temp_v0 + 8) == 0) {
LAB_00414778:
        temp_v0 = temp_v0 + 0xb8;
        if (*(int *)(param_1 + 0xec) == temp_v0) goto LAB_00414788;
      }
      FUN_002ea100(temp_v7,&LAB_0041480c);
      if ((*(int *)(temp_v0 + 0xa4) - *(int *)(temp_v0 + 0xa0)) >> 3 != 0) {
        FUN_002e9590(temp_v7);
      }
      temp_v2 = FUN_002ea100(temp_v17,&temp_v9);
      temp_v2 = FUN_0030ffe0(temp_v8,*(unsigned int *)(temp_v2 + 4));
      FUN_002e9318(temp_v17);
      if (temp_v2 == 0) {
        FUN_002e9318(temp_v7);
        goto LAB_00414778;
      }
      temp_v5 = *(int *)(param_1 + 0xec);
      if (*(int *)(param_1 + 0xe8) != temp_v5) {
        temp_v3 = temp_v0 + 0xb8;
        if (temp_v5 != temp_v3) {
          temp_v2 = temp_v3;
        }
        if (temp_v5 != temp_v3 && temp_v3 != temp_v5) {
          do {
            FUN_00117bc8(temp_v0,temp_v2);
            temp_v2 = temp_v2 + 0xb8;
            temp_v0 = temp_v0 + 0xb8;
          } while (temp_v2 != temp_v5);
        }
        (*(romwright_code *)**(unsigned int **)(*(int *)(param_1 + 0xec) - 0xb8))();
        *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) - 0xb8;
      }
      FUN_002e9318(temp_v7);
    }
LAB_00414788:
    temp_v0 = *(int *)(param_1 + 0xe8);
    if (*(int *)(param_1 + 0xec) != temp_v0) {
      do {
        if (*(int *)(temp_v0 + 0xc) != 0 || *(int *)(temp_v0 + 8) != 0) {
          FUN_002ea100(temp_v6,"not check");
          if ((*(int *)(temp_v0 + 0xa4) - *(int *)(temp_v0 + 0xa0)) >> 3 != 0) {
            FUN_002e9590(temp_v6);
          }
          FUN_002e9318(temp_v6);
        }
        temp_v0 = temp_v0 + 0xb8;
      } while (*(int *)(param_1 + 0xec) != temp_v0);
    }
    FUN_004130c0(param_1,6);
  }
  return;
}
