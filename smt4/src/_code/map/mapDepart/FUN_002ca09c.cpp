/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ca09c` (_code @ 0x2ca09c, 0x608 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"

extern "C" {

int FUN_0025b670(unsigned int);
int itemDrawCategoryBadge(...);
int FUN_002be5a4(...);
int textFormatBuffer(...);
int FUN_002be650(...);
int FUN_002bed3c(void);
int FUN_002bf380(...);
int FUN_002bf4f8(...);
int efctSetSpeed(void);
int FUN_002c39a4(int);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
} void_stack;

extern unsigned char LAB_002ca4f8; /* 0x2ca4f8 */
extern int g_mapDepart; /* 0x4475b8 */
extern int g_titleScene; /* 0x44ea00 */
extern unsigned char g_gameState; /* 0x49f91c */
extern unsigned char DAT_0049fd38; /* 0x49fd38 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0025b670. */
/* Supplied declaration required: itemDrawCategoryBadge. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_002be650. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);


unsigned int FUN_002ca09c(void)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar10;
  int temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  unsigned long long temp_v11;
  float temp_v12;
  unsigned char temp_v13 [40];
  int temp_v14;
  int temp_v15;
  int temp_v16;
  
  temp_v2 = g_mapDepart;
  if ((*(int *)(g_mapDepart + 0x18) >= 2) && (*(int *)(g_mapDepart + 0x18) < 0xb)) {
    FUN_002c39a4(g_titleScene);
    temp_v9 = g_titleScene;
    temp_v1 = FUN_002c5d80(1,0);
    piVar10 = (int *)(temp_v9 + 0x124c);
    temp_v7 = *piVar10;
    temp_v8 = piVar10[temp_v7 + 2];
    *piVar10 = temp_v7 + 1;
    piVar10[temp_v7 + 3] = temp_v1;
    if (*(char *)(temp_v9 + 0x1264) != '\0' || temp_v8 != temp_v1) {
      (**(romwright_code **)(temp_v9 + 0x1268))();
      *(unsigned char *)(temp_v9 + 0x1264) = 0;
    }
    if (*(int *)(temp_v2 + 0x18) == 5 || *(int *)(temp_v2 + 0x18) == 6) {
      efctSetSpeed();
      FUN_002bed3c();
      temp_v14 = g_mapDepart;
      if (*(char *)(g_mapDepart + 0x20) != '\0') {
        temp_v12 = 0.0f;
        temp_v10 = temp_v12;
        if (*(int *)(g_mapDepart + 0x24) < 10) {
          temp_v10 = (float)VectorSignedToFloat(*(int *)(g_mapDepart + 0x24) * 0x28,
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v10 = temp_v10 + -400.0f;
        }
        if (*(int *)(g_mapDepart + 0xc) == 0) {
          temp_v2 = FUN_002bf4f8(0xe,0x10b);
          temp_v11 = (unsigned long long)(unsigned int)(int)temp_v10;
          temp_v9 = 0x107;
          do {
            FUN_002bf288(2,0xe,temp_v9,(int)temp_v11,0,0xb);
            temp_v9 = temp_v9 + 1;
          } while (temp_v9 < 0x10b);
          temp_v3 = (*(unsigned int *)((unsigned char *)&g_gameState + 0xa8));
          FUN_0025b670((*(unsigned int *)((unsigned char *)&g_gameState + 0xa8)));
          textFormatBuffer(temp_v13,&LAB_002ca4f8,temp_v3);
          VectorSignedToFloat((int)*(short *)(temp_v2 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v2 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be5a4(3,0xffffffff,temp_v13);
        }
        if (*(int *)(temp_v14 + 0x24) < 10) {
          temp_v12 = (float)VectorSignedToFloat(*(int *)(temp_v14 + 0x24) * 0x28,
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v12 = 400.0f - temp_v12;
        }
        temp_v11 = (unsigned long long)(unsigned int)temp_v12;
        if (*(int *)(temp_v14 + 0xc) != 2) {
          FUN_002bf380(2,0x1c,0x1a,(int)temp_v12,0,0xb);
        }
        else {
          FUN_002bf380(2,0x1c,0x1e,(int)temp_v12,0,0xb);
        }
        temp_v2 = 0;
        if (temp_v2 < (*(short *)((unsigned char *)&DAT_0049fd38 + 0xa6))) {
          do {
            temp_v1 = FUN_002bf4f8(0x1c,temp_v2 + 0x1105);
            temp_v7 = FUN_002bf4f8(0x1c,temp_v2 + 0x110d);
            temp_v8 = FUN_002bf4f8(0x1c,0x1101);
            temp_v4 = FUN_002bf4f8(0x1c,0x1100);
            temp_v16 = FUN_002bf4f8(0x1c,0x1104);
            temp_v15 = FUN_002bf4f8(0x1c,0x1102);
            temp_v5 = FUN_002bf4f8(0x1c,0x1103);
            temp_v9 = temp_v2 * 2;
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 8),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v12 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 8),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            itemDrawCategoryBadge((int)*(short *)(temp_v9 + 0x49fd8c),(int)(temp_v10 + (float)temp_v11 + temp_v12),
                         (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v4 + 10),0x6f,0);
            if ((*(char *)(temp_v2 + 0x49fdac) != '\0') &&
               (temp_v6 = *(unsigned int *)(temp_v14 + 0x24),
               temp_v4 = (int)(((long long)(int)temp_v6 * -0x77777777 + ((unsigned long long)temp_v6 << 0x20)) >>
                            0x20), (int)(temp_v6 + ((temp_v4 >> 4) - (temp_v4 >> 0x1f)) * -0x1e) < 0x14))
            {
              temp_v4 = 0x10b9;
              do {
                temp_v12 = (float)VectorSignedToFloat((int)*(short *)(temp_v7 + 8),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                FUN_002bf288(2,0x1c,temp_v4,(int)(temp_v12 + (float)temp_v11),(int)*(short *)(temp_v7 + 10),
                             0xb);
                temp_v4 = temp_v4 + 1;
              } while (temp_v4 < 0x10bc);
            }
            temp_v7 = (int)*(short *)(temp_v9 + 0x49fd8c);
            FUN_002be650(temp_v7,0);
            textFormatBuffer(temp_v13,&LAB_002ca4f8,temp_v7);
            VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v8 + 10),
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((int)*(short *)(temp_v8 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002be5a4(2,0x323232ff,temp_v13,(int)*(short *)(temp_v8 + 8));
            temp_v0 = *(short *)(temp_v9 + 0x49fdbc);
            temp_v12 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 8),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002bf288(2,0x1c,0x10fe,(int)(temp_v12 + (float)temp_v11),(int)*(short *)(temp_v1 + 10),0xb
                        );
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 8),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v12 = (float)VectorSignedToFloat((int)*(short *)(temp_v16 + 8),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002bf288(2,0xd,0xd,(int)(temp_v10 + (float)temp_v11 + temp_v12),
                         (int)*(short *)(temp_v16 + 10) + (int)*(short *)(temp_v1 + 10),0xb);
            temp_v12 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 8),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 8),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002bf288(2,0xd,(int)temp_v0 / 10,(int)(temp_v12 + (float)temp_v11 + temp_v10),
                         (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v1 + 10),0xb);
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 8),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v12 = (float)VectorSignedToFloat((int)*(short *)(temp_v15 + 8),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002bf288(2,0xd,(int)temp_v0 % 10,(int)(temp_v10 + (float)temp_v11 + temp_v12),
                         (int)*(short *)(temp_v15 + 10) + (int)*(short *)(temp_v1 + 10),0xb);
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < (*(short *)((unsigned char *)&DAT_0049fd38 + 0xa6)));
        }
      }
    }
    temp_v2 = g_titleScene;
    piVar10 = (int *)(g_titleScene + 0x124c);
    temp_v9 = *piVar10;
    temp_v1 = piVar10[temp_v9 + 2];
    *piVar10 = temp_v9 - 1;
    if (*(char *)(temp_v2 + 0x1264) != '\0' || temp_v1 != piVar10[temp_v9 + 1]) {
      (**(romwright_code **)(temp_v2 + 0x1268))();
      *(unsigned char *)(temp_v2 + 0x1264) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
