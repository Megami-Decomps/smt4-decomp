/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00472820` (_code @ 0x472820, 0x5f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162790(...);
int FUN_001634b4(unsigned int *);
int FUN_00164168(...);
int efctSetSpeed(void);
int FUN_0016c410(...);
int FUN_0016c560(...);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int FUN_001879d0(int);
int VectorSignedToFloat(...);
int rt_memcpy_w(int [24], unsigned char *, int);

typedef int romwright_code(...);
/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} void_stack;

extern unsigned char DAT_00527134; /* 0x527134 */
extern float DAT_00570284; /* 0x570284 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_001634b4. */
/* Supplied declaration required: FUN_00164168. */
extern unsigned int *jobGetWork(void);
extern int FUN_001654d8(void);
extern int FUN_001654e4(unsigned int *);
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c560. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_001879d0. */
extern unsigned int FUN_0023b4a4(unsigned int);
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_00472820(void)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int *piVar12;
  unsigned int temp_v10;
  unsigned int in_fpscr;
  float temp_v11;
  int aiStack_a0 [24];
  unsigned int temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  
  puVar2 = (unsigned int *)jobGetWork();
  if ((*puVar2 & 0x10) != 0) {
    temp_v11 = DAT_00570284;
    FUN_001879d0(g_renderCtx);
    temp_v2 = g_renderCtx;
    temp_v14 = (int)temp_v11;
    temp_v1 = FUN_001692ac(1,0);
    piVar12 = (int *)(temp_v2 + 0x1258);
    temp_v6 = *piVar12;
    temp_v7 = piVar12[temp_v6 + 2];
    *piVar12 = temp_v6 + 1;
    piVar12[temp_v6 + 3] = temp_v1;
    if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v7 != temp_v1) {
      (**(romwright_code **)(temp_v2 + 0x1274))();
      *(unsigned char *)(temp_v2 + 0x1270) = 0;
    }
    efctSetSpeed();
    FUN_001835b4(2,8,0x106,0,0,6);
    efctSetSpeed();
    temp_v2 = g_renderCtx;
    temp_v1 = FUN_00169294(6,1,0);
    piVar12 = (int *)(temp_v2 + 0x12b8);
    temp_v6 = piVar12[*piVar12 + 2];
    piVar12[*piVar12 + 2] = temp_v1;
    if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v6 != temp_v1) {
      (**(romwright_code **)(temp_v2 + 0x12d4))(temp_v1);
      *(unsigned char *)(temp_v2 + 0x12d0) = 0;
    }
    VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001634b4(puVar2 + 0x156);
    temp_v2 = g_renderCtx;
    temp_v1 = FUN_00169294(6,7,0);
    piVar12 = (int *)(temp_v2 + 0x12b8);
    temp_v6 = piVar12[*piVar12 + 2];
    piVar12[*piVar12 + 2] = temp_v1;
    if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v6 != temp_v1) {
      (**(romwright_code **)(temp_v2 + 0x12d4))();
      *(unsigned char *)(temp_v2 + 0x12d0) = 0;
    }
    VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001634b4(puVar2 + 0x110);
    temp_v2 = g_renderCtx;
    piVar12 = (int *)(g_renderCtx + 0x1258);
    temp_v1 = *piVar12;
    temp_v6 = piVar12[temp_v1 + 2];
    *piVar12 = temp_v1 - 1;
    if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v6 != piVar12[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v2 + 0x1274))(piVar12[temp_v1 + 1]);
      *(unsigned char *)(temp_v2 + 0x1270) = 0;
    }
    if (((*(char *)((int)puVar2 + 0x4ca) != '\0') && ((char)puVar2[0x132] != '\0')) &&
       ((*puVar2 & 0x20) != 0)) {
      temp_v1 = FUN_001654d8();
      temp_v1 = temp_v1 + temp_v14;
      temp_v6 = FUN_001654e4(puVar2 + 0x133);
      temp_v2 = g_renderCtx;
      temp_v7 = FUN_001692ac(1,0);
      piVar12 = (int *)(temp_v2 + 0x1258);
      temp_v8 = *piVar12;
      temp_v9 = piVar12[temp_v8 + 2];
      *piVar12 = temp_v8 + 1;
      piVar12[temp_v8 + 3] = temp_v7;
      if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v9 != temp_v7) {
        (**(romwright_code **)(temp_v2 + 0x1274))();
        *(unsigned char *)(temp_v2 + 0x1270) = 0;
      }
      if ((int)puVar2[4] < 5) {
        temp_v2 = FUN_001834a4(8,0xe1);
      }
      else {
        temp_v2 = FUN_001834a4(8,0xe0);
      }
      if ((char)puVar2[0x105] != '\x01') {
        if ((char)puVar2[0x105] == '\x02') {
          rt_memcpy_w(aiStack_a0,&DAT_00527134,0x48);
          temp_v1 = 0;
          temp_v5 = puVar2[0x106] / 5;
          temp_v10 = temp_v5 - (temp_v5 & 0xfffffff8);
          temp_v12 = (int)(temp_v10 + 7) % 8;
          temp_v5 = (temp_v5 + 4) % 8;
          temp_v13 = (temp_v5 + 7) % 8;
          do {
            temp_v6 = 0;
            do {
              temp_v3 = temp_v1 * 3 + temp_v6;
              temp_v8 = (int)*(short *)(temp_v2 + 8) + aiStack_a0[temp_v3 * 2];
              temp_v7 = aiStack_a0[temp_v3 * 2 + 1] + (int)*(short *)(temp_v2 + 10);
              if (temp_v10 == temp_v3 || temp_v5 == temp_v3) {
                FUN_001835b4(2,8,0x155,temp_v8,temp_v7,0x15);
              }
              else {
                temp_v0 = (int)*(short *)(temp_v2 + 10);
                if (temp_v12 != temp_v3) {
                  temp_v0 = temp_v13;
                }
                if (!(temp_v12 != temp_v3 && temp_v0 != temp_v3)) {
                  FUN_001835b4(2,8,0x156,temp_v8,temp_v7,0x15);
                }
                else {
                  FUN_001835b4(2,8,0x154,temp_v8,temp_v7,0x15);
                }
              }
              temp_v6 = temp_v6 + 1;
            } while (temp_v6 < 3);
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 3);
        }
      }
      else {
        FUN_001835b4(2,8,0xdf,*(short *)(temp_v2 + 8) + temp_v1,*(short *)(temp_v2 + 10) + temp_v6,0x13);
        FUN_001835b4(2,8,0xde,*(short *)(temp_v2 + 8) + temp_v1,*(short *)(temp_v2 + 10) + temp_v6,0x15);
      }
      temp_v4 = FUN_0023b4a4(5);
      temp_v5 = puVar2[4];
      if ((int)temp_v5 < 5) {
        temp_v2 = 0x6b;
      }
      else {
        temp_v2 = 0x69;
      }
      if ((*puVar2 & 0x40) != 0) {
        temp_v1 = 0;
        if (0 < (int)temp_v5) {
          do {
            temp_v6 = FUN_001834a4(8,temp_v2 + temp_v1);
            FUN_00164168(puVar2[0x107],*(short *)(temp_v6 + 8) + temp_v14,(int)*(short *)(temp_v6 + 10),
                         0x13,6,temp_v1);
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < (int)puVar2[4]);
        }
      }
      else {
        temp_v1 = 0;
        if (0 < (int)temp_v5) {
          do {
            temp_v6 = FUN_001834a4(8,temp_v2 + temp_v1);
            temp_v7 = *(short *)(temp_v6 + 8) + temp_v14;
            VectorSignedToFloat((int)*(short *)(temp_v6 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_00162790(3,temp_v4,puVar2 + temp_v1 * 0x20 + 5,temp_v7);
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < (int)puVar2[4]);
        }
      }
      temp_v2 = g_renderCtx;
      piVar12 = (int *)(g_renderCtx + 0x1258);
      temp_v1 = *piVar12;
      temp_v6 = piVar12[temp_v1 + 2];
      *piVar12 = temp_v1 - 1;
      if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v6 != piVar12[temp_v1 + 1]) {
        (**(romwright_code **)(temp_v2 + 0x1274))();
        *(unsigned char *)(temp_v2 + 0x1270) = 0;
      }
      FUN_00183bb0();
      efctSetSpeed();
      FUN_0016c560(g_renderCtx);
      FUN_0016c410(g_renderCtx);
    }
  }
  return 0;
}

} /* extern "C" */
