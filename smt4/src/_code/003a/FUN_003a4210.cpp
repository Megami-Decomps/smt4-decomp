/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a4210` (_code @ 0x3a4210, 0x2fc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int listCursorSetPage(int, int);
int FUN_002306f8(unsigned int *, int, int);
int FUN_00233670(int, int, int, int);
int FUN_00233730(int, int, int, int);
int aocRecordLookup83(unsigned int);
int FUN_002b7bca(int, int, int, unsigned char *);
int memClear(int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_1_stack;

extern unsigned char LAB_003a05c4; /* 0x3a05c4 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
extern int FUN_0022f1b8(unsigned int);
/* Supplied declaration required: listCursorSetPage. */
/* Supplied declaration required: FUN_002306f8. */
/* Supplied declaration required: FUN_00233670. */
/* Supplied declaration required: FUN_00233730. */
extern int aocItemGetPrice(unsigned int *);
/* Supplied declaration required: aocRecordLookup83. */
extern int FUN_0028e9d0(unsigned int);
extern int FUN_0028fb3c(unsigned int);
/* Supplied declaration required: FUN_002b7bca. */
extern unsigned short *FUN_002c0a2c(unsigned char, unsigned int);
/* Supplied declaration required: memClear. */
extern unsigned int resolveWeightedItemChoice(unsigned int, unsigned int, unsigned int, unsigned int);


void FUN_003a4210(int param_1)

{
/* irregular: 1 goto(s); 7 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned short *puVar7;
  unsigned int temp_v6;
  int temp_v7;
  int *piVar10;
  unsigned int temp_v8;
  int temp_v9;
  unsigned short *puVar13;
  unsigned int temp_v10;
  unsigned char temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned short *temp_v14;
  int *temp_v15;
  int temp_v16;
  
  temp_v9 = param_1 + 0x9d1c;
  *(unsigned short *)(param_1 + 0x15d1c) = 0;
  *(unsigned int *)(param_1 + 0x15d20) = 0;
  temp_v16 = param_1;
  memClear(temp_v9,0xc000);
  temp_v14 = (unsigned short *)
             FUN_002c0a2c(*(unsigned char *)(temp_v16 + 0x14),*(unsigned int *)(temp_v16 + 0x18));
  temp_v8 = 0x3b7;
  puVar13 = (unsigned short *)(param_1 + 0x15d1c);
  temp_v15 = (int *)(temp_v16 + 0x15d20);
  do {
    temp_v3 = FUN_0028e9d0(temp_v8);
    if (temp_v3 != 0) {
      temp_v3 = FUN_0028fb3c(temp_v8);
      temp_v7 = 0;
      if (temp_v7 < temp_v3) {
        do {
          aocRecordLookup83(temp_v8);
          temp_v4 = resolveWeightedItemChoice(temp_v8,0xffff,0xffff,1);
          if (temp_v4 != 0) {
            temp_v1 = temp_v8;
            temp_v2 = (unsigned short)temp_v4;
            if (temp_v1 != 0) {
              temp_v6 = (unsigned int)*puVar13;
              temp_v5 = 0;
              if (temp_v6 != 0) {
                do {
                  puVar7 = (unsigned short *)(temp_v9 + temp_v5 * 6);
                  temp_v10 = (unsigned int)*puVar7;
                  temp_v11 = temp_v10 == temp_v1;
                  if (temp_v11) {
                    temp_v10 = (unsigned int)puVar7[1];
                  }
                  if (temp_v11 && temp_v10 == (temp_v4 & 0xffff)) {
                    puVar7[2] = *(short *)(temp_v9 + temp_v5 * 6 + 4) + 1;
                    goto LAB_003a4374;
                  }
                  temp_v5 = temp_v5 + 1;
                } while (temp_v5 < (int)temp_v6);
              }
              *(short *)(temp_v9 + temp_v6 * 6) = (short)temp_v8;
              *(unsigned short *)(temp_v9 + (unsigned int)*puVar13 * 6 + 2) = temp_v2;
              temp_v5 = temp_v9 + (unsigned int)*puVar13 * 6;
              *(short *)(temp_v5 + 4) = *(short *)(temp_v5 + 4) + 1;
              *puVar13 = *puVar13 + 1;
            }
LAB_003a4374:
            temp_v5 = FUN_0022f1b8(temp_v4);
            if (temp_v5 != 0) {
              temp_v0 = (*(unsigned short *)((unsigned char *)&temp_v12 + 2)) & 0xfc00;
              temp_v12 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v12 + 2)),temp_v2) & 0xfc00ffff;
              if (*temp_v14 != 0) {
                temp_v12 = romwright_piece_2_2(temp_v0 | 2 | ((*temp_v14 & 0xff) << 2),temp_v2);
              }
              temp_v5 = aocItemGetPrice(&temp_v12);
              *temp_v15 = *temp_v15 + temp_v5;
            }
          }
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < temp_v3);
      }
      temp_v12 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v12 + 2)),(short)temp_v8) & 0xfc00ffff;
      FUN_002306f8(&temp_v12,-temp_v3,0);
    }
    temp_v3 = temp_v16;
    temp_v8 = temp_v8 + 1;
    if (temp_v8 >= 0x47f) {
      FUN_002b7bca(temp_v9,*(unsigned short *)(temp_v16 + 0x15d1c),6,&LAB_003a05c4);
      temp_v12 = 1;
      temp_v9 = temp_v16 + 0x9ca8;
      temp_v13 = 1;
      FUN_00233730(temp_v9,10,*(unsigned short *)(temp_v3 + 0x15d1c),0);
      *(unsigned char *)(temp_v16 + 0x9cb5) = 1;
      listCursorSetPage(temp_v9,1);
      piVar10 = (int *)(temp_v16 + 0x85c);
      (**(romwright_code **)(**(int **)(temp_v16 + 0x85c) + 8))(*(int **)(temp_v16 + 0x85c),temp_v9);
      puVar13 = (unsigned short *)(*piVar10 + 4);
      *puVar13 = *puVar13 | 0x1000;
      *(int *)(*(int *)(temp_v16 + 0x85c) + 100) = temp_v16 + 0x380;
      FUN_00233670(temp_v16 + 0x828,0x2b,0x28,10);
      *(unsigned char *)(temp_v16 + 0x838) = 1;
      return;
    }
  } while( 1 );
}

} /* extern "C" */
