/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004986b0` (_code @ 0x4986b0, 0x2e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001801a4(void);
int FUN_002a482c(int);
int FUN_0031d174(int);
int FUN_0049339c(int, unsigned int, int, int, unsigned int);
int FUN_0049368c(int, int, int, int, unsigned int, int);
int FUN_00494574(int, unsigned int);
int FUN_00495b04(...);
int FUN_004d0a8c(...);

typedef int romwright_code(...);
/* stack frame of param_2: 4 slot(s), 12 byte(s) */
typedef struct {
    unsigned short sp26; /* 0x26: local_26 */
    unsigned short sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_001801a4. */
/* Supplied declaration required: FUN_002a482c. */
/* Supplied declaration required: FUN_0031d174. */
/* Supplied declaration required: FUN_0049339c. */
/* Supplied declaration required: FUN_0049368c. */
/* Supplied declaration required: FUN_00494574. */
/* Supplied declaration required: FUN_00495b04. */
extern int FUN_004cfe4c(int);
extern int FUN_004d0040(int);
/* Supplied declaration required: FUN_004d0a8c. */


void FUN_004986b0(int param_1,unsigned int param_2)

{
/* irregular: 8 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short *puVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned short temp_v12;
  unsigned short temp_v13;
  
  temp_v10 = *(unsigned int *)(param_1 + 0x3a0);
  switch(*(unsigned int *)(param_1 + 0xb40)) {
  case 0:
    param_2 = 0;
    break;
  case 1:
  case 2:
    param_2 = 1;
    break;
  case 3:
  case 4:
  case 5:
    param_2 = 2;
    break;
  case 6:
    param_2 = 0xb;
    break;
  case 7:
    param_2 = 3;
    break;
  case 8:
    param_2 = 4;
  }
  FUN_0049339c(param_1 + 0x3a4,param_2,0,0,temp_v10);
  FUN_0049368c(param_1 + 0x3a4,*(int *)(param_1 + 0xb40) + 0x5a,0,0,temp_v10,1);
  FUN_00494574(param_1,*(unsigned int *)(param_1 + 0xb40));
  temp_v12 = 0;
  temp_v13 = temp_v13 & 0xfc00;
  temp_v0 = 0;
  switch(*(unsigned int *)(param_1 + 0xb40)) {
  case 0:
    puVar2 = (unsigned short *)FUN_001801a4();
    temp_v0 = *puVar2;
    break;
  case 1:
    temp_v1 = FUN_001801a4();
    temp_v0 = *(unsigned short *)(temp_v1 + 2);
    break;
  case 2:
    temp_v1 = FUN_001801a4();
    temp_v0 = *(unsigned short *)(temp_v1 + 4);
    break;
  case 3:
    temp_v1 = FUN_001801a4();
    temp_v0 = *(unsigned short *)(temp_v1 + 6);
    break;
  case 4:
    temp_v1 = FUN_001801a4();
    temp_v0 = *(unsigned short *)(temp_v1 + 8);
    break;
  case 5:
    temp_v1 = FUN_001801a4();
    temp_v0 = *(unsigned short *)(temp_v1 + 10);
    break;
  case 6:
    temp_v1 = FUN_001801a4();
    temp_v0 = *(unsigned short *)(temp_v1 + 0xc);
  }
  temp_v12 = temp_v0;
  FUN_00495b04(param_1,0,0,&temp_v12);
  temp_v1 = *(int *)(param_1 + 4);
  if ((((temp_v1 == 7 || temp_v1 == 0xb) || (temp_v1 == 8 || temp_v1 == 0xc)) ||
      (temp_v1 == 9 || temp_v1 == 0xd)) || (temp_v1 == 0x11 || temp_v1 == 0x12)) {
    temp_v8 = 1;
  }
  else {
    temp_v8 = 0;
  }
  temp_v2 = param_1 + *(int *)(param_1 + 0xb40) * 0x74;
  temp_v11 = temp_v2 + 0xb60;
  temp_v9 = param_1 + *(int *)(param_1 + 0xb40) * 0x1002 + 0xf74;
  temp_v3 = FUN_002a482c(temp_v11);
  temp_v4 = FUN_004d0040(temp_v11);
  temp_v7 = 0;
  temp_v1 = temp_v4;
  if (0 < temp_v4) {
    do {
      if ((!temp_v8) || (temp_v1 = FUN_0031d174(temp_v11), temp_v1 != temp_v7)) {
        temp_v1 = param_1;
        FUN_00495b04(param_1,temp_v7 + 2,0,temp_v9 + (temp_v3 + temp_v7) * 4);
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < temp_v4);
  }
  temp_v3 = 0;
  if (temp_v8) {
    temp_v3 = *(int *)(temp_v2 + 0xb68);
    temp_v1 = temp_v3;
  }
  if ((temp_v8 && temp_v1 != 0) && -1 < temp_v3) {
    temp_v1 = FUN_004cfe4c(temp_v11);
    temp_v2 = FUN_0031d174(temp_v11);
    FUN_00495b04(param_1,temp_v2 + 2,1,temp_v9 + temp_v1 * 4);
  }
  temp_v5 = FUN_0031d174(temp_v11);
  temp_v6 = FUN_002a482c(temp_v11);
  FUN_004d0a8c(*(unsigned int *)(param_1 + 0xb3c),temp_v6,temp_v5);
  (**(romwright_code **)(**(int **)(param_1 + 0xb3c) + 0x10))(*(int **)(param_1 + 0xb3c),temp_v10);
  return;
}

} /* extern "C" */
