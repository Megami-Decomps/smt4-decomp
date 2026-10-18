/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d502c` (_code @ 0x3d502c, 0x4b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003d502c_arg0 fn_003d502c_arg0;
struct fn_003d502c_arg0 {
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

extern unsigned int DAT_005b3c88; /* 0x5b3c88 */

/* Supplied declaration required: FUN_001767a4. */
extern int FUN_001aa528(int, int);
extern unsigned int FUN_0027242c(fn_003d502c_arg0 *);
/* Supplied declaration required: FUN_00280828. */
extern int FUN_0034101c(fn_003d502c_arg0 *);
/* Supplied declaration required: FUN_0034102c. */
extern int FUN_0036baec(fn_003d502c_arg0 *);
/* Supplied declaration required: FUN_0047e610. */
/* Supplied declaration required: nw_gfx_SceneNode_IsCircularReference. */


void FUN_003d502c(fn_003d502c_arg0 *param_1)

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
  
  temp_v0 = FUN_0027242c(param_1);
  FUN_0034102c(param_1);
  temp_v1 = FUN_0034102c(param_1);
  temp_v2 = **(unsigned int **)(*(int *)(temp_v1 + 4) + 0x4c);
  temp_v3 = FUN_0034102c(param_1);
  temp_v4 = FUN_0036baec(param_1);
  temp_v8 = 0;
  do {
    temp_v6 = *(int *)((int)param_1 * 0x284 + temp_v8 * 4 + 0x635b64);
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
        temp_v5 = FUN_001aa528(temp_v4 + 0x14,temp_v5);
        if (temp_v5 == 0) goto LAB_003d516c;
      }
      if (*(int **)(temp_v4 + 0x1c) != (int *)0x0) {
        **(int **)(temp_v4 + 0x1c) = temp_v6;
      }
      *(int *)(temp_v4 + 0x1c) = *(int *)(temp_v4 + 0x1c) + 4;
      if (temp_v5 != 0) {
        *(unsigned int *)(temp_v6 + 0xc) = *(unsigned int *)(temp_v4 + 0x10);
      }
    }
LAB_003d516c:
    temp_v6 = *(int *)((int)param_1 * 0x284 + temp_v8 * 4 + 0x63606c);
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
        temp_v5 = FUN_001aa528(temp_v4 + 0x14,temp_v5);
        if (temp_v5 == 0) goto LAB_003d522c;
      }
      if (*(int **)(temp_v4 + 0x1c) != (int *)0x0) {
        **(int **)(temp_v4 + 0x1c) = temp_v6;
      }
      *(int *)(temp_v4 + 0x1c) = *(int *)(temp_v4 + 0x1c) + 4;
      if (temp_v5 != 0) {
        *(unsigned int *)(temp_v6 + 0xc) = *(unsigned int *)(temp_v4 + 0x10);
      }
    }
LAB_003d522c:
    temp_v6 = *(int *)((int)param_1 * 0x284 + temp_v8 * 4 + 0x636574);
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
        temp_v5 = FUN_001aa528(temp_v4 + 0x14,temp_v5);
        if (temp_v5 == 0) goto LAB_003d52ec;
      }
      if (*(int **)(temp_v4 + 0x1c) != (int *)0x0) {
        **(int **)(temp_v4 + 0x1c) = temp_v6;
      }
      *(int *)(temp_v4 + 0x1c) = *(int *)(temp_v4 + 0x1c) + 4;
      if (temp_v5 != 0) {
        *(unsigned int *)(temp_v6 + 0xc) = *(unsigned int *)(temp_v4 + 0x10);
      }
    }
LAB_003d52ec:
    temp_v6 = *(int *)((int)param_1 * 0x284 + temp_v8 * 4 + 0x636a7c);
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
        temp_v5 = FUN_001aa528(temp_v4 + 0x14,temp_v5);
        if (temp_v5 == 0) goto LAB_003d53ac;
      }
      if (*(int **)(temp_v4 + 0x1c) != (int *)0x0) {
        **(int **)(temp_v4 + 0x1c) = temp_v6;
      }
      *(int *)(temp_v4 + 0x1c) = *(int *)(temp_v4 + 0x1c) + 4;
      if (temp_v5 != 0) {
        *(unsigned int *)(temp_v6 + 0xc) = *(unsigned int *)(temp_v4 + 0x10);
      }
    }
LAB_003d53ac:
    temp_v8 = (int)(short)((short)temp_v8 + 1);
  } while (temp_v8 < 8);
  temp_v4 = FUN_0034101c(param_1);
  temp_v8 = 0;
  do {
    temp_v6 = *(int *)((int)param_1 * 0x14 + temp_v8 * 4 + 0x636d24);
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
        temp_v5 = FUN_001aa528(temp_v4 + 0x14,temp_v5);
        if (temp_v5 == 0) goto LAB_003d5490;
      }
      if (*(int **)(temp_v4 + 0x1c) != (int *)0x0) {
        **(int **)(temp_v4 + 0x1c) = temp_v6;
      }
      *(int *)(temp_v4 + 0x1c) = *(int *)(temp_v4 + 0x1c) + 4;
      if (temp_v5 != 0) {
        *(unsigned int *)(temp_v6 + 0xc) = *(unsigned int *)(temp_v4 + 0x10);
      }
    }
LAB_003d5490:
    temp_v8 = (int)(short)((short)temp_v8 + 1);
    if (temp_v8 >= 4) {
      FUN_001767a4(temp_v3,(&DAT_005b3c88)[(int)param_1]);
      FUN_00280828(param_1);
      FUN_0047e610(temp_v0,temp_v1,(int)param_1 * 0x40 + 0x636d60,temp_v2);
      return;
    }
  } while( 1 );
}
