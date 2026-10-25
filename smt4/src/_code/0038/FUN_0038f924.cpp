/* NON_MATCHING: callback handle forwarding recovered; render-stack state, text lookup arguments and integer-to-float rendering remain decompiler-shaped. */
#include "romwright_types.h"

extern "C" {

int FUN_0023478c(unsigned int, unsigned int);
int FUN_002347b8(unsigned int, unsigned int, unsigned char [1024]);
int FUN_002be5a4(int, unsigned int, unsigned char [1024], int);
int FUN_002bf288(...);
int FUN_002bf380(int, int, int, int, int, int);
int FUN_002bf4f8(...);
int FUN_002c39a4(int);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp448; /* 0x448: local_448 */
} void_stack;

extern unsigned int g_aocMain; /* 0x432fc8 */
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int curveEvaluateStandard(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_0023478c. */
/* Supplied declaration required: FUN_002347b8. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
extern int jobGetWork(unsigned int task);
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);


int FUN_0038f924(unsigned int task)

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
  
  temp_v3 = jobGetWork(task);
  temp_v2 = g_aocMain;
  temp_v11 = *(unsigned int *)(temp_v3 + 0x1798);
  FUN_002c39a4(g_titleScene);
  temp_v6 = g_titleScene;
  temp_v4 = FUN_002c5d80(1,0);
  piVar11 = (int *)(temp_v6 + 0x124c);
  temp_v8 = *piVar11;
  temp_v9 = piVar11[temp_v8 + 2];
  *piVar11 = temp_v8 + 1;
  piVar11[temp_v8 + 3] = temp_v4;
  if (*(char *)(temp_v6 + 0x1264) != '\0' || temp_v9 != temp_v4) {
    (**(romwright_code **)(temp_v6 + 0x1268))();
    *(unsigned char *)(temp_v6 + 0x1264) = 0;
  }
  FUN_002bf380(2,0x3a,5,0,0,0x81);
  temp_v14[0] = 0x6e;
  temp_v14[1] = 0x6f;
  temp_v14[2] = 0x70;
  temp_v14[3] = 0x71;
  temp_v5 = temp_v2;
  FUN_0023478c(temp_v2,temp_v14[*(int *)(temp_v3 + 0x179c)]);
  FUN_002347b8(temp_v2,temp_v5,temp_v13);
  temp_v6 = curveEvaluateStandard(temp_v13,3);
  temp_v3 = FUN_002bf4f8(0x3a,0x2d);
  temp_v4 = (((int)*(short *)(temp_v3 + 8) + ((int)**(short **)(temp_v3 + 0xc) >> 1)) - (temp_v6 >> 1)) - 9;
  VectorSignedToFloat((int)*(short *)(temp_v3 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be5a4(3,0xf49800ff,temp_v13,(int)*(short *)(temp_v3 + 10));
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
      temp_v9 = FUN_002bf4f8(0x3a,0x31);
      temp_v0 = *(short *)(temp_v9 + 8);
      temp_v9 = FUN_002bf4f8(0x3a,temp_v10 + 0x31);
      temp_v7 = (int)*(short *)(temp_v9 + 10);
      temp_v9 = ((int)*(short *)(temp_v9 + 8) - (int)temp_v0) + temp_v4 + temp_v6 + 4;
      if (temp_v12 == temp_v10 || temp_v11 == temp_v10) {
        FUN_002bf288(2,0xe,0x155,temp_v9,temp_v7,0x81);
      }
      else {
        temp_v1 = temp_v14[4];
        if (temp_v14[4] != temp_v10) {
          temp_v1 = temp_v15;
        }
        if (!(temp_v14[4] != temp_v10 && temp_v1 != temp_v10)) {
          FUN_002bf288(2,0xe,0x156,temp_v9,temp_v7,0x81);
        }
        else {
          FUN_002bf288(2,0xe,0x154,temp_v9,temp_v7,0x81);
        }
      }
      temp_v9 = g_titleScene;
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < 3);
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 3);
  piVar11 = (int *)(g_titleScene + 0x124c);
  temp_v6 = *piVar11;
  temp_v3 = piVar11[temp_v6 + 2];
  *piVar11 = temp_v6 - 1;
  if (*(char *)(temp_v9 + 0x1264) != '\0' || temp_v3 != piVar11[temp_v6 + 1]) {
    (**(romwright_code **)(temp_v9 + 0x1268))();
    *(unsigned char *)(temp_v9 + 0x1264) = 0;
  }
  return 0;
}

} /* extern "C" */
