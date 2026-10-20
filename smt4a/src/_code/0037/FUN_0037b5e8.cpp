/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b5e8` (_code @ 0x37b5e8, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_001654f8(...);
int FUN_00168594(...);
int FUN_00180118(...);
int FUN_0023723c(...);
int FUN_0050d740(...);
int rt_memcpy_w(...);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_2_stack;

extern unsigned char LAB_0037b6e4; /* 0x37b6e4 */
extern unsigned char LAB_0037b6ec; /* 0x37b6ec */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_001654f8. */
/* Supplied declaration required: FUN_00168594. */
/* Supplied declaration required: FUN_00180118. */
/* Supplied declaration required: FUN_0023723c. */
/* Supplied declaration required: FUN_0050d740. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0037b5e8(unsigned int *param_1,int param_2)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  float temp_v1;
  unsigned char temp_v2 [84];
  
  temp_v0 = param_2 + 0xe;
  FUN_001654f8(temp_v0,0);
  FUN_0023723c(*param_1,2,0xffffffff,0,0,temp_v0);
  if (*(short *)(param_2 + 0x60) != 0) {
    FUN_00180118();
    FUN_001654f8();
  }
  else {
    FUN_0050d740(temp_v2,&LAB_0037b6e4);
  }
  FUN_0023723c(param_1[1],2,0xffffffff,0,0,temp_v2);
  rt_memcpy_w(temp_v2,&LAB_0037b6ec,0x13);
  FUN_0023723c(param_1[2],2,0xffffffff,0,0,temp_v2);
  FUN_00100388(temp_v2,
               "犂钂銂薂薂钂澂膂鎂鎂䂁閂鎂薂銂鎂䂁鞂覂貂貂䂁銂薂莂薂覂隂薂䂁钂袂覂鎂䒁＀"
              );
  FUN_0023723c(param_1[4],2,0xffffffff,0,0,temp_v2);
  temp_v1 = 0.0f;
  FUN_00168594(temp_v2,2);
  *(unsigned char *)(param_1 + 3) = 1;
  param_1[5] = (int)temp_v1;
  return;
}

} /* extern "C" */
