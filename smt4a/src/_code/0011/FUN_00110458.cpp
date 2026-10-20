/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110458` (_code @ 0x110458, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011049a(unsigned int);
int FUN_002e6e5c(int *);
int FUN_002fb208(void);
int FUN_002fb224(unsigned int *, int *);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_4_stack;

extern unsigned char DAT_005949d8; /* 0x5949d8 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_0011049a. */
extern unsigned int FUN_002e6e34(unsigned int *, int);
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002fb208. */
/* Supplied declaration required: FUN_002fb224. */


unsigned long long FUN_00110458(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  int temp_v2;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_005949d8 + 0x4));
  uStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  temp_v2 = param_4;
  temp_v1 = FUN_002e6e34((unsigned int *)&uStack_20,(*(int *)((unsigned char *)&DAT_005949d8 + 0x4)) + 0xdc);
  FUN_002fb208();
  puVar3 = (unsigned int *)(temp_v0 + 0x10c);
  temp_v2 = temp_v1;
  FUN_002fb224(puVar3,&temp_v2);
  *puVar3 = param_1;
  FUN_002e6e5c(&uStack_20);
  FUN_0011049a(param_1);
  return romwright_piece_4_4(uStack_1c,uStack_20);
}

} /* extern "C" */
