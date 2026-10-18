/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e3c44` (_code @ 0x2e3c44, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned short sp28; /* 0x28: local_28 */
} param_4_stack;

extern int FUN_002e3c36(unsigned int, unsigned int);
extern int FUN_002e3cb8(short *, unsigned char, int);
extern unsigned int *FUN_002e3cf8(void);


int FUN_002e3c44(short *param_1,unsigned char *param_2,int param_3,int param_4)

{
  unsigned char temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned char *puVar4;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  short temp_v5 [2];
  short *temp_v6;
  unsigned char *puStack_20;
  int iStack_1c;
  int temp_v7;
  
  temp_v2 = 0;
  puVar4 = param_2;
  temp_v3 = param_3;
  temp_v6 = param_1;
  if (param_2 == (unsigned char *)0x0) {
    temp_v3 = 1;
    puVar4 = (unsigned char *)0x2e3cb4;
    temp_v6 = (short *)0x0;
  }
  puStack_20 = param_2;
  iStack_1c = param_3;
  temp_v7 = param_4;
  if (param_4 == 0) {
    temp_v7 = FUN_002e3c36(0,5);
  }
  while( 1 ) {
    temp_v4 = temp_v3 == 0;
    temp_v3 = temp_v3 - 1;
    if (temp_v4) {
      return -2;
    }
    temp_v0 = *puVar4;
    puVar4 = puVar4 + 1;
    temp_v1 = FUN_002e3cb8(temp_v5,temp_v0,temp_v7);
    temp_v2 = temp_v2 + 1;
    if (temp_v1 == -1) break;
    if (temp_v1 != -2) {
      if (temp_v6 != (short *)0x0) {
        *temp_v6 = temp_v5[0];
      }
      temp_v3 = 0;
      if (temp_v5[0] != 0) {
        temp_v3 = temp_v2;
      }
      return temp_v3;
    }
  }
  puVar3 = (unsigned int *)FUN_002e3cf8();
  *puVar3 = 4;
  return -1;
}
