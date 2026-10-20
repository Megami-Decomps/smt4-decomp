/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bb710` (_code @ 0x3bb710, 0x1f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_00203b40(int, int, int, int, int, int);
int sysMemClear(int, int);
int FUN_0032fea0(int, int);
int rt_memcpy_w(int, int, int);

typedef struct fn_003bb710_arg0 fn_003bb710_arg0;
struct fn_003bb710_arg0 {
    unsigned char pad_0x0[0x40];
    undefined4 field_0x40; /* +0x40 */
    unsigned char field_0x44; /* +0x44 */
    unsigned char pad_0x45[0x3];
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
};

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int g_unite; /* 0x57f290 */

/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_0032fea0. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_003bb710(fn_003bb710_arg0 *param_1)

{
/* irregular: 5 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  
  temp_v1 = g_unite;
  FUN_00184310();
  temp_v6 = param_1->field_0x48;
  temp_v7 = param_1->field_0x40;
  temp_v8 = *(unsigned int *)&param_1->field_0x44;
  *(unsigned int *)(temp_v1 + 0x8b6c) = param_1->field_0x4c;
  *(unsigned int *)(temp_v1 + 0x8b68) = temp_v6;
  temp_v2 = temp_v1 + 0x8cf0;
  *(unsigned int *)(temp_v1 + 0x8b60) = temp_v7;
  *(unsigned int *)(temp_v1 + 0x8b64) = temp_v8;
  sysMemClear(temp_v2,0xc0);
  temp_v9 = 0;
  do {
    temp_v3 = temp_v1 + temp_v9 * 2;
    if (*(short *)(temp_v3 + 0x8b60) != 0) {
      temp_v4 = temp_v2;
      FUN_0032fea0(temp_v2,0x18);
      temp_v5 = 0;
      if (temp_v4 == 0) {
        do {
          if (*(short *)(temp_v1 + temp_v5 * 2 + 0x8cf0) == 0) {
            *(unsigned short *)(temp_v1 + temp_v5 * 2 + 0x8cf0) = *(unsigned short *)(temp_v3 + 0x8b60);
            break;
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 0x60);
      }
    }
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 8);
  temp_v9 = 0;
  do {
    temp_v3 = temp_v1 + temp_v9 * 2;
    if (*(short *)(temp_v3 + 0x8b70) == 0) break;
    temp_v4 = temp_v2;
    FUN_0032fea0(temp_v2,0x18);
    temp_v5 = 0;
    if (temp_v4 == 0) {
      do {
        if (*(short *)(temp_v1 + temp_v5 * 2 + 0x8cf0) == 0) {
          *(unsigned short *)(temp_v1 + temp_v5 * 2 + 0x8cf0) = *(unsigned short *)(temp_v3 + 0x8b70);
          break;
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 0x60);
    }
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 0x60);
  temp_v9 = 0x18;
  if (*(int *)(temp_v1 + 0x400) == 0x1c) {
    temp_v9 = 0x60;
  }
  rt_memcpy_w(temp_v1 + 0x8b70,temp_v2,temp_v9 << 1);
  temp_v2 = 0;
  temp_v9 = 0;
  do {
    if (*(short *)(temp_v1 + temp_v9 * 2 + 0x8b70) == 0) break;
    temp_v9 = temp_v9 + 1;
    temp_v2 = temp_v2 + 1;
  } while (temp_v9 < 0x60);
  *(int *)(temp_v1 + 0x8e80) = temp_v2;
  temp_v9 = 0;
  do {
    temp_v0 = *(short *)(temp_v1 + temp_v9 * 2 + 0x8c30);
    if (temp_v0 == 0) break;
    temp_v3 = temp_v2 * 2;
    temp_v9 = temp_v9 + 1;
    temp_v2 = temp_v2 + 1;
    *(short *)(temp_v1 + temp_v3 + 0x8b70) = temp_v0;
  } while (temp_v9 < 0x60);
  *(int *)(temp_v1 + 0x8e84) = temp_v2;
  FUN_00203b40(temp_v1 + 0x8e14,temp_v2 + 1,9,1,1,1);
  return;
}

} /* extern "C" */
