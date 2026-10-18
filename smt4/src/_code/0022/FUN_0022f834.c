/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022f834` (_code @ 0x22f834, 0x1f4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 7 slot(s), 14 byte(s) */
typedef struct {
    unsigned short sp94; /* 0x94: local_94 */
    unsigned short sp96; /* 0x96: local_96 */
    unsigned short sp98; /* 0x98: local_98 */
    unsigned short sp9A; /* 0x9a: local_9a */
    unsigned short sp9C; /* 0x9c: local_9c */
    unsigned short sp9E; /* 0x9e: local_9e */
    unsigned short spA0; /* 0xa0: local_a0 */
} param_1_stack;

extern int FUN_0023360c(int);
/* Supplied declaration required: FUN_00299370. */
/* Supplied declaration required: FUN_0029963c. */
/* Supplied declaration required: FUN_002996d8. */
extern int FUN_00299fc0(void);
/* Supplied declaration required: FUN_0029a0cc. */
/* Supplied declaration required: FUN_002ae3c0. */
extern unsigned int FUN_002b63ac(void);
extern unsigned int FUN_003c2d54(int);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0022f834(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned short temp_v7;
  unsigned short temp_v8;
  unsigned short temp_v9;
  unsigned short temp_v10;
  unsigned short temp_v11;
  unsigned short temp_v12;
  unsigned short temp_v13;
  
  temp_v1 = *(int *)(param_1 + 0x860);
  temp_v2 = FUN_0023360c(param_1 + temp_v1 * 0x74 + 0x880);
  temp_v0 = *(unsigned short *)(param_1 + temp_v1 * 0x1002 + 0xc94 + temp_v2 * 4);
  temp_v5 = (unsigned int)temp_v0;
  temp_v3 = FUN_003c2d54(param_1 + *(int *)(param_1 + 0x860) * 0x74 + 0x880);
  temp_v6 = temp_v3 == 0;
  if (temp_v6) {
    temp_v3 = *(unsigned int *)(param_1 + 0x15d54);
  }
  if (!(temp_v6 && temp_v3 == temp_v5)) {
    FUN_002996d8(0);
    *(unsigned char *)(param_1 + 0x1e) = 0;
    *(unsigned char *)(param_1 + 0x1f) = 0;
    *(unsigned int *)(param_1 + 0x15d54) = temp_v5;
  }
  else if (*(char *)(param_1 + 0x1e) != '\0') {
    temp_v1 = FUN_00299fc0();
    if (temp_v1 != 0) {
      FUN_002996d8(1);
      *(unsigned char *)(param_1 + 0x1f) = 1;
    }
  }
  else {
    if (temp_v5 != 0) {
      temp_v1 = FUN_002ae3c0(temp_v5);
      if (temp_v1 == 4) {
        FUN_0029963c(0,temp_v5);
      }
      temp_v1 = FUN_002ae3c0(temp_v5);
      if (temp_v1 == 5) {
        FUN_0029963c(1,temp_v5);
      }
      temp_v1 = FUN_002ae3c0(temp_v5);
      if (temp_v1 == 6) {
        FUN_0029963c(2,temp_v5);
      }
    }
    *(unsigned char *)(param_1 + 0x1e) = 1;
  }
  if ((*(int *)(param_1 + 0x15d24) != 0) && (*(unsigned int *)(param_1 + 0x15d28) != temp_v5)) {
    *(unsigned int *)(param_1 + 0x15d28) = temp_v5;
    temp_v4 = FUN_002b63ac();
    rt_memcpy_w(&temp_v7,temp_v4,0x8c);
    if (temp_v5 != 0) {
      temp_v4 = FUN_002ae3c0(temp_v5);
      switch(temp_v4) {
      case 2:
        temp_v7 = temp_v0;
        break;
      case 3:
        temp_v8 = temp_v0;
        break;
      case 4:
        temp_v10 = temp_v0;
        break;
      case 5:
        temp_v11 = temp_v0;
        break;
      case 6:
        temp_v12 = temp_v0;
        break;
      case 7:
        temp_v13 = temp_v0;
        break;
      case 8:
        temp_v9 = temp_v0;
      }
    }
    FUN_00299370(&temp_v7);
    FUN_0029a0cc(&temp_v7);
  }
  return;
}
