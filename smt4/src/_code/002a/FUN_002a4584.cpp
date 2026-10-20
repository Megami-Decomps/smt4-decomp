/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4584` (_code @ 0x2a4584, 0x148 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a2e08(int);
int FUN_002a2f08(...);
int FUN_002a301c(...);
int FUN_002ba81c(...);
int FUN_002bb150(unsigned char *, int);
int libc_strlen(...);

/* stack frame of param_7: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int sp174; /* 0x174: local_174 */
    unsigned int sp178; /* 0x178: local_178 */
} param_7_stack;

extern unsigned char LAB_002dc6c0; /* 0x2dc6c0 */

/* Supplied declaration required: FUN_002a2e08. */
/* Supplied declaration required: FUN_002a2f08. */
/* Supplied declaration required: FUN_002a301c. */
/* Supplied declaration required: FUN_002ba81c. */
/* Supplied declaration required: FUN_002bb150. */
/* Supplied declaration required: libc_strlen. */


unsigned int
FUN_002a4584(int param_1,unsigned int param_2,int param_3,unsigned int *param_4,unsigned int param_5,
            unsigned int param_6,unsigned int param_7)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [40];
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [132];
  unsigned int temp_v5;
  unsigned char temp_v6 [4];
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned char temp_v10 [64];
  unsigned char temp_v11 [68];
  unsigned int temp_v12;
  
  temp_v0 = param_1;
  if (param_3 != 0) {
    libc_strlen(param_2);
    libc_strlen(param_3);
    FUN_002a301c(temp_v6);
    FUN_002ba81c(temp_v10,param_2,0x40);
    FUN_002ba81c(temp_v11,param_3,0x40);
    temp_v7 = temp_v7 | 2;
    temp_v8 = param_5;
    temp_v9 = param_6;
    temp_v12 = param_7;
    FUN_002a2f08(param_1,temp_v6);
    FUN_002a2e08(param_1);
    while (*(char *)(temp_v0 + 8) != '\x03') {
      FUN_002bb150(&LAB_002dc6c0,0);
    }
  }
  else {
    libc_strlen(param_2);
    FUN_002a301c(temp_v1);
    FUN_002ba81c(temp_v4,param_2,0x40);
    temp_v5 = 0;
    temp_v2 = param_5;
    temp_v3 = param_6;
    FUN_002a2f08(param_1,temp_v1);
    FUN_002a2e08(param_1);
    while (*(char *)(temp_v0 + 8) != '\x03') {
      FUN_002bb150(&LAB_002dc6c0,0);
    }
  }
  *param_4 = *(unsigned int *)(temp_v0 + 0x24);
  return *(unsigned int *)(temp_v0 + 0x14);
}

} /* extern "C" */
