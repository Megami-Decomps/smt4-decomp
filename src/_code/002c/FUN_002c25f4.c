/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c25f4` (_code @ 0x2c25f4, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

extern unsigned int DAT_004c6290; /* 0x4c6290 */
extern int DAT_004c632c; /* 0x4c632c */

/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: while (STORE). */
/* Supplied declaration required: FUN_002c4b30. */


void FUN_002c25f4(unsigned int param_1,int param_2,unsigned short *param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_cr0, in_cr2, in_s1, in_s2, in_s8; 4 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int in_cr0;
  unsigned int in_cr2;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s8;
  
  temp_v0 = DAT_004c632c;
  puVar2 = &DAT_004c6290;
  if ((DAT_004c632c != 0) &&
     ((*(int *)(DAT_004c632c + 4) != 0 ||
      (puVar2 = (unsigned int *)0x0, *(int *)(DAT_004c632c + 0x18) != 0)))) {
    FUN_002c4b30(*(unsigned int *)(DAT_004c632c + 0x18),*(int *)(DAT_004c632c + 0x20) * 0x1c);
    *(unsigned int *)(temp_v0 + 0xc) = 0;
    *(unsigned int *)(temp_v0 + 0x10) = 0;
    *(unsigned int *)(temp_v0 + 0x20) = 0;
    *(unsigned int *)(temp_v0 + 0x28) = 0;
    *(unsigned int *)(temp_v0 + 0x14) = 0;
    *(unsigned int *)(temp_v0 + 0x24) = 0;
    *(unsigned int *)(temp_v0 + 0x34) = 0;
    *(unsigned int *)(temp_v0 + 0x30) = 0;
    puVar2 = *(unsigned int **)(temp_v0 + 4);
    param_4 = param_4 >> 8;
    in_s1 = *(unsigned int *)(param_4 + 0x74);
    coprocessor_load(0xf,in_cr2,param_4 + 0x1c8);
  }
  else {
    *param_3 = (short)puVar2;
    param_4 = param_2 * 2;
    param_3[param_2] = (short)puVar2;
  }
  *(short *)(param_4 + (int)param_3) = (short)param_4;
  do {
    coprocessor_storelong(0,in_cr0,puVar2);
    *(unsigned int *)(param_4 + 0x94) = in_s1;
    in_s1 = *(unsigned int *)(param_4 + 0x1a4);
    *(unsigned int *)(param_4 + 0x1b8) = in_s8;
    *(unsigned int *)(param_4 + 0x10) = in_s2;
  } while( 1 );
}
