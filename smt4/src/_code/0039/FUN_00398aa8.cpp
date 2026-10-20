/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00398aa8` (_code @ 0x398aa8, 0xec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002be5a4(int, unsigned int, unsigned char *);
int FUN_002bf538(void);
int VectorSignedToFloat(unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_6: 4 slot(s), 7 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned char sp26; /* 0x26: local_26 */
    unsigned char sp27; /* 0x27: local_27 */
    unsigned char sp28; /* 0x28: local_28 */
} param_6_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_002aeaac(unsigned int);
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002bf538. */


void FUN_00398aa8(unsigned int param_1,unsigned short param_2,unsigned int param_3,unsigned int param_4,
                 int param_5,int param_6)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_fpscr;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  
  temp_v0 = FUN_002aeaac(3);
  temp_v0 = (**(romwright_code **)(**(int **)(temp_v0 + 8) + 0x44))(*(int **)(temp_v0 + 8),param_2);
  if (temp_v0 == 0) {
    param_2 = 0x8140;
  }
  temp_v1 = 0x323232ff;
  if (param_6 != 0) {
    temp_v1 = 0x72e027ff;
  }
  if (param_5 != 0) {
    in_fpscr = in_fpscr & 0xfffffff;
  }
  temp_v2 = (unsigned char)((unsigned short)param_2 >> 8);
  temp_v3 = (unsigned char)param_2;
  temp_v4 = 0;
  if (param_6 != 0) {
    VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(4,temp_v1,&temp_v2);
  }
  else {
    VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(3,temp_v1,&temp_v2);
  }
  FUN_002bf538();
  return;
}

} /* extern "C" */
