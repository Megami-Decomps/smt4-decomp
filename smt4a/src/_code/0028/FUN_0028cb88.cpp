/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028cb88` (_code @ 0x28cb88, 0x6d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "util/PackNibbles.h"

extern "C" {

int FUN_00157558(int);
int renderCtxResetColorScale(...);
int skinObjectUpdateMatrices(...);
int FUN_00183bb0(void);
int FUN_0028d270(int);
int FUN_0028f740(...);
int FUN_002ae5cc(...);
int FUN_002fa4dc(...);
int FUN_00336574(...);
int FUN_0034e784(...);
int FUN_003741cc(...);
int FUN_003743a4(...);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: skinObjectUpdateMatrices. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_0028d270. */
/* Supplied declaration required: FUN_0028f740. */
/* Supplied declaration required: FUN_002ae5cc. */
/* Supplied declaration required: FUN_002fa4dc. */
/* Supplied declaration required: FUN_00336574. */
/* Supplied declaration required: FUN_0034e784. */
/* Supplied declaration required: FUN_003741cc. */
/* Supplied declaration required: FUN_003743a4. */


void FUN_0028cb88(int param_1)

{
/* irregular: 1 goto(s); 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int *piVar5;
  
  FUN_00157558(g_renderCtx);
  FUN_00183bb0();
  piVar5 = (int *)(param_1 + 0x387c);
  if (*piVar5 == 6) {
    if (*(int *)(param_1 + 0x4ad8) == 3) {
      if (*(char *)(param_1 + 0x1342) != '\0') {
        return;
      }
      goto LAB_0028cbdc;
    }
  }
  else {
LAB_0028cbdc:
    if ((*piVar5 == 0x2b || *piVar5 == 0x2c) && (*(char *)(param_1 + 0x1342) != '\0')) {
      return;
    }
  }
  temp_v0 = *piVar5;
  piVar4 = (int *)(param_1 + 0x3880);
  if (temp_v0 == 2) {
    temp_v0 = *piVar4;
  }
  if ((temp_v0 == 6 || temp_v0 == 3) || (temp_v0 == 4 || temp_v0 == 5)) {
    temp_v0 = *piVar4;
  }
  if (temp_v0 == 0x2b || temp_v0 == 0x2c) {
    temp_v0 = *piVar4;
  }
  switch(temp_v0) {
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x14:
  case 0x15:
    FUN_002ae5cc(param_1,0,0,0);
    FUN_002fa4dc(param_1,0);
    FUN_003741cc(param_1);
    FUN_0028f740(param_1);
    FUN_0028d270(param_1);
    break;
  case 0x10:
    FUN_002ae5cc(param_1,1,1,*(unsigned int *)(param_1 + 0x3878));
    FUN_002fa4dc(param_1,1);
    FUN_0028f740(param_1);
    FUN_0028d270(param_1);
    break;
  case 0x11:
  case 0x29:
    FUN_002ae5cc(param_1,0,0,0);
    FUN_002fa4dc(param_1,0);
    FUN_0028f740(param_1);
    FUN_0028d270(param_1);
    break;
  case 0x12:
  case 0x13:
    FUN_002ae5cc(param_1,0,0,0);
    FUN_002fa4dc(param_1,0);
    FUN_003741cc(param_1);
    FUN_0028f740(param_1);
    FUN_0028d270(param_1);
    FUN_003743a4(param_1);
    break;
  case 0x16:
    FUN_002ae5cc(param_1,0,1,0);
    FUN_002fa4dc(param_1,0);
    FUN_0028f740(param_1);
    FUN_00336574(param_1,1);
    break;
  case 0x18:
  case 0x19:
  case 0x1c:
    temp_v1 = 8 - *(int *)(param_1 + 0x3878);
    temp_v0 = *piVar4;
    if (temp_v1 < 0) {
      temp_v1 = 0;
    }
    if (!((temp_v0 == 0x22 || temp_v0 == 0x23) || temp_v0 == 0x24)) {
      FUN_002ae5cc(param_1,1,0,temp_v1);
    }
    else {
      FUN_002ae5cc(param_1,1,1,temp_v1);
    }
    break;
  case 0x1d:
    temp_v0 = *piVar4;
    if (!((temp_v0 == 0x22 || temp_v0 == 0x23) || temp_v0 == 0x24)) {
      FUN_002ae5cc(param_1,1,0,0);
      FUN_002fa4dc(param_1,0);
    }
    else {
      FUN_002ae5cc(param_1,1,1,0);
      FUN_002fa4dc(param_1,1);
    }
    if ((*piVar4 == 0x1a) && (*(short *)(param_1 + *(int *)(param_1 + 0x3890) * 2 + 0x4210) != -1))
    break;
    FUN_0034e784(param_1,0);
    break;
  case 0x1f:
    FUN_002ae5cc(param_1,1,0,0);
    break;
  case 0x20:
    if (*(char *)(param_1 + 0x38b5) != '\0') {
      FUN_002ae5cc(param_1,1,0,0);
      break;
    }
  case 0xe:
  case 0xf:
  case 0x1e:
  case 0x21:
  case 0x2a:
  case 0x2e:
  case 0x2f:
  case 0x30:
    FUN_002ae5cc(param_1,1,1,0);
    break;
  case 0x22:
    FUN_002ae5cc(param_1,0,1);
    FUN_002fa4dc(param_1,1);
    FUN_0028f740(param_1);
    FUN_00336574(param_1,0);
    break;
  case 0x23:
    FUN_002ae5cc(param_1,0,1);
    FUN_002fa4dc(param_1,1);
    FUN_0028f740(param_1);
    FUN_00336574(param_1,1);
    break;
  case 0x24:
    FUN_002ae5cc(param_1,0,0,0);
    FUN_002fa4dc(param_1,0);
    FUN_0028f740(param_1);
    FUN_00336574(param_1,0);
    break;
  case 0x25:
  case 0x26:
    temp_v0 = *piVar4;
    if ((temp_v0 != 0x22 && temp_v0 != 0x23) && temp_v0 != 0x24) {
      FUN_002ae5cc(param_1,0,0,0);
      FUN_002fa4dc(param_1,0);
      FUN_003741cc(param_1);
      FUN_0028f740(param_1);
      break;
    }
    FUN_002ae5cc(param_1,0,1);
    FUN_002fa4dc(param_1,1);
    FUN_003741cc(param_1);
    FUN_0028f740(param_1);
    break;
  case 0x27:
    temp_v0 = *piVar4;
    if (((temp_v0 == 0x1d || temp_v0 == 0x20) || (temp_v0 == 0x1e || temp_v0 == 0x19)) ||
       (*(int *)(param_1 + 0x3890) == 4)) {
      FUN_002ae5cc(param_1,1,0,0);
      break;
    }
  case 1:
  case 0x17:
  case 0x1a:
  case 0x1b:
  case 0x2d:
    FUN_002ae5cc(param_1,0,0,0);
    FUN_002fa4dc(param_1,0);
    FUN_003741cc(param_1);
    FUN_0028f740(param_1);
    break;
  case 0x28:
    FUN_002ae5cc(param_1,1,0,0);
    FUN_002fa4dc(param_1,0);
    FUN_0034e784(param_1,0);
  }
  if (*piVar5 == 6) {
    FUN_003743a4(param_1);
  }
  temp_v0 = g_renderCtx;
  temp_v1 = packNibblesAndByte(6, 7, 0);
  piVar5 = (int *)(temp_v0 + 0x12b8);
  temp_v2 = piVar5[*piVar5 + 2];
  piVar5[*piVar5 + 2] = temp_v1;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v2 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  skinObjectUpdateMatrices(g_renderCtx);
  renderCtxResetColorScale(g_renderCtx);
  return;
}

} /* extern "C" */
