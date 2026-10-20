/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a4448` (_code @ 0x3a4448, 0x2dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryAlloc(int, int, int, int, int);
int asdMemoryGetDefaultAllocator(void);
int FUN_001b0e10(int *, unsigned int, unsigned int);
int FUN_001b0e44(int *, int *, unsigned int, unsigned int, int);
int FUN_001b12a4(int *, int *);

typedef int romwright_code(...);
/* stack frame of param_1: 14 slot(s), 50 byte(s) */
typedef struct {
    unsigned char sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned char sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
} param_1_stack;

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: asdMemoryAlloc. */
/* Supplied declaration required: asdMemoryGetDefaultAllocator. */
extern unsigned int asdMemoryGetAllocatorA(void);
/* Supplied declaration required: FUN_001b0e10. */
/* Supplied declaration required: FUN_001b0e44. */
/* Supplied declaration required: FUN_001b12a4. */
extern int FUN_00455748(int *, unsigned int);


int FUN_003a4448(int param_1)

{
/* irregular: 2 goto(s); 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  int *piVar6;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int *piVar11;
  int temp_v8;
  int *piVar13;
  int temp_v9;
  unsigned long long temp_v10;
  int temp_v11;
  unsigned char temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned char temp_v20;
  
  temp_v0 = 0x100;
  asdMemoryAlloc(0x100,0x100,0,0x18,1);
  temp_v5 = *(int *)(param_1 + 0x48);
  temp_v1 = param_1 + 0x48;
  if (temp_v5 != 0) {
    temp_v1 = temp_v1 + temp_v5;
  }
  if (temp_v5 == 0) {
    temp_v1 = 0;
  }
  if (temp_v1 != 0) {
    temp_v1 = temp_v1 + 0x1c;
  }
  temp_v5 = temp_v1 + *(int *)(param_1 + 0x44) * 0x10;
  *(int *)(temp_v0 + 0x10) = param_1;
  do {
    if (temp_v1 == temp_v5) {
      return temp_v0;
    }
    temp_v6 = *(int *)(temp_v1 + 0xc);
    if (temp_v6 != 0) {
      temp_v6 = temp_v6 + temp_v1 + 0xc;
    }
    else {
      temp_v6 = 0;
    }
    temp_v2 = asdMemoryGetDefaultAllocator();
    temp_v3 = asdMemoryGetAllocatorA();
    temp_v12 = 1;
    temp_v13 = 8;
    temp_v14 = 4;
    temp_v15 = 0;
    temp_v16 = 0;
    piVar11 = &temp_v11;
    temp_v17 = 0;
    temp_v19 = 0;
    temp_v20 = 1;
    temp_v18 = 4;
    temp_v11 = temp_v6;
    FUN_001b0e10(piVar11,temp_v2,temp_v3);
    if (piVar11 != (int *)0x0) {
      piVar5 = (int *)(**(romwright_code **)(*piVar11 + 8))(piVar11);
      do {
        if (piVar5 == (int *)0x5c0f30) goto LAB_003a4560;
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (int *)0x0);
    }
    piVar11 = (int *)0x0;
LAB_003a4560:
    if (piVar11 != (int *)0x0) {
      piVar5 = (int *)(**(romwright_code **)(*piVar11 + 8))(piVar11);
      do {
        piVar13 = piVar11;
        if (piVar5 == (int *)0x59daac) goto LAB_003a459c;
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (int *)0x0);
    }
    piVar13 = (int *)0x0;
LAB_003a459c:
    *(int **)(temp_v0 + 0xc) = piVar11;
    *(int **)(temp_v0 + 8) = piVar13;
    temp_v6 = piVar13[0x9a];
    temp_v9 = *(int *)(param_1 + 0x7c);
    if (temp_v6 != 0) {
      temp_v8 = 0;
      temp_v10 = (unsigned long long)*(unsigned int *)(*(int *)(temp_v6 + 8) + 0x10);
      if (0 < temp_v9) {
        do {
          temp_v7 = *(int *)(param_1 + 0x80);
          if (temp_v7 != 0) {
            temp_v7 = param_1 + 0x80 + temp_v7;
          }
          else {
            temp_v7 = 0;
          }
          temp_v13 = 0;
          if (temp_v7 != 0) {
            piVar11 = (int *)(temp_v7 + temp_v8 * 0x10 + 0x28);
            temp_v13 = *piVar11;
            if (temp_v13 == 0) {
              temp_v13 = 0;
            }
            else {
              temp_v13 = (int)piVar11 + temp_v13;
            }
          }
          temp_v15 = 0x40;
          temp_v14 = (unsigned int)temp_v10;
          temp_v16 = romwright_piece_3_1((((unsigned int)(temp_v16) >> 8) & 0xffffffU),1);
          piVar5 = (int *)asdMemoryGetDefaultAllocator();
          piVar6 = (int *)(**(romwright_code **)(*piVar5 + 8))(piVar5,0x74,4);
          piVar11 = (int *)0x0;
          if (piVar6 != (int *)0x0) {
            FUN_001b12a4(piVar6,piVar5);
            FUN_001b0e44(piVar6,&temp_v13,temp_v14,temp_v15,(int)(char)temp_v16);
            piVar11 = piVar6;
          }
          *(int **)(temp_v0 + 4) = piVar11;
          (**(romwright_code **)(*piVar11 + 0xc))(piVar11,temp_v6);
          temp_v7 = *(int *)(temp_v0 + 4);
          temp_v2 = *(unsigned int *)(temp_v7 + 0x44);
          (**(romwright_code **)(temp_v7 + 0x4c))(*(unsigned int *)(temp_v7 + 0x50));
          *(unsigned int *)(temp_v7 + 0x3c) = *(unsigned int *)(temp_v7 + 0x38);
          *(unsigned int *)(temp_v7 + 0x38) = temp_v2;
          *(unsigned char *)(temp_v7 + 0x58) = 1;
          temp_v2 = *(unsigned int *)(temp_v0 + 4);
          temp_v7 = FUN_00455748(piVar13,temp_v2);
          if (temp_v7 != 0) {
            temp_v4 = piVar13[10];
            temp_v7 = (*(int *)(temp_v4 + 0x10) - *(int *)(temp_v4 + 0xc)) >> 2;
            if (0 < temp_v7) {
              temp_v7 = *(int *)(temp_v4 + 0x28);
            }
            if (0 < temp_v7) {
              **(unsigned int **)(temp_v4 + 0x1c) = temp_v2;
            }
          }
          temp_v8 = temp_v8 + 1;
        } while (temp_v8 < temp_v9);
      }
    }
    temp_v1 = temp_v1 + 0x10;
  } while( 1 );
}

} /* extern "C" */
