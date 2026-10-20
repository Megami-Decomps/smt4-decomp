/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00398aa0` (_code @ 0x398aa0, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002be5a4(int, unsigned int, unsigned char *);
int VectorSignedToFloat(unsigned int, int);

typedef int romwright_code(...);
extern float DAT_004d46b8; /* 0x4d46b8 */
extern float DAT_004d46c8; /* 0x4d46c8 */
extern float DAT_004d46d8; /* 0x4d46d8 */
extern float DAT_004d46e8; /* 0x4d46e8 */
extern unsigned char DAT_004d46fd; /* 0x4d46fd */
extern float DAT_004d4704; /* 0x4d4704 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_002aeaac(unsigned int);
/* Supplied declaration required: FUN_002be5a4. */


void FUN_00398aa0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5,
                 int param_6)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_fpscr;
  float in_s0;
  unsigned char uStack_28;
  unsigned char uStack_27;
  unsigned char uStack_26;
  
  if (param_2 != 0xffffffff) {
    temp_v0 = FUN_002aeaac(3);
    temp_v0 = (**(romwright_code **)(**(int **)(temp_v0 + 8) + 0x44))(*(int **)(temp_v0 + 8),param_2 & 0xffff);
    if (temp_v0 == 0) {
      param_2 = 0xffff8140;
    }
    temp_v1 = 0x323232ff;
    if (param_6 != 0) {
      temp_v1 = 0x72e027ff;
    }
    if (param_5 != 0) {
      in_fpscr = in_fpscr & 0xfffffff;
    }
    uStack_28 = (unsigned char)(param_2 >> 8);
    uStack_27 = (unsigned char)param_2;
    uStack_26 = 0;
    if (param_6 != 0) {
      VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(4,temp_v1,&uStack_28);
    }
    else {
      VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(3,temp_v1,&uStack_28);
    }
    if ((int)in_s0 >= 0x3f800001) {
      in_s0 = 1.0f;
    }
    if (in_s0 < 0.0f) {
      in_s0 = 0.0f;
    }
    DAT_004d4704 = in_s0;
    DAT_004d46b8 = in_s0;
    DAT_004d46c8 = in_s0;
    DAT_004d46d8 = in_s0;
    DAT_004d46e8 = in_s0;
    DAT_004d46fd = 1;
    return;
  }
  return;
}

} /* extern "C" */
