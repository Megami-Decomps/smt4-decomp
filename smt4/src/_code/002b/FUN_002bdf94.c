/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bdf94` (_code @ 0x2bdf94, 0x9a bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp78; /* 0x78: local_78 */
} param_1_stack;

extern unsigned int uRam00000038; /* 0x38 */
extern unsigned int uRam00000048; /* 0x48 */
extern unsigned int uRam00000058; /* 0x58 */
extern unsigned int uRam00000068; /* 0x68 */

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Unsupported intrinsic, declaration required: while (INT_RIGHT). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Supplied declaration required: FUN_002b23bc. */
/* Supplied declaration required: func_0x006bedfc. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002bedba) */

void FUN_002bdf94(unsigned int param_1)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr3, in_cr6, in_cr8, in_s0, in_stack_00000000, in_stack_00000008; 16 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr3;
  unsigned int in_cr6;
  unsigned int in_cr8;
  unsigned int in_s0;
  int *in_stack_00000000;
  unsigned int in_stack_00000008;
  unsigned char uStack0000000c;
  unsigned char uStack00000088;
  unsigned char uStack000000d8;
  unsigned char *temp_v4;
  unsigned char temp_v5 [4];
  unsigned char temp_v6 [32];
  unsigned char temp_v7 [44];
  
  FUN_002b23bc(temp_v6,0x20,in_stack_00000008,&uStack0000000c);
  temp_v4 = temp_v6;
  puVar2 = temp_v7;
  FUN_002b23bc(puVar2,0x20,temp_v4,temp_v5);
  switch(param_1) {
  case 0:
    break;
  case 1:
  case 2:
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
  case 5:
    break;
  case 6:
    temp_v0 = temp_v1 >> 0x20;
    do {
      temp_v3 = *in_stack_00000000;
      *in_stack_00000000 = temp_v3 + 1;
      in_stack_00000000[temp_v3 + 3] = temp_v0;
      temp_v0 = ((unsigned int)in_stack_00000000 & 0x7fffffff) >> 7;
    } while( 1 );
  default:
    coprocessor_storelong(0,in_cr0,&uStack000000d8);
    func_0x006bedfc((int)puVar2 >> 0x20);
    temp_v3 = temp_v2 << 1;
    *(int *)(temp_v2 + 8) = temp_v3;
    in_stack_00000000 = (int *)(temp_v3 >> 0x1f);
    *(char *)(temp_v2 + 2) = (char)temp_v3;
    coprocessor_store(0,in_cr1,500);
    puVar2 = (unsigned char *)(temp_v2 >> 0x20);
    uRam00000038 = in_s0;
    uRam00000048 = in_s0;
    uRam00000058 = in_s0;
    uRam00000068 = in_s0;
  }
  coprocessor_storelong(0,in_cr1,&uStack00000088);
  coprocessor_function(0xb,0xb,0,in_cr8,in_cr0,in_cr6);
  coprocessor_load(0,in_cr3,&temp_v4);
  if ((int)((unsigned int)puVar2 & (unsigned int)in_stack_00000000) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
