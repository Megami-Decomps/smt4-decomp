/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023f900` (_code @ 0x23f900, 0x330 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGetCount(unsigned int);
int FUN_0019de98(int, unsigned int);
int FUN_0032d0c8(...);
int unitRecordBuild(unsigned int, unsigned char [304]);
int FUN_003aeb18(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int g_partyPanel; /* 0x57f268 */

extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(void);
/* Supplied declaration required: FUN_0019de98. */
extern unsigned char *slotRecordFindById(unsigned int);
extern int btlMainGetUnk14(void);
extern unsigned int partyPanelGetSelectedDemonId(void);
extern int FUN_002cad18(void);
/* Supplied declaration required: FUN_0032d0c8. */
/* Supplied declaration required: unitRecordBuild. */
/* Supplied declaration required: FUN_003aeb18. */


void FUN_0023f900(void)

{
/* irregular: 5 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char *puVar7;
  unsigned char temp_v6;
  unsigned char temp_v7 [304];
  
  temp_v5 = g_partyPanel;
  temp_v1 = FUN_002cad18();
  temp_v2 = partyPanelGetSelectedDemonId();
  if (*(int *)(temp_v5 + 0x1218) != 1) {
    if (temp_v1 != 0) {
      FUN_003aeb18(0);
      return;
    }
  }
  else if ((temp_v1 != 0) && (temp_v1 = btlMainGetUnk14(), temp_v1 != 0)) {
    temp_v2 = (unsigned int)*(short *)(temp_v1 + 0x62);
  }
  if ((int)temp_v2 < 0) {
    if (*(char *)(temp_v5 + 0x9b4) == '\f' || *(char *)(temp_v5 + 0x9b4) == '\r') {
      temp_v3 = dataTableGet(0x39,0);
      temp_v1 = dataTableGetEntries();
      temp_v2 = dataTableGetCount(temp_v3);
      if (temp_v2 >= 7) {
        temp_v1 = temp_v1 + 0x229;
      }
      else {
        temp_v1 = 0;
      }
      FUN_0019de98(temp_v1,0xf4f4f4ff);
    }
    if (*(char *)(temp_v5 + 0x9b4) == '\x0e') {
      temp_v3 = dataTableGet(0x39,0);
      temp_v1 = dataTableGetEntries();
      temp_v2 = dataTableGetCount(temp_v3);
      if (temp_v2 >= 8) {
        temp_v1 = temp_v1 + 0x285;
      }
      else {
        temp_v1 = 0;
      }
      FUN_0019de98(temp_v1,0xf4f4f4ff);
    }
    if (*(char *)(temp_v5 + 0x9b4) == '\x04') {
      temp_v3 = dataTableGet(0x39,0);
      temp_v1 = dataTableGetEntries();
      temp_v2 = dataTableGetCount(temp_v3);
      if (temp_v2 >= 3) {
        temp_v1 = temp_v1 + 0xb9;
      }
      else {
        temp_v1 = 0;
      }
      FUN_0019de98(temp_v1,0xf4f4f4ff);
    }
    if (*(char *)(temp_v5 + 0x9b4) == '\x0f') {
      temp_v3 = dataTableGet(0x39,0);
      temp_v1 = dataTableGetEntries();
      temp_v2 = dataTableGetCount(temp_v3);
      if (temp_v2 >= 9) {
        temp_v1 = temp_v1 + 0x2e1;
      }
      else {
        temp_v1 = 0;
      }
      FUN_0019de98(temp_v1,0xf4f4f4ff);
    }
    if (*(char *)(temp_v5 + 0x9b4) == '\x02') {
      temp_v3 = dataTableGet(0x39,0);
      temp_v4 = dataTableGetEntries();
      temp_v1 = dataTableGetCount(temp_v3);
      if (temp_v1 != 0) {
        temp_v4 = temp_v4 + 1;
      }
      else {
        temp_v4 = 0;
      }
      FUN_0019de98(temp_v4,0xf4f4f4ff);
    }
    if (*(char *)(temp_v5 + 0x9b4) == '\x03') {
      temp_v3 = dataTableGet(0x39,0);
      temp_v1 = dataTableGetEntries();
      temp_v2 = dataTableGetCount(temp_v3);
      if (temp_v2 >= 2) {
        temp_v1 = temp_v1 + 0x5d;
      }
      else {
        temp_v1 = 0;
      }
      FUN_0019de98(temp_v1,0xf4f4f4ff);
    }
    if (*(char *)(temp_v5 + 0x9b4) == '\x11') {
      temp_v3 = dataTableGet(0x39,0);
      temp_v1 = dataTableGetEntries();
      temp_v2 = dataTableGetCount(temp_v3);
      if (temp_v2 >= 10) {
        temp_v1 = temp_v1 + 0x33d;
      }
      else {
        temp_v1 = 0;
      }
      FUN_0019de98(temp_v1,0xf4f4f4ff);
    }
    if (*(char *)(temp_v5 + 0x9b4) == '\x13') {
      temp_v3 = dataTableGet(0x39,0);
      temp_v5 = dataTableGetEntries();
      temp_v2 = dataTableGetCount(temp_v3);
      if (temp_v2 >= 0xb) {
        temp_v5 = temp_v5 + 0x399;
      }
      else {
        temp_v5 = 0;
      }
      FUN_0019de98(temp_v5,0xf4f4f4ff);
      return;
    }
  }
  else {
    puVar7 = (unsigned char *)slotRecordFindById(temp_v2 & 0xffff);
    if (puVar7 == (unsigned char *)0x0) {
      unitRecordBuild(temp_v2 & 0xffff,temp_v7);
      puVar7 = temp_v7;
    }
    if (*(int *)(temp_v5 + 0x1218) == 1) {
      temp_v0 = *(short *)(puVar7 + 0x62);
      temp_v6 = temp_v0 == 0x29d || temp_v0 == 0x29e;
      if (temp_v0 != 0x29d && temp_v0 != 0x29e) {
        temp_v6 = temp_v0 == 0x317;
      }
      if (temp_v6) {
        FUN_0032d0c8(0,0xb,temp_v2 & 0xffff);
        return;
      }
    }
    FUN_0032d0c8(0,1,temp_v2 & 0xffff);
  }
  return;
}

} /* extern "C" */
