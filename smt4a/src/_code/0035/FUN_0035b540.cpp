/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035b540` (_code @ 0x35b540, 0x20c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_001835b4(...);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern int vec2GetXInt(int);
extern int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_001835b4. */
extern int FUN_00284140(int);


void FUN_0035b540(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  efctSetSpeed();
  FUN_001835b4(2,0x1a,0x198,param_2,param_3,0x79);
  FUN_001835b4(2,0x1a,0x199,param_2,param_3,0x79);
  FUN_001835b4(2,0x1a,0x19a,param_2,param_3,0x79);
  efctSetSpeed();
  FUN_001835b4(2,0x1a,0x19b,param_2,param_3,0x7e);
  temp_v0 = FUN_00284140((int)*(short *)(param_1 + param_4 * 2 + 0x438));
  if (!((temp_v0 == 1 || temp_v0 == 2) || temp_v0 == 6)) {
    FUN_001835b4(2,0x1a,0x24b,param_2,param_3,0x7e);
    FUN_001835b4(2,0x1a,0x19c,param_2,param_3,0x7e);
    FUN_001835b4(2,0x1a,0x19d,param_2,param_3,0x7e);
  }
  else {
    FUN_001835b4(2,0x1a,0x294,param_2,param_3,0x7e);
    if (!((temp_v0 == 1 || temp_v0 == 2) || temp_v0 == 6)) {
      FUN_001835b4(2,0x1a,0x19c,param_2,param_3,0x7e);
      FUN_001835b4(2,0x1a,0x19d,param_2,param_3,0x7e);
    }
    else {
      FUN_001835b4(2,0x1a,0x291,param_2,param_3,0x7e);
      FUN_001835b4(2,0x1a,0x292,param_2,param_3,0x7e);
    }
  }
  efctSetSpeed();
  if (!((temp_v0 == 1 || temp_v0 == 2) || temp_v0 == 6)) {
    temp_v0 = vec2GetYInt(param_1 + 0xb0);
    temp_v1 = vec2GetXInt(param_1 + 0xb0);
    FUN_001835b4(2,0x1a,0x19e,temp_v1 + param_2,param_3 + temp_v0,0x83);
  }
  else {
    temp_v0 = vec2GetYInt(param_1 + 0xb0);
    temp_v1 = vec2GetXInt(param_1 + 0xb0);
    FUN_001835b4(2,0x1a,0x293,temp_v1 + param_2,param_3 + temp_v0,0x83);
  }
  efctSetSpeed();
  return;
}

} /* extern "C" */
