/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018d9f0` (_code @ 0x18d9f0, 0x4a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_anim_res_ResAnim_Setup(int *, unsigned int, unsigned int);
int nw_gfx_res_ResFog_Setup(int *, unsigned int, unsigned int);
int nw_gfx_res_ResLight_Setup(int *, unsigned int, unsigned int);
int nw_gfx_res_ResModel_Setup(int *, unsigned int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned int FUN_0015d8e0(int *, unsigned int, unsigned int);
extern unsigned int FUN_0015d988(int *, unsigned int, unsigned int);
extern unsigned int FUN_0018e1f4(int *, unsigned int, unsigned int);
/* Supplied declaration required: nw_anim_res_ResAnim_Setup. */
/* Supplied declaration required: nw_gfx_res_ResFog_Setup. */
/* Supplied declaration required: nw_gfx_res_ResLight_Setup. */
/* Supplied declaration required: nw_gfx_res_ResModel_Setup. */


unsigned int FUN_0018d9f0(int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v2 = 0;
  temp_v4 = *(int *)(*param_1 + 0x2c);
  temp_v3 = 0;
  if (temp_v3 < temp_v4) {
    do {
      temp_v1 = *(int *)(*param_1 + 0x30);
      if (temp_v1 != 0) {
        temp_v1 = *param_1 + 0x30 + temp_v1;
      }
      else {
        temp_v1 = 0;
      }
      temp_v5 = 0;
      if (temp_v1 != 0) {
        piVar1 = (int *)(temp_v1 + temp_v3 * 0x10 + 0x28);
        temp_v5 = *piVar1;
        if (temp_v5 == 0) {
          temp_v5 = 0;
        }
        else {
          temp_v5 = (int)piVar1 + temp_v5;
        }
      }
      temp_v0 = FUN_0015d988(&temp_v5,param_2,param_3);
      temp_v3 = temp_v3 + 1;
      temp_v2 = temp_v2 | temp_v0;
    } while (temp_v3 < temp_v4);
  }
  temp_v3 = 0;
  temp_v4 = *(int *)(*param_1 + 0x4c);
  if (0 < temp_v4) {
    do {
      temp_v1 = *(int *)(*param_1 + 0x50);
      if (temp_v1 != 0) {
        temp_v1 = *param_1 + 0x50 + temp_v1;
      }
      else {
        temp_v1 = 0;
      }
      temp_v5 = 0;
      if (temp_v1 != 0) {
        piVar1 = (int *)(temp_v1 + temp_v3 * 0x10 + 0x28);
        temp_v5 = *piVar1;
        if (temp_v5 == 0) {
          temp_v5 = 0;
        }
        else {
          temp_v5 = (int)piVar1 + temp_v5;
        }
      }
      piVar1 = &temp_v5;
      nw_gfx_res_ResLight_Setup(&temp_v5,param_2,param_3);
      temp_v3 = temp_v3 + 1;
      temp_v2 = temp_v2 | (unsigned int)piVar1;
    } while (temp_v3 < temp_v4);
  }
  temp_v3 = 0;
  temp_v4 = *(int *)(*param_1 + 0x54);
  if (0 < temp_v4) {
    do {
      temp_v1 = *(int *)(*param_1 + 0x58);
      if (temp_v1 != 0) {
        temp_v1 = *param_1 + 0x58 + temp_v1;
      }
      else {
        temp_v1 = 0;
      }
      temp_v5 = 0;
      if (temp_v1 != 0) {
        piVar1 = (int *)(temp_v1 + temp_v3 * 0x10 + 0x28);
        temp_v5 = *piVar1;
        if (temp_v5 == 0) {
          temp_v5 = 0;
        }
        else {
          temp_v5 = (int)piVar1 + temp_v5;
        }
      }
      piVar1 = &temp_v5;
      nw_gfx_res_ResFog_Setup(&temp_v5,param_2,param_3);
      temp_v3 = temp_v3 + 1;
      temp_v2 = temp_v2 | (unsigned int)piVar1;
    } while (temp_v3 < temp_v4);
  }
  temp_v3 = 0;
  temp_v4 = *(int *)(*param_1 + 0x3c);
  if (0 < temp_v4) {
    do {
      temp_v1 = *(int *)(*param_1 + 0x40);
      if (temp_v1 != 0) {
        temp_v1 = *param_1 + 0x40 + temp_v1;
      }
      else {
        temp_v1 = 0;
      }
      temp_v5 = 0;
      if (temp_v1 != 0) {
        piVar1 = (int *)(temp_v1 + temp_v3 * 0x10 + 0x28);
        temp_v5 = *piVar1;
        if (temp_v5 == 0) {
          temp_v5 = 0;
        }
        else {
          temp_v5 = (int)piVar1 + temp_v5;
        }
      }
      temp_v0 = FUN_0018e1f4(&temp_v5,param_2,param_3);
      temp_v3 = temp_v3 + 1;
      temp_v2 = temp_v2 | temp_v0;
    } while (temp_v3 < temp_v4);
  }
  temp_v3 = 0;
  temp_v4 = *(int *)(*param_1 + 0x24);
  if (0 < temp_v4) {
    do {
      temp_v1 = *(int *)(*param_1 + 0x28);
      if (temp_v1 != 0) {
        temp_v1 = *param_1 + 0x28 + temp_v1;
      }
      else {
        temp_v1 = 0;
      }
      temp_v5 = 0;
      if (temp_v1 != 0) {
        piVar1 = (int *)(temp_v1 + temp_v3 * 0x10 + 0x28);
        temp_v5 = *piVar1;
        if (temp_v5 == 0) {
          temp_v5 = 0;
        }
        else {
          temp_v5 = (int)piVar1 + temp_v5;
        }
      }
      temp_v0 = FUN_0015d8e0(&temp_v5,param_2,param_3);
      temp_v3 = temp_v3 + 1;
      temp_v2 = temp_v2 | temp_v0;
    } while (temp_v3 < temp_v4);
  }
  temp_v3 = 0;
  temp_v4 = *(int *)(*param_1 + 100);
  if (0 < temp_v4) {
    do {
      temp_v1 = *(int *)(*param_1 + 0x68);
      if (temp_v1 != 0) {
        temp_v1 = *param_1 + 0x68 + temp_v1;
      }
      else {
        temp_v1 = 0;
      }
      temp_v5 = 0;
      if (temp_v1 != 0) {
        piVar1 = (int *)(temp_v1 + temp_v3 * 0x10 + 0x28);
        temp_v5 = *piVar1;
        if (temp_v5 == 0) {
          temp_v5 = 0;
        }
        else {
          temp_v5 = (int)piVar1 + temp_v5;
        }
      }
      piVar1 = &temp_v5;
      nw_anim_res_ResAnim_Setup(&temp_v5,param_2,param_3);
      temp_v3 = temp_v3 + 1;
      temp_v2 = temp_v2 | (unsigned int)piVar1;
    } while (temp_v3 < temp_v4);
  }
  temp_v3 = 0;
  temp_v4 = *(int *)(*param_1 + 0x6c);
  if (0 < temp_v4) {
    do {
      temp_v1 = *(int *)(*param_1 + 0x70);
      if (temp_v1 != 0) {
        temp_v1 = *param_1 + 0x70 + temp_v1;
      }
      else {
        temp_v1 = 0;
      }
      temp_v5 = 0;
      if (temp_v1 != 0) {
        piVar1 = (int *)(temp_v1 + temp_v3 * 0x10 + 0x28);
        temp_v5 = *piVar1;
        if (temp_v5 == 0) {
          temp_v5 = 0;
        }
        else {
          temp_v5 = (int)piVar1 + temp_v5;
        }
      }
      piVar1 = &temp_v5;
      nw_anim_res_ResAnim_Setup(&temp_v5,param_2,param_3);
      temp_v3 = temp_v3 + 1;
      temp_v2 = temp_v2 | (unsigned int)piVar1;
    } while (temp_v3 < temp_v4);
  }
  temp_v3 = 0;
  temp_v4 = *(int *)(*param_1 + 0x74);
  if (0 < temp_v4) {
    do {
      temp_v1 = *(int *)(*param_1 + 0x78);
      if (temp_v1 != 0) {
        temp_v1 = *param_1 + 0x78 + temp_v1;
      }
      else {
        temp_v1 = 0;
      }
      temp_v5 = 0;
      if (temp_v1 != 0) {
        piVar1 = (int *)(temp_v1 + temp_v3 * 0x10 + 0x28);
        temp_v5 = *piVar1;
        if (temp_v5 == 0) {
          temp_v5 = 0;
        }
        else {
          temp_v5 = (int)piVar1 + temp_v5;
        }
      }
      piVar1 = &temp_v5;
      nw_anim_res_ResAnim_Setup(&temp_v5,param_2,param_3);
      temp_v3 = temp_v3 + 1;
      temp_v2 = temp_v2 | (unsigned int)piVar1;
    } while (temp_v3 < temp_v4);
  }
  temp_v3 = 0;
  temp_v4 = *(int *)(*param_1 + 0x7c);
  if (0 < temp_v4) {
    do {
      temp_v1 = *(int *)(*param_1 + 0x80);
      if (temp_v1 != 0) {
        temp_v1 = *param_1 + 0x80 + temp_v1;
      }
      else {
        temp_v1 = 0;
      }
      temp_v5 = 0;
      if (temp_v1 != 0) {
        piVar1 = (int *)(temp_v1 + temp_v3 * 0x10 + 0x28);
        temp_v5 = *piVar1;
        if (temp_v5 == 0) {
          temp_v5 = 0;
        }
        else {
          temp_v5 = (int)piVar1 + temp_v5;
        }
      }
      piVar1 = &temp_v5;
      nw_anim_res_ResAnim_Setup(&temp_v5,param_2,param_3);
      temp_v3 = temp_v3 + 1;
      temp_v2 = temp_v2 | (unsigned int)piVar1;
    } while (temp_v3 < temp_v4);
  }
  temp_v3 = 0;
  temp_v4 = *(int *)(*param_1 + 0x84);
  if (0 < temp_v4) {
    do {
      temp_v1 = *(int *)(*param_1 + 0x88);
      if (temp_v1 != 0) {
        temp_v1 = *param_1 + 0x88 + temp_v1;
      }
      else {
        temp_v1 = 0;
      }
      temp_v5 = 0;
      if (temp_v1 != 0) {
        piVar1 = (int *)(temp_v1 + temp_v3 * 0x10 + 0x28);
        temp_v5 = *piVar1;
        if (temp_v5 == 0) {
          temp_v5 = 0;
        }
        else {
          temp_v5 = (int)piVar1 + temp_v5;
        }
      }
      piVar1 = &temp_v5;
      nw_anim_res_ResAnim_Setup(&temp_v5,param_2,param_3);
      temp_v3 = temp_v3 + 1;
      temp_v2 = temp_v2 | (unsigned int)piVar1;
    } while (temp_v3 < temp_v4);
  }
  temp_v3 = 0;
  temp_v4 = *(int *)(*param_1 + 0x1c);
  if (0 < temp_v4) {
    do {
      temp_v1 = *(int *)(*param_1 + 0x20);
      if (temp_v1 != 0) {
        temp_v1 = *param_1 + 0x20 + temp_v1;
      }
      else {
        temp_v1 = 0;
      }
      temp_v5 = 0;
      if (temp_v1 != 0) {
        piVar1 = (int *)(temp_v1 + temp_v3 * 0x10 + 0x28);
        temp_v5 = *piVar1;
        if (temp_v5 == 0) {
          temp_v5 = 0;
        }
        else {
          temp_v5 = (int)piVar1 + temp_v5;
        }
      }
      piVar1 = &temp_v5;
      nw_gfx_res_ResModel_Setup(&temp_v5,param_2,param_3);
      temp_v3 = temp_v3 + 1;
      temp_v2 = temp_v2 | (unsigned int)piVar1;
    } while (temp_v3 < temp_v4);
  }
  return temp_v2;
}

} /* extern "C" */
