/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001319d0` (_code @ 0x1319d0, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00138ba0(unsigned int, unsigned char [3800], int);
int FUN_0013c584(unsigned int [3]);
int FUN_0013c5f4(unsigned char [16], unsigned int [3]);
int FUN_0013c684(void);
int FUN_0013c6b4(void);
int FUN_00147390(void);

/* stack frame of param_1: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char spBC; /* 0xbc: local_bc */
    unsigned int spFA0; /* 0xfa0: local_fa0 */
} param_1_stack;

/* Supplied declaration required: FUN_00138ba0. */
/* Supplied declaration required: FUN_0013c584. */
/* Supplied declaration required: FUN_0013c5f4. */
/* Supplied declaration required: FUN_0013c684. */
/* Supplied declaration required: FUN_0013c6b4. */
/* Supplied declaration required: FUN_00147390. */


void FUN_001319d0(unsigned int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0 [3];
  unsigned char temp_v1 [3800];
  unsigned char temp_v2;
  unsigned char temp_v3 [16];
  
  FUN_0013c584(temp_v0);
  FUN_00138ba0(param_1,temp_v1,0x76c);
  temp_v0[0] = 1;
  temp_v2 = 0;
  FUN_00147390();
  FUN_0013c684();
  FUN_0013c6b4();
  FUN_0013c5f4(temp_v3,temp_v0);
  return;
}

} /* extern "C" */
