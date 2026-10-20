/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123f1e` (_code @ 0x123f1e, 0x116 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9318(...);
int FUN_002ee938(...);
int FUN_002f8728(unsigned char [28]);
int FUN_002f8760(unsigned char [28]);
int FUN_002fbac6(unsigned char [28], unsigned int *);
int FUN_002fbb38(int, unsigned char [28]);
int wordRefsDiffer_002fd684(unsigned int **, int *);

/* stack frame of param_2: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_2_stack;

/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002ee938. */
extern int FUN_002ee96a(unsigned char *, unsigned char *);
/* Supplied declaration required: FUN_002f8728. */
/* Supplied declaration required: FUN_002f8760. */
/* Supplied declaration required: FUN_002fbac6. */
extern unsigned int wordRefsDiffer_002fbada(unsigned int **, unsigned int *);
/* Supplied declaration required: FUN_002fbb38. */
extern int FUN_002fd454(unsigned int *);
/* Supplied declaration required: wordRefsDiffer_002fd684. */


void FUN_00123f1e(int param_1,int param_2)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int *temp_v6;
  unsigned char temp_v7 [28];
  unsigned int *temp_v8;
  unsigned char temp_v9 [8];
  unsigned char temp_v10 [12];
  int temp_v11;
  unsigned int temp_v12 [2];
  
  temp_v2 = 0;
  temp_v11 = param_1 + 8;
  temp_v6 = (unsigned int *)**(unsigned int **)(param_2 + 0x18);
  temp_v3 = 0;
  while( 1 ) {
    temp_v4 = *(unsigned int *)(param_2 + 0x18);
    temp_v1 = wordRefsDiffer_002fd684(&temp_v6,&temp_v4);
    if ((temp_v1 & ~temp_v2) == 0) break;
    temp_v0 = FUN_002fd454(temp_v6 + 2);
    if (temp_v0 != 0) {
      temp_v8 = (unsigned int *)**(unsigned int **)(temp_v11 + 0x10);
      while( 1 ) {
        temp_v12[0] = *(unsigned int *)(temp_v11 + 0x10);
        temp_v1 = wordRefsDiffer_002fbada(&temp_v8,temp_v12);
        if ((temp_v1 & ~temp_v2) == 0) break;
        FUN_002ee938(temp_v10,temp_v6 + 2);
        FUN_002ee938(temp_v9,temp_v8 + 2);
        temp_v0 = FUN_002ee96a(temp_v9,temp_v10);
        FUN_002e9318(temp_v9);
        FUN_002e9318(temp_v10);
        if (temp_v0 != 0) {
          temp_v2 = 1;
        }
        temp_v8 = (unsigned int *)*temp_v8;
      }
      temp_v3 = temp_v3 + 1;
    }
    temp_v6 = (unsigned int *)*temp_v6;
  }
  if (temp_v3 != 0) {
    FUN_002f8728(temp_v7);
    if (temp_v2 != 0) {
      temp_v6 = (unsigned int *)**(unsigned int **)(param_2 + 0x18);
      while( 1 ) {
        temp_v5 = *(unsigned int *)(param_2 + 0x18);
        temp_v3 = wordRefsDiffer_002fd684(&temp_v6,&temp_v5);
        if (temp_v3 == 0) break;
        temp_v3 = FUN_002fd454(temp_v6 + 2);
        if (temp_v3 == 0) {
          FUN_002fbac6(temp_v7,temp_v6 + 2);
        }
        temp_v6 = (unsigned int *)*temp_v6;
      }
    }
    temp_v6 = (unsigned int *)**(unsigned int **)(param_2 + 0x18);
    while( 1 ) {
      temp_v4 = *(unsigned int *)(param_2 + 0x18);
      temp_v3 = wordRefsDiffer_002fd684(&temp_v6,&temp_v4);
      if (temp_v3 == 0) break;
      temp_v3 = FUN_002fd454(temp_v6 + 2);
      if (temp_v3 != 0) {
        FUN_002fbac6(temp_v7,temp_v6 + 2);
      }
      temp_v6 = (unsigned int *)*temp_v6;
    }
    FUN_002fbb38(param_2 + 8,temp_v7);
    FUN_002f8760(temp_v7);
  }
  return;
}

} /* extern "C" */
