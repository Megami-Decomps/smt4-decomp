/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cf9b8` (_code @ 0x4cf9b8, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e314(unsigned int);
int FUN_0016c4b8(unsigned int, int);
int VectorSignedToFloat(int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0014e314. */
/* Supplied declaration required: FUN_0016c4b8. */


void FUN_004cf9b8(unsigned char *param_1,unsigned int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  float temp_v2;
  float temp_v3;
  
  temp_v0 = (int)(char)param_1[10];
  temp_v1 = 0;
  if (temp_v0 < 1) {
    temp_v0 = 1;
  }
  if (param_3 != 1) {
    if (param_3 == 2) {
      if ((char)param_1[0xb] < temp_v0) {
        param_1[0xb] = param_1[0xb] + 1;
      }
      else {
        *param_1 = *param_1 & 0xfe;
      }
      if ((param_1[8] != 0) && (param_1[8] == 1)) {
        temp_v1 = -0x100;
      }
    }
  }
  else {
    if ((char)param_1[0xb] < '\x01') {
      *param_1 = *param_1 & 0xfe;
      return;
    }
    param_1[0xb] = param_1[0xb] - 1;
  }
  temp_v3 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = (float)VectorSignedToFloat((int)(char)param_1[0xb],(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_0016c4b8(DAT_0059dbb4,0);
  FUN_0014e314(temp_v1 + ((int)(temp_v2 * (255.0f / temp_v3)) & 0xffU));
  return;
}

} /* extern "C" */
