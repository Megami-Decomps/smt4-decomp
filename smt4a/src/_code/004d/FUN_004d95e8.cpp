/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d95e8` (_code @ 0x4d95e8, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00103f54(int, unsigned int *, int, int);
int holderSetFlagBits(int, int);
int FUN_0017fd20(unsigned int *, int);
int FUN_002e3140(void);
int FUN_002e6e26(void);
int FUN_002e6e34(unsigned char [12], int);
int FUN_002e6e5c(unsigned char [12]);
int sharedRefAddRef(unsigned int *);
int operatorNew(int);
int FUN_002e78d0(unsigned int, unsigned int *, int);
int FUN_002ea3d0(unsigned int *, unsigned int);
int FUN_002eca44(void);
int FUN_004424b8(void);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char LAB_0010acb0; /* 0x10acb0 */
extern int FUN_004d9788(...); /* 0x4d9788 */
extern unsigned char DAT_0055ca8c; /* 0x55ca8c */
extern unsigned char DAT_0055cae4; /* 0x55cae4 */

/* Supplied declaration required: FUN_00103f54. */
/* Supplied declaration required: holderSetFlagBits. */
/* Supplied declaration required: FUN_0017fd20. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002e6e26. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: sharedRefAddRef. */
/* Supplied declaration required: operatorNew. */
extern int FUN_002e789a(int);
/* Supplied declaration required: FUN_002e78d0. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
extern unsigned int *FUN_002eca10(int, unsigned int, unsigned int *);
/* Supplied declaration required: FUN_002eca44. */
/* Supplied declaration required: FUN_004424b8. */


/* WARNING: Removing unreachable block (ram,0x0010ac86) */

unsigned int * FUN_004d95e8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 15 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned int *puVar5;
  unsigned char temp_v3 [12];
  unsigned char temp_v4 [12];
  int temp_v5;
  
  puVar5 = (unsigned int *)&temp_v5;
  temp_v5 = param_4;
  temp_v1 = operatorNew(0x60);
  if (temp_v1 == 0) {
    temp_v1 = 0;
  }
  else {
    FUN_002eca44();
  }
  *(int *)(param_1 + 0x28) = temp_v1;
  puVar3 = (unsigned int *)operatorNew(0x14);
  if (puVar3 != (unsigned int *)0x0) {
    puVar3[1] = param_1;
    puVar3[2] = (unsigned int)FUN_004d9788;
    puVar3[3] = 0;
    *puVar3 = (unsigned int)&DAT_0055cae4;
    puVar3[4] = temp_v1;
    holderSetFlagBits(temp_v1,2);
    FUN_00103f54(temp_v1,puVar3,0,1);
  }
  temp_v2 = operatorNew(0x78);
  if (temp_v2 == 0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    puVar3 = (unsigned int *)FUN_002eca10(temp_v2,0,puVar5);
    *puVar3 = (unsigned int)&DAT_0055ca8c;
    puVar3[0x1a] = 0;
    puVar3[0x1b] = 0;
    temp_v5 = 0;
    FUN_0017fd20(puVar5,1);
    if (-1 < (int)puVar5) {
      puVar5 = (unsigned int *)0x0;
      puVar3[0x1b] = temp_v5;
    }
    if ((int)puVar5 < 0) {
      FUN_002e3140();
    }
    puVar3[0x1c] = 0xe7e3ffff;
    puVar3[0x1d] = 0;
  }
  *(unsigned int **)(param_1 + 0x2c) = puVar3;
  puVar5 = puVar3 + 0x1b;
  FUN_004424b8();
  puVar3[0x1c] = (unsigned int)puVar5;
  if (-1 < (int)puVar5) {
    temp_v2 = FUN_002e6e26();
    FUN_002e6e34(temp_v3,temp_v2 + 0x58);
    temp_v2 = FUN_002e789a(temp_v1);
    if (temp_v2 != 0) {
      puVar3[0x1a] = *(unsigned int *)(temp_v1 + 0x44);
      temp_v0 = FUN_002ea3c0(temp_v4,0x10abad,0,&LAB_0010acb0);
      FUN_002ea3d0(puVar3,temp_v0);
      sharedRefAddRef(puVar3);
      temp_v0 = FUN_002e6e26();
      FUN_002e78d0(temp_v0,puVar3,0);
      FUN_002e6e5c(temp_v3);
    }
    else {
      FUN_002e6e5c(temp_v3);
    }
    return (unsigned int *)(unsigned int)(temp_v2 != 0);
  }
  return puVar5;
}

} /* extern "C" */
