/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a5678` (_code @ 0x1a5678, 0x1ec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001af0d0(unsigned int *, int);
int FUN_001b14dc(int *, int *);
int FUN_001bab10(int, int, int);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern unsigned char LAB_00200080; /* 0x200080 */

/* Supplied declaration required: FUN_001af0d0. */
/* Supplied declaration required: FUN_001b14dc. */
extern unsigned int *FUN_001b36b8(int, unsigned int, unsigned int);
extern unsigned int FUN_001ba6b0(int, unsigned int *, unsigned int);
extern unsigned int FUN_001ba948(int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001bab10. */
extern unsigned int FUN_001bab50(int, unsigned int, unsigned int);


void FUN_001a5678(unsigned int param_1,int *param_2,int param_3)

{
/* irregular: irregular input(s): in_stack_00000008, in_stack_0000000c; 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  int temp_v2;
  int in_stack_00000008;
  int in_stack_0000000c;
  int temp_v3;
  int temp_v4;
  
  temp_v3 = *param_2;
  if (in_stack_00000008 != 0 && in_stack_0000000c != 0) {
    puVar3 = (unsigned int *)(in_stack_00000008 + (temp_v3 - in_stack_0000000c));
    *puVar3 = 0;
    puVar3[1] = (unsigned int)&LAB_00200080;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = (unsigned int)(*(char *)(param_3 + 0x1c) != '\x05') |
                ((unsigned int)(*(char *)(param_3 + 0x58) != '\0') << 1) |
                ((unsigned int)(*(char *)(param_3 + 0x7c) != '\0') << 2) |
                ((unsigned int)*(unsigned char *)(param_3 + 0xa1) << 8) |
                ((unsigned int)(*(char *)(param_3 + 0xa0) != '\0') << 10) |
                ((unsigned int)(*(char *)(param_3 + 0x7d) != '\0') << 0xd) | 0x1000;
    puVar3[5] = 0xf0080;
    puVar3[6] = (unsigned int)(*(char *)(param_3 + 0x1c) != '\x05') |
                ((unsigned int)(*(char *)(param_3 + 0x58) != '\0') << 1) |
                ((unsigned int)(*(char *)(param_3 + 0x7c) != '\0') << 2) |
                ((unsigned int)*(unsigned char *)(param_3 + 0xa1) << 8) |
                ((unsigned int)(*(char *)(param_3 + 0xa0) != '\0') << 10) |
                ((unsigned int)(*(char *)(param_3 + 0x7d) != '\0') << 0xd) | 0x11000;
    puVar3[7] = 0xf0080;
    temp_v0 = FUN_001ba6b0(param_3,puVar3 + 8,0);
    temp_v0 = FUN_001ba948(param_3 + 0x3c,temp_v0,0);
    temp_v0 = FUN_001bab50(param_3 + 0x60,temp_v0,0);
    puVar2 = (unsigned int *)FUN_001b36b8(param_3 + 0x84,temp_v0,0);
    temp_v1 = (((int)puVar2 - (int)puVar3) & 0xfffffffcU) + 8;
    if (((temp_v1 & 0xf) != 0) && (temp_v1 = 4 - ((temp_v1 & 0xf) >> 2), 0 < (int)temp_v1)) {
      puVar3 = puVar2 + -1;
      if ((temp_v1 & 1) != 0) {
        *puVar2 = 0;
        puVar3 = puVar2;
      }
      for (temp_v2 = (int)temp_v1 >> 1; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
        puVar3[1] = 0;
        puVar3 = puVar3 + 2;
        *puVar3 = 0;
      }
      puVar2 = puVar2 + temp_v1;
    }
    FUN_001af0d0(puVar2,1);
    return;
  }
  temp_v4 = temp_v3;
  FUN_001bab10(param_3,temp_v3,1);
  temp_v4 = param_3;
  FUN_001b14dc(&temp_v3,param_2);
  return;
}

} /* extern "C" */
