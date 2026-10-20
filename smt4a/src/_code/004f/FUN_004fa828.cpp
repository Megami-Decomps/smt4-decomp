/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fa828` (_code @ 0x4fa828, 0x524 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int btlGetMainState(...);
int FUN_002804b0(...);
int FUN_002c1c88(...);
int FUN_002e342c(...);
int sysMemClear(...);
int FUN_003e7840(...);
int FUN_003fd7b4(...);
int FUN_003fe86c(...);
int FUN_0040aad4(...);
int FUN_0040ab7c(...);
int FUN_0040ace8(...);
int FUN_004f612c(...);
int FUN_004f65d4(...);
int FUN_004f7778(...);
int FUN_004f8a58(...);
int FUN_004f8d90(...);
int rt_memcpy_w(...);

typedef int romwright_code(...);
/* stack frame of param_4: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned char spB0; /* 0xb0: local_b0 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
} param_4_stack;

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_00571508; /* 0x571508 */
extern unsigned int DAT_00573808; /* 0x573808 */

/* Supplied declaration required: FUN_00100388. */
extern int FUN_00100d60(unsigned char *, unsigned int);
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_002c1c88. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: sysMemClear. */
extern int FUN_00347664(void);
extern int FUN_0035bcdc(int);
/* Supplied declaration required: FUN_003e7840. */
/* Supplied declaration required: FUN_003fd7b4. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_0040aad4. */
/* Supplied declaration required: FUN_0040ab7c. */
extern int FUN_0040ab8c(unsigned int);
/* Supplied declaration required: FUN_0040ace8. */
/* Supplied declaration required: FUN_004f612c. */
/* Supplied declaration required: FUN_004f65d4. */
/* Supplied declaration required: FUN_004f7778. */
/* Supplied declaration required: FUN_004f8a58. */
/* Supplied declaration required: FUN_004f8d90. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_004fa828(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 goto(s); 18 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int *puVar8;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned long long temp_v9;
  unsigned char temp_v10 [4];
  int temp_v11;
  unsigned char temp_v12 [8];
  unsigned char temp_v13;
  
  temp_v4 = *(int *)(param_1 + 0x3588);
  if (0 < temp_v4) {
    *(int *)(param_1 + 0x3588) = temp_v4 - 1;
  }
  temp_v1 = *(unsigned int *)(param_1 + 0x339c);
  temp_v8 = (temp_v1 & 2) != 0;
  if (temp_v8) {
    temp_v1 = *(unsigned int *)(param_1 + 0x33a8);
  }
  if (temp_v8 && temp_v1 != 0) {
    if ((DAT_00571508 != 0) &&
       (temp_v0 = *(char *)(param_1 + 0x33ac), (temp_v0 == '\x02' || temp_v0 == '\b') || temp_v0 == '\t')) {
      *(unsigned int *)(DAT_00571508 + 0x64c) = *(unsigned int *)(DAT_00571508 + 0x64c) | 0x4000000;
    }
    (**(romwright_code **)(**(int **)(param_1 + 0x33a8) + 8))();
    temp_v4 = (**(romwright_code **)(**(int **)(param_1 + 0x33a8) + 0x14))();
    if (temp_v4 != 0) {
      FUN_004f612c(param_1);
    }
  }
  if ((*(unsigned int *)(param_1 + 0x339c) & 4) != 0) {
    FUN_002c1c88(temp_v10);
    FUN_003e7840(param_2);
  }
  if ((*(unsigned int *)(param_1 + 0x339c) & 8) != 0) {
    FUN_002c1c88(temp_v10);
    FUN_003e7840(param_2);
    temp_v4 = FUN_00347664();
    if (temp_v4 == 0) {
      *(unsigned int *)(param_1 + 0x339c) = *(unsigned int *)(param_1 + 0x339c) & 0xfffffff7;
    }
  }
  if ((*(unsigned int *)(param_1 + 0x339c) & 0x10) == 0) {
    temp_v1 = *(unsigned int *)(param_1 + 0x339c);
  }
  else {
    FUN_004f8d90(DAT_00573808,*(unsigned int *)(param_1 + 0x33a0));
    temp_v1 = (*(unsigned int *)(param_1 + 0x339c) & 0xffffffef) | 0x20;
    *(unsigned int *)(param_1 + 0x339c) = temp_v1;
  }
  if ((temp_v1 & 0x20) != 0) {
    if (*(int *)(param_1 + 0x33a0) != 0 && *(int *)(param_1 + 0x33a0) != 0x16) {
      temp_v4 = 0;
      do {
        temp_v2 = param_1 + temp_v4 * 0x28;
        if ((*(unsigned int *)(temp_v2 + 0x1b4) & 2) != 0) {
          temp_v3 = FUN_0040ab8c(*(unsigned int *)(temp_v2 + 400));
          if (temp_v3 == 0) goto LAB_004fab24;
          *(unsigned int *)(temp_v2 + 0x1b4) = *(unsigned int *)(temp_v2 + 0x1b4) | 4;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 0x32);
    }
    if (*(int *)(param_1 + 0x33a0) != 0 && *(int *)(param_1 + 0x33a0) != 0x16) {
      temp_v4 = 0;
      do {
        temp_v2 = btlGetMainState();
        temp_v2 = temp_v2 + temp_v4 * 0x1c;
        temp_v3 = *(int *)(temp_v2 + 0x2418);
        if (-1 < temp_v3) {
          param_4 = *(int *)(temp_v2 + 0x241c);
        }
        if (-1 < temp_v3 && -1 < param_4) {
          temp_v2 = 0;
          while( 1 ) {
            temp_v5 = param_1 + temp_v2 * 0x28;
            temp_v6 = temp_v5 + 400;
            temp_v8 = *(int *)(temp_v5 + 0x194) == temp_v3;
            if (temp_v8) {
              temp_v6 = *(int *)(temp_v5 + 0x198);
            }
            if (temp_v8 && temp_v6 == param_4) break;
            temp_v2 = temp_v2 + 1;
            if (temp_v2 >= 0x32) {
              *(unsigned int *)(param_1 + 0x339c) = (*(unsigned int *)(param_1 + 0x339c) & 0xffffffdf) | 0x10;
              goto LAB_004fab24;
            }
          }
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 0x6d);
    }
    temp_v9 = 0;
    temp_v4 = 0;
    do {
      temp_v2 = param_1 + temp_v4 * 0x28;
      puVar8 = (unsigned int *)(temp_v2 + 400);
      temp_v1 = *(unsigned int *)(temp_v2 + 0x1b4);
      temp_v8 = (temp_v1 & 2) != 0;
      if (temp_v8) {
        temp_v1 = *puVar8;
      }
      if (temp_v8 && temp_v1 != 0) {
        FUN_0040ab7c(temp_v1,0);
        FUN_0040aad4(*puVar8,0);
        temp_v3 = *(int *)(*puVar8 + 4);
        FUN_003fd7b4(temp_v3);
        *(int *)(temp_v3 + 0x1fc) = (int)temp_v9;
        FUN_003fe86c(temp_v3,0,2);
        FUN_0040ace8(DAT_0056fcc0,temp_v3);
        *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v3 + 4) | 1;
        if (-1 < *(int *)(temp_v2 + 0x1ac)) {
          temp_v3 = param_1 + *(int *)(temp_v2 + 0x1ac) * 8;
          *(unsigned int *)(temp_v3 + 0x1030) = *(unsigned int *)(temp_v2 + 0x194);
          *(unsigned int *)(temp_v3 + 0x1034) = *(unsigned int *)(temp_v2 + 0x1ac);
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x32);
    FUN_004f7778(param_1);
    *(unsigned int *)(param_1 + 0x339c) = (*(unsigned int *)(param_1 + 0x339c) & 0xffffffdf) | 0x40;
  }
LAB_004fab24:
  if ((*(unsigned int *)(param_1 + 0x339c) & 0x40) == 0) {
    temp_v1 = *(unsigned int *)(param_1 + 0x339c);
  }
  else {
    temp_v7 = *(unsigned int *)(param_1 + 0x33a0);
    temp_v4 = btlGetMainState();
    temp_v2 = 0;
    while (temp_v2 = temp_v2 + 1, temp_v2 < 0x6d) {
      if (temp_v2 >= 4) {
        temp_v3 = btlGetMainState();
        temp_v6 = temp_v2 * 0x1d0 + 0x50;
        if (((*(unsigned int *)(*(int *)(temp_v3 + 0x1ed4) + temp_v6) & 1) != 0) &&
           ((*(unsigned int *)(*(int *)(temp_v4 + 0x1ed4) + temp_v6) & 0x400) != 0)) {
          FUN_004f8a58(param_1,temp_v7,temp_v2);
        }
      }
    }
    temp_v1 = (*(unsigned int *)(param_1 + 0x339c) & 0xffffffbf) | 0x80;
    *(unsigned int *)(param_1 + 0x339c) = temp_v1;
  }
  if ((temp_v1 & 0x80) == 0) {
    temp_v1 = *(unsigned int *)(param_1 + 0x339c);
  }
  else {
    temp_v4 = 0;
    while (temp_v4 = temp_v4 + 1, temp_v4 < 0x6d) {
      if (temp_v4 >= 4) {
        btlGetMainState();
      }
    }
    temp_v1 = *(unsigned int *)(param_1 + 0x339c) & 0xffffff0f;
    *(unsigned int *)(param_1 + 0x339c) = temp_v1;
  }
  if ((temp_v1 & 0x100) != 0) {
    temp_v4 = 0;
    do {
      sysMemClear(temp_v12,0x80);
      sysMemClear(temp_v10,0x80);
      FUN_00100388(temp_v10,"battle/effect/%s.eft","ef_e_ref" + temp_v4 * 0x20);
      FUN_002e342c(temp_v12,temp_v10);
      temp_v2 = param_1 + temp_v4 * 0x8c;
      temp_v3 = FUN_00100d60(temp_v12,0x2f);
      FUN_002e342c(temp_v2 + 0x2824,temp_v3 + 1);
      temp_v3 = FUN_0035bcdc(temp_v2 + 0x2824);
      if (temp_v3 == 0xff) {
        FUN_002804b0(temp_v12,temp_v2 + 0x2820,1);
        *(unsigned char *)(temp_v2 + 0x28a4) = *(unsigned char *)(temp_v2 + 0x28a4) | 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0xb);
    *(unsigned int *)(param_1 + 0x339c) = (*(unsigned int *)(param_1 + 0x339c) & 0xfffffeff) | 0x200;
  }
  temp_v1 = *(unsigned int *)(param_1 + 0x339c);
  if ((temp_v1 & 0x200) != 0) {
    temp_v4 = 0;
    do {
      rt_memcpy_w(temp_v10,param_1 + temp_v4 * 0x8c + 0x281c,0x8c);
      if (((temp_v13 & 1) != 0) && (temp_v11 == 0)) {
        FUN_004f65d4(param_1);
        if (*(unsigned int *)(param_1 + 0x33a4) < 0xffff) {
          *(unsigned int *)(param_1 + 0x33a4) = *(unsigned int *)(param_1 + 0x33a4) + 1;
        }
        return 0;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0xb);
    *(unsigned int *)(param_1 + 0x339c) = (temp_v1 & 0xfffffdff) | 0x400;
  }
  FUN_004f65d4(param_1);
  if (*(unsigned int *)(param_1 + 0x33a4) < 0xffff) {
    *(unsigned int *)(param_1 + 0x33a4) = *(unsigned int *)(param_1 + 0x33a4) + 1;
  }
  return 0;
}

} /* extern "C" */
