/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00122fe4` (_code @ 0x122fe4, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], int);
int FUN_002e6e5c(...);
int FUN_0030f3e0(unsigned int);
int FUN_0030f490(int *, int *, int *, int *);
int mapIteratorNext9(int *);
int FUN_0030f824(int, int [2]);
int FUN_0030f846(int *);
int FUN_0030f90c(int *, int, int [2]);
int FUN_0030facc(...);

/* stack frame of param_2: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp74; /* 0x74: local_74 */
} param_2_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_0030f3e0. */
/* Supplied declaration required: FUN_0030f490. */
/* Supplied declaration required: mapIteratorNext9. */
extern int wordRefsDiffer_0030f814(int *, unsigned int *);
/* Supplied declaration required: FUN_0030f824. */
/* Supplied declaration required: FUN_0030f846. */
extern int wordRefsDiffer_0030f88a(int *, unsigned int *);
/* Supplied declaration required: FUN_0030f90c. */
/* Supplied declaration required: FUN_0030facc. */


unsigned int FUN_00122fe4(int param_1,int param_2)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3 [2];
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [12];
  unsigned char temp_v7 [12];
  unsigned char temp_v8 [12];
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  int temp_v14;
  int aiStack_28 [3];
  int iStack_1c;
  int temp_v15;
  
  temp_v1 = 0;
  iStack_1c = param_1;
  temp_v15 = param_2;
  FUN_002e6e34(temp_v6,param_1 + 0x58);
  FUN_002e6e34(temp_v7,param_1 + 0x88);
  FUN_002e6e34(temp_v8,param_1 + 0xb8);
  FUN_0030f846(&temp_v4);
  while( 1 ) {
    temp_v5 = *(unsigned int *)(param_1 + 0x120);
    temp_v0 = wordRefsDiffer_0030f814(&temp_v4,(unsigned int *)&temp_v5);
    if ((temp_v0 == 0) || (*(int *)(temp_v4 + 0x18) == temp_v15)) break;
    mapIteratorNext9(&temp_v4);
  }
  temp_v5 = *(unsigned int *)(param_1 + 0x120);
  temp_v0 = wordRefsDiffer_0030f814(&temp_v4,(unsigned int *)&temp_v5);
  if (temp_v0 != 0) {
    temp_v3[0] = temp_v4;
    FUN_0030f824(param_1 + 0x110,temp_v3);
    FUN_0030f3e0(*(unsigned int *)(param_1 + 0x54));
  }
  else {
    temp_v11 = *(unsigned int *)(param_1 + 0xf4);
    temp_v2 = param_1 + 0xe8;
    temp_v10 = *(unsigned int *)(param_1 + 0xec);
    FUN_0030f490(&temp_v9,&temp_v10,&temp_v11,&temp_v15);
    temp_v0 = wordRefsDiffer_0030f88a(&temp_v9,(unsigned int *)(param_1 + 0xf4));
    if (temp_v0 != 0) {
      temp_v3[0] = temp_v9;
      piVar2 = &temp_v12;
    }
    else {
      temp_v2 = param_1 + 0xfc;
      temp_v14 = *(unsigned int *)(param_1 + 0x108);
      temp_v13 = *(unsigned int *)(param_1 + 0x100);
      FUN_0030f490(&temp_v12,&temp_v13,&temp_v14,&temp_v15);
      temp_v0 = wordRefsDiffer_0030f88a(&temp_v12,(unsigned int *)(param_1 + 0x108));
      if (temp_v0 == 0) {
        if (*(int *)(param_1 + 4) != temp_v15) {
          FUN_002e6e5c(temp_v8);
          FUN_002e6e5c(temp_v7);
          FUN_002e6e5c(temp_v6);
          return temp_v1;
        }
        *(unsigned char *)(param_1 + 8) = 0;
        temp_v1 = 1;
        FUN_0030facc(param_1,temp_v15);
        FUN_002e6e5c(temp_v8);
        FUN_002e6e5c(temp_v7);
        FUN_002e6e5c(temp_v6);
        return temp_v1;
      }
      temp_v3[0] = temp_v12;
      piVar2 = aiStack_28;
    }
    FUN_0030f90c(piVar2,temp_v2,temp_v3);
  }
  temp_v1 = 1;
  FUN_0030facc(param_1,temp_v15);
  FUN_002e6e5c(temp_v8);
  FUN_002e6e5c(temp_v7);
  FUN_002e6e5c(temp_v6);
  return temp_v1;
}

} /* extern "C" */
