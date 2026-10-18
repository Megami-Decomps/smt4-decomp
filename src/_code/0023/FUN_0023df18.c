/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023df18` (_code @ 0x23df18, 0x118 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: FUN_002899c4. */
extern int FUN_002ba9d8(unsigned char, unsigned char);
extern int FUN_002baaa4(unsigned char, unsigned char);
extern int FUN_002c0ba8(void);
/* Supplied declaration required: FUN_002c0c74. */
extern int FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


void FUN_0023df18(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char *puVar6;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  
  if (param_2 != 0) {
    temp_v2 = FUN_002c0ba8();
    if (temp_v2 != 0) {
      return;
    }
  }
  else {
    temp_v2 = FUN_002c0ba8();
    if (temp_v2 == 0) {
      return;
    }
  }
  temp_v3 = FUN_002c0ec4(2,0);
  temp_v2 = FUN_002c0e9c();
  temp_v4 = FUN_002c0e4c(temp_v3);
  temp_v9 = 0;
  if (temp_v9 < temp_v4) {
    do {
      puVar6 = (unsigned char *)(temp_v2 + temp_v9 * 0xa0);
      temp_v8 = (unsigned int)*(unsigned short *)(puVar6 + 10);
      temp_v10 = temp_v8 != param_1;
      if (temp_v10) {
        temp_v8 = (unsigned int)*(unsigned short *)(puVar6 + 0xc);
      }
      if (!temp_v10 || temp_v8 == param_1) {
        temp_v0 = *puVar6;
        temp_v1 = puVar6[1];
        temp_v5 = FUN_002baaa4(temp_v0,temp_v1);
        temp_v6 = FUN_002ba9d8(temp_v0,temp_v1);
        FUN_002899c4(param_1,param_2,0);
        temp_v7 = FUN_002ba9d8(temp_v0,temp_v1);
        if (temp_v6 != temp_v7) {
          *(unsigned char *)(temp_v5 + 2) = 0;
          *(unsigned char *)(temp_v5 + 3) = *(unsigned char *)(temp_v5 + 3) & 0xe0;
          FUN_002c0c74(temp_v0,temp_v1,0);
        }
        FUN_002899c4(param_1,param_2 ^ 1,0);
      }
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < temp_v4);
  }
  return;
}
