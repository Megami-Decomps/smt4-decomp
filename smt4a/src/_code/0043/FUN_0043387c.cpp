/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043387c` (_code @ 0x43387c, 0x1b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011b272(int, unsigned int);
int FUN_002e6e14(...);
int FUN_002e9318(unsigned char [12]);
int FUN_002e9598(int, unsigned int);
int FUN_002f4cac(int);
int FUN_00303928(...);
int FUN_00522bf4(int, unsigned int **);

typedef int romwright_code(...);
/* stack frame of param_1: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern unsigned char LAB_00433a34; /* 0x433a34 */
extern unsigned char DAT_0055a4c0; /* 0x55a4c0 */
extern unsigned char DAT_0055ac70; /* 0x55ac70 */
extern unsigned char DAT_0055ad8c; /* 0x55ad8c */

/* Supplied declaration required: FUN_0011b272. */
/* Supplied declaration required: FUN_002e6e14. */
extern unsigned int FUN_002e9300(unsigned char *, unsigned char *);
/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002e9598. */
extern int FUN_002ea0e4(unsigned int *);
/* Supplied declaration required: FUN_002f4cac. */
extern int FUN_003038fc(int, unsigned int);
/* Supplied declaration required: FUN_00303928. */
extern int FUN_0030395c(int, unsigned int);
/* Supplied declaration required: FUN_00522bf4. */


unsigned int * FUN_0043387c(unsigned int *param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar4;
  unsigned char *temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int *temp_v10;
  unsigned int *temp_v11;
  unsigned int temp_v12;
  unsigned char temp_v13 [12];
  
  *param_1 = (unsigned int)&DAT_0055ad8c;
  *(unsigned char *)(param_1 + 1) = 0;
  temp_v0 = FUN_002ea0e4(param_1 + 3);
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v0 = FUN_00303928(temp_v0 + 8,3,&temp_v3);
  FUN_002e6e14(temp_v3);
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v0 = FUN_00303928(temp_v0 + 0x14,3,&temp_v6);
  FUN_002e6e14(temp_v6);
  temp_v0 = FUN_003038fc(temp_v0 + 0x18,0);
  temp_v0 = FUN_0030395c(temp_v0 + 0x20,0);
  *(unsigned char **)(temp_v0 - 0x60) = &DAT_0055ac70;
  *(unsigned int *)(temp_v0 - 0x58) = 0;
  temp_v1 = FUN_002e9300(temp_v13,&LAB_00433a34);
  FUN_002e9598(temp_v0 - 0x54,temp_v1);
  FUN_002e9318(temp_v13);
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v1 = FUN_00303928(&temp_v2,3,&temp_v7);
  FUN_0011b272(temp_v0 - 0x4c,temp_v1);
  temp_v2 = &DAT_0055a4c0;
  FUN_002e6e14(temp_v4);
  FUN_002e6e14(temp_v7);
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v1 = FUN_00303928(&temp_v2,3,&temp_v7);
  FUN_0011b272(temp_v0 - 0x38,temp_v1);
  temp_v2 = &DAT_0055a4c0;
  FUN_002e6e14(temp_v4);
  FUN_002e6e14(temp_v7);
  *(unsigned short *)(temp_v0 - 0x24) = 0x5a;
  temp_v10 = (unsigned int *)0x0;
  temp_v11 = (unsigned int *)0x0;
  temp_v12 = 0;
  FUN_00522bf4(temp_v0,&temp_v10);
  puVar1 = temp_v11;
  for (puVar4 = temp_v10; puVar4 != puVar1; puVar4 = puVar4 + 2) {
    (**(romwright_code **)*puVar4)(puVar4);
  }
  FUN_002e6e14(temp_v10);
  FUN_002f4cac(temp_v0 - 0x20);
  *(unsigned short *)(temp_v0 + 0x10) = 0;
  *(unsigned char *)(temp_v0 + 0x12) = 0;
  *(unsigned int *)(temp_v0 + 0xc) = 0;
  return (unsigned int *)(temp_v0 - 0x60);
}

} /* extern "C" */
