/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00463a9c` (_code @ 0x463a9c, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int listAppendNode(int, int);
int objectCommandReserveWords(int, int);
int FUN_001911a4(int, int);
int FUN_00463e10(int, int, int, unsigned int, int, unsigned int);
int FUN_004645ec(int, int, int, unsigned int, int, unsigned int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: listAppendNode. */
/* Supplied declaration required: objectCommandReserveWords. */
/* Supplied declaration required: FUN_001911a4. */
extern int FUN_00191330(void);
/* Supplied declaration required: FUN_00463e10. */
/* Supplied declaration required: FUN_004645ec. */


void FUN_00463a9c(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned long long temp_v6;
  unsigned int temp_v7;
  
  *(unsigned char *)(*(int *)(param_1 + 0x4c) + 0x27) = *(unsigned char *)(param_1 + 0x48);
  temp_v4 = *(int *)(param_1 + 0x4c);
  temp_v5 = *(unsigned int *)(param_1 + 0x3c);
  temp_v6 = *(unsigned long long *)(param_1 + 0x40);
  if (*(char *)(temp_v4 + 0x51) != '\0') {
    return;
  }
  temp_v1 = FUN_00191330();
  temp_v2 = temp_v1;
  objectCommandReserveWords(temp_v1,0x19);
  *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v1 + 0x184);
  *(unsigned char *)(temp_v2 + 4) = 0x2b;
  temp_v7 = (unsigned int)((unsigned long long)temp_v6 >> 0x20);
  if (*(char *)(temp_v4 + 0x1c) != '\0') {
    if (*(char *)(temp_v4 + 0x1c) != '\x01') {
      temp_v0 = 0;
    }
    else {
      temp_v3 = temp_v4;
      FUN_004645ec(temp_v4,temp_v2,param_1 + 0x1c,temp_v5,(int)temp_v6,temp_v7);
      temp_v0 = (unsigned char)temp_v3;
    }
  }
  else {
    temp_v3 = temp_v4;
    FUN_00463e10(temp_v4,temp_v2,param_1 + 0x1c,temp_v5,(int)temp_v6,temp_v7);
    temp_v0 = (unsigned char)temp_v3;
  }
  *(unsigned char *)(temp_v2 + 0x14) = temp_v0;
  *(unsigned int *)(temp_v2 + 0x10) = *(unsigned int *)(temp_v4 + 0x10);
  listAppendNode(temp_v1,temp_v2);
  FUN_001911a4(temp_v1,1);
  return;
}

} /* extern "C" */
