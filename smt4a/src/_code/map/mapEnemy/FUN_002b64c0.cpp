/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b64c0` (_code @ 0x2b64c0, 0x2c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_00178b04(...);
int FUN_003fe86c(...);
int FUN_0040aa6c(...);
int FUN_0040aad4(...);
int handleRegistryRegisterObject(...);
int FUN_004bc2dc(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
} param_3_stack;

extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern int g_mapEnemy; /* 0x5806d4 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
extern int modelListInit(void);
/* Supplied declaration required: handleRegistryRegisterObject. */
/* Supplied declaration required: FUN_004bc2dc. */
extern int FUN_004bc850(int index);


unsigned int FUN_002b64c0(int param_1,int param_2,int param_3)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int *piVar6;
  int *piVar7;
  unsigned char temp_v5 [56];
  int iStack_30;
  int temp_v6;
  int iStack_28;
  
  temp_v0 = 0;
  do {
    iStack_30 = param_1;
    temp_v6 = param_2;
    if (param_3 != 1) {
      if (param_3 == 2) {
        piVar6 = (int *)(g_mapEnemy + temp_v0 * 0x10 + 0x4b7c);
      }
      else if (param_3 == 3) {
        piVar6 = (int *)(g_mapEnemy + temp_v0 * 0x10 + 0x4a78);
      }
      else {
        if (param_3 != 4) {
          temp_v0 = temp_v0 + 1;
          if (temp_v0 >= 0x10) {
            return 0xffffffff;
          }
          continue;
        }
        piVar6 = (int *)(g_mapEnemy + temp_v0 * 0x10 + 0x4c80);
      }
      if (*piVar6 == -1) {
        *piVar6 = param_1;
        iStack_28 = param_3;
        temp_v0 = FUN_004bc2dc(param_2,0);
        piVar6[1] = temp_v0;
        temp_v0 = FUN_004bc850(temp_v0);
        piVar6[2] = temp_v0;
        temp_v4 = (unsigned int)*(unsigned char *)(temp_v0 + 0x5806e0);
        piVar6[3] = temp_v4;
        temp_v0 = g_mapEnemy + temp_v4 * 8;
        piVar6 = (int *)(temp_v0 + 0x3d8c);
        if (*piVar6 != 0) {
          return 1;
        }
        temp_v2 = 0x15;
        do {
          temp_v2 = temp_v2 - 1;
        } while (temp_v2 != 0);
        textFormatBuffer(temp_v5,"map/all/sym%03d.bam",(int)*(short *)(temp_v4 * 0x10 + 0x582204));
        temp_v3 = 0x20;
        FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapEnemy.cpp",0x375);
        temp_v2 = 0;
        if (temp_v3 != 0) {
          temp_v2 = modelListInit();
        }
        *piVar6 = temp_v2;
        FUN_0040aa6c();
        FUN_0040aad4(*piVar6,0);
        temp_v2 = *(int *)(*piVar6 + 4);
        FUN_003fe86c(temp_v2,0,2);
        handleRegistryRegisterObject(g_handleRegistry,temp_v2);
        *(unsigned int *)(temp_v2 + 4) = *(unsigned int *)(temp_v2 + 4) | 3;
        *(unsigned char *)(temp_v0 + 0x3d90) = 1;
        *(unsigned char *)(temp_v0 + 0x3d91) = 0;
        return 1;
      }
    }
    else {
      piVar6 = (int *)(g_mapEnemy + temp_v0 * 0xc4 + 0x3e34);
      if (*piVar6 == -1) {
        temp_v0 = 0;
        *piVar6 = param_1;
        iStack_28 = 1;
        do {
          temp_v2 = FUN_004bc2dc(temp_v6,0);
          piVar6[temp_v0 + 1] = temp_v2;
          temp_v2 = FUN_004bc850(temp_v2);
          piVar6[temp_v0 + 0x11] = temp_v2;
          temp_v4 = (unsigned int)*(unsigned char *)(temp_v2 + 0x5806e0);
          piVar6[temp_v0 + 0x21] = temp_v4;
          temp_v2 = g_mapEnemy + temp_v4 * 8;
          piVar7 = (int *)(temp_v2 + 0x3d8c);
          if (*piVar7 == 0) {
            temp_v3 = 0x15;
            do {
              temp_v3 = temp_v3 - 1;
            } while (temp_v3 != 0);
            textFormatBuffer(temp_v5,"map/all/sym%03d.bam",(int)*(short *)(temp_v4 * 0x10 + 0x582204));
            temp_v1 = 0x20;
            FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapEnemy.cpp",0x375);
            temp_v3 = 0;
            if (temp_v1 != 0) {
              temp_v3 = modelListInit();
            }
            *piVar7 = temp_v3;
            FUN_0040aa6c();
            FUN_0040aad4(*piVar7,0);
            temp_v3 = *(int *)(*piVar7 + 4);
            FUN_003fe86c(temp_v3,0,2);
            handleRegistryRegisterObject(g_handleRegistry,temp_v3);
            *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v3 + 4) | 3;
            *(unsigned char *)(temp_v2 + 0x3d90) = 1;
            *(unsigned char *)(temp_v2 + 0x3d91) = 0;
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < 0x10);
        return 1;
      }
    }
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x10) {
      return 0xffffffff;
    }
  } while( 1 );
}

} /* extern "C" */
