/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_res_ResGraphicsFile_Cleanup` (_code @ 0x2a3dfc, 0x45c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00156cec(int *);
int FUN_002c3364(int *);
int nw_anim_res_ResAnim_Cleanup(int *);
int nw_gfx_res_ResFog_Cleanup(int *);
int nw_gfx_res_ResLight_Cleanup(int *);
int nw_gfx_res_ResModel_Cleanup(int *);
int nw_gfx_res_ResShader_Cleanup(int *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_00156cec. */
/* Supplied declaration required: FUN_002c3364. */
/* Supplied declaration required: nw_anim_res_ResAnim_Cleanup. */
/* Supplied declaration required: nw_gfx_res_ResFog_Cleanup. */
/* Supplied declaration required: nw_gfx_res_ResLight_Cleanup. */
/* Supplied declaration required: nw_gfx_res_ResModel_Cleanup. */
/* Supplied declaration required: nw_gfx_res_ResShader_Cleanup. */


void nw_gfx_res_ResGraphicsFile_Cleanup(int *param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int unaff_r4;
  int temp_v1;
  
  temp_v0 = *(int *)(*param_1 + 0x20);
  if (temp_v0 != 0) {
    temp_v0 = *param_1 + 0x20 + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    unaff_r4 = temp_v0 + 0x1c;
  }
  if (temp_v0 == 0) {
    unaff_r4 = 0;
  }
  temp_v0 = unaff_r4 + *(int *)(*param_1 + 0x1c) * 0x10;
  for (; unaff_r4 != temp_v0; unaff_r4 = unaff_r4 + 0x10) {
    if (*(int *)(unaff_r4 + 0xc) != 0) {
      temp_v1 = unaff_r4 + 0xc + *(int *)(unaff_r4 + 0xc);
    }
    else {
      temp_v1 = 0;
    }
    if (temp_v1 != 0) {
      nw_gfx_res_ResModel_Cleanup(&temp_v1);
    }
  }
  temp_v0 = *(int *)(*param_1 + 0x88);
  if (temp_v0 != 0) {
    temp_v0 = *param_1 + 0x88 + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    unaff_r4 = temp_v0 + 0x1c;
  }
  if (temp_v0 == 0) {
    unaff_r4 = 0;
  }
  temp_v0 = unaff_r4 + *(int *)(*param_1 + 0x84) * 0x10;
  for (; unaff_r4 != temp_v0; unaff_r4 = unaff_r4 + 0x10) {
    if (*(int *)(unaff_r4 + 0xc) != 0) {
      temp_v1 = unaff_r4 + 0xc + *(int *)(unaff_r4 + 0xc);
    }
    else {
      temp_v1 = 0;
    }
    if (temp_v1 != 0) {
      nw_anim_res_ResAnim_Cleanup(&temp_v1);
    }
  }
  temp_v0 = *(int *)(*param_1 + 0x80);
  if (temp_v0 != 0) {
    temp_v0 = *param_1 + 0x80 + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    unaff_r4 = temp_v0 + 0x1c;
  }
  if (temp_v0 == 0) {
    unaff_r4 = 0;
  }
  temp_v0 = unaff_r4 + *(int *)(*param_1 + 0x7c) * 0x10;
  for (; unaff_r4 != temp_v0; unaff_r4 = unaff_r4 + 0x10) {
    if (*(int *)(unaff_r4 + 0xc) != 0) {
      temp_v1 = unaff_r4 + 0xc + *(int *)(unaff_r4 + 0xc);
    }
    else {
      temp_v1 = 0;
    }
    if (temp_v1 != 0) {
      nw_anim_res_ResAnim_Cleanup(&temp_v1);
    }
  }
  temp_v0 = *(int *)(*param_1 + 0x78);
  if (temp_v0 != 0) {
    temp_v0 = *param_1 + 0x78 + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    unaff_r4 = temp_v0 + 0x1c;
  }
  if (temp_v0 == 0) {
    unaff_r4 = 0;
  }
  temp_v0 = unaff_r4 + *(int *)(*param_1 + 0x74) * 0x10;
  for (; unaff_r4 != temp_v0; unaff_r4 = unaff_r4 + 0x10) {
    if (*(int *)(unaff_r4 + 0xc) != 0) {
      temp_v1 = unaff_r4 + 0xc + *(int *)(unaff_r4 + 0xc);
    }
    else {
      temp_v1 = 0;
    }
    if (temp_v1 != 0) {
      nw_anim_res_ResAnim_Cleanup(&temp_v1);
    }
  }
  temp_v0 = *(int *)(*param_1 + 0x70);
  if (temp_v0 != 0) {
    temp_v0 = *param_1 + 0x70 + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    unaff_r4 = temp_v0 + 0x1c;
  }
  if (temp_v0 == 0) {
    unaff_r4 = 0;
  }
  temp_v0 = unaff_r4 + *(int *)(*param_1 + 0x6c) * 0x10;
  for (; unaff_r4 != temp_v0; unaff_r4 = unaff_r4 + 0x10) {
    if (*(int *)(unaff_r4 + 0xc) != 0) {
      temp_v1 = unaff_r4 + 0xc + *(int *)(unaff_r4 + 0xc);
    }
    else {
      temp_v1 = 0;
    }
    if (temp_v1 != 0) {
      nw_anim_res_ResAnim_Cleanup(&temp_v1);
    }
  }
  temp_v0 = *(int *)(*param_1 + 0x68);
  if (temp_v0 != 0) {
    temp_v0 = *param_1 + 0x68 + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    unaff_r4 = temp_v0 + 0x1c;
  }
  if (temp_v0 == 0) {
    unaff_r4 = 0;
  }
  temp_v0 = unaff_r4 + *(int *)(*param_1 + 100) * 0x10;
  for (; unaff_r4 != temp_v0; unaff_r4 = unaff_r4 + 0x10) {
    if (*(int *)(unaff_r4 + 0xc) != 0) {
      temp_v1 = unaff_r4 + 0xc + *(int *)(unaff_r4 + 0xc);
    }
    else {
      temp_v1 = 0;
    }
    if (temp_v1 != 0) {
      nw_anim_res_ResAnim_Cleanup(&temp_v1);
    }
  }
  temp_v0 = *(int *)(*param_1 + 0x28);
  if (temp_v0 != 0) {
    temp_v0 = *param_1 + 0x28 + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    unaff_r4 = temp_v0 + 0x1c;
  }
  if (temp_v0 == 0) {
    unaff_r4 = 0;
  }
  temp_v0 = unaff_r4 + *(int *)(*param_1 + 0x24) * 0x10;
  for (; unaff_r4 != temp_v0; unaff_r4 = unaff_r4 + 0x10) {
    if (*(int *)(unaff_r4 + 0xc) != 0) {
      temp_v1 = unaff_r4 + 0xc + *(int *)(unaff_r4 + 0xc);
    }
    else {
      temp_v1 = 0;
    }
    if (temp_v1 != 0) {
      FUN_002c3364(&temp_v1);
    }
  }
  temp_v0 = *(int *)(*param_1 + 0x40);
  if (temp_v0 != 0) {
    temp_v0 = *param_1 + 0x40 + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    unaff_r4 = temp_v0 + 0x1c;
  }
  if (temp_v0 == 0) {
    unaff_r4 = 0;
  }
  temp_v0 = unaff_r4 + *(int *)(*param_1 + 0x3c) * 0x10;
  for (; unaff_r4 != temp_v0; unaff_r4 = unaff_r4 + 0x10) {
    if (*(int *)(unaff_r4 + 0xc) != 0) {
      temp_v1 = unaff_r4 + 0xc + *(int *)(unaff_r4 + 0xc);
    }
    else {
      temp_v1 = 0;
    }
    if (temp_v1 != 0) {
      nw_gfx_res_ResShader_Cleanup(&temp_v1);
    }
  }
  temp_v0 = *(int *)(*param_1 + 0x58);
  if (temp_v0 != 0) {
    temp_v0 = *param_1 + 0x58 + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    unaff_r4 = temp_v0 + 0x1c;
  }
  if (temp_v0 == 0) {
    unaff_r4 = 0;
  }
  temp_v0 = unaff_r4 + *(int *)(*param_1 + 0x54) * 0x10;
  for (; unaff_r4 != temp_v0; unaff_r4 = unaff_r4 + 0x10) {
    if (*(int *)(unaff_r4 + 0xc) != 0) {
      temp_v1 = unaff_r4 + 0xc + *(int *)(unaff_r4 + 0xc);
    }
    else {
      temp_v1 = 0;
    }
    if (temp_v1 != 0) {
      nw_gfx_res_ResFog_Cleanup(&temp_v1);
    }
  }
  temp_v0 = *(int *)(*param_1 + 0x50);
  if (temp_v0 != 0) {
    temp_v0 = *param_1 + 0x50 + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    unaff_r4 = temp_v0 + 0x1c;
  }
  if (temp_v0 == 0) {
    unaff_r4 = 0;
  }
  temp_v0 = unaff_r4 + *(int *)(*param_1 + 0x4c) * 0x10;
  for (; unaff_r4 != temp_v0; unaff_r4 = unaff_r4 + 0x10) {
    if (*(int *)(unaff_r4 + 0xc) != 0) {
      temp_v1 = unaff_r4 + 0xc + *(int *)(unaff_r4 + 0xc);
    }
    else {
      temp_v1 = 0;
    }
    if (temp_v1 != 0) {
      nw_gfx_res_ResLight_Cleanup(&temp_v1);
    }
  }
  temp_v0 = *(int *)(*param_1 + 0x30);
  if (temp_v0 != 0) {
    temp_v0 = *param_1 + 0x30 + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    unaff_r4 = temp_v0 + 0x1c;
  }
  if (temp_v0 == 0) {
    unaff_r4 = 0;
  }
  temp_v0 = unaff_r4 + *(int *)(*param_1 + 0x2c) * 0x10;
  for (; unaff_r4 != temp_v0; unaff_r4 = unaff_r4 + 0x10) {
    if (*(int *)(unaff_r4 + 0xc) != 0) {
      temp_v1 = unaff_r4 + 0xc + *(int *)(unaff_r4 + 0xc);
    }
    else {
      temp_v1 = 0;
    }
    if (temp_v1 != 0) {
      FUN_00156cec(&temp_v1);
    }
  }
  return;
}

} /* extern "C" */
