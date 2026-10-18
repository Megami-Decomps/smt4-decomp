/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dd1a4` (_code @ 0x3dd1a4, 0x4c4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned char spA0; /* 0xa0: local_a0 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
} param_4_stack;

extern int DAT_004342c8; /* 0x4342c8 */
extern unsigned int DAT_00435d18; /* 0x435d18 */

/* Supplied declaration required: FUN_00201148. */
/* Supplied declaration required: FUN_002276f8. */
/* Supplied declaration required: FUN_0023c6e4. */
/* Supplied declaration required: FUN_0023ea20. */
extern int FUN_0024a808(int);
extern int FUN_002522e0(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_00254a2c. */
/* Supplied declaration required: FUN_0028c618. */
/* Supplied declaration required: FUN_002939f4. */
/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: FUN_002a0428. */
extern int FUN_002adee0(unsigned int);
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bf694. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002d582c. */
extern int FUN_002d8214(void);
/* Supplied declaration required: FUN_003da0ec. */
/* Supplied declaration required: FUN_003daf6c. */
/* Supplied declaration required: FUN_003dbed8. */
/* Supplied declaration required: FUN_003dc924. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_003dd1a4(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

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
  unsigned char temp_v7;
  unsigned char temp_v8 [4];
  int temp_v9;
  unsigned char temp_v10 [8];
  unsigned char temp_v11;
  
  if (0 < *(int *)(param_1 + 0x3214)) {
    *(int *)(param_1 + 0x3214) = *(int *)(param_1 + 0x3214) - 1;
  }
  temp_v1 = *(unsigned int *)(param_1 + 0x3028);
  temp_v7 = (temp_v1 & 2) != 0;
  if (temp_v7) {
    temp_v1 = *(unsigned int *)(param_1 + 0x3034);
  }
  if (temp_v7 && temp_v1 != 0) {
    if ((DAT_004342c8 != 0) &&
       (temp_v0 = *(char *)(param_1 + 0x3038), (temp_v0 == '\x02' || temp_v0 == '\b') || temp_v0 == '\t')) {
      *(unsigned int *)(DAT_004342c8 + 0x634) = *(unsigned int *)(DAT_004342c8 + 0x634) | 0x4000000;
    }
    (**(romwright_code **)(**(int **)(param_1 + 0x3034) + 8))();
    temp_v2 = (**(romwright_code **)(**(int **)(param_1 + 0x3034) + 0x14))();
    if (temp_v2 != 0) {
      FUN_002276f8(param_1);
    }
  }
  if ((*(unsigned int *)(param_1 + 0x3028) & 4) != 0) {
    FUN_00201148(temp_v8);
    FUN_0023c6e4(param_2);
  }
  if ((*(unsigned int *)(param_1 + 0x3028) & 8) != 0) {
    FUN_00201148(temp_v8);
    FUN_0023c6e4(param_2);
    temp_v2 = FUN_002d8214();
    if (temp_v2 == 0) {
      *(unsigned int *)(param_1 + 0x3028) = *(unsigned int *)(param_1 + 0x3028) & 0xfffffff7;
    }
  }
  if ((*(unsigned int *)(param_1 + 0x3028) & 0x10) == 0) {
    temp_v1 = *(unsigned int *)(param_1 + 0x3028);
  }
  else {
    FUN_003dbed8(DAT_00435d18,*(unsigned int *)(param_1 + 0x302c));
    temp_v1 = (*(unsigned int *)(param_1 + 0x3028) & 0xffffffef) | 0x20;
    *(unsigned int *)(param_1 + 0x3028) = temp_v1;
  }
  if ((temp_v1 & 0x20) != 0) {
    if (*(int *)(param_1 + 0x302c) != 0 && *(int *)(param_1 + 0x302c) != 0x16) {
      temp_v2 = 0;
      do {
        temp_v3 = param_1 + temp_v2 * 0x28;
        if ((*(unsigned int *)(temp_v3 + 0x1b4) & 2) != 0) {
          temp_v4 = FUN_002adee0(*(unsigned int *)(temp_v3 + 400));
          if (temp_v4 == 0) goto LAB_003dd4ac;
          *(unsigned int *)(temp_v3 + 0x1b4) = *(unsigned int *)(temp_v3 + 0x1b4) | 4;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 0x32);
    }
    if (*(int *)(param_1 + 0x302c) != 0 && *(int *)(param_1 + 0x302c) != 0x16) {
      temp_v2 = 0;
      do {
        temp_v3 = FUN_002939f4();
        temp_v3 = temp_v3 + temp_v2 * 0x1c;
        temp_v4 = *(int *)(temp_v3 + 0x2318);
        if (-1 < temp_v4) {
          param_4 = *(int *)(temp_v3 + 0x231c);
        }
        if (-1 < temp_v4 && -1 < param_4) {
          temp_v3 = 0;
          while( 1 ) {
            temp_v5 = param_1 + temp_v3 * 0x28;
            temp_v6 = temp_v5 + 400;
            temp_v7 = *(int *)(temp_v5 + 0x194) == temp_v4;
            if (temp_v7) {
              temp_v6 = *(int *)(temp_v5 + 0x198);
            }
            if (temp_v7 && temp_v6 == param_4) break;
            temp_v3 = temp_v3 + 1;
            if (temp_v3 >= 0x32) {
              *(unsigned int *)(param_1 + 0x3028) = (*(unsigned int *)(param_1 + 0x3028) & 0xffffffdf) | 0x10;
              goto LAB_003dd4ac;
            }
          }
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 0x6d);
    }
    FUN_003daf6c(param_1);
    temp_v2 = 0;
    do {
      temp_v3 = param_1 + temp_v2 * 0x28;
      puVar8 = (unsigned int *)(temp_v3 + 400);
      temp_v1 = *(unsigned int *)(temp_v3 + 0x1b4);
      temp_v7 = (temp_v1 & 2) != 0;
      if (temp_v7) {
        temp_v1 = *puVar8;
      }
      if (temp_v7 && temp_v1 != 0) {
        if (*(int *)(*(int *)(temp_v1 + 8) + 0xc) < 0) {
          FUN_002a0428(temp_v1,1);
        }
        FUN_0028c618(*(unsigned int *)(*puVar8 + 8),0);
        FUN_0023ea20(*puVar8,0);
        FUN_002d582c(*puVar8);
        FUN_00254a2c(*(unsigned int *)(*puVar8 + 8),1);
        puVar8 = (unsigned int *)*puVar8;
        *puVar8 = *puVar8 | 2;
        *(unsigned char *)(*(int *)(puVar8[2] + 0x2c) + 0x1f6) = 0;
        if (-1 < *(int *)(temp_v3 + 0x1ac)) {
          temp_v4 = param_1 + *(int *)(temp_v3 + 0x1ac) * 8;
          *(unsigned int *)(temp_v4 + 0x1030) = *(unsigned int *)(temp_v3 + 0x194);
          *(unsigned int *)(temp_v4 + 0x1034) = *(unsigned int *)(temp_v3 + 0x1ac);
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x32);
    *(unsigned int *)(param_1 + 0x3028) = (*(unsigned int *)(param_1 + 0x3028) & 0xffffffdf) | 0x40;
  }
LAB_003dd4ac:
  if ((*(unsigned int *)(param_1 + 0x3028) & 0x40) == 0) {
    temp_v1 = *(unsigned int *)(param_1 + 0x3028);
  }
  else {
    FUN_003dc924(param_1,*(unsigned int *)(param_1 + 0x302c),0);
    temp_v1 = (*(unsigned int *)(param_1 + 0x3028) & 0xffffffbf) | 0x80;
    *(unsigned int *)(param_1 + 0x3028) = temp_v1;
  }
  if ((temp_v1 & 0x80) == 0) {
    temp_v1 = *(unsigned int *)(param_1 + 0x3028);
  }
  else {
    temp_v2 = 0;
    while (temp_v2 = temp_v2 + 1, temp_v2 < 0x6d) {
      if (temp_v2 >= 4) {
        FUN_002939f4();
      }
    }
    temp_v1 = *(unsigned int *)(param_1 + 0x3028) & 0xffffff0f;
    *(unsigned int *)(param_1 + 0x3028) = temp_v1;
  }
  if ((temp_v1 & 0x100) != 0) {
    temp_v2 = 0;
    do {
      FUN_002c4938(temp_v8,0x80);
      FUN_002c4938(temp_v10,0x80);
      FUN_002be624(temp_v10,"battle/effect/%s.eft","ef_e_ref" + temp_v2 * 0x20);
      FUN_002bf694(temp_v8,temp_v10);
      temp_v3 = param_1 + temp_v2 * 0x8c;
      temp_v4 = FUN_002522e0(temp_v8,0x2f);
      FUN_002bf694(temp_v3 + 0x25c8,temp_v4 + 1);
      temp_v4 = FUN_0024a808(temp_v3 + 0x25c8);
      if (temp_v4 == 0xff) {
        FUN_00297468(temp_v8,temp_v3 + 0x25c4,0);
        *(unsigned char *)(temp_v3 + 0x2648) = *(unsigned char *)(temp_v3 + 0x2648) | 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0xb);
    *(unsigned int *)(param_1 + 0x3028) = (*(unsigned int *)(param_1 + 0x3028) & 0xfffffeff) | 0x200;
  }
  temp_v1 = *(unsigned int *)(param_1 + 0x3028);
  if ((temp_v1 & 0x200) != 0) {
    temp_v2 = 0;
    do {
      rt_memcpy_w(temp_v8,param_1 + temp_v2 * 0x8c + 0x25c0,0x8c);
      if (((temp_v11 & 1) != 0) && (temp_v9 == 0)) {
        FUN_003da0ec(param_1);
        if (*(unsigned int *)(param_1 + 0x3030) < 0xffff) {
          *(unsigned int *)(param_1 + 0x3030) = *(unsigned int *)(param_1 + 0x3030) + 1;
        }
        return 0;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0xb);
    *(unsigned int *)(param_1 + 0x3028) = (temp_v1 & 0xfffffdff) | 0x400;
  }
  FUN_003da0ec(param_1);
  if (*(unsigned int *)(param_1 + 0x3030) < 0xffff) {
    *(unsigned int *)(param_1 + 0x3030) = *(unsigned int *)(param_1 + 0x3030) + 1;
  }
  return 0;
}
