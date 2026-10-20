/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a9bb4` (_code @ 0x3a9bb4, 0x238 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022c9f4(int, int);
int FUN_0022e17c(unsigned char [8], int, int);
int FUN_00233730(int, int, int, int, int);
int FUN_002b06c4(void);
int FUN_002b9024(void);
int FUN_003ad608(int, unsigned char [8]);

/* stack frame of param_1: 10 slot(s), 37 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned char sp48; /* 0x48: local_48 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_1_stack;

extern int DAT_0049fcfc; /* 0x49fcfc */

/* Supplied declaration required: FUN_0022c9f4. */
/* Supplied declaration required: FUN_0022e17c. */
/* Supplied declaration required: FUN_00233730. */
extern int FUN_0023eb18(void);
extern int FUN_0029e9cc(unsigned short);
/* Supplied declaration required: FUN_002b06c4. */
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_003ad608. */
extern int FUN_003bc0ac(unsigned int, int, int);
extern int FUN_003bc874(void);


void FUN_003a9bb4(int param_1)

{
/* irregular: 2 goto(s); 6 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned short *puVar9;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned char temp_v11 [8];
  unsigned int temp_v12;
  unsigned char temp_v13;
  int temp_v14;
  unsigned int *temp_v15;
  int temp_v16;
  int temp_v17;
  
  temp_v8 = 1;
  temp_v15 = (unsigned int *)(param_1 + 0xa5b4);
  temp_v16 = param_1 + 0x5a8;
  temp_v17 = param_1;
  do {
    temp_v9 = 0;
LAB_003a9bf0:
    temp_v14 = FUN_003bc0ac(*temp_v15,temp_v8,temp_v9);
    if (temp_v14 != 0) {
      temp_v10 = 0;
      temp_v0 = *(short *)(temp_v14 + 0xe);
      do {
        if (temp_v0 == 0) {
LAB_003a9d60:
          temp_v9 = temp_v9 + 1;
          if (temp_v9 < 0x10) goto LAB_003a9bf0;
          break;
        }
        temp_v1 = FUN_003bc874();
        if (temp_v1 != 0) {
          temp_v6 = 0;
          do {
            if ((*(short *)(temp_v1 + temp_v6 * 4) != 0) && (temp_v2 = FUN_0023eb18(), temp_v2 != 0)) {
              temp_v5 = 0;
              do {
                puVar9 = (unsigned short *)(unsigned int)*(unsigned short *)(temp_v2 + temp_v5 * 2 + 0xc);
                if ((puVar9 != (unsigned short *)0x0) &&
                   (puVar4 = puVar9, FUN_002b06c4(), puVar4 != (unsigned short *)0x0)) {
                  puVar4 = puVar9;
                  FUN_002b9024();
                  FUN_002b06c4();
                  if ((puVar4 != (unsigned short *)0x0 && puVar9 != (unsigned short *)0x0) &&
                     ((DAT_0049fcfc != 0 ||
                      (((puVar9[0xb] & 1) != 0 && (temp_v3 = FUN_0029e9cc(*puVar4), temp_v3 != 0)))))) {
                    FUN_0022e17c(temp_v11,*puVar4,0);
                    temp_v4 = (unsigned int)*puVar4;
                    temp_v7 = 0;
                    FUN_002b06c4();
                    if (temp_v4 != 0) {
                      temp_v7 = *(unsigned int *)(temp_v4 + 0x78);
                    }
                    temp_v13 = 1;
                    temp_v12 = temp_v7;
                    FUN_003ad608(temp_v16,temp_v11);
                  }
                }
                temp_v5 = temp_v5 + 1;
              } while (temp_v5 < 6);
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < 0xf);
        }
        temp_v10 = temp_v10 + 1;
        if (temp_v10 >= 0x19) goto LAB_003a9d60;
        if (temp_v10 == 0) {
          temp_v0 = *(short *)(temp_v14 + 0xe);
          continue;
        }
        temp_v0 = *(short *)(temp_v14 + temp_v10 * 6 + 10);
      } while( 1 );
    }
    temp_v8 = temp_v8 + 1;
    if (temp_v8 >= 0x10) {
      FUN_0022c9f4(temp_v17,1);
      FUN_00233730(temp_v17 + 0x20,10,(int)*(short *)(temp_v17 + 0x5a8),0,1);
      *(unsigned char *)(temp_v17 + 0x2d) = 1;
      *(unsigned char *)(temp_v17 + 0x94) = 0;
      return;
    }
  } while( 1 );
}

} /* extern "C" */
