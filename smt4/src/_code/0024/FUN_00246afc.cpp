/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246afc` (_code @ 0x246afc, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024fcdc(int, unsigned char [64], int);
int FUN_0024fd70(unsigned char [64], int *, int);
int FUN_0024febc(unsigned char [64], int *, int);
int FUN_0025009c(unsigned char [76], int);
int FUN_002569fc(unsigned char [64]);
int matrix43Multiply(unsigned char [64], unsigned char [64], unsigned char [76]);
int FUN_00259b34(unsigned char [64], unsigned char [64]);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
} param_4_stack;

/* Supplied declaration required: FUN_0024fcdc. */
/* Supplied declaration required: FUN_0024fd70. */
/* Supplied declaration required: FUN_0024febc. */
/* Supplied declaration required: FUN_0025009c. */
/* Supplied declaration required: FUN_002569fc. */
/* Supplied declaration required: matrix43Multiply. */
/* Supplied declaration required: FUN_00259b34. */


void FUN_00246afc(int param_1,unsigned int *param_2,int param_3,unsigned int *param_4)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [64];
  unsigned char temp_v4 [64];
  unsigned char temp_v5 [76];
  
  if (param_4 != (unsigned int *)0x0) {
    temp_v0 = *param_4;
    temp_v1 = param_4[1];
    temp_v2 = param_4[2];
    FUN_0024febc(temp_v3,&temp_v0,0);
  }
  else {
    FUN_002569fc(temp_v3);
  }
  if (param_3 != 0) {
    FUN_0025009c(temp_v5,param_3);
    matrix43Multiply(temp_v4,temp_v3,temp_v5);
  }
  else {
    FUN_00259b34(temp_v4,temp_v3);
  }
  if (param_2 != (unsigned int *)0x0) {
    temp_v0 = *param_2;
    temp_v1 = param_2[1];
    temp_v2 = param_2[2];
    FUN_0024fd70(temp_v4,&temp_v0,2);
  }
  FUN_0024fcdc(param_1 + 0x10,temp_v4,0);
  return;
}

} /* extern "C" */
