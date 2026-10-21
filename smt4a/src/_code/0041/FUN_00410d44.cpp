/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00410d44` (_code @ 0x410d44, 0x230 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003d54f8(int, int);
int FUN_003e503c(void);
int FUN_003f1b3c(int, unsigned int, int, int *);
int FUN_0047f4cc(unsigned int);
void btlReflectCreateKind43(int, unsigned int, unsigned int, unsigned int, unsigned int);
int FUN_004fef70(int, int, int, int);
int rt_memcpy_w(unsigned int **, unsigned char *, int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp90; /* 0x90: local_90 */
} param_1_stack;

extern unsigned char DAT_005297d4; /* 0x5297d4 */

extern int FUN_0013def0(unsigned int);
extern int btlGetMainState(void);
extern int FUN_00163e84(unsigned int);
extern int FUN_00187168(void);
extern unsigned int FUN_0019acdc(unsigned short, unsigned int);
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: FUN_003e503c. */
/* Supplied declaration required: FUN_003f1b3c. */
/* Supplied declaration required: FUN_0047f4cc. */
/* Supplied declaration required: btlReflectCreateKind43. */
/* Supplied declaration required: FUN_004fef70. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00410d44(int param_1)

{
/* irregular: irregular input(s): in_d10, in_d9; 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  long long temp_v7;
  float temp_v8;
  unsigned long long in_d9;
  float temp_v9;
  unsigned long long in_d10;
  unsigned int *temp_v10;
  float afStack_8c [20];
  int temp_v11;
  unsigned int temp_v12 [8];
  
  temp_v0 = btlGetMainState();
  temp_v1 = *(int *)(param_1 + 0x10);
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if (temp_v1 == 2) {
        temp_v0 = 3;
        *(int *)(param_1 + 0x10) = temp_v0;
        return;
      }
      if (temp_v1 == 3) {
        *(unsigned int *)(param_1 + 8) = 7;
      }
    }
    else {
      temp_v1 = FUN_00163e84(0);
      if (temp_v1 != 0) {
        temp_v1 = 0;
        temp_v5 = 0;
        while( 1 ) {
          temp_v2 = temp_v5;
          FUN_003e503c();
          temp_v9 = (float)in_d10;
          if (*(unsigned int *)(temp_v0 + 0x4d68) == temp_v2) break;
          temp_v4 = FUN_00187168();
          if (temp_v4 != 0) {
            temp_v1 = temp_v1 + 1;
          }
          temp_v5 = temp_v5 + 1;
          if ((int)temp_v5 >= 0xc) {
            temp_v0 = *(int *)(param_1 + 0x10) + 1;
            *(int *)(param_1 + 0x10) = temp_v0;
            return;
          }
        }
        temp_v3 = FUN_0019acdc(*(unsigned short *)(temp_v2 + 300),1);
        temp_v10 = temp_v12;
        FUN_003f1b3c(temp_v0,temp_v3,4,&temp_v11);
        temp_v7 = (unsigned long long)*(unsigned int *)(param_1 + temp_v1 * 0x1c + 0x48) << 0x20;
        rt_memcpy_w(&temp_v10,&DAT_005297d4,0x54);
        temp_v0 = 0;
        do {
          temp_v6 = afStack_8c[temp_v0 * 3 - 1];
          temp_v8 = (float)((unsigned long long)temp_v7 >> 0x20);
          if ((temp_v6 < temp_v8) && (temp_v8 <= afStack_8c[temp_v0 * 3])) {
            temp_v7 = (unsigned long long)(unsigned int)temp_v8 << 0x20;
          }
          temp_v8 = (float)(in_d9 >> 0x20);
          temp_v4 = temp_v0 + 1;
          if (temp_v6 < temp_v8) {
            in_d9 = (unsigned long long)(unsigned int)temp_v6 << 0x20;
          }
          if (temp_v6 < temp_v8) {
            in_d9 = in_d9 & 0xffffffff00000000;
          }
          if (temp_v9 < afStack_8c[temp_v0 * 3]) {
            in_d9 = (unsigned long long)(unsigned int)afStack_8c[temp_v0 * 3 - 1] << 0x20;
          }
          temp_v0 = temp_v4;
        } while (temp_v4 < 7);
        FUN_0047f4cc(temp_v12[0]);
        FUN_004fef70(0,0,temp_v1,temp_v11);
        btlReflectCreateKind43(0,0x1e,0,temp_v1,1);
        temp_v0 = *(int *)(param_1 + 0x10) + 1;
        *(int *)(param_1 + 0x10) = temp_v0;
        return;
      }
    }
  }
  else {
    temp_v0 = FUN_00163e84(0);
    if (temp_v0 != 0) {
      temp_v0 = FUN_0013def0(0);
      if (temp_v0 != 0) {
        FUN_003d54f8(0,10);
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      return;
    }
  }
  return;
}

} /* extern "C" */
