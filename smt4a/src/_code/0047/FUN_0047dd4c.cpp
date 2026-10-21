/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047dd4c` (_code @ 0x47dd4c, 0x1c8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdSequenceRequest(unsigned int, unsigned int *, unsigned int);
int mapPlaceSet(unsigned int, unsigned int);
int sysClearCachedFlag(void);
int FUN_003d54f8(int, int);
int FUN_004731d8(void);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned char DAT_005f1b70; /* 0x5f1b70 */
extern unsigned int DAT_005f1b74; /* 0x5f1b74 */
extern unsigned int DAT_005f1b78; /* 0x5f1b78 */
extern unsigned int DAT_005f1b7c; /* 0x5f1b7c */
extern unsigned int DAT_005f1b80; /* 0x5f1b80 */
extern unsigned int DAT_005f1b84; /* 0x5f1b84 */
extern unsigned int DAT_005f1b88; /* 0x5f1b88 */
extern unsigned int DAT_005f1b8c; /* 0x5f1b8c */
extern unsigned int DAT_005f1b90; /* 0x5f1b90 */

/* Supplied declaration required: asdSequenceRequest. */
extern int FUN_002cf854(void);
extern int lmapMainGetUnk74(void);
extern int gameStateIsFlagSetAndLarge(void);
/* Supplied declaration required: mapPlaceSet. */
/* Supplied declaration required: sysClearCachedFlag. */
/* Supplied declaration required: FUN_003d54f8. */
extern char *gameBlockGetArea27E98(void);
/* Supplied declaration required: FUN_004731d8. */


void FUN_0047dd4c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 unstructured edge(s); 5 native warning(s); review required */
  char temp_v0;
  char *pcVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  puVar5 = &temp_v4;
  temp_v4 = param_4;
  pcVar2 = (char *)gameBlockGetArea27E98();
  temp_v0 = *pcVar2;
  if (temp_v0 != '\x01') {
    if (temp_v0 != '\x02') {
      if (temp_v0 != '\x03') {
        temp_v1 = gameStateIsFlagSetAndLarge();
        if (temp_v1 != 0) {
          temp_v3 = 4;
          temp_v4 = DAT_005f1b74 - 200;
          temp_v2 = 0xe;
        }
        else {
          temp_v1 = FUN_002cf854();
          if (temp_v1 == 0) {
            temp_v1 = lmapMainGetUnk74();
            if (temp_v1 != 0) {
              temp_v3 = 0;
              puVar5 = (unsigned int *)0x0;
              temp_v2 = 6;
              asdSequenceRequest(temp_v2,puVar5,temp_v3);
            }
            FUN_003d54f8(0,10);
            FUN_003d54f8(1,10);
            mapPlaceSet(0xffffffff,0xffffffff);
            FUN_004731d8();
            *(unsigned char *)(param_1 + 0x19) = 1;
            sysClearCachedFlag();
            return;
          }
          temp_v3 = 0;
          puVar5 = (unsigned int *)0x0;
          temp_v2 = 8;
        }
      }
      else {
        DAT_005f1b70 = 1;
        DAT_005f1b74 = (unsigned int)(unsigned char)pcVar2[1];
        DAT_005f1b78 = 0;
        temp_v4 = (unsigned int)(unsigned char)pcVar2[1];
        temp_v3 = 4;
        temp_v2 = 0xe;
      }
    }
    else {
      DAT_005f1b70 = 1;
      DAT_005f1b74 = (unsigned char)pcVar2[1] + 100;
      DAT_005f1b78 = (unsigned int)(unsigned char)pcVar2[2];
      DAT_005f1b7c = 0xffffffff;
      DAT_005f1b80 = *(unsigned int *)(pcVar2 + 4);
      DAT_005f1b84 = *(unsigned int *)(pcVar2 + 8);
      DAT_005f1b88 = *(unsigned int *)(pcVar2 + 0xc);
      DAT_005f1b8c = *(unsigned int *)(pcVar2 + 0x10);
      DAT_005f1b90 = *(unsigned int *)(pcVar2 + 0x14);
      temp_v3 = 0;
      puVar5 = (unsigned int *)0x0;
      temp_v2 = 8;
    }
  }
  else {
    DAT_005f1b70 = 1;
    DAT_005f1b74 = (unsigned int)(unsigned char)pcVar2[1];
    DAT_005f1b78 = (unsigned int)(unsigned char)pcVar2[2];
    DAT_005f1b7c = (unsigned int)(unsigned char)pcVar2[3];
    DAT_005f1b80 = *(unsigned int *)(pcVar2 + 4);
    DAT_005f1b84 = *(unsigned int *)(pcVar2 + 8);
    DAT_005f1b88 = *(unsigned int *)(pcVar2 + 0xc);
    DAT_005f1b8c = *(unsigned int *)(pcVar2 + 0x10);
    DAT_005f1b90 = *(unsigned int *)(pcVar2 + 0x14);
    temp_v3 = 0;
    puVar5 = (unsigned int *)0x0;
    temp_v2 = 6;
  }
  asdSequenceRequest(temp_v2,puVar5,temp_v3);
  FUN_003d54f8(0,10);
  FUN_003d54f8(1,10);
  mapPlaceSet(0xffffffff,0xffffffff);
  FUN_004731d8();
  *(unsigned char *)(param_1 + 0x19) = 1;
  sysClearCachedFlag();
  return;
}

} /* extern "C" */
