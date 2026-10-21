/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fa414` (_code @ 0x4fa414, 0x1d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match2_AnimationVisualState.h"

extern "C" {

int animationGetModeChannelValue(...);
int FUN_004f5238(...);
int FUN_004f6254(...);
unsigned int btlReflectQueuePairedParameters(int actor, unsigned int flags, unsigned int value,
                         unsigned int parameter, unsigned int target, unsigned int first,
                         unsigned int second, unsigned int third, unsigned int fourth);
int FUN_004fea10(...);
int btlReflectSetValuePair(...);
int VectorSignedToFloat(...);

typedef struct fn_004fa414_arg0 fn_004fa414_arg0;
struct fn_004fa414_arg0 {
    unsigned char pad_0x0[0x33b4];
    undefined1 field_0x33b4; /* +0x33b4 */
    unsigned char pad_0x33b5[0x7];
    void *field_0x33bc; /* +0x33bc */
    undefined4 field_0x33c0; /* +0x33c0 */
    short *field_0x33c4; /* +0x33c4 */
    short *field_0x33c8; /* +0x33c8 */
};

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: animationGetModeChannelValue. */
extern u8 animationVisualIsComplete(const AnimationVisualState *state);
/* Supplied declaration required: FUN_004f5238. */
/* Supplied declaration required: FUN_004f6254. */
/* Supplied declaration required: FUN_004fea10. */
/* Supplied declaration required: btlReflectSetValuePair. */


void FUN_004fa414(fn_004fa414_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 7 native warning(s); review required */
  int temp_v0;
  short *psVar2;
  int temp_v1;
  short *psVar4;
  unsigned int in_fpscr;
  float in_s0;
  
  temp_v0 = animationVisualIsComplete((const AnimationVisualState *)param_1->field_0x33c0);
  if (temp_v0 == 0) {
    animationGetModeChannelValue(param_1->field_0x33c0);
    temp_v0 = (int)in_s0;
    if (param_1->field_0x33c4[2] == temp_v0) {
      FUN_004fea10(0,0,(int)param_1->field_0x33c4[3]);
    }
    psVar2 = param_1->field_0x33c8;
    if ((*(unsigned char *)(psVar2 + 4) & 1) != 0) {
      psVar4 = param_1->field_0x33c4 + 4;
    }
    else {
      psVar4 = param_1->field_0x33c4 + 8;
    }
    if (psVar4[2] == temp_v0) {
      temp_v1 = (int)*(short *)((int)param_1->field_0x33bc + 0x6a);
      VectorSignedToFloat((int)psVar2[0x45],(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)psVar2[0x44],(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_004f5238(param_1,temp_v1,temp_v1,6,1,3,0,1,0);
    }
    if (psVar4[3] == temp_v0) {
      temp_v1 = (int)*(short *)((int)param_1->field_0x33bc + 0x6a);
      VectorSignedToFloat((int)param_1->field_0x33c8[0x49],(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)param_1->field_0x33c8[0x48],(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_004f5238(param_1,temp_v1,temp_v1,6,2,3,0,1,0);
    }
    psVar2 = param_1->field_0x33c8;
    if (psVar2[7] == temp_v0) {
      btlReflectQueuePairedParameters(0,0,(int)psVar2[8],10,(u32)param_1->field_0x33bc,(int)psVar2[6],0,0,0xffffffff);
    }
    if (psVar2[10] == temp_v0) {
      btlReflectQueuePairedParameters(0,0,(int)psVar2[0xb],9,(u32)param_1->field_0x33bc,(int)psVar2[9],0,0,0xffffffff);
    }
    if (psVar2[0xc] == temp_v0) {
      btlReflectSetValuePair(0,0,(int)psVar2[0xd],0,0);
    }
    FUN_004f6254(param_1,(int)(short)temp_v0,3);
  }
  temp_v0 = animationVisualIsComplete((const AnimationVisualState *)param_1->field_0x33c0);
  if (temp_v0 != 0) {
    param_1->field_0x33b4 = 0xd;
  }
  return;
}

} /* extern "C" */
