/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00333694` (_code @ 0x333694, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aba54(void);
int FUN_0028809c(int, unsigned int, int, int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int FUN_001801a4(void);
extern int FUN_001ab854(void);
/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_0028809c. */
extern short FUN_003df57c(unsigned short, unsigned int);
extern short FUN_004bcbb4(int, unsigned short);


void FUN_00333694(int param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  
  FUN_001aba54();
  if ((param_3 != 0) &&
     (temp_v1 = param_1, FUN_0028809c(param_1,param_2,param_3,param_4,0), temp_v1 == 0 && param_4 == 0))
  {
    if (param_1 < 0) {
      temp_v1 = FUN_001801a4();
      temp_v0 = FUN_003df57c(*(unsigned short *)(param_3 + 0x20),1);
      temp_v0 = *(short *)(temp_v1 + 0x2c) - temp_v0;
      *(short *)(temp_v1 + 0x2c) = temp_v0;
    }
    else {
      temp_v1 = FUN_001ab854();
      temp_v0 = FUN_004bcbb4(temp_v1,*(unsigned short *)(param_3 + 0x20));
      temp_v0 = *(short *)(temp_v1 + 0x2c) - temp_v0;
      *(short *)(temp_v1 + 0x2c) = temp_v0;
    }
    if (temp_v0 < 0) {
      *(unsigned short *)(temp_v1 + 0x2c) = 0;
    }
  }
  return;
}

} /* extern "C" */
