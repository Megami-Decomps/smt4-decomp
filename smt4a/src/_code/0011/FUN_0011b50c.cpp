/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b50c` (_code @ 0x11b50c, 0x114 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00110ab0(...);
int bufferAssignByteAlias(...);
int strHolderAssignU32Alias(...);
int FUN_002fbb70(...);
int FUN_00307254(int, int);
int strHolderAssignU16(int, int);
int FUN_00307412(int, int);
int FUN_0030742a(int, int);
int FUN_00307454(...);

/* stack frame of param_2: 4 slot(s), 10 byte(s) */
typedef struct {
    unsigned char sp18; /* 0x18: local_18 */
    unsigned char sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
} param_2_stack;

/* Supplied declaration required: FUN_00110ab0. */
extern unsigned int byteRefMin(unsigned char *, unsigned char *);
/* Supplied declaration required: bufferAssignByteAlias. */
/* Supplied declaration required: strHolderAssignU32Alias. */
/* Supplied declaration required: FUN_002fbb70. */
/* Supplied declaration required: FUN_00307254. */
/* Supplied declaration required: strHolderAssignU16. */
/* Supplied declaration required: FUN_00307412. */
/* Supplied declaration required: FUN_0030742a. */
/* Supplied declaration required: FUN_00307454. */


void FUN_0011b50c(int param_1,int param_2)

{
/* irregular: 9 native warning(s); review required */
  signed char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [4];
  unsigned char temp_v7 [4];
  
  temp_v3 = 0;
  temp_v0 = *(signed char *)(param_1 + 0x3b);
  if (temp_v0 == '\0') {
    temp_v7[0] = 1;
    temp_v6[0] = *(unsigned char *)(param_2 + 4);
    temp_v1 = byteRefMin(temp_v6,temp_v7);
    bufferAssignByteAlias(param_1,temp_v1);
    temp_v3 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    temp_v4 = 0;
    strHolderAssignU32Alias(param_1,&temp_v4);
  }
  bufferAssignByteAlias(param_1,param_2 + 5);
  FUN_00307254(param_1,param_2 + 8);
  bufferAssignByteAlias(param_1,param_2 + 0x14);
  FUN_00307254(param_1,param_2 + 0x18);
  strHolderAssignU16(param_1,param_2 + 0x24);
  FUN_00307412(param_1,param_2 + 0x28);
  FUN_00307412(param_1,param_2 + 0x30);
  FUN_00307412(param_1,param_2 + 0x38);
  FUN_00307412(param_1,param_2 + 0x40);
  strHolderAssignU32Alias(param_1,param_2 + 0x48);
  FUN_0030742a(param_1,param_2 + 0x4c);
  bufferAssignByteAlias(param_1,param_2 + 0x58);
  bufferAssignByteAlias(param_1,param_2 + 0x59);
  FUN_00110ab0(param_1,param_2 + 0x5c);
  bufferAssignByteAlias(param_1,param_2 + 0x6c);
  strHolderAssignU32Alias(param_1,param_2 + 0x70);
  if (temp_v0 == '\0') {
    if (*(char *)(param_2 + 4) != '\0') {
      FUN_00307454(param_1,param_2 + 0x74);
    }
    temp_v2 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    FUN_002fbb70(param_1,temp_v3);
    temp_v5 = (temp_v2 - temp_v3) - 4;
    strHolderAssignU32Alias(param_1,&temp_v5);
    FUN_002fbb70(param_1,temp_v2);
  }
  return;
}

} /* extern "C" */
