/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5e80` (_code @ 0x2c5e80, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100d1c(unsigned char *, unsigned int *, unsigned int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00100d1c. */
extern unsigned int *__aeabi_errno_addr(void);
extern int *FUN_002c6a50(void);


unsigned long long FUN_002c5e80(unsigned char *param_1,unsigned int *param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  unsigned int *puVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned int temp_v0;
  unsigned char temp_v1;
  
  temp_v1 = 0;
  pbVar4 = param_1;
  do {
    pbVar3 = pbVar4;
    temp_v0 = (unsigned int)*pbVar3;
    pbVar4 = pbVar3 + 1;
    if (temp_v0 == 0) break;
    piVar1 = (int *)FUN_002c6a50();
  } while ((*(unsigned char *)(*piVar1 + temp_v0) & 1) != 0);
  pbVar5 = pbVar4;
  if ((temp_v0 != 0x2b) && (pbVar5 = pbVar3, temp_v0 == 0x2d)) {
    temp_v1 = 1;
    pbVar5 = pbVar4;
  }
  pbVar4 = pbVar5;
  FUN_00100d1c(pbVar5,param_2,param_3);
  if ((param_2 != (unsigned int *)0x0) && ((unsigned char *)*param_2 == pbVar5)) {
    *param_2 = (unsigned int)param_1;
  }
  if (temp_v1) {
    pbVar3 = (unsigned char *)-(int)pbVar4;
    temp_v1 = pbVar4 != (unsigned char *)0x0;
    pbVar4 = pbVar3;
    if (temp_v1 && -1 < (int)pbVar3) {
      puVar2 = (unsigned int *)__aeabi_errno_addr();
      *puVar2 = 2;
      pbVar4 = (unsigned char *)0x80000000;
    }
  }
  else if ((int)pbVar4 < 0) {
    puVar2 = (unsigned int *)__aeabi_errno_addr();
    *puVar2 = 2;
    return romwright_piece_4_4(param_1,0x7fffffff);
  }
  return romwright_piece_4_4(param_1,pbVar4);
}

} /* extern "C" */
