/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002109cc` (_code @ 0x2109cc, 0x300 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00190e48(void);
int FUN_001f40fc(...);
int fadeObjectResetIfActive(...);
int FUN_002b75ec(...);
int FUN_002be5a4(...);
int FUN_002bf288(int, int, int, unsigned int, unsigned int, int);
int FUN_002c18e4(...);
int FUN_002c198c(...);
int FUN_002c39a4(int);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned char g_buttonHelp; /* 0x43da28 */
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00190e48. */
/* Supplied declaration required: FUN_001f40fc. */
/* Supplied declaration required: fadeObjectResetIfActive. */
/* Supplied declaration required: FUN_002b75ec. */
/* Supplied declaration required: FUN_002be5a4. */
extern unsigned int vec2GetYInt(int);
extern unsigned int vec2GetXInt(int);
/* Supplied declaration required: FUN_002bf288. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);


unsigned char FUN_002109cc(void)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar10;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  
  temp_v1 = (*(int *)((unsigned char *)&g_buttonHelp + 0x4));
  if (*(char *)((*(int *)((unsigned char *)&g_buttonHelp + 0x4)) + 0x4c4) != '\0') {
    FUN_002c39a4(g_titleScene);
    temp_v4 = g_titleScene;
    temp_v2 = FUN_002c5d80(1,0);
    piVar10 = (int *)(temp_v4 + 0x124c);
    temp_v7 = *piVar10;
    temp_v8 = piVar10[temp_v7 + 2];
    *piVar10 = temp_v7 + 1;
    piVar10[temp_v7 + 3] = temp_v2;
    if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v8 != temp_v2) {
      (**(romwright_code **)(temp_v4 + 0x1268))();
      *(unsigned char *)(temp_v4 + 0x1264) = 0;
    }
    temp_v3 = *(unsigned int *)(temp_v1 + 0x10);
    if (((temp_v3 < 2) || (temp_v3 == 2 || temp_v3 == 3)) &&
       (FUN_00190e48(), *(char *)(temp_v1 + 0x4c5) != '\0')) {
      if (*(char *)(temp_v1 + 0x4c8) != '\x01') {
        fadeObjectResetIfActive();
        fadeObjectResetIfActive(temp_v1 + 0x408);
      }
      else {
        temp_v5 = vec2GetXInt(temp_v1 + 0x37c);
        temp_v6 = vec2GetYInt(temp_v1 + 0x37c);
        FUN_002bf288(2,0x12,0,temp_v5,temp_v6,0x10);
        FUN_002bf288(2,0x12,1,temp_v5,temp_v6,0x10);
      }
      temp_v9 = *(char *)(temp_v1 + 0x4c5) != '\0';
      temp_v0 = '\0';
      if (temp_v9) {
        temp_v0 = *(char *)(temp_v1 + 0x4cb);
      }
      if ((temp_v9 && temp_v0 != '\0') && (*(int *)(temp_v1 + 0x3a8) >= 0x3f800000)) {
        temp_v4 = FUN_002bf4f8(0x12,0x1d);
        if (*(char *)(temp_v1 + 0x55c) != '\0') {
          FUN_002b75ec(*(unsigned int *)(temp_v1 + 0x558),(int)*(short *)(temp_v4 + 8),
                       (int)*(short *)(temp_v4 + 10),0x15,6,0);
        }
        else if (*(char *)(temp_v1 + 0x554) != '\0') {
          VectorSignedToFloat((int)*(short *)(temp_v4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v4 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be5a4(3,*(unsigned int *)(temp_v1 + 0x4cc),temp_v1 + 0x4d0);
        }
        else {
          FUN_001f40fc(temp_v1 + 0x4d0,(int)*(short *)(temp_v4 + 8),(int)*(short *)(temp_v4 + 10));
        }
        temp_v4 = FUN_002bf4f8(0x12,0x1e);
        if (*(char *)(temp_v1 + 0x55c) != '\0') {
          FUN_002b75ec(*(unsigned int *)(temp_v1 + 0x558),(int)*(short *)(temp_v4 + 8),
                       (int)*(short *)(temp_v4 + 10),0x15,6,1);
        }
        else if (*(char *)(temp_v1 + 0x554) != '\x01') {
          VectorSignedToFloat((int)*(short *)(temp_v4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v4 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be5a4(3,*(unsigned int *)(temp_v1 + 0x4cc),temp_v1 + 0x510);
        }
        else {
          FUN_001f40fc(temp_v1 + 0x510,(int)*(short *)(temp_v4 + 8),(int)*(short *)(temp_v4 + 10));
        }
      }
    }
    temp_v1 = g_titleScene;
    piVar10 = (int *)(g_titleScene + 0x124c);
    temp_v4 = *piVar10;
    temp_v2 = piVar10[temp_v4 + 2];
    *piVar10 = temp_v4 - 1;
    if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v2 != piVar10[temp_v4 + 1]) {
      (**(romwright_code **)(temp_v1 + 0x1268))();
      *(unsigned char *)(temp_v1 + 0x1264) = 0;
    }
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);
  }
  return 0;
}

} /* extern "C" */
