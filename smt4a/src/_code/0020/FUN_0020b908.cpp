/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020b908` (_code @ 0x20b908, 0x43c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(...);
int FUN_00183f58(int, int, int, int);
int FUN_00184b90(...);
int FUN_0019de98(...);
int FUN_002bf4f4(void);
int FUN_002c8550(int);
int FUN_0032d0c8(...);
int FUN_0032ff20(unsigned int, unsigned char [304]);
int FUN_00333dc8(...);
int FUN_003343f0(...);
int FUN_00359b6c(int);
int FUN_0035ad50(unsigned int, unsigned char [304]);

extern int DAT_0057f290; /* 0x57f290 */

/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00183f58. */
/* Supplied declaration required: FUN_00184b90. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: FUN_0019de98. */
extern unsigned char *slotRecordFindById(unsigned int);
extern int FUN_002a4860(void);
extern int FUN_002a4894(int);
/* Supplied declaration required: FUN_002bf4f4. */
/* Supplied declaration required: FUN_002c8550. */
extern int FUN_0032cfc8(void);
/* Supplied declaration required: FUN_0032d0c8. */
/* Supplied declaration required: FUN_0032ff20. */
/* Supplied declaration required: FUN_00333dc8. */
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: FUN_00359b6c. */
/* Supplied declaration required: FUN_0035ad50. */


void FUN_0020b908(unsigned int param_1,int param_2)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6 [304];
  
  temp_v0 = DAT_0057f290;
  temp_v4 = 0;
  switch(param_1) {
  case 3:
    sysPlaySe();
    break;
  case 0xb:
    sysPlaySe(0x55);
    temp_v2 = dataTableGet(0x24,2);
    temp_v1 = dataTableGetEntries();
    temp_v3 = dataTableGetCount(temp_v2);
    if (temp_v3 >= 2) {
      temp_v4 = temp_v1 + 0x55;
    }
    FUN_0019de98(temp_v4,0xf4f4f4ff);
    break;
  case 0xd:
    sysPlaySe(0x56);
    temp_v4 = FUN_002a4860();
    temp_v1 = FUN_002a4894(temp_v0 + 0x67cc);
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v0 + (temp_v1 + temp_v4) * 2 + 0x6832);
    if (*(char *)(temp_v0 + 0x6830) == '\0') {
      temp_v4 = temp_v0 + temp_v3 * 8;
      FUN_0032ff20((*(unsigned int *)(temp_v4 + 0x13bc) & 0x1ffff) >> 2,temp_v6);
      FUN_0032d0c8(0,1,(*(unsigned int *)(temp_v4 + 0x13bc) & 0x1ffff) >> 2,temp_v6);
    }
    if (*(char *)(temp_v0 + 0x6830) == '\x01') {
      temp_v4 = temp_v0 + temp_v3 * 8;
      puVar2 = (unsigned char *)slotRecordFindById(*(unsigned int *)(temp_v4 + 0x13b8) & 0x7fff);
      if (puVar2 == (unsigned char *)0x0) {
        FUN_0035ad50(*(unsigned int *)(temp_v4 + 0x13b8) & 0x7fff,temp_v6);
        puVar2 = temp_v6;
      }
      FUN_0032d0c8(0,1,*(unsigned int *)(temp_v4 + 0x13b8) & 0x7fff,puVar2);
    }
    if (*(char *)(temp_v0 + 0x6830) == '\x02') {
      temp_v4 = temp_v0 + temp_v3 * 8;
      puVar2 = (unsigned char *)slotRecordFindById((*(unsigned int *)(temp_v4 + 0x13b8) & 0x3fffffff) >> 0xf);
      if (puVar2 == (unsigned char *)0x0) {
        FUN_0035ad50((*(unsigned int *)(temp_v4 + 0x13b8) & 0x3fffffff) >> 0xf,temp_v6);
        puVar2 = temp_v6;
      }
      FUN_0032d0c8(0,1,(*(unsigned int *)(temp_v4 + 0x13b8) & 0x3fffffff) >> 0xf,puVar2);
    }
    break;
  case 0xf:
    temp_v4 = *(int *)(DAT_0057f290 + 0x400);
    if ((temp_v4 != 0x10 && temp_v4 != 0x11) && temp_v4 != 0x12) {
      sysPlaySe(0x57);
      temp_v4 = FUN_002a4860();
      temp_v1 = FUN_002a4894(temp_v0 + 0x8e14);
      FUN_00359b6c(*(unsigned short *)(temp_v0 + (temp_v1 + temp_v4) * 2 + 0x8b70));
      FUN_002c8550(0xf);
    }
    break;
  case 0x13:
    sysPlaySe(0x5f);
    if (*(char *)(temp_v0 + 0x9071) != '\0') {
      FUN_00183f58(2,9,0x44,1);
      FUN_00183f58(3,0,0,1);
    }
    break;
  case 0x16:
  case 0x1d:
  case 0x1f:
    temp_v4 = FUN_0032cfc8();
    sysPlaySe(0xa0);
    FUN_003343f0(1);
    FUN_00333dc8(1);
    if (temp_v4 == 0) {
      FUN_002bf4f4();
    }
    break;
  case 0x1b:
    if (DAT_0057f290 != 0) {
      temp_v5 = *(int *)(DAT_0057f290 + 0x434) != 0x18;
      temp_v1 = DAT_0057f290;
      if (temp_v5) {
        temp_v1 = *(int *)(DAT_0057f290 + 0x488);
      }
      if (temp_v5 && temp_v1 != 0x18) {
        temp_v2 = 0x5b;
      }
      else {
        temp_v2 = 0xa0;
      }
    }
    else {
      temp_v2 = 0x5b;
    }
    sysPlaySe(temp_v2);
    temp_v2 = dataTableGet(0x24,2);
    temp_v1 = dataTableGetEntries();
    temp_v3 = dataTableGetCount(temp_v2);
    if (temp_v3 >= 2) {
      temp_v4 = temp_v1 + 0x55;
    }
    FUN_0019de98(temp_v4,0xf4f4f4ff);
    break;
  case 0x1c:
    sysPlaySe(0x5c);
    FUN_0019de98(0,0xf4f4f4ff);
    *(unsigned char *)(temp_v0 + 0x9070) = 1;
    break;
  case 0x24:
    *(unsigned int *)(DAT_0057f290 + 0x408) = *(unsigned int *)(DAT_0057f290 + 0x400);
    FUN_00184b90(temp_v0,3);
    FUN_003343f0(1);
    break;
  case 0x25:
  case 0x26:
  case 0x27:
    sysPlaySe();
  }
  if (param_2 != 0) {
    *(unsigned int *)(temp_v0 + 0x404) = *(unsigned int *)(temp_v0 + 0x400);
  }
  *(unsigned int *)(temp_v0 + 0x3fc) = 0;
  *(unsigned int *)(temp_v0 + 0x400) = param_1;
  return;
}

} /* extern "C" */
