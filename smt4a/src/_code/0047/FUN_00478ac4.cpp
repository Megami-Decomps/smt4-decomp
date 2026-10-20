/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00478ac4` (_code @ 0x478ac4, 0x2e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int FUN_00162790(int, int, unsigned char [1024], int);
int FUN_00164b5c(int, int, int, int, int, int);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00473754(unsigned int, unsigned int, unsigned char [1024]);
int FUN_00473910(unsigned int, unsigned int);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp448; /* 0x448: local_448 */
} void_stack;

extern unsigned int g_aocMain; /* 0x570260 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00162790. */
extern int jobGetWork(void);
/* Supplied declaration required: FUN_00164b5c. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00473754. */
/* Supplied declaration required: FUN_00473910. */
extern int FUN_004cfb24(unsigned char *, unsigned int);


unsigned int FUN_00478ac4(void)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int *piVar11;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int in_fpscr;
  unsigned char temp_v13 [1024];
  unsigned int temp_v14 [5];
  unsigned int temp_v15;
  
  temp_v3 = jobGetWork();
  temp_v2 = g_aocMain;
  temp_v11 = *(unsigned int *)(temp_v3 + 0x1798);
  FUN_00157558(g_renderCtx);
  temp_v6 = g_renderCtx;
  temp_v4 = FUN_001692ac(1,0);
  piVar11 = (int *)(temp_v6 + 0x1258);
  temp_v8 = *piVar11;
  temp_v9 = piVar11[temp_v8 + 2];
  *piVar11 = temp_v8 + 1;
  piVar11[temp_v8 + 3] = temp_v4;
  if (*(char *)(temp_v6 + 0x1270) != '\0' || temp_v9 != temp_v4) {
    (**(romwright_code **)(temp_v6 + 0x1274))();
    *(unsigned char *)(temp_v6 + 0x1270) = 0;
  }
  FUN_00164b5c(2,0x2f,5,0,0,0x81);
  temp_v14[0] = 0x6e;
  temp_v14[1] = 0x6f;
  temp_v14[2] = 0x70;
  temp_v14[3] = 0x71;
  temp_v5 = temp_v2;
  FUN_00473910(temp_v2,temp_v14[*(int *)(temp_v3 + 0x179c)]);
  FUN_00473754(temp_v2,temp_v5,temp_v13);
  temp_v6 = FUN_004cfb24(temp_v13,3);
  temp_v3 = FUN_001834a4(0x2f,0x2d);
  temp_v4 = (((int)*(short *)(temp_v3 + 8) + ((int)**(short **)(temp_v3 + 0xc) >> 1)) - (temp_v6 >> 1)) - 9;
  VectorSignedToFloat((int)*(short *)(temp_v3 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(3,0x57d8ffff,temp_v13,(int)*(short *)(temp_v3 + 10));
  temp_v3 = 0;
  temp_v11 = temp_v11 / 5;
  temp_v12 = temp_v11 - (temp_v11 & 0xfffffff8);
  temp_v14[4] = (int)(temp_v12 + 7) % 8;
  temp_v11 = (temp_v11 + 4) % 8;
  temp_v15 = (temp_v11 + 7) % 8;
  do {
    temp_v8 = 0;
    do {
      temp_v10 = temp_v3 * 3 + temp_v8;
      temp_v9 = FUN_001834a4(0x2f,0x31);
      temp_v0 = *(short *)(temp_v9 + 8);
      temp_v9 = FUN_001834a4(0x2f,temp_v10 + 0x31);
      temp_v7 = (int)*(short *)(temp_v9 + 10);
      temp_v9 = ((int)*(short *)(temp_v9 + 8) - (int)temp_v0) + temp_v4 + temp_v6 + 4;
      if (temp_v12 == temp_v10 || temp_v11 == temp_v10) {
        FUN_001835b4(2,8,0x155,temp_v9,temp_v7,0x81);
      }
      else {
        temp_v1 = temp_v14[4];
        if (temp_v14[4] != temp_v10) {
          temp_v1 = temp_v15;
        }
        if (!(temp_v14[4] != temp_v10 && temp_v1 != temp_v10)) {
          FUN_001835b4(2,8,0x156,temp_v9,temp_v7,0x81);
        }
        else {
          FUN_001835b4(2,8,0x154,temp_v9,temp_v7,0x81);
        }
      }
      temp_v9 = g_renderCtx;
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < 3);
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 3);
  piVar11 = (int *)(g_renderCtx + 0x1258);
  temp_v6 = *piVar11;
  temp_v3 = piVar11[temp_v6 + 2];
  *piVar11 = temp_v6 - 1;
  if (*(char *)(temp_v9 + 0x1270) != '\0' || temp_v3 != piVar11[temp_v6 + 1]) {
    (**(romwright_code **)(temp_v9 + 0x1274))();
    *(unsigned char *)(temp_v9 + 0x1270) = 0;
  }
  return 0;
}

} /* extern "C" */
