/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a6d98` (_code @ 0x1a6d98, 0x834 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"

extern "C" {

int FUN_001af84c(...);
int FUN_00290994(...);
int FUN_0029a17c(...);
void drawSkillCategoryLabel(unsigned short, int, int, unsigned int);
int FUN_002be5a4(...);
int textFormatBuffer(...);
int FUN_002bf380(...);
int FUN_002bf4f8(...);
int efctSetSpeed(void);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
} void_stack;

extern unsigned char LAB_001a7270; /* 0x1a7270 */
extern int g_uiQuest; /* 0x43dd50 */
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001af84c. */
extern int FUN_002886b0(unsigned int);
extern int FUN_002886c8(unsigned int);
/* Supplied declaration required: FUN_00290994. */
extern int questIsCompleted(unsigned int);
/* Supplied declaration required: FUN_0029a17c. */
/* Supplied declaration required: drawSkillCategoryLabel. */
extern int FUN_0029d644(int);
extern int ifTouchGetSelectionModeForRegion(int);
extern int FUN_0029efa8(int);
extern int FUN_0029efc0(int);
extern unsigned int FUN_002bcddc(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: textFormatBuffer. */
extern int vec2GetYInt(int);
extern int vec2GetXInt(int);
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: efctSetSpeed. */


void FUN_001a6d98(void)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int *piVar12;
  unsigned int temp_v11;
  int temp_v12;
  unsigned int in_fpscr;
  unsigned char temp_v13 [84];
  
  temp_v0 = g_uiQuest;
  temp_v1 = vec2GetXInt(g_uiQuest + 0x34);
  temp_v2 = vec2GetYInt(temp_v0 + 0x34);
  if (*(char *)(temp_v0 + 0x5c4) != '\0') {
    temp_v3 = temp_v0 + 0x5fc;
    temp_v12 = temp_v0 + 0x6c4;
  }
  else {
    temp_v3 = temp_v0 + 0x660;
    temp_v12 = temp_v0 + 0x78a;
  }
  FUN_002bf380(2,0x29,8,temp_v1,temp_v2,0x65);
  if (*(char *)(temp_v0 + 0x5c4) != '\0') {
    FUN_002bf380(2,0x29,9,temp_v1,temp_v2,0x65);
  }
  else {
    FUN_002bf380(2,0x29,10,temp_v1,temp_v2,0x65);
  }
  FUN_002bf380(2,0x29,0xb,temp_v1,temp_v2,0x65);
  if (*(char *)(temp_v0 + 0x5c4) != '\0') {
    FUN_002bf288(2,0x29,0x82,temp_v1,temp_v2,0x6a);
  }
  else {
    FUN_002bf288(2,0x29,0x83,temp_v1,temp_v2,0x6a);
  }
  temp_v10 = 0;
  temp_v4 = FUN_0029d644(temp_v3);
  if (0 < temp_v4) {
    do {
      if ((*(int *)(temp_v0 + 4) != 2) || (temp_v4 = FUN_0029efa8(temp_v3), temp_v4 != temp_v10)) {
        temp_v4 = FUN_0029efc0(temp_v3);
        temp_v11 = (unsigned int)*(unsigned short *)(temp_v12 + (temp_v4 + temp_v10) * 2);
        temp_v4 = FUN_002bf4f8(0x29,temp_v10 + 0x9e);
        if (temp_v11 != 0) {
          temp_v5 = FUN_002bf4f8(0x29,0x9c);
          temp_v6 = temp_v11;
          FUN_001af84c(temp_v11,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v1,
                       (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,0x6f,0);
          temp_v5 = FUN_002bf4f8(0x29,0x9b);
          temp_v7 = FUN_002bcddc(temp_v11,0);
          textFormatBuffer(temp_v13,&LAB_001a7270,temp_v7);
          VectorSignedToFloat((int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v1,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be5a4(2,temp_v6,temp_v13,(int)*(short *)(temp_v5 + 8));
          temp_v5 = FUN_002bf4f8(0x29,0x9a);
          drawSkillCategoryLabel(temp_v11,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v1,
                       (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,0x6f);
          temp_v5 = FUN_002bf4f8(0x29,0x9d);
          temp_v8 = FUN_002886c8(temp_v11);
          if (temp_v8 != 0) {
            FUN_002bf380(2,0x29,0xf,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v1,
                         (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,0x74);
          }
          else {
            temp_v8 = FUN_002886b0(temp_v11);
            if (temp_v8 != 0) {
              FUN_002bf380(2,0x29,0x10,
                           (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v1,
                           (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,0x74);
            }
          }
        }
      }
      temp_v10 = temp_v10 + 1;
      temp_v4 = FUN_0029d644(temp_v3);
    } while (temp_v10 < temp_v4);
  }
  temp_v4 = FUN_0029d644(temp_v3);
  if ((0 < temp_v4) &&
     (((temp_v4 = *(int *)(temp_v0 + 4), temp_v4 == 2 || temp_v4 == 6 || (temp_v4 == 7 || temp_v4 == 8)) ||
      (temp_v4 == 9 || temp_v4 == 10)))) {
    temp_v4 = FUN_0029efa8(temp_v3);
    temp_v10 = FUN_002bf4f8(0x29,temp_v4 + 0xb5);
    temp_v5 = FUN_0029efc0(temp_v3);
    temp_v11 = (unsigned int)*(unsigned short *)(temp_v12 + (temp_v5 + temp_v4) * 2);
    efctSetSpeed();
    FUN_002bf380(2,0x29,0x11,*(short *)(temp_v10 + 8) + temp_v1,*(short *)(temp_v10 + 10) + temp_v2,0x97);
    efctSetSpeed();
    FUN_002bf288(2,0x29,0xab,*(short *)(temp_v10 + 8) + temp_v1,*(short *)(temp_v10 + 10) + temp_v2,0x9c);
    temp_v12 = ifTouchGetSelectionModeForRegion((int)*(short *)(temp_v0 + temp_v4 * 2 + 0x9dc));
    temp_v4 = *(short *)(temp_v10 + 10) + temp_v2;
    temp_v5 = *(short *)(temp_v10 + 8) + temp_v1;
    if (!((temp_v12 == 1 || temp_v12 == 2) || temp_v12 == 6)) {
      FUN_002bf288(2,0x29,0xac,temp_v5,temp_v4,0xa1);
    }
    else {
      FUN_002bf288(2,0x29,0xad,temp_v5,temp_v4,0xa1);
    }
    temp_v4 = FUN_002bf4f8(0x29,0xac);
    temp_v5 = vec2GetXInt(temp_v0 + 0x14c);
    temp_v8 = vec2GetYInt(temp_v0 + 0x14c);
    temp_v12 = g_titleScene;
    piVar12 = (int *)(g_titleScene + 0x130c);
    temp_v9 = piVar12[*piVar12 + 2];
    piVar12[*piVar12 + 2] = 3;
    if (*(char *)(temp_v12 + 0x1324) != '\0' || temp_v9 != 3) {
      (**(romwright_code **)(temp_v12 + 0x1328))();
      *(unsigned char *)(temp_v12 + 0x1324) = 0;
    }
    FUN_0029a17c((int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v1,
                 (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,
                 (int)**(short **)(temp_v4 + 0xc),(int)(*(short **)(temp_v4 + 0xc))[1],1,temp_v8);
    FUN_002bf288(2,0x29,0xae,(int)*(short *)(temp_v10 + 8) + temp_v5 + temp_v1,
                 temp_v8 + temp_v2 + (int)*(short *)(temp_v10 + 10),0xa6);
    temp_v12 = g_titleScene;
    piVar12 = (int *)(g_titleScene + 0x130c);
    temp_v4 = piVar12[*piVar12 + 2];
    piVar12[*piVar12 + 2] = 0;
    if (*(char *)(temp_v12 + 0x1324) != '\0' || temp_v4 != 0) {
      (**(romwright_code **)(temp_v12 + 0x1328))();
      *(unsigned char *)(temp_v12 + 0x1324) = 0;
    }
    temp_v12 = FUN_002bf4f8(0x29,0xb3);
    temp_v6 = temp_v11;
    FUN_001af84c(temp_v11,(int)*(short *)(temp_v12 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v1,
                 (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v2,0xab,1);
    temp_v12 = FUN_002bf4f8(0x29,0xb2);
    temp_v7 = FUN_002bcddc(temp_v6,0);
    textFormatBuffer(temp_v13,&LAB_001a7270,temp_v7);
    VectorSignedToFloat((int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v12 + 8) + temp_v1,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(3,temp_v11,temp_v13,(int)*(short *)(temp_v12 + 8));
    temp_v12 = questIsCompleted(temp_v6);
    temp_v4 = *(short *)(temp_v10 + 10) + temp_v2;
    temp_v5 = *(short *)(temp_v10 + 8) + temp_v1;
    if (temp_v12 != 0) {
      FUN_002bf288(2,0x29,0xb0,temp_v5,temp_v4,0xab);
    }
    else {
      FUN_002bf288(2,0x29,0xaf,temp_v5,temp_v4,0xab);
    }
    temp_v12 = FUN_002bf4f8(0x29,0xb1);
    drawSkillCategoryLabel(temp_v6,(int)*(short *)(temp_v12 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v1,
                 (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v2,0xb0);
    temp_v12 = FUN_002bf4f8(0x29,0xb4);
    temp_v4 = FUN_002886c8(temp_v6);
    if (temp_v4 != 0) {
      FUN_002bf380(2,0x29,0xf,(int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v12 + 8) + temp_v1,
                   (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v2,0xb0);
    }
    else {
      temp_v4 = FUN_002886b0(temp_v6);
      if (temp_v4 != 0) {
        FUN_002bf380(2,0x29,0x10,(int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v12 + 8) + temp_v1,
                     (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v2,0xb0);
      }
    }
  }
  FUN_00290994(temp_v3,temp_v1,temp_v2,0x29,0x89,0x8a,0x8b,0x85,0x87,0x86,0x88,
               (int)*(short *)(temp_v0 + 0x9f6),(int)*(short *)(temp_v0 + 0x9f2),
               (int)*(short *)(temp_v0 + 0x9f4),0x97,0);
  return;
}

} /* extern "C" */
