/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a7a50` (_code @ 0x4a7a50, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018349c(int, int);
int devilDrawIconRelative(int, int, int, int, unsigned int);
int FUN_004934ac(int, int, int, int, unsigned int);

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_6_stack;

/* Supplied declaration required: FUN_0018349c. */
extern unsigned int FUN_002a4b28(short);
/* Supplied declaration required: devilDrawIconRelative. */
/* Supplied declaration required: FUN_004934ac. */
extern int FUN_004d0bf0(short);


void FUN_004a7a50(int param_1,int param_2,short param_3,int param_4,int param_5,unsigned int param_6)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  if (param_5 != 0) {
    temp_v0 = FUN_0018349c(param_1 + 200,param_4 + 0x42f);
  }
  else {
    temp_v0 = FUN_0018349c(param_1 + 200,param_4 + 0x40e);
  }
  temp_v3 = (int)*(short *)(temp_v0 + 8);
  temp_v0 = (int)*(short *)(temp_v0 + 10);
  if (param_5 != 0) {
    temp_v1 = FUN_0018349c(param_1 + 200,0x495);
  }
  else {
    temp_v1 = FUN_0018349c(param_1 + 200,0x487);
  }
  temp_v4 = *(short *)(temp_v1 + 8) + temp_v3;
  temp_v1 = *(short *)(temp_v1 + 10) + temp_v0;
  temp_v2 = FUN_002a4b28(param_3);
  temp_v5 = temp_v2 == 0;
  if (temp_v5) {
    temp_v2 = (unsigned int)*(unsigned char *)(param_1 + 0x95);
  }
  if (!(temp_v5 && temp_v2 == 0)) {
    devilDrawIconRelative(param_1 + 200,(int)param_3,temp_v4,temp_v1,param_6);
  }
  else {
    devilDrawIconRelative(param_1 + 200,0,temp_v4,temp_v1,param_6);
  }
  if ((param_2 != 0) && (temp_v1 = FUN_004d0bf0(param_3), temp_v1 != 0)) {
    if (param_5 == 0) {
      FUN_004934ac(param_1 + 200,0x486,temp_v3,temp_v0,param_6);
      return;
    }
    FUN_004934ac(param_1 + 200,0x494,temp_v3,temp_v0,param_6);
  }
  return;
}

} /* extern "C" */
