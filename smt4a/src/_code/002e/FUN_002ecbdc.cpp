/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ecbdc` (_code @ 0x2ecbdc, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0031066a(unsigned int, unsigned int, int, int *);

typedef struct fn_002ecbdc_arg0 fn_002ecbdc_arg0;
struct fn_002ecbdc_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x8];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
};

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char DAT_0055ae64; /* 0x55ae64 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int *wordRefMax(int *, unsigned int *);
extern int rt_malloc(int);
extern unsigned int *sharedRefInit(fn_002ecbdc_arg0 *);
/* Supplied declaration required: FUN_0031066a. */
extern unsigned int bufGrowCapacity(unsigned int, int *);


unsigned long long FUN_002ecbdc(fn_002ecbdc_arg0 *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int *piVar2;
  int temp_v0;
  int *piVar4;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int uStack_18;
  
  temp_v2 = param_2;
  temp_v3 = param_3;
  uStack_18 = param_4;
  puVar1 = (unsigned int *)sharedRefInit(param_1);
  piVar4 = (int *)(puVar1 + 3);
  *puVar1 = (unsigned int)&DAT_0055ae64;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  temp_v3 = bufGrowCapacity(0,piVar4);
  temp_v2 = *(int *)(param_2 + 0x10) - *(int *)(param_2 + 0xc);
  piVar2 = (int *)wordRefMax(&temp_v2,(unsigned int *)&temp_v3);
  temp_v1 = *piVar2;
  temp_v0 = rt_malloc(temp_v1);
  *piVar4 = temp_v0;
  FUN_0031066a(*(unsigned int *)(param_2 + 0xc),*(unsigned int *)(param_2 + 0x10),temp_v0,piVar4);
  puVar1[4] = (*(int *)(param_2 + 0x10) - *(int *)(param_2 + 0xc)) + *piVar4;
  puVar1[5] = *piVar4 + temp_v1;
  return romwright_piece_4_4(temp_v2,puVar1);
}

} /* extern "C" */
