/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a9308` (_code @ 0x4a9308, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184748(int);
int FUN_00231cdc(int, unsigned int, unsigned int, unsigned int);
int FUN_002cc96c(int);
int FUN_00321500(int);
int FUN_0039ebcc(void);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

/* Supplied declaration required: FUN_00184748. */
/* Supplied declaration required: FUN_00231cdc. */
/* Supplied declaration required: FUN_002cc96c. */
/* Supplied declaration required: FUN_00321500. */
extern int menu32ModeIsNot6(int);
/* Supplied declaration required: FUN_0039ebcc. */


void FUN_004a9308(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10));
  temp_v2 = 0xffffffff;
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 0x74a0) = 0xb;
  switch(param_3) {
  case 1:
  case 2:
  case 3:
    temp_v2 = 1;
    break;
  case 4:
    temp_v2 = 9;
    break;
  case 5:
    temp_v2 = 8;
    break;
  case 6:
    temp_v2 = 5;
    break;
  case 7:
    temp_v2 = 3;
    break;
  case 8:
    temp_v2 = 7;
    break;
  case 0xe:
    temp_v2 = 0xb;
    temp_v1 = menu32ModeIsNot6(temp_v0 + 8);
    if (temp_v1 != 0) {
      temp_v1 = temp_v0 + 0x24bc;
      FUN_0039ebcc();
      if (temp_v1 != 0) {
        FUN_00321500(temp_v0 + 8);
        FUN_00184748(temp_v0 + 0x24bc);
      }
    }
    FUN_002cc96c(temp_v0 + 0x28c4);
    *(unsigned int *)(temp_v0 + 0x74a0) = 0xf;
  }
  FUN_00231cdc(temp_v0 + 0x28c4,param_2,temp_v2,param_4);
  return;
}

} /* extern "C" */
