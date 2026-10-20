/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011ed38` (_code @ 0x11ed38, 0xe6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001204e8(int, int);
int FUN_002fbb60(int, unsigned int);
int FUN_002fbb68(...);
int FUN_002fbb70(...);
int FUN_002fbb92(int, int);
int FUN_00307408(int, int);
int FUN_0030742a(int, int);
int FUN_0031085c(int, int);
int FUN_00310d5e(int, int);
int FUN_00310d94(int, int);

/* stack frame of param_2: 4 slot(s), 10 byte(s) */
typedef struct {
    unsigned char sp18; /* 0x18: local_18 */
    unsigned char sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
} param_2_stack;

/* Supplied declaration required: FUN_001204e8. */
extern unsigned int byteRefMin(unsigned char *, unsigned char *);
/* Supplied declaration required: FUN_002fbb60. */
/* Supplied declaration required: FUN_002fbb68. */
/* Supplied declaration required: FUN_002fbb70. */
/* Supplied declaration required: FUN_002fbb92. */
/* Supplied declaration required: FUN_00307408. */
/* Supplied declaration required: FUN_0030742a. */
/* Supplied declaration required: FUN_0031085c. */
/* Supplied declaration required: FUN_00310d5e. */
/* Supplied declaration required: FUN_00310d94. */


void FUN_0011ed38(int param_1,int param_2)

{
/* irregular: 10 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [4];
  unsigned char temp_v7 [4];
  
  temp_v3 = 0;
  temp_v0 = *(char *)(param_1 + 0x3b);
  if (temp_v0 == '\0') {
    temp_v7[0] = 0;
    temp_v6[0] = *(unsigned char *)(param_2 + 4);
    temp_v1 = byteRefMin(temp_v6,temp_v7);
    FUN_002fbb60(param_1,temp_v1);
    temp_v3 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    temp_v4 = 0;
    FUN_002fbb68(param_1,&temp_v4);
  }
  FUN_002fbb68(param_1,param_2 + 8);
  FUN_002fbb92(param_1,param_2 + 0xc);
  FUN_00307408(param_1,param_2 + 0x14);
  FUN_00310d5e(param_1,param_2 + 0x18);
  FUN_00310d94(param_1,param_2 + 0x38);
  FUN_00310d94(param_1,param_2 + 0x4c);
  FUN_002fbb68(param_1,param_2 + 0x60);
  FUN_00307408(param_1,param_2 + 100);
  FUN_002fbb68(param_1,param_2 + 0x68);
  FUN_0030742a(param_1,param_2 + 0x6c);
  FUN_0031085c(param_1,param_2 + 0x78);
  FUN_001204e8(param_1,param_2 + 0x84);
  FUN_0030742a(param_1,param_2 + 0x90);
  if (temp_v0 == '\0') {
    temp_v2 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    FUN_002fbb70(param_1,temp_v3);
    temp_v5 = (temp_v2 - temp_v3) - 4;
    FUN_002fbb68(param_1,&temp_v5);
    FUN_002fbb70(param_1,temp_v2);
  }
  return;
}

} /* extern "C" */
