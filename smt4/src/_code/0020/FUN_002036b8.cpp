/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002036b8` (_code @ 0x2036b8, 0x604 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"

extern "C" {

int FUN_00290994(...);
int FUN_0029a17c(...);
int FUN_0029efc0(...);
int FUN_002be5a4(...);
int textFormatBuffer(...);
int FUN_002bf380(...);
int FUN_002bf4f8(...);
int efctSetSpeed(void);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_2: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
} param_2_stack;

extern unsigned char LAB_00203af4; /* 0x203af4 */
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_00200574(unsigned short);
extern int FUN_00254058(unsigned short);
extern int uniteGetWork(void);
/* Supplied declaration required: FUN_00290994. */
/* Supplied declaration required: FUN_0029a17c. */
extern int FUN_0029d644(int);
extern int ifTouchGetSelectionModeForRegion(int);
extern int FUN_0029efa8(int);
/* Supplied declaration required: FUN_0029efc0. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: textFormatBuffer. */
extern int vec2GetYInt(int);
extern int vec2GetXInt(int);
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: efctSetSpeed. */


void FUN_002036b8(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar10;
  unsigned int in_fpscr;
  unsigned char temp_v9 [84];
  
  temp_v1 = uniteGetWork();
  if (temp_v1 != 0) {
    FUN_002bf380(2,0x24,6,param_1,param_2,0x65);
    FUN_002bf288(2,0x24,0x1d2,param_1,param_2,0x6a);
    temp_v2 = temp_v1 + 0x9508;
    temp_v3 = FUN_0029efc0();
    temp_v8 = 0;
    temp_v4 = FUN_0029d644(temp_v2);
    if (0 < temp_v4) {
      do {
        if ((*(char *)(temp_v1 + 0x252) == '\0') || (temp_v4 = FUN_0029efa8(temp_v2), temp_v4 != temp_v8)) {
          temp_v4 = FUN_002bf4f8(0x24,temp_v8 + 0x2e);
          temp_v5 = temp_v1 + (temp_v3 + temp_v8) * 2;
          temp_v6 = FUN_00254058(*(unsigned short *)(temp_v5 + 0x9468));
          if (temp_v6 != 0) {
            FUN_002bf288(2,0x24,0x1d3,*(short *)(temp_v4 + 8) + param_1,
                         *(short *)(temp_v4 + 10) + param_2,0x6a);
            textFormatBuffer(temp_v9,&LAB_00203af4,temp_v6 + 8);
            temp_v6 = FUN_002bf4f8(0x24,0x1d5);
            VectorSignedToFloat((int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v6 + 10) + param_2,
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v6 + 8) + param_1,
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002be5a4(2,0xff,temp_v9,(int)*(short *)(temp_v6 + 10));
            temp_v5 = FUN_00200574(*(unsigned short *)(temp_v5 + 0x9468));
            if (temp_v5 != 0) {
              temp_v5 = FUN_002bf4f8(0x24,0x1d4);
              FUN_002bf380(2,0x24,7,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v4 + 8) +
                                    param_1,
                           (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + param_2,0x6a)
              ;
            }
          }
        }
        temp_v8 = temp_v8 + 1;
        temp_v4 = FUN_0029d644(temp_v2);
      } while (temp_v8 < temp_v4);
    }
    temp_v3 = FUN_0029efc0(temp_v2);
    temp_v4 = FUN_0029efa8(temp_v2);
    temp_v3 = temp_v1 + (temp_v4 + temp_v3) * 2;
    temp_v4 = FUN_00254058(*(unsigned short *)(temp_v3 + 0x9468));
    if (*(char *)(temp_v1 + 0x252) != '\0' && temp_v4 != 0) {
      temp_v8 = FUN_0029efa8(temp_v2);
      temp_v8 = FUN_002bf4f8(0x24,temp_v8 + 0x3f);
      efctSetSpeed();
      FUN_002bf288(2,0x24,0x38,*(short *)(temp_v8 + 8) + param_1,*(short *)(temp_v8 + 10) + param_2,0x79
                  );
      FUN_002bf288(2,0x24,0x39,*(short *)(temp_v8 + 8) + param_1,*(short *)(temp_v8 + 10) + param_2,0x79
                  );
      FUN_002bf288(2,0x24,0x3a,*(short *)(temp_v8 + 8) + param_1,*(short *)(temp_v8 + 10) + param_2,0x79
                  );
      efctSetSpeed();
      FUN_002bf288(2,0x24,0x3b,*(short *)(temp_v8 + 8) + param_1,*(short *)(temp_v8 + 10) + param_2,0x7e
                  );
      temp_v5 = FUN_0029efa8(temp_v2);
      temp_v5 = ifTouchGetSelectionModeForRegion((int)*(short *)(temp_v1 + temp_v5 * 2 + 0x438));
      temp_v6 = *(short *)(temp_v8 + 10) + param_2;
      temp_v7 = *(short *)(temp_v8 + 8) + param_1;
      if (!((temp_v5 == 1 || temp_v5 == 2) || temp_v5 == 6)) {
        FUN_002bf288(2,0x24,0x3c,temp_v7,temp_v6,0x7e);
      }
      else {
        FUN_002bf288(2,0x24,0x3d,temp_v7,temp_v6,0x7e);
      }
      temp_v6 = FUN_002bf4f8(0x24,0x3c);
      temp_v5 = g_titleScene;
      piVar10 = (int *)(g_titleScene + 0x130c);
      temp_v7 = piVar10[*piVar10 + 2];
      piVar10[*piVar10 + 2] = 3;
      if (*(char *)(temp_v5 + 0x1324) != '\0' || temp_v7 != 3) {
        (**(romwright_code **)(temp_v5 + 0x1328))();
        *(unsigned char *)(temp_v5 + 0x1324) = 0;
      }
      FUN_0029a17c((int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v6 + 8) + param_1,
                   (int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v6 + 10) + param_2,
                   (int)**(short **)(temp_v6 + 0xc),(int)(*(short **)(temp_v6 + 0xc))[1],1);
      temp_v5 = vec2GetYInt(temp_v1 + 0xb0);
      temp_v0 = *(short *)(temp_v8 + 10);
      temp_v6 = vec2GetXInt(temp_v1 + 0xb0);
      FUN_002bf288(2,0x24,0x3e,temp_v6 + param_1 + (int)*(short *)(temp_v8 + 8),
                   temp_v5 + param_2 + (int)temp_v0,0x83);
      temp_v5 = g_titleScene;
      piVar10 = (int *)(g_titleScene + 0x130c);
      temp_v6 = piVar10[*piVar10 + 2];
      piVar10[*piVar10 + 2] = 0;
      if (*(char *)(temp_v5 + 0x1324) != '\0' || temp_v6 != 0) {
        (**(romwright_code **)(temp_v5 + 0x1328))();
        *(unsigned char *)(temp_v5 + 0x1324) = 0;
      }
      FUN_002bf288(2,0x24,0x1d6,*(short *)(temp_v8 + 8) + param_1,*(short *)(temp_v8 + 10) + param_2,
                   0x83);
      textFormatBuffer(temp_v9,&LAB_00203af4,temp_v4 + 8);
      temp_v4 = FUN_002bf4f8(0x24,0x1d8);
      VectorSignedToFloat((int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v4 + 8) + param_1,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(3,0xffffffff,temp_v9,(int)*(short *)(temp_v4 + 10));
      temp_v3 = FUN_00200574(*(unsigned short *)(temp_v3 + 0x9468));
      if (temp_v3 != 0) {
        temp_v3 = FUN_002bf4f8(0x24,0x1d7);
        FUN_002bf380(2,0x24,7,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v8 + 8) + param_1,
                     (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v8 + 10) + param_2,0x83);
      }
    }
    FUN_00290994(temp_v2,param_1,param_2,0x24,0x23,0x24,0x25,0x1f,0x21,0x20,0x22,
                 (int)*(short *)(temp_v1 + 0x476),(int)*(short *)(temp_v1 + 0x472),
                 (int)*(short *)(temp_v1 + 0x474),0x97,0);
  }
  return;
}

} /* extern "C" */
