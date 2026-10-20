/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e4d70` (_code @ 0x1e4d70, 0x7cc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002897f0(...);

int asdLoadFileSetUseRawPaths(int);
int FUN_00282bfc(int, int);
int FUN_00287728(int);
int FUN_0028971c(void);
int FUN_0028975c(...);
int FUN_00289880(void);
int FUN_002898e4(void);
int FUN_00289d74(int, unsigned int, int);
int FUN_00289de4(int, unsigned int, int);
int FUN_0028d6d0(void);
int FUN_0028dc68(int);
int FUN_002917b8(void);
int FUN_00291944(void);
int FUN_00297060(int, unsigned int);
int FUN_0029c3b0(int);
int scrScriptProcessDestroy(void);
int FUN_002b8838(int);
int FUN_002be624(unsigned char [128], unsigned char *, unsigned int, unsigned int);
int FUN_002bff50(void);
int FUN_002c09d0(void);
int asdMemFree(void);
int jobStop(unsigned int, int);
int FUN_002cb8d8(void);
int FUN_002e2028(void);
int bustupCutAnimStopJob(void);
int eventCommandStop(void);
int FUN_0031eb34(void);

extern unsigned char LAB_001e54bc; /* 0x1e54bc */
extern unsigned char LAB_001e54d4; /* 0x1e54d4 */
extern int g_aocMain; /* 0x432fc8 */
extern int g_aocSystem; /* 0x433158 */
extern unsigned int *DAT_0043e0d0; /* 0x43e0d0 */

extern int FUN_0019e0c0(unsigned int);
extern int FUN_001aba04(void);
/* Supplied declaration required: asdLoadFileSetUseRawPaths. */
extern int asdLoadFileGetUseRawPaths(void);
/* Supplied declaration required: FUN_00282bfc. */
/* Supplied declaration required: FUN_00287728. */
/* Supplied declaration required: FUN_0028971c. */
/* Supplied declaration required: FUN_0028975c. */
/* Supplied declaration required: FUN_002897f0. */
extern unsigned int FUN_00289858(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00289880. */
/* Supplied declaration required: FUN_002898e4. */
/* Supplied declaration required: FUN_00289d74. */
/* Supplied declaration required: FUN_00289de4. */
extern int FUN_00289e54(int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0028d6d0. */
/* Supplied declaration required: FUN_0028dc68. */
/* Supplied declaration required: FUN_002917b8. */
/* Supplied declaration required: FUN_00291944. */
extern int FUN_00296f4c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_0029c3b0. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_002b8838. */
extern int FUN_002b8cec(unsigned int);
/* Supplied declaration required: FUN_002be624. */
extern int FUN_002bfde4(unsigned int);
/* Supplied declaration required: FUN_002bff50. */
/* Supplied declaration required: FUN_002c09d0. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */
extern int jyoucyuGetTableEntry(unsigned int);
extern unsigned int FUN_002c5c04(unsigned char *);
/* Supplied declaration required: FUN_002cb8d8. */
extern int FUN_002d860c(void);
/* Supplied declaration required: FUN_002e2028. */
/* Supplied declaration required: bustupCutAnimStopJob. */
/* Supplied declaration required: eventCommandStop. */
/* Supplied declaration required: FUN_0031eb34. */


unsigned int FUN_001e4d70(void)

{
/* irregular: 28 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *puVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [128];
  unsigned char temp_v6 [128];
  
  puVar1 = DAT_0043e0d0;
  puVar5 = temp_v5;
  if ((*(unsigned int *)(g_aocMain + 0x754) & 4) != 0 || (*(unsigned int *)(g_aocMain + 0x754) & 8) != 0) {
    return 0;
  }
  temp_v0 = DAT_0043e0d0[2];
  if (temp_v0 == 3) {
    DAT_0043e0d0[3] = DAT_0043e0d0[3] + 1;
    temp_v0 = FUN_0019e0c0(puVar1[0xc]);
    if (temp_v0 != 2) {
      temp_v0 = FUN_001aba04();
      if (temp_v0 != 0) {
        return 0;
      }
      temp_v0 = FUN_002bfde4(2);
      if (temp_v0 == 0) {
        return 0;
      }
      if (*(char *)(puVar1 + 9) != '\0') {
        if (puVar1[7] == 0) {
          return 0;
        }
        FUN_002c09d0();
        return 0;
      }
    }
    else if ((*(char *)(puVar1 + 9) != '\0') && (puVar1[7] != 0)) {
      FUN_0028975c(puVar1[7],1);
    }
    FUN_00291944();
    FUN_002917b8();
    FUN_002bff50();
    FUN_0028971c();
    bustupCutAnimStopJob();
    FUN_002e2028();
    eventCommandStop();
    FUN_0031eb34();
    if (puVar1[0xc] != 0) {
      scrScriptProcessDestroy();
      puVar1[0xc] = 0;
    }
    if (puVar1[0xb] != 0) {
      asdMemFree();
      puVar1[0xb] = 0;
    }
    if (puVar1[0xd] != 0) {
      asdMemFree();
      puVar1[0xd] = 0;
    }
    puVar1[2] = 1;
    FUN_0028dc68(0);
    FUN_00287728(0);
    FUN_00287728(1);
    FUN_0029c3b0(0xf);
    FUN_0028975c(0x522,0,1);
    return 0;
  }
  if (temp_v0 >= 3) {
    if (temp_v0 == 0x58) {
      temp_v0 = FUN_002d860c();
      if (temp_v0 == 0) {
        return 0;
      }
      puVar1[2] = 1;
      return 0;
    }
    if (temp_v0 != 99) {
      return 0;
    }
    jobStop(*DAT_0043e0d0,0);
    *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xffffff8f;
    return 0;
  }
  if (temp_v0 == 0) {
    temp_v0 = DAT_0043e0d0[2];
    DAT_0043e0d0[3] = 0;
    *(unsigned char *)((int)puVar1 + 0x22) = 1;
    temp_v0 = temp_v0 + 1;
    puVar1[2] = temp_v0;
    return 0;
  }
  if (temp_v0 != 1) {
    if (temp_v0 != 2) {
      return 0;
    }
    if ((*(char *)(DAT_0043e0d0 + 8) != '\0') && (temp_v0 = asdLoadFileGetUseRawPaths(), temp_v0 == 0)) {
      asdLoadFileSetUseRawPaths(1);
      *(unsigned char *)((int)puVar1 + 0x21) = 1;
    }
    FUN_002be624(temp_v5,&LAB_001e54bc,puVar1[5],puVar1[5]);
    FUN_002be624(temp_v6,&LAB_001e54d4,puVar1[5],puVar1[5]);
    temp_v0 = FUN_00289e54(g_aocSystem,puVar1[5],0);
    if (temp_v0 != 0) {
      temp_v0 = g_aocSystem;
      FUN_00289de4(g_aocSystem,puVar1[5],0);
      puVar1[0xb] = temp_v0;
      temp_v0 = g_aocSystem;
      FUN_00289d74(g_aocSystem,puVar1[5],0);
      puVar1[0xd] = temp_v0;
      if (puVar1[0xb] == 0 || temp_v0 == 0) {
        puVar1[2] = 1;
        puVar1[3] = 0;
        return 0;
      }
    }
    else {
      FUN_002cb8d8();
      if (puVar5 == (unsigned char *)0x0) {
        puVar1[2] = 1;
        puVar1[3] = 0;
        return 0;
      }
      temp_v3 = FUN_002c5c04(temp_v5);
      puVar1[0xb] = temp_v3;
      temp_v3 = FUN_002c5c04(temp_v6);
      puVar1[0xd] = temp_v3;
    }
    FUN_002898e4();
    FUN_0028d6d0();
    FUN_00289880();
    FUN_002b8838(0x90);
    if (*(char *)((int)puVar1 + 0x21) != '\0') {
      asdLoadFileSetUseRawPaths(0);
      *(unsigned char *)((int)puVar1 + 0x21) = 0;
    }
    if (*(char *)((int)puVar1 + 0x23) != '\0') {
      FUN_00282bfc(0,0xff);
      FUN_00282bfc(1,0xff);
    }
    temp_v0 = puVar1[0xb];
    FUN_00297060(temp_v0,puVar1[0xd]);
    puVar1[0xc] = temp_v0;
    *(unsigned int *)(temp_v0 + 0x108) = 2;
    temp_v0 = FUN_00296f4c(puVar1[0xc],puVar1[6]);
    if (temp_v0 != 0) {
      puVar1[2] = puVar1[2] + 1;
      puVar1[3] = 0;
      puVar1[7] = 0;
      temp_v3 = FUN_00289858(puVar1[0xc],puVar1[6]);
      temp_v4 = puVar1[5];
      FUN_002897f0(temp_v4,temp_v3);
      puVar1[7] = temp_v4;
      return 0;
    }
    puVar1[2] = 1;
    puVar1[3] = 0;
    return 0;
  }
  temp_v0 = FUN_002b8cec(5);
  if (temp_v0 != 0) {
    temp_v0 = puVar1[4] - 1;
    if (temp_v0 >= 6) {
      temp_v0 = 0;
    }
    else if (temp_v0 < 0) {
      temp_v0 = 5;
    }
    else {
      temp_v0 = puVar1[4] - 1;
    }
    puVar1[4] = temp_v0;
  }
  temp_v0 = FUN_002b8cec(6);
  temp_v1 = puVar1[4];
  if (temp_v0 != 0) {
    if (temp_v1 + 1 >= 6) {
      temp_v1 = 0;
    }
    else if (temp_v1 + 1 < 0) {
      temp_v1 = 5;
    }
    else {
      temp_v1 = temp_v1 + 1;
    }
    puVar1[4] = temp_v1;
  }
  temp_v0 = 999;
  switch(temp_v1) {
  case 0:
    temp_v1 = FUN_002b8cec(4);
    if (temp_v1 != 0) {
      temp_v1 = puVar1[5] - 1;
      if (temp_v1 >= 1000) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = temp_v0;
        if (-1 < temp_v1) {
          temp_v2 = puVar1[5] - 1;
        }
      }
      puVar1[5] = temp_v2;
    }
    temp_v1 = FUN_002b8cec(3);
    if (temp_v1 != 0) {
      temp_v1 = puVar1[5] + 1;
      if (temp_v1 >= 1000) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = temp_v0;
        if (-1 < temp_v1) {
          temp_v2 = puVar1[5] + 1;
        }
      }
      puVar1[5] = temp_v2;
    }
    temp_v1 = FUN_002b8cec(8);
    if (temp_v1 != 0) {
      temp_v1 = puVar1[5] - 10;
      if (temp_v1 >= 1000) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = temp_v0;
        if (-1 < temp_v1) {
          temp_v2 = puVar1[5] - 10;
        }
      }
      puVar1[5] = temp_v2;
    }
    temp_v1 = FUN_002b8cec(7);
    if (temp_v1 != 0) {
      temp_v1 = puVar1[5] + 10;
      if (temp_v1 >= 1000) {
        temp_v0 = 0;
      }
      else if (-1 < temp_v1) {
        temp_v0 = temp_v1;
      }
      puVar1[5] = temp_v0;
    }
    temp_v0 = FUN_002bfde4(0);
    if (temp_v0 != 0) {
      puVar1[2] = 2;
    }
    break;
  case 1:
    temp_v1 = FUN_002b8cec(4);
    if (temp_v1 != 0) {
      temp_v1 = puVar1[6] - 1;
      if (temp_v1 >= 1000) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = temp_v0;
        if (-1 < temp_v1) {
          temp_v2 = puVar1[6] - 1;
        }
      }
      puVar1[6] = temp_v2;
    }
    temp_v1 = FUN_002b8cec(3);
    if (temp_v1 != 0) {
      temp_v1 = puVar1[6] + 1;
      if (temp_v1 >= 1000) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = temp_v0;
        if (-1 < temp_v1) {
          temp_v2 = puVar1[6] + 1;
        }
      }
      puVar1[6] = temp_v2;
    }
    temp_v1 = FUN_002b8cec(8);
    if (temp_v1 != 0) {
      temp_v1 = puVar1[6] - 10;
      if (temp_v1 >= 1000) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = temp_v0;
        if (-1 < temp_v1) {
          temp_v2 = puVar1[6] - 10;
        }
      }
      puVar1[6] = temp_v2;
    }
    temp_v1 = FUN_002b8cec(7);
    if (temp_v1 != 0) {
      temp_v1 = puVar1[6] + 10;
      if (temp_v1 >= 1000) {
        temp_v0 = 0;
      }
      else if (-1 < temp_v1) {
        temp_v0 = temp_v1;
      }
      puVar1[6] = temp_v0;
    }
    temp_v0 = FUN_002bfde4(0);
    if (temp_v0 != 0) {
      puVar1[2] = 2;
    }
    break;
  case 2:
    temp_v0 = FUN_002bfde4(0);
    if (temp_v0 != 0) {
      puVar1[2] = 0x58;
    }
    break;
  case 3:
    temp_v0 = jyoucyuGetTableEntry(2);
    if ((temp_v0 == 0) &&
       ((temp_v0 = FUN_002b8cec(4), temp_v0 != 0 || (temp_v0 = FUN_002b8cec(3), temp_v0 != 0)))) {
      *(unsigned char *)(puVar1 + 8) = *(char *)(puVar1 + 8) != '\x01';
    }
    break;
  case 4:
    temp_v0 = FUN_002b8cec(4);
    if ((temp_v0 != 0) || (temp_v0 = FUN_002b8cec(3), temp_v0 != 0)) {
      *(unsigned char *)((int)puVar1 + 0x23) = *(char *)((int)puVar1 + 0x23) != '\x01';
    }
    break;
  case 5:
    temp_v0 = FUN_002b8cec(4);
    if ((temp_v0 != 0) || (temp_v0 = FUN_002b8cec(3), temp_v0 != 0)) {
      *(unsigned char *)(puVar1 + 9) = *(char *)(puVar1 + 9) != '\x01';
    }
  }
  temp_v0 = FUN_002bfde4(2);
  if (temp_v0 != 0) {
    temp_v0 = 99;
    puVar1[2] = temp_v0;
  }
  return 0;
}

} /* extern "C" */
