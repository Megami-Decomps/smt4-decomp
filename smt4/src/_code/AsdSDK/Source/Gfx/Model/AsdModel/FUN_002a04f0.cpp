/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a04f0` (_code @ 0x2a04f0, 0x4b0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001db640(...);
int FUN_002a4258(...);
int FUN_002c2968(...);
int FUN_003946b4(...);
int nw_gfx_SceneNode_IsCircularReference(...);

typedef struct fn_002a04f0_arg0 fn_002a04f0_arg0;
struct fn_002a04f0_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x4];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    undefined4 field_0x18; /* +0x18 */
    undefined4 *field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
};

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned int DAT_00464b84; /* 0x464b84 */
extern unsigned char DAT_004dace0; /* 0x4dace0 */

extern unsigned int FUN_00152884(fn_002a04f0_arg0 *);
/* Supplied declaration required: FUN_001db640. */
/* Supplied declaration required: FUN_002a4258. */
extern int FUN_002a4268(fn_002a04f0_arg0 *);
extern int FUN_002a4278(fn_002a04f0_arg0 *);
extern int FUN_002af294(int, int);
/* Supplied declaration required: FUN_002c2968. */
/* Supplied declaration required: FUN_003946b4. */
/* Supplied declaration required: nw_gfx_SceneNode_IsCircularReference. */


void FUN_002a04f0(fn_002a04f0_arg0 *param_1)

{
/* irregular: 5 goto(s); 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  
  temp_v0 = FUN_00152884(param_1);
  temp_v1 = FUN_002a4258(param_1);
  temp_v2 = **(unsigned int **)(*(int *)(temp_v1 + 4) + 0x4c);
  temp_v3 = FUN_002a4258(param_1);
  temp_v4 = FUN_002a4278(param_1);
  temp_v8 = 0;
  do {
    temp_v6 = *(int *)((int)param_1 * 0x284 + temp_v8 * 4 + 0x4d9ae4);
    if ((temp_v6 != 0) &&
       (((temp_v5 = *(int *)(temp_v4 + 0xc), temp_v5 == 0 ||
         ((temp_v5 != temp_v6 && (nw_gfx_SceneNode_IsCircularReference(), temp_v5 == 0)))) &&
        (*(int *)(temp_v6 + 0xc) == 0)))) {
      temp_v7 = *(unsigned int *)(temp_v4 + 0x20) & 0x3fffffff;
      temp_v5 = 1;
      if ((int)temp_v7 <= (*(int *)(temp_v4 + 0x1c) - *(int *)(temp_v4 + 0x18)) >> 2) {
        if (temp_v7 == 0) {
          temp_v5 = 1;
        }
        else {
          temp_v5 = temp_v7 << 1;
        }
        temp_v5 = FUN_002af294(temp_v4 + 0x14,temp_v5);
        if (temp_v5 == 0) goto LAB_002a0628;
      }
      if (*(int **)(temp_v4 + 0x1c) != (int *)0x0) {
        **(int **)(temp_v4 + 0x1c) = temp_v6;
      }
      *(int *)(temp_v4 + 0x1c) = *(int *)(temp_v4 + 0x1c) + 4;
      if (temp_v5 != 0) {
        *(unsigned int *)(temp_v6 + 0xc) = *(unsigned int *)(temp_v4 + 0x10);
      }
    }
LAB_002a0628:
    temp_v6 = *(int *)((int)param_1 * 0x284 + temp_v8 * 4 + 0x4d9fec);
    if (((temp_v6 != 0) &&
        ((temp_v5 = *(int *)(temp_v4 + 0xc), temp_v5 == 0 ||
         ((temp_v5 != temp_v6 && (nw_gfx_SceneNode_IsCircularReference(), temp_v5 == 0)))))) &&
       (*(int *)(temp_v6 + 0xc) == 0)) {
      temp_v7 = *(unsigned int *)(temp_v4 + 0x20) & 0x3fffffff;
      temp_v5 = 1;
      if ((int)temp_v7 <= (*(int *)(temp_v4 + 0x1c) - *(int *)(temp_v4 + 0x18)) >> 2) {
        if (temp_v7 == 0) {
          temp_v5 = 1;
        }
        else {
          temp_v5 = temp_v7 << 1;
        }
        temp_v5 = FUN_002af294(temp_v4 + 0x14,temp_v5);
        if (temp_v5 == 0) goto LAB_002a06e8;
      }
      if (*(int **)(temp_v4 + 0x1c) != (int *)0x0) {
        **(int **)(temp_v4 + 0x1c) = temp_v6;
      }
      *(int *)(temp_v4 + 0x1c) = *(int *)(temp_v4 + 0x1c) + 4;
      if (temp_v5 != 0) {
        *(unsigned int *)(temp_v6 + 0xc) = *(unsigned int *)(temp_v4 + 0x10);
      }
    }
LAB_002a06e8:
    temp_v6 = *(int *)((int)param_1 * 0x284 + temp_v8 * 4 + 0x4da4f4);
    if (((temp_v6 != 0) &&
        ((temp_v5 = *(int *)(temp_v4 + 0xc), temp_v5 == 0 ||
         ((temp_v5 != temp_v6 && (nw_gfx_SceneNode_IsCircularReference(), temp_v5 == 0)))))) &&
       (*(int *)(temp_v6 + 0xc) == 0)) {
      temp_v7 = *(unsigned int *)(temp_v4 + 0x20) & 0x3fffffff;
      temp_v5 = 1;
      if ((int)temp_v7 <= (*(int *)(temp_v4 + 0x1c) - *(int *)(temp_v4 + 0x18)) >> 2) {
        if (temp_v7 == 0) {
          temp_v5 = 1;
        }
        else {
          temp_v5 = temp_v7 << 1;
        }
        temp_v5 = FUN_002af294(temp_v4 + 0x14,temp_v5);
        if (temp_v5 == 0) goto LAB_002a07a8;
      }
      if (*(int **)(temp_v4 + 0x1c) != (int *)0x0) {
        **(int **)(temp_v4 + 0x1c) = temp_v6;
      }
      *(int *)(temp_v4 + 0x1c) = *(int *)(temp_v4 + 0x1c) + 4;
      if (temp_v5 != 0) {
        *(unsigned int *)(temp_v6 + 0xc) = *(unsigned int *)(temp_v4 + 0x10);
      }
    }
LAB_002a07a8:
    temp_v6 = *(int *)((int)param_1 * 0x284 + temp_v8 * 4 + 0x4da9fc);
    if ((temp_v6 != 0) &&
       (((temp_v5 = *(int *)(temp_v4 + 0xc), temp_v5 == 0 ||
         ((temp_v5 != temp_v6 && (nw_gfx_SceneNode_IsCircularReference(), temp_v5 == 0)))) &&
        (*(int *)(temp_v6 + 0xc) == 0)))) {
      temp_v7 = *(unsigned int *)(temp_v4 + 0x20) & 0x3fffffff;
      temp_v5 = 1;
      if ((int)temp_v7 <= (*(int *)(temp_v4 + 0x1c) - *(int *)(temp_v4 + 0x18)) >> 2) {
        if (temp_v7 == 0) {
          temp_v5 = 1;
        }
        else {
          temp_v5 = temp_v7 << 1;
        }
        temp_v5 = FUN_002af294(temp_v4 + 0x14,temp_v5);
        if (temp_v5 == 0) goto LAB_002a0868;
      }
      if (*(int **)(temp_v4 + 0x1c) != (int *)0x0) {
        **(int **)(temp_v4 + 0x1c) = temp_v6;
      }
      *(int *)(temp_v4 + 0x1c) = *(int *)(temp_v4 + 0x1c) + 4;
      if (temp_v5 != 0) {
        *(unsigned int *)(temp_v6 + 0xc) = *(unsigned int *)(temp_v4 + 0x10);
      }
    }
LAB_002a0868:
    temp_v8 = (int)(short)((short)temp_v8 + 1);
  } while (temp_v8 < 8);
  temp_v4 = FUN_002a4268(param_1);
  temp_v8 = 0;
  do {
    temp_v6 = *(int *)((int)param_1 * 0x14 + temp_v8 * 4 + 0x4daca4);
    if (((temp_v6 != 0) &&
        ((temp_v5 = *(int *)(temp_v4 + 0xc), temp_v5 == 0 ||
         ((temp_v5 != temp_v6 && (nw_gfx_SceneNode_IsCircularReference(), temp_v5 == 0)))))) &&
       (*(int *)(temp_v6 + 0xc) == 0)) {
      temp_v7 = *(unsigned int *)(temp_v4 + 0x20) & 0x3fffffff;
      temp_v5 = 1;
      if ((int)temp_v7 <= (*(int *)(temp_v4 + 0x1c) - *(int *)(temp_v4 + 0x18)) >> 2) {
        if (temp_v7 == 0) {
          temp_v5 = 1;
        }
        else {
          temp_v5 = temp_v7 << 1;
        }
        temp_v5 = FUN_002af294(temp_v4 + 0x14,temp_v5);
        if (temp_v5 == 0) goto LAB_002a094c;
      }
      if (*(int **)(temp_v4 + 0x1c) != (int *)0x0) {
        **(int **)(temp_v4 + 0x1c) = temp_v6;
      }
      *(int *)(temp_v4 + 0x1c) = *(int *)(temp_v4 + 0x1c) + 4;
      if (temp_v5 != 0) {
        *(unsigned int *)(temp_v6 + 0xc) = *(unsigned int *)(temp_v4 + 0x10);
      }
    }
LAB_002a094c:
    temp_v8 = (int)(short)((short)temp_v8 + 1);
    if (temp_v8 >= 4) {
      FUN_002c2968(temp_v3,(&DAT_00464b84)[(int)param_1]);
      FUN_001db640(param_1);
      FUN_003946b4(temp_v0,temp_v1,&DAT_004dace0 + (int)param_1 * 0x40,temp_v2);
      return;
    }
  } while( 1 );
}

} /* extern "C" */
