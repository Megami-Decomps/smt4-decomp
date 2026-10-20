/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae418` (_code @ 0x3ae418, 0x154 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002630e0(int *, int, unsigned int);
int FUN_002bee58(unsigned int *, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern unsigned int *DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_002630e0. */
extern int FUN_00293230(unsigned int);
/* Supplied declaration required: FUN_002bee58. */
extern unsigned int FUN_002c501c(void);


unsigned int FUN_003ae418(unsigned int param_1,unsigned int *param_2)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int uStack_34;
  unsigned int uStack_30;
  
  puVar1 = DAT_00439ca8;
  temp_v2 = 0;
  do {
    if (*(short *)(DAT_00439ca8 + temp_v2 * 0x53 + 0x3871) == 0) {
      if (temp_v2 >= 0xc) {
        return 0xffffffff;
      }
      temp_v3 = 0;
      *(unsigned short *)(DAT_00439ca8 + temp_v2 * 0x53 + 0x3871) = 2;
      *(unsigned short *)((int)puVar1 + temp_v2 * 0x14c + 0xe1c6) = 0;
      puVar1[temp_v2 * 0x53 + 0x3872] = 0;
      *(unsigned char *)(puVar1 + temp_v2 * 0x53 + 0x3873) = 0;
      temp_v4 = in_s0;
      uStack_34 = in_s1;
      uStack_30 = in_s2;
      temp_v0 = FUN_002c501c();
      FUN_002630e0(&temp_v4,0,temp_v0);
      puVar1[temp_v2 * 0x53 + 0x3874] = temp_v4;
      puVar1[temp_v2 * 0x53 + 0x3875] = uStack_34;
      puVar1[temp_v2 * 0x53 + 0x3876] = uStack_30;
      puVar1[temp_v2 * 0x53 + 0x3879] = temp_v3;
      puVar1[temp_v2 * 0x53 + 0x3878] = temp_v3;
      puVar1[temp_v2 * 0x53 + 0x3877] = temp_v3;
      puVar1[temp_v2 * 0x53 + 0x387c] = temp_v3;
      puVar1[temp_v2 * 0x53 + 0x387b] = temp_v3;
      puVar1[temp_v2 * 0x53 + 0x387a] = temp_v3;
      puVar1[temp_v2 * 0x53 + 0x387d] = (unsigned int)param_2;
      *param_2 = *param_2 & 0xfdffffff;
      temp_v1 = FUN_00293230(*puVar1);
      if (temp_v1 != 0) {
        *(unsigned char *)(puVar1 + temp_v2 * 0x53 + 0x3873) = 0;
        *(unsigned short *)(puVar1 + temp_v2 * 0x53 + 0x3871) = 5;
        *(unsigned int *)puVar1[temp_v2 * 0x53 + 0x387d] = *(unsigned int *)puVar1[temp_v2 * 0x53 + 0x387d] | 0x2000000;
      }
      else {
        FUN_002bee58(puVar1 + temp_v2 * 0x53 + 0x382b,0xb);
        FUN_002bee58(puVar1 + temp_v2 * 0x53 + 0x384e,0xc);
      }
      return temp_v2;
    }
    temp_v2 = temp_v2 + 1;
  } while ((int)temp_v2 < 0xc);
  return 0xffffffff;
}

} /* extern "C" */
