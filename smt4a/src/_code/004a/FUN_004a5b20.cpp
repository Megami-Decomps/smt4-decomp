/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a5b20` (_code @ 0x4a5b20, 0x234 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int dataTable00FindById(void);
int FUN_004a6610(int, int);
int FUN_004a833c(int, unsigned char [8]);
int FUN_004a8584(unsigned char [8], int, int);
int FUN_004cfeb0(int, int, int, int, int);

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

extern unsigned char g_gameState; /* 0x5f15fc */

/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: dataTable00FindById. */
extern int FUN_0026264c(unsigned short);
/* Supplied declaration required: FUN_004a6610. */
/* Supplied declaration required: FUN_004a833c. */
/* Supplied declaration required: FUN_004a8584. */
extern int FUN_004bb80c(void);
extern int FUN_004bbae0(unsigned int, int, int);
extern int FUN_004bc8e0(void);
/* Supplied declaration required: FUN_004cfeb0. */


void FUN_004a5b20(int param_1)

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
  temp_v15 = (unsigned int *)(param_1 + 0xa874);
  temp_v16 = param_1 + 0x864;
  temp_v17 = param_1;
  do {
    temp_v9 = 0;
LAB_004a5b5c:
    temp_v14 = FUN_004bbae0(*temp_v15,temp_v8,temp_v9);
    if (temp_v14 != 0) {
      temp_v10 = 0;
      temp_v0 = *(short *)(temp_v14 + 0x12);
      do {
        if (temp_v0 == 0) {
LAB_004a5ccc:
          temp_v9 = temp_v9 + 1;
          if (temp_v9 < 0x10) goto LAB_004a5b5c;
          break;
        }
        temp_v1 = FUN_004bc8e0();
        if (temp_v1 != 0) {
          temp_v6 = 0;
          do {
            if ((*(short *)(temp_v1 + temp_v6 * 4) != 0) && (temp_v2 = FUN_004bb80c(), temp_v2 != 0)) {
              temp_v5 = 0;
              do {
                puVar9 = (unsigned short *)(unsigned int)*(unsigned short *)(temp_v2 + temp_v5 * 2 + 0x14);
                if ((puVar9 != (unsigned short *)0x0) &&
                   (puVar4 = puVar9, dataTable00FindById(), puVar4 != (unsigned short *)0x0)) {
                  puVar4 = puVar9;
                  FUN_00184310();
                  dataTable00FindById();
                  if ((puVar4 != (unsigned short *)0x0 && puVar9 != (unsigned short *)0x0) &&
                     (((*(int *)((unsigned char *)&g_gameState + 0x660)) != 0 ||
                      (((puVar9[0xb] & 1) != 0 && (temp_v3 = FUN_0026264c(*puVar4), temp_v3 != 0)))))) {
                    FUN_004a8584(temp_v11,*puVar4,0);
                    temp_v4 = (unsigned int)*puVar4;
                    temp_v7 = 0;
                    dataTable00FindById();
                    if (temp_v4 != 0) {
                      temp_v7 = *(unsigned int *)(temp_v4 + 0x7c);
                    }
                    temp_v13 = 1;
                    temp_v12 = temp_v7;
                    FUN_004a833c(temp_v16,temp_v11);
                  }
                }
                temp_v5 = temp_v5 + 1;
              } while (temp_v5 < 6);
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < 0x1e);
        }
        temp_v10 = temp_v10 + 1;
        if (temp_v10 >= 0x19) goto LAB_004a5ccc;
        if (temp_v10 == 0) {
          temp_v0 = *(short *)(temp_v14 + 0x12);
          continue;
        }
        temp_v0 = *(short *)(temp_v14 + temp_v10 * 6 + 0xe);
      } while( 1 );
    }
    temp_v8 = temp_v8 + 1;
    if (temp_v8 >= 0x10) {
      FUN_004a6610(temp_v17,1);
      FUN_004cfeb0(temp_v17 + 0x20,10,(int)*(short *)(temp_v17 + 0x864),0,1);
      *(unsigned char *)(temp_v17 + 0x2d) = 1;
      *(unsigned char *)(temp_v17 + 0x94) = 0;
      return;
    }
  } while( 1 );
}

} /* extern "C" */
