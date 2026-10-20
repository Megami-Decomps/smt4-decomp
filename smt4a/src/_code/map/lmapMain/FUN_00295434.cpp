/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00295434` (_code @ 0x295434, 0x2a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameFlagIsSet(int);
int gameFlagSetValue(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int *g_popupState; /* 0x58104c */
extern char s_I009034_00581050[8]; /* 0x581050 */
extern int DAT_00581090; /* 0x581090 */
extern char s_I009034_00581094[8]; /* 0x581094 */
extern int DAT_005810d4; /* 0x5810d4 */
extern char s_I009034_005810d8[8]; /* 0x5810d8 */
#ifndef ROMWRIGHT_STORAGE_s__V___2_00581118_15_1_DEFINED
#define ROMWRIGHT_STORAGE_s__V___2_00581118_15_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__V___2_00581118_15_1 {
    char whole[15];
    unsigned char u1[15];
    signed char s1[15];
};
typedef char romwright_storage_s__V___2_00581118_15_1_size_check[(sizeof(union romwright_storage_s__V___2_00581118_15_1) == 15) ? 1 : -1];
typedef char romwright_storage_s__V___2_00581118_15_1_u1_width_check[(sizeof(((union romwright_storage_s__V___2_00581118_15_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__V___2_00581118_15_1_s1_width_check[(sizeof(((union romwright_storage_s__V___2_00581118_15_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__V___2_00581118_15_1 s__V___2_00581118; /* 0x581118 */
extern char s_I012003a_00581160[9]; /* 0x581160 */
extern int DAT_005811a0; /* 0x5811a0 */
extern char s_I012003a_005811a4[9]; /* 0x5811a4 */
extern int DAT_005811e4; /* 0x5811e4 */
extern char s_I012003a_005811e8[9]; /* 0x5811e8 */
extern int DAT_00581228; /* 0x581228 */
extern char s_I012002_0058122c[8]; /* 0x58122c */
#ifndef ROMWRIGHT_STORAGE_s__V___0058126c_9_1_DEFINED
#define ROMWRIGHT_STORAGE_s__V___0058126c_9_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__V___0058126c_9_1 {
    char whole[9];
    unsigned char u1[9];
    signed char s1[9];
};
typedef char romwright_storage_s__V___0058126c_9_1_size_check[(sizeof(union romwright_storage_s__V___0058126c_9_1) == 9) ? 1 : -1];
typedef char romwright_storage_s__V___0058126c_9_1_u1_width_check[(sizeof(((union romwright_storage_s__V___0058126c_9_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__V___0058126c_9_1_s1_width_check[(sizeof(((union romwright_storage_s__V___0058126c_9_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__V___0058126c_9_1 s__V___0058126c; /* 0x58126c */
extern int g_gameState; /* 0x5f15fc */
extern int DAT_005f1af8; /* 0x5f1af8 */

extern int gameFlagsGetBlock(void);
/* Supplied declaration required: gameFlagIsSet. */
/* Supplied declaration required: gameFlagSetValue. */


void FUN_00295434(void)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  if (*g_popupState == 0) {
    if ((g_gameState != 0x1c) &&
       (!((g_gameState == 0x1d || g_gameState == 0x1e) || g_gameState == 0x1f))) {
      DAT_005f1af8 = DAT_005f1af8 - 1;
      if (DAT_005f1af8 < 1) {
        DAT_005f1af8 = 0;
      }
    }
    else {
      temp_v1 = gameFlagsGetBlock();
      temp_v2 = gameFlagIsSet(0x11f6);
      if ((temp_v2 == 0) && (DAT_005f1af8 >= 2)) {
        temp_v3 = gameFlagIsSet(0x4c9);
        temp_v4 = DAT_005811a0;
        temp_v2 = DAT_00581090;
        piVar1 = g_popupState;
        if (temp_v3 != 0) {
          g_popupState[7] = (int)s_I012003a_00581160;
          piVar1[5] = temp_v4;
          piVar1[6] = 0xad;
        }
        else {
          g_popupState[7] = (int)s_I009034_00581050;
          piVar1[5] = temp_v2;
          piVar1[6] = 0xbb;
        }
        piVar1 = g_popupState;
        g_popupState[1] = 0;
        *piVar1 = 5;
        gameFlagSetValue(0x11f6,1,1,temp_v1);
        return;
      }
      temp_v2 = gameFlagIsSet(0x11f4);
      if ((temp_v2 == 0) && (DAT_005f1af8 >= 4)) {
        if (*(char *)(temp_v1 + 0xd8e) == '\f') {
          temp_v4 = gameFlagIsSet(0x4c9);
          temp_v2 = DAT_00581228;
          temp_v0 = (*(unsigned int *)&s__V___2_00581118.u1[0]);
          piVar1 = g_popupState;
          if (temp_v4 != 0) {
            g_popupState[7] = (int)s_I012003a_005811e8;
            piVar1[5] = temp_v2;
            piVar1[6] = 0xad;
          }
          else {
            g_popupState[7] = (int)s_I009034_005810d8;
            piVar1[5] = temp_v0;
            piVar1[6] = 0xbb;
          }
          piVar1 = g_popupState;
          g_popupState[1] = 0;
          *piVar1 = 5;
          gameFlagSetValue(0x11f4,1,1,temp_v1);
          return;
        }
        gameFlagSetValue(0x11f4,1);
      }
      temp_v2 = gameFlagIsSet(0x11f7);
      if ((temp_v2 == 0) && (DAT_005f1af8 >= 6)) {
        temp_v3 = gameFlagIsSet(0x4c9);
        temp_v4 = DAT_005811e4;
        temp_v2 = DAT_005810d4;
        piVar1 = g_popupState;
        if (temp_v3 != 0) {
          g_popupState[7] = (int)s_I012003a_005811a4;
          piVar1[5] = temp_v4;
          piVar1[6] = 0xad;
        }
        else {
          g_popupState[7] = (int)s_I009034_00581094;
          piVar1[5] = temp_v2;
          piVar1[6] = 0xbb;
        }
        piVar1 = g_popupState;
        g_popupState[1] = 0;
        *piVar1 = 5;
        gameFlagSetValue(0x11f7,1,1,temp_v1);
        return;
      }
      temp_v4 = gameFlagIsSet(0x11f8);
      temp_v2 = temp_v4;
      if (temp_v4 == 0) {
        temp_v2 = g_gameState;
      }
      if (temp_v4 == 0 && temp_v2 == 0x1f) {
        gameFlagIsSet(0x4c9);
        temp_v0 = (*(unsigned int *)&s__V___0058126c.u1[0]);
        piVar1 = g_popupState;
        g_popupState[7] = (int)s_I012002_0058122c;
        piVar1[5] = temp_v0;
        piVar1[6] = 0xad;
        piVar1 = g_popupState;
        g_popupState[1] = 0;
        *piVar1 = 5;
        gameFlagSetValue(0x11f8,1,1,temp_v1);
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
