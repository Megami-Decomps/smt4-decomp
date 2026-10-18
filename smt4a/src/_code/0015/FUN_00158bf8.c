/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00158bf8` (_code @ 0x158bf8, 0x1bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_0016df60; /* 0x16df60 */
extern unsigned char LAB_00197ea8; /* 0x197ea8 */
extern unsigned char LAB_00197eac; /* 0x197eac */

/* Supplied declaration required: FUN_002f5020. */


int FUN_00158bf8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned char temp_v3 [27];
  
  FUN_002f5020(param_1,&LAB_0016df60,0x18,6);
  *(unsigned char *)(param_1 + 0x90) = 0;
  *(unsigned char *)(param_1 + 0x91) = 0;
  *(unsigned char *)(param_1 + 0x92) = 0;
  temp_v2 = 0;
  *(unsigned char *)(param_1 + 0x93) = 0;
  do {
    puVar1 = temp_v3;
    FUN_002f5020(puVar1,&LAB_00197eac,1,3,0);
    puVar1 = puVar1 + 3;
    FUN_002f5020(puVar1,&LAB_00197ea8,1,3);
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[-1] = 0;
    puVar1[-2] = 0;
    puVar1[-3] = 0;
    if ((temp_v2 & 0xff) == 0) {
      temp_v0 = 0xe;
    }
    else {
      temp_v0 = 0xf;
    }
    puVar1[2] = temp_v0;
    puVar1[1] = temp_v0;
    *puVar1 = temp_v0;
    puVar1[5] = 0;
    puVar1 = puVar1 + 6;
    FUN_002f5020(puVar1,&LAB_00197eac,1,3);
    puVar1 = puVar1 + 3;
    FUN_002f5020(puVar1,&LAB_00197ea8,1,3);
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[-1] = 0;
    puVar1[-2] = 0;
    if ((temp_v2 & 0xff) == 0) {
      temp_v0 = 0xe;
    }
    else {
      temp_v0 = 0xf;
    }
    puVar1[-3] = 0;
    puVar1[2] = temp_v0;
    puVar1[1] = temp_v0;
    *puVar1 = temp_v0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    switch(temp_v2) {
    case 0:
      temp_v1 = 0xc0;
      *(unsigned short *)(puVar1 + 9) = temp_v1;
      break;
    case 1:
      temp_v1 = 200;
      *(unsigned short *)(puVar1 + 9) = temp_v1;
      break;
    case 2:
      temp_v1 = 0xd0;
      *(unsigned short *)(puVar1 + 9) = temp_v1;
      break;
    case 3:
      temp_v1 = 0xd8;
      *(unsigned short *)(puVar1 + 9) = temp_v1;
      break;
    case 4:
      temp_v1 = 0xf0;
      *(unsigned short *)(puVar1 + 9) = temp_v1;
      break;
    case 5:
      temp_v1 = 0xf8;
      *(unsigned short *)(puVar1 + 9) = temp_v1;
      break;
    default:
    }
LAB_00158d44:
    puVar4 = (unsigned int *)(param_1 + temp_v2 * 0x18);
    temp_v2 = temp_v2 + 1;
    *puVar4 = *(unsigned int *)(puVar1 + -0xd);
    puVar4[1] = *(unsigned int *)(puVar1 + -9);
    puVar4[2] = *(unsigned int *)(puVar1 + -5);
    puVar4[3] = *(unsigned int *)(puVar1 + -1);
    puVar4[4] = *(unsigned int *)(puVar1 + 3);
    puVar4[5] = *(unsigned int *)(puVar1 + 7);
    if (temp_v2 >= 6) {
      return param_1;
    }
  } while( 1 );
}
