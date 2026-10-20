/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eeb80` (_code @ 0x2eeb80, 0x30c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int mikadoSetCameraFlag80(void);
int FUN_00215a54(int);
int FUN_00273f90(void);
int FUN_00273fc0(void);
int FUN_00274798(void);
int FUN_00274fac(void);
int FUN_0027522c(void);
int FUN_00275364(void);
int FUN_00275714(void);
int FUN_002757a8(void);
int FUN_0027581c(void);
int FUN_002758d8(void);
int FUN_002759bc(void);
int FUN_00275a30(void);
int FUN_00275bc8(void);
int FUN_00275be8(int);
int FUN_00275dc4(void);
int FUN_0027653c(void);
int FUN_0027d490(unsigned int);
int FUN_0027dba4(void);
int FUN_00280ac0(int);
int FUN_0028a420(int);
int FUN_00294834(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0029ae60(unsigned int);

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern int g_mapDepartWork; /* 0x4474d8 */
extern signed char DAT_00447518; /* 0x447518 */
extern signed char DAT_00447519; /* 0x447519 */
extern signed char DAT_0044751a; /* 0x44751a */
extern int DAT_0044751c; /* 0x44751c */
extern int g_lmapScene; /* 0x447e88 */
extern unsigned int DAT_0049f920; /* 0x49f920 */
extern int DAT_0049f930; /* 0x49f930 */
extern unsigned char DAT_0049f93e; /* 0x49f93e */
extern signed char DAT_0049f93f; /* 0x49f93f */
extern unsigned char DAT_0049fb48; /* 0x49fb48 */

/* Supplied declaration required: mikadoSetCameraFlag80. */
extern int mikadoIsCameraNotState7(void);
/* Supplied declaration required: FUN_00215a54. */
/* Supplied declaration required: FUN_00273f90. */
/* Supplied declaration required: FUN_00273fc0. */
/* Supplied declaration required: FUN_00274798. */
/* Supplied declaration required: FUN_00274fac. */
/* Supplied declaration required: FUN_0027522c. */
/* Supplied declaration required: FUN_00275364. */
/* Supplied declaration required: FUN_00275714. */
/* Supplied declaration required: FUN_002757a8. */
/* Supplied declaration required: FUN_0027581c. */
/* Supplied declaration required: FUN_002758d8. */
/* Supplied declaration required: FUN_002759bc. */
/* Supplied declaration required: FUN_00275a30. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275be8. */
/* Supplied declaration required: FUN_00275dc4. */
/* Supplied declaration required: FUN_0027653c. */
/* Supplied declaration required: FUN_0027d490. */
/* Supplied declaration required: FUN_0027dba4. */
/* Supplied declaration required: FUN_00280ac0. */
/* Supplied declaration required: FUN_0028a420. */
/* Supplied declaration required: FUN_00294834. */
/* Supplied declaration required: FUN_0029ae60. */
extern int FUN_002b8694(void);
extern int FUN_0031b814(void);


unsigned int FUN_002eeb80(void)

{
/* irregular: 24 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  
  if ((DAT_0049f93f != '\0') && (DAT_0044751a == '\0')) {
    DAT_0044751a = '\x01';
    FUN_00215a54(1);
  }
  temp_v0 = g_lmapScene;
  if (DAT_0049f930 == 3) {
    if (DAT_00447518 == '\0') {
      mikadoSetCameraFlag80();
      DAT_00447518 = '\x01';
    }
    temp_v0 = mikadoIsCameraNotState7();
    if (temp_v0 == 0) {
      return 0;
    }
    DAT_00447518 = 0;
    if (DAT_0044751a != '\0') {
      FUN_00215a54(0);
      DAT_0044751a = '\0';
    }
    return 1;
  }
  if (DAT_00447518 == '\0') {
    DAT_0044751c = 0;
    DAT_00447518 = '\x01';
    DAT_00447519 = '\0';
  }
  if (DAT_00447519 != '\0') {
    DAT_0049f93f = '\0';
    FUN_00275be8(0);
    DAT_00447519 = '\0';
    DAT_00447518 = 0;
    if (DAT_0044751a != '\0') {
      FUN_00215a54(0);
      DAT_0044751a = '\0';
    }
    return 1;
  }
  if (DAT_0044751c != 0) {
    if (DAT_0044751c == 10) {
      DAT_0049fb48 = 1;
      FUN_0027dba4();
      FUN_00275dc4();
      FUN_00275be8(1);
      FUN_00275bc8();
    }
    if (DAT_0044751c == 0xb) {
      DAT_0049f93e = 1;
      *(unsigned char *)(g_mapDepartWork + 10) = 0;
      FUN_00275a30();
      FUN_0027dba4();
    }
    if (0x13 >= DAT_0044751c) {
      DAT_0044751c = DAT_0044751c + 1;
    }
  }
  else {
    puVar3 = (unsigned int *)(g_lmapScene + 0x20);
    temp_v1 = *(unsigned int *)(g_lmapScene + 0x24);
    *(unsigned int *)(g_lmapScene + 0x28) = *(unsigned int *)(g_lmapScene + 0x1c);
    *(unsigned int *)(temp_v0 + 0x2c) = *puVar3;
    *(unsigned int *)(temp_v0 + 0x30) = temp_v1;
    DAT_0044751c = DAT_0044751c + 1;
  }
  if (DAT_0044751c < 100) {
    if ((DAT_0044751c >= 0xd) && (temp_v0 = FUN_0031b814(), temp_v0 != 0)) {
      FUN_002759bc();
      FUN_002758d8();
      FUN_0027581c();
      FUN_0028a420(0);
      FUN_00294834(200,200,200,0x82,0x82,0x82,0x1e,0x1e,0x1e,0x96,0x96,0x96);
      DAT_0044751c = 100;
      DAT_0049f93f = '\x01';
      FUN_0027653c();
    }
  }
  else {
    temp_v0 = FUN_002b8694();
    if (temp_v0 == 0) {
      DAT_0049fb48 = 0;
      FUN_00280ac0(1);
      DAT_0049f93e = 0;
      FUN_002757a8();
      FUN_00275714();
      FUN_0027d490(DAT_0049f920);
      FUN_00275364();
      FUN_0027522c();
      FUN_00274fac();
      FUN_00274798();
      *(unsigned char *)(g_mapDepartWork + 10) = 1;
      FUN_00275a30();
      FUN_0029ae60(*(unsigned int *)(g_lmapScene + 0x194));
      FUN_00273fc0();
      FUN_00273f90();
      DAT_00447519 = 1;
      return 0;
    }
  }
  return 0;
}

} /* extern "C" */
