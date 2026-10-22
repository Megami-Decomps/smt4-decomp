/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c40b4` (_code @ 0x3c40b4, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match6_ItemIcon.h"

extern "C" {

int FUN_0015f858(int, int);
int FUN_00162790(...);
int FUN_001835b4(int, int, int, int, int, int);
int FUN_003cd2c4(int, int, unsigned int);
int VectorSignedToFloat(int, int);

/* stack frame of param_6: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_6_stack;

extern unsigned char DAT_0052bfdc; /* 0x52bfdc */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: FUN_00162790. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
extern int recordGetModeForId(unsigned int);
/* Supplied declaration required: FUN_003cd2c4. */


void FUN_003c40b4(int param_1,int param_2,int param_3,short param_4,int param_5,unsigned int param_6)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_fpscr;
  
  temp_v1 = 0;
  temp_v0 = recordGetModeForId(param_6);
  if ((temp_v0 == 1 || temp_v0 == 2) || temp_v0 == 6) {
    if (param_5 == -0x60180001) {
      param_5 = -0xa006001;
    }
    temp_v1 = 1;
  }
  FUN_003cd2c4(param_1,param_2,temp_v1);
  FUN_001835b4(2,0x12,0x474,param_1,param_2,0xc4);
  temp_v0 = FUN_001834a4(0x12,0x475);
  uiDrawItemCategoryIcon((int)param_4,*(short *)(temp_v0 + 8) + param_1,*(short *)(temp_v0 + 10) + param_2,0xc4,0)
  ;
  temp_v0 = FUN_001834a4(0x12,0x476);
  if (0 < param_3) {
    FUN_0015f858(param_3,0);
    if (param_3 != 0) {
      VectorSignedToFloat(*(short *)(temp_v0 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(short *)(temp_v0 + 8) + param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(3,param_5);
      return;
    }
    return;
  }
  VectorSignedToFloat(*(short *)(temp_v0 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v0 + 8) + param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(3,param_5,&DAT_0052bfdc);
  return;
}

} /* extern "C" */
