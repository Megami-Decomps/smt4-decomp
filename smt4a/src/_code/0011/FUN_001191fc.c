/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001191fc` (_code @ 0x1191fc, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern unsigned char LAB_00119354; /* 0x119354 */
extern unsigned char LAB_0011987d; /* 0x11987d */

/* Supplied declaration required: FUN_00103e4c. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002e93c2. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea41e. */
extern int FUN_002ea6fc(int);
/* Supplied declaration required: FUN_002eb5f4. */
/* Supplied declaration required: FUN_002ee5b8. */
extern int FUN_002ee774(unsigned int **, unsigned int *);
/* Supplied declaration required: FUN_002ee938. */
extern int FUN_002ee96a(unsigned int *, unsigned char *);
extern unsigned int FUN_002ee978(int);
/* Supplied declaration required: FUN_002f8aa8. */
extern unsigned int FUN_002fd444(int);
extern int FUN_002fd454(unsigned int *);
extern unsigned int FUN_002fd624(unsigned int *);
/* Supplied declaration required: FUN_003031f4. */
extern int FUN_003054ce(unsigned int);
/* Supplied declaration required: FUN_003054f0. */
/* Supplied declaration required: FUN_00305644. */


void FUN_001191fc(int param_1)

{
/* irregular: 1 goto(s); 14 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [16];
  unsigned int *temp_v5;
  int uStack_3c;
  unsigned int uStack_38;
  unsigned char temp_v6 [12];
  unsigned char temp_v7 [12];
  unsigned int temp_v8 [2];
  
  temp_v0 = FUN_003054ce(*(unsigned int *)(param_1 + 0x198));
  if (*(int *)(temp_v0 + 0x1c) != 2) {
    if (*(char *)(param_1 + 0xf8) != '\x02') {
      FUN_002ea41e(&temp_v5,param_1 + 0xe8);
    }
    else {
      temp_v0 = FUN_002ea6fc(param_1 + 0x160);
      if (temp_v0 == 0) goto LAB_00119254;
      temp_v5 = *(unsigned int **)(param_1 + 0x160);
      uStack_3c = *(unsigned int *)(param_1 + 0x164);
      uStack_38 = *(unsigned int *)(param_1 + 0x168);
    }
    FUN_003054f0(param_1,&temp_v5);
  }
  else {
LAB_00119254:
    temp_v0 = param_1 + 0x19c;
    FUN_00305644(temp_v0,*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x198) + 0x78) + 0x10));
    FUN_003031f4(temp_v0);
    if (*(char *)(*(int *)(param_1 + 0x198) + 0xac) != '\0') {
      temp_v1 = FUN_002eb5f4();
      FUN_002e6e34(temp_v7,temp_v1 + 0x58);
      temp_v5 = *(unsigned int **)(temp_v1 + 0x98);
      while( 1 ) {
        temp_v5 = (unsigned int *)*temp_v5;
        temp_v8[0] = *(unsigned int *)(temp_v1 + 0x98);
        temp_v2 = FUN_002ee774(&temp_v5,temp_v8);
        if (temp_v2 == 0) break;
        temp_v2 = FUN_002fd454(temp_v5 + 2);
        if (temp_v2 == 0) {
          temp_v3 = FUN_002ee978(temp_v0);
          FUN_00305644(temp_v5 + 2,temp_v3);
        }
        FUN_002ee938(temp_v6,temp_v0);
        FUN_002ee938(&uStack_3c,temp_v5 + 2);
        temp_v2 = FUN_002ee96a((unsigned int *)&uStack_3c,temp_v6);
        FUN_002e9318(&uStack_3c);
        FUN_002e9318(temp_v6);
        if (temp_v2 != 0) {
          temp_v3 = FUN_002fd444(temp_v0);
          FUN_00103e4c(temp_v5 + 2,temp_v3);
          temp_v3 = FUN_002ee978(temp_v0);
          FUN_00305644(temp_v5 + 2,temp_v3);
          temp_v3 = FUN_002fd624(temp_v5 + 2);
          FUN_002e93c2(temp_v0,temp_v3);
        }
      }
      temp_v3 = FUN_002eb5f4();
      FUN_002f8aa8(temp_v3,temp_v0);
      FUN_002e6e5c(temp_v7);
    }
    FUN_002ee5b8(*(int *)(param_1 + 0x198) + 0xb0,temp_v0);
    (**(romwright_code **)(**(int **)(param_1 + 0x198) + 0xc))();
    temp_v3 = FUN_002ea3c0(temp_v4,&LAB_0011987d,0,&LAB_00119354);
    FUN_002ea3d0(param_1,temp_v3);
  }
  return;
}
