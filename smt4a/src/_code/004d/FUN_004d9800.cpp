/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d9800` (_code @ 0x4d9800, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00103f54(unsigned int, unsigned int *, int, int);
int holderSetFlagBits(unsigned int, int);
int FUN_001229f4(unsigned char [12], unsigned int, unsigned int, unsigned int);
int wordRefEqual(unsigned char [12], int *);
int operatorNew(int);

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern int FUN_004d9720(...); /* 0x4d9720 */
extern unsigned char DAT_0055cae4; /* 0x55cae4 */

/* Supplied declaration required: FUN_00103f54. */
/* Supplied declaration required: holderSetFlagBits. */
/* Supplied declaration required: FUN_001229f4. */
/* Supplied declaration required: wordRefEqual. */
/* Supplied declaration required: operatorNew. */
extern unsigned int FUN_002fafd8(int, unsigned int);


void FUN_004d9800(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [12];
  int temp_v7;
  int temp_v8;
  int temp_v9;
  
  temp_v0 = operatorNew(0x78);
  if (temp_v0 == 0) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = FUN_002fafd8(temp_v0,0);
  }
  *(unsigned int *)(param_1 + 0x28) = temp_v1;
  puVar2 = (unsigned int *)operatorNew(0x14);
  if (puVar2 != (unsigned int *)0x0) {
    puVar2[1] = param_1;
    puVar2[2] = (unsigned int)FUN_004d9720;
    puVar2[3] = 0;
    *puVar2 = (unsigned int)&DAT_0055cae4;
    puVar2[4] = temp_v1;
    holderSetFlagBits(temp_v1,2);
    FUN_00103f54(temp_v1,puVar2,0,1);
  }
  temp_v2 = *(unsigned int *)(param_1 + 0x20);
  temp_v3 = *(unsigned int *)(param_1 + 0x24);
  temp_v4 = 0;
  FUN_001229f4(temp_v6,*(unsigned int *)(param_1 + 0x14),temp_v1,*(unsigned int *)(param_1 + 0x18));
  temp_v8 = 0x10001;
  temp_v0 = wordRefEqual(temp_v6,&temp_v8);
  if (temp_v0 == 0) {
    temp_v2 = 0x8001000b;
    temp_v0 = wordRefEqual(temp_v6,&temp_v2);
    if (temp_v0 == 0) {
      temp_v3 = 0x8001000a;
      temp_v0 = wordRefEqual(temp_v6,&temp_v3);
      if (temp_v0 == 0) {
        temp_v4 = 0x80010004;
        temp_v0 = wordRefEqual(temp_v6,&temp_v4);
        if (temp_v0 == 0) {
          temp_v5 = 0x80650000;
          temp_v0 = wordRefEqual(temp_v6,&temp_v5);
          if (temp_v0 == 0) {
            temp_v7 = 0x80650002;
            temp_v0 = wordRefEqual(temp_v6,&temp_v7);
            if (temp_v0 == 0) {
              temp_v9 = 0x80650009;
              wordRefEqual(temp_v6,&temp_v9);
            }
          }
        }
      }
    }
  }
  return;
}

} /* extern "C" */
