/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f5b14` (_code @ 0x3f5b14, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001677c0(void);
int FUN_001835b4(int, int, int, int, unsigned int, int);
int FUN_001879d0(unsigned int);

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_001879d0. */


void FUN_003f5b14(unsigned int param_1,int param_2,unsigned int param_3,int param_4,int param_5)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  float temp_v1;
  
  temp_v1 = 0.26f;
  FUN_001879d0(DAT_0059dbb4);
  FUN_001677c0();
  temp_v0 = 0;
  do {
    FUN_001835b4(2,0x31,param_4 + temp_v0,(int)temp_v1 + param_2,param_3,temp_v0 + 0x65);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  temp_v0 = 0;
  do {
    FUN_001835b4(2,0x31,param_5 + temp_v0,(int)temp_v1 + param_2,param_3,temp_v0 + 0x65);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 4);
  FUN_001677c0();
  return;
}

} /* extern "C" */
