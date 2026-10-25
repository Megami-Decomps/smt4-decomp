#include "util/Vec2Fixed.h"
/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d3a4c` (_code @ 0x3d3a4c, 0x6a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"

extern "C" {

int textFormatBuffer(unsigned char [84], unsigned char *);
int textDrawString(...);
int FUN_00164b5c(...);
int efctSetSpeed(void);
int FUN_0018152c(...);
int asdTMTexTableEntryAt(...);
int statusDownDrawIndicatorPairs(int, int);
int dataTable0cFindByKey(void);
int FUN_00344cd0(...);
int FUN_0035ae58(...);
int FUN_0035bd4c(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_2: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
} param_2_stack;

extern unsigned char LAB_003d3efc; /* 0x3d3efc */
extern int g_statusDown; /* 0x588fe8 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: textDrawString. */
/* Supplied declaration required: FUN_00164b5c. */
extern int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_0018152c. */
/* Supplied declaration required: asdTMTexTableEntryAt. */
/* Supplied declaration required: statusDownDrawIndicatorPairs. */
extern int FUN_0026264c(unsigned short);
/* Supplied declaration required: dataTable0cFindByKey. */
extern int resourceRunOperationIfUnblocked(void);
extern int FUN_002a4894(int);
extern int objectApplyIfUnblocked(int);
extern unsigned short *FUN_002c7e24(void);
extern int FUN_002c7e3c(void);
/* Supplied declaration required: FUN_00344cd0. */
/* Supplied declaration required: FUN_0035ae58. */
/* Supplied declaration required: FUN_0035bd4c. */


void FUN_003d3a4c(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 13 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned short *puVar8;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  int *piVar15;
  unsigned char temp_v13;
  unsigned char temp_v14;
  unsigned int in_fpscr;
  unsigned char temp_v15 [84];
  
  temp_v2 = g_statusDown;
  temp_v3 = g_statusDown + 0xee4;
  temp_v4 = resourceRunOperationIfUnblocked();
  temp_v5 = FUN_002a4894(temp_v3);
  temp_v1 = 0;
  temp_v6 = FUN_002c7e3c();
  if (temp_v6 != 0xe) {
    if (temp_v6 == 7) {
      puVar8 = (unsigned short *)FUN_002c7e24();
      temp_v6 = FUN_0026264c(*puVar8);
      if (temp_v6 == 0) {
        temp_v1 = 1;
      }
    }
  }
  else {
    temp_v1 = 1;
  }
  efctSetSpeed();
  FUN_00164b5c(2,0x12,5,param_1,param_2,0xb3);
  FUN_00164b5c(2,0x12,0xb,param_1,param_2,0xb5);
  statusDownDrawIndicatorPairs(param_1,param_2);
  temp_v6 = 0;
  do {
    temp_v7 = temp_v2 + (temp_v4 + temp_v6) * 4;
    if (*(short *)(temp_v7 + 0x6e2) != 0) {
      temp_v8 = asdTMTexTableEntryAt(0x12,temp_v6 + 0x44c);
      temp_v9 = asdTMTexTableEntryAt(0x12,1099);
      if (temp_v1) {
        textFormatBuffer(temp_v15,&LAB_003d3efc);
        VectorSignedToFloat((int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v9 + 10) + param_2,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v9 + 8) + param_1,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        textDrawString(2,0xff,temp_v15,(int)*(short *)(temp_v9 + 8));
      }
      else {
        temp_v10 = (unsigned int)*(unsigned short *)(temp_v7 + 0x6e2);
        dataTable0cFindByKey();
        if (temp_v10 != 0) {
          VectorSignedToFloat((int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v9 + 10) + param_2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v9 + 8) + param_1,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          textDrawString(2,0xff,temp_v10,(int)*(short *)(temp_v8 + 8));
        }
      }
      temp_v9 = asdTMTexTableEntryAt(0x12,0x449);
      if (temp_v1) {
        temp_v0 = *(short *)(temp_v9 + 10);
        temp_v9 = (int)*(short *)(temp_v9 + 8) + (int)*(short *)(temp_v8 + 8);
        temp_v11 = 0;
      }
      else {
        temp_v0 = *(short *)(temp_v9 + 10);
        temp_v9 = (int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v9 + 8);
        temp_v11 = (int)*(short *)(temp_v7 + 0x6e0);
      }
      FUN_0018152c(temp_v11,temp_v9 + param_1,(int)*(short *)(temp_v8 + 10) + (int)temp_v0 + param_2,0xb5,
                   0);
      temp_v9 = asdTMTexTableEntryAt(0x12,0x44a);
      FUN_0035bd4c(*(unsigned short *)(temp_v7 + 0x6e2),
                   (int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v9 + 8) + param_1,
                   (int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v9 + 10) + param_2,0xb5);
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 0xb);
  if ((*(int *)(temp_v2 + 0x518) == 0x14) &&
     (temp_v4 = temp_v2 + (temp_v5 + temp_v4) * 4, *(short *)(temp_v4 + 0x6e2) != 0)) {
    temp_v6 = asdTMTexTableEntryAt(0x12,temp_v5 + 0x42c);
    efctSetSpeed();
    FUN_00164b5c(2,0x12,8,*(short *)(temp_v6 + 8) + param_1,*(short *)(temp_v6 + 10) + param_2,0xbf);
    efctSetSpeed();
    FUN_001835b4(2,0x12,0x41f,*(short *)(temp_v6 + 8) + param_1,*(short *)(temp_v6 + 10) + param_2,0xc4)
    ;
    temp_v5 = *(int *)(temp_v2 + 0x530);
    temp_v12 = 0x420;
    temp_v13 = temp_v5 == 0;
    if (temp_v13) {
      temp_v5 = *(int *)(temp_v2 + 0x534);
    }
    if (temp_v13 && temp_v5 == 0) {
      temp_v5 = *(int *)(temp_v2 + 0x538);
      temp_v13 = temp_v5 == 0;
      if (temp_v13) {
        temp_v5 = *(int *)(temp_v2 + 0x53c);
      }
      temp_v14 = temp_v13 && temp_v5 == 0;
      if (temp_v13 && temp_v5 == 0) {
        temp_v14 = *(int *)(temp_v2 + 0x540) == 0;
      }
      if ((temp_v14) && (-1 < *(int *)(temp_v2 + 0x52c))) {
        temp_v12 = 0x421;
      }
    }
    FUN_001835b4(2,0x12,temp_v12,*(short *)(temp_v6 + 8) + param_1,*(short *)(temp_v6 + 10) + param_2,0xc4
                );
    FUN_001835b4(2,0x12,0x457,*(short *)(temp_v6 + 8) + param_1,*(short *)(temp_v6 + 10) + param_2,0xc4)
    ;
    temp_v7 = asdTMTexTableEntryAt(0x12,0x420);
    temp_v5 = g_renderCtx;
    piVar15 = (int *)(g_renderCtx + 0x1318);
    temp_v8 = piVar15[*piVar15 + 2];
    piVar15[*piVar15 + 2] = 3;
    if (*(char *)(temp_v5 + 0x1330) != '\0' || temp_v8 != 3) {
      (**(romwright_code **)(temp_v5 + 0x1334))();
      *(unsigned char *)(temp_v5 + 0x1330) = 0;
    }
    FUN_0035ae58((int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v7 + 8) + param_1,
                 (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v7 + 10) + param_2,
                 (int)**(short **)(temp_v7 + 0xc),(int)(*(short **)(temp_v7 + 0xc))[1],1);
    temp_v5 = vec2GetYInt(temp_v2 + 0x1cc);
    temp_v0 = *(short *)(temp_v6 + 10);
    temp_v7 = vec2GetXInt(reinterpret_cast<const void *>(temp_v2 + 0x1cc));
    FUN_001835b4(2,0x12,0x422,temp_v7 + param_1 + (int)*(short *)(temp_v6 + 8),
                 temp_v5 + param_2 + (int)temp_v0,0xc9);
    temp_v5 = g_renderCtx;
    piVar15 = (int *)(g_renderCtx + 0x1318);
    temp_v7 = piVar15[*piVar15 + 2];
    piVar15[*piVar15 + 2] = 0;
    if (*(char *)(temp_v5 + 0x1330) != '\0' || temp_v7 != 0) {
      (**(romwright_code **)(temp_v5 + 0x1334))();
      *(unsigned char *)(temp_v5 + 0x1330) = 0;
    }
    temp_v5 = asdTMTexTableEntryAt(0x12,0x458);
    if (temp_v1) {
      temp_v0 = *(short *)(temp_v5 + 10);
      temp_v5 = (int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v6 + 8);
      temp_v7 = 0;
    }
    else {
      temp_v0 = *(short *)(temp_v5 + 10);
      temp_v7 = (int)*(short *)(temp_v4 + 0x6e0);
      temp_v5 = (int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v5 + 8);
    }
    FUN_0018152c(temp_v7,temp_v5 + param_1,(int)*(short *)(temp_v6 + 10) + (int)temp_v0 + param_2,0xc9,0);
    temp_v5 = asdTMTexTableEntryAt(0x12,0x459);
    FUN_0035bd4c(*(unsigned short *)(temp_v4 + 0x6e2),
                 (int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v5 + 8) + param_1,
                 (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v6 + 10) + param_2,0xc9);
  }
  temp_v4 = objectApplyIfUnblocked(temp_v3);
  if (temp_v4 < 1) {
    FUN_00164b5c(2,0x12,0x1b,param_1,param_2,0xdd);
  }
  FUN_001835b4(2,0x12,0x5a1,param_1,param_2,0xbf);
  FUN_00344cd0(temp_v3,param_1,param_2,0x12,0x404,0x405,0x406,0x400,0x402,0x401,0x403,
               (int)*(short *)(temp_v2 + 0x58c),(int)*(short *)(temp_v2 + 0x58e),
               (int)*(short *)(temp_v2 + 0x590),0xc4,0);
  return;
}

} /* extern "C" */
