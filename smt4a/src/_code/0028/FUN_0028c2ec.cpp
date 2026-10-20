/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028c2ec` (_code @ 0x28c2ec, 0x328 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a4878(...);
int FUN_002c7bb0(...);
int FUN_003344b4(int, unsigned int);
int FUN_004bcbb4(...);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int DAT_0057113c; /* 0x57113c */
extern int DAT_0057f268; /* 0x57f268 */

extern int FUN_0014aa78(void);
extern unsigned int FUN_001ab854(unsigned int);
extern int FUN_001ab888(void);
extern int FUN_002919a4(void);
/* Supplied declaration required: FUN_002a4878. */
extern int FUN_002a4894(unsigned int);
/* Supplied declaration required: FUN_002c7bb0. */
/* Supplied declaration required: FUN_003344b4. */
extern int FUN_003df57c(unsigned short, unsigned int);
/* Supplied declaration required: FUN_004bcbb4. */
extern int FUN_004ee568(void);


void FUN_0028c2ec(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 goto(s); 4 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  
  temp_v6 = DAT_0057f268;
  temp_v8 = param_4;
  temp_v2 = FUN_001ab888();
  temp_v8 = 0;
  if (((*(short *)(temp_v6 + 0x36) == 0x7d) && (temp_v3 = FUN_0014aa78(), temp_v3 != 0)) &&
     (DAT_0057113c != 0)) {
    temp_v3 = FUN_004ee568();
    if ((*(int *)(temp_v3 + 0x28) != 0) && (*(short *)(*(int *)(temp_v3 + 0x28) + 0x1be) == 8))
    goto LAB_0028c444;
  }
  if (*(short *)(temp_v6 + 0x38) < 0) {
    if (*(int *)(*(int *)(temp_v6 + 0xa10) + 0x34) == -1) {
      temp_v3 = FUN_003df57c(*(unsigned short *)(temp_v6 + 0x36),1);
      *(int *)(*(int *)(temp_v6 + 0xa10) + 0x44) = -temp_v3;
      goto LAB_0028c444;
    }
    if ((*(short *)(temp_v6 + 0x38) < 0) && (*(int *)(*(int *)(temp_v6 + 0xa10) + 0x34) == -2)) {
      temp_v3 = FUN_002919a4();
      if (temp_v3 != 0) {
        temp_v3 = FUN_004bcbb4(temp_v3,*(unsigned short *)(temp_v6 + 0x36));
        *(int *)(*(int *)(temp_v6 + 0xa10) + 0x44) = -temp_v3;
      }
      goto LAB_0028c444;
    }
  }
  temp_v3 = 0;
  do {
    if ((int)*(char *)(temp_v2 + temp_v3 + 0x1ca0) == (int)*(short *)(temp_v6 + 0x38)) {
      temp_v7 = temp_v6 + temp_v3 * 4;
      temp_v4 = FUN_001ab854(*(unsigned int *)(*(int *)(temp_v7 + 0xa14) + 0x34));
      temp_v5 = FUN_004bcbb4(temp_v4,*(unsigned short *)(temp_v6 + 0x36));
      *(int *)(*(int *)(temp_v7 + 0xa14) + 0x44) = -temp_v5;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 3);
  temp_v3 = 0;
  do {
    if (*(int *)(temp_v6 + temp_v3 * 8 + 0xa80) == (int)*(short *)(temp_v6 + 0x38)) {
      temp_v7 = temp_v6 + temp_v3 * 4;
      temp_v4 = FUN_001ab854(*(unsigned int *)(*(int *)(temp_v7 + 0xa20) + 0x34));
      temp_v5 = FUN_004bcbb4(temp_v4,*(unsigned short *)(temp_v6 + 0x36));
      *(int *)(*(int *)(temp_v7 + 0xa20) + 0x44) = -temp_v5;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x18);
LAB_0028c444:
  if (param_2 != 0) {
    if (*(char *)(temp_v6 + 0x42) != '\0') {
      temp_v2 = FUN_002a4878();
      temp_v3 = FUN_002a4894(param_1);
      temp_v2 = temp_v2 + temp_v3 * 4;
    }
    else {
      temp_v3 = FUN_002a4894(param_1);
      temp_v5 = *(int *)(temp_v6 + 0x2c);
      temp_v2 = FUN_002a4878(param_1);
      temp_v2 = temp_v3 * 4 + temp_v5 * 0xc + temp_v2;
    }
  }
  else {
    temp_v3 = FUN_002a4894(param_1);
    if (temp_v3 < 1) {
      temp_v3 = FUN_002a4878(param_1);
      if (temp_v3 != 0) {
        temp_v0 = *(unsigned short *)(temp_v6 + 0x36);
        temp_v2 = (int)*(char *)(temp_v2 + temp_v3 + 0x1c9f);
        temp_v1 = *(short *)(temp_v6 + 0x38);
      }
      else {
        temp_v0 = *(unsigned short *)(temp_v6 + 0x36);
        temp_v1 = *(short *)(temp_v6 + 0x38);
        temp_v2 = -1;
      }
      FUN_002c7bb0((int)temp_v1,temp_v2,temp_v0,&temp_v8);
      temp_v6 = temp_v6 + temp_v3 * 4;
      *(unsigned int *)(*(int *)(temp_v6 + 0xa10) + 0x40) = temp_v8;
      FUN_003344b4(temp_v8,*(unsigned int *)(*(int *)(temp_v6 + 0xa10) + 0x44));
      return;
    }
    if (*(char *)(temp_v6 + 0x42) != '\0') {
      temp_v2 = FUN_002a4878();
      temp_v3 = FUN_002a4894(param_1);
      temp_v2 = temp_v2 + temp_v3 * 4;
    }
    else {
      temp_v3 = FUN_002a4894(param_1);
      temp_v5 = *(int *)(temp_v6 + 0x2c);
      temp_v2 = FUN_002a4878(param_1);
      temp_v2 = temp_v2 + temp_v3 * 4 + temp_v5 * 0xc;
    }
    temp_v2 = temp_v2 - 4;
  }
  FUN_002c7bb0((int)*(short *)(temp_v6 + 0x38),*(unsigned int *)(temp_v6 + temp_v2 * 8 + 0xa80),
               *(unsigned short *)(temp_v6 + 0x36),&temp_v8);
  temp_v6 = temp_v6 + temp_v2 * 4;
  *(unsigned int *)(*(int *)(temp_v6 + 0xa20) + 0x40) = temp_v8;
  FUN_003344b4(temp_v8,*(unsigned int *)(*(int *)(temp_v6 + 0xa20) + 0x44));
  return;
}

} /* extern "C" */
