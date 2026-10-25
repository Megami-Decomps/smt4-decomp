/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029a284` (_code @ 0x29a284, 0x688 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"

extern "C" {

int FUN_0029a17c(int, int, int, int, int);
int dataTable40FindById(void);
int FUN_002b6c34(...);
int FUN_002bdf94(...);
int FUN_002be5a4(...);
int textFormatBuffer(...);
int FUN_002bf380(int, int, int, int, int, int);
int efctSetSpeed(void);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_8: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} param_8_stack;

extern unsigned char LAB_0029a6cc; /* 0x29a6cc */
extern unsigned char LAB_0029a6d8; /* 0x29a6d8 */
extern unsigned char LAB_0029a710; /* 0x29a710 */
extern unsigned char LAB_0029a914; /* 0x29a914 */
extern unsigned char LAB_0029a918; /* 0x29a918 */
extern int g_statusDown; /* 0x44e190 */
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned int FUN_0028d1f4(int);
/* Supplied declaration required: FUN_0029a17c. */
extern unsigned int FUN_0029a924(void);
extern unsigned int FUN_0029a9d4(int, unsigned int);
extern int FUN_0029ac94(void);
extern int FUN_0029ee54(int);
extern int FUN_0029efa8(void);
/* Supplied declaration required: dataTable40FindById. */
/* Supplied declaration required: FUN_002b6c34. */
extern unsigned int aocIndexValueOrDefault(int);
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: textFormatBuffer. */
extern int vec2GetYInt(int);
extern int vec2GetXInt(int);
/* Supplied declaration required: FUN_002bf380. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: efctSetSpeed. */


void FUN_0029a284(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5,
                 int param_6,int param_7,int param_8)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int *piVar8;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  unsigned char temp_v10 [68];
  int temp_v11;
  int temp_v12;
  int temp_v13;
  
  temp_v3 = g_statusDown;
  temp_v1 = FUN_002bf4f8(0x1a,param_4);
  temp_v13 = temp_v3 + 0x4d4;
  temp_v12 = FUN_0029efa8();
  temp_v7 = 0;
  efctSetSpeed();
  FUN_002bf380(2,0x1a,8,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0xbf);
  efctSetSpeed();
  FUN_002bf288(2,0x1a,0x41f,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0xc4);
  temp_v2 = *(int *)(temp_v3 + 0x418);
  temp_v5 = 0x420;
  temp_v8 = temp_v2 == 0;
  if (temp_v8) {
    temp_v2 = *(int *)(temp_v3 + 0x41c);
  }
  if (temp_v8 && temp_v2 == 0) {
    temp_v2 = *(int *)(temp_v3 + 0x420);
    temp_v8 = temp_v2 == 0;
    if (temp_v8) {
      temp_v2 = *(int *)(temp_v3 + 0x424);
    }
    temp_v9 = temp_v8 && temp_v2 == 0;
    if (temp_v8 && temp_v2 == 0) {
      temp_v9 = *(int *)(temp_v3 + 0x428) == 0;
    }
    if ((temp_v9) && (-1 < *(int *)(temp_v3 + 0x414))) {
      temp_v5 = 0x421;
    }
  }
  FUN_002bf288(2,0x1a,temp_v5,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0xc4);
  temp_v11 = FUN_002bf4f8(0x1a,0x420);
  temp_v2 = g_titleScene;
  piVar8 = (int *)(g_titleScene + 0x130c);
  temp_v6 = piVar8[*piVar8 + 2];
  piVar8[*piVar8 + 2] = 3;
  if (*(char *)(temp_v2 + 0x1324) != '\0' || temp_v6 != 3) {
    (**(romwright_code **)(temp_v2 + 0x1328))();
    *(unsigned char *)(temp_v2 + 0x1324) = 0;
  }
  FUN_0029a17c((int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v11 + 8) + param_1,
               (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v11 + 10) + param_2,
               (int)**(short **)(temp_v11 + 0xc),(int)(*(short **)(temp_v11 + 0xc))[1],1);
  temp_v2 = vec2GetYInt(temp_v3 + 0x1cc);
  temp_v0 = *(short *)(temp_v1 + 10);
  temp_v6 = vec2GetXInt(temp_v3 + 0x1cc);
  FUN_002bf288(2,0x1a,0x422,temp_v6 + param_1 + (int)*(short *)(temp_v1 + 8),
               temp_v2 + param_2 + (int)temp_v0,0xc9);
  temp_v2 = g_titleScene;
  piVar8 = (int *)(g_titleScene + 0x130c);
  temp_v6 = piVar8[*piVar8 + 2];
  piVar8[*piVar8 + 2] = 0;
  if (*(char *)(temp_v2 + 0x1324) != '\0' || temp_v6 != 0) {
    (**(romwright_code **)(temp_v2 + 0x1328))();
    *(unsigned char *)(temp_v2 + 0x1324) = 0;
  }
  temp_v5 = 0xffffffff;
  if (param_8 == 1) {
    temp_v5 = 0x72e027ff;
  }
  else if (param_8 == 2) {
    temp_v5 = 0xdc0f14ff;
  }
  temp_v2 = temp_v3 + 0x400;
  temp_v6 = *(int *)(temp_v3 + 0x400);
  if (!(temp_v6 == 0xb || temp_v6 == 0xe)) {
    if (((!(temp_v6 == 6 || temp_v6 == 9)) && (*(char *)(temp_v3 + 0x548) != '\0')) &&
       (*(int *)(temp_v3 + 0x54c) == temp_v12)) {
      temp_v5 = 0x72e027ff;
    }
  }
  else if ((*(int *)(temp_v3 + 0x544) != temp_v12) &&
          (temp_v3 = FUN_0029ee54(temp_v13), temp_v3 - 1 != temp_v12)) {
    temp_v5 = 0x5a5a5aff;
  }
  else {
    temp_v5 = 0x72e027ff;
  }
  temp_v3 = FUN_002bf4f8(0x1a,0x42b);
  if ((param_7 == 0) || (param_3 != 0)) {
    if (param_6 != 0) {
      textFormatBuffer(temp_v10,&LAB_0029a6cc);
    }
    else {
      temp_v4 = aocIndexValueOrDefault(param_3);
      textFormatBuffer(temp_v10,&LAB_0029a710,temp_v4);
    }
  }
  else {
    textFormatBuffer(temp_v10,&LAB_0029a6d8);
    temp_v5 = 0x5a5a5aff;
  }
  VectorSignedToFloat((int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v3 + 10) + param_2,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v3 + 8) + param_1,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be5a4(3,temp_v5,temp_v10,(int)*(short *)(temp_v3 + 8));
  if ((param_7 == 0) || (param_3 != 0)) {
    FUN_002bf288(2,0x1a,0x425,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0xc4)
    ;
    temp_v3 = FUN_002bf4f8(0x1a,0x42a);
    FUN_002b6c34((int)(short)param_3,
                 (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                 (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v3 + 10) + param_2,0xc9,param_5,0)
    ;
  }
  if (param_6 == 0) {
    if (param_7 == 0) {
      FUN_002bf288(2,0x1a,0x423,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,
                   0xc4);
      if (*(short *)(temp_v2 + 0x7e) < 0) {
        temp_v7 = FUN_0029a9d4(param_3,1);
      }
      else {
        temp_v2 = FUN_0029ac94();
        if (temp_v2 != 6) {
          temp_v7 = FUN_0029a924();
        }
        else {
          dataTable40FindById();
          if (param_3 != 0) {
            temp_v7 = (unsigned int)*(unsigned char *)(param_3 + 0x22);
          }
        }
      }
      temp_v2 = FUN_002bf4f8(0x1a,0x429);
      FUN_002bdf94(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                   (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,1,4,0xc9,
                   &LAB_0029a914,temp_v7);
      return;
    }
    FUN_002bf288(2,0x1a,0x522,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0xc4)
    ;
    temp_v2 = FUN_002bf4f8(0x1a,0x52a);
    if (param_3 == 0) {
      textFormatBuffer(temp_v10,&LAB_0029a918);
      FUN_002bdf94(0,(int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                   (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,1,8,0xc9,
                   temp_v10);
      return;
    }
    temp_v5 = FUN_0028d1f4(param_3);
    FUN_002bdf94(0,(int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                 (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,1,8,0xc9,
                 &LAB_0029a914,temp_v5);
  }
  return;
}

} /* extern "C" */
