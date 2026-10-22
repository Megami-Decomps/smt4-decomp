/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00394508` (_code @ 0x394508, 0x1a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int mapDepartSetTarget(unsigned int, unsigned int);
int sequenceRequestClearDeferred(void);
int gameJumpRequestClear(void);
int FUN_002a03d8(int, int);
int asdSequenceRequest(unsigned int, unsigned int *, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned char DAT_0049fc14; /* 0x49fc14 */
extern unsigned int DAT_0049fc18; /* 0x49fc18 */
extern unsigned int DAT_0049fc1c; /* 0x49fc1c */
extern unsigned int DAT_0049fc20; /* 0x49fc20 */
extern unsigned int DAT_0049fc24; /* 0x49fc24 */
extern unsigned int DAT_0049fc28; /* 0x49fc28 */
extern unsigned int DAT_0049fc2c; /* 0x49fc2c */
extern unsigned int DAT_0049fc30; /* 0x49fc30 */
extern unsigned int DAT_0049fc34; /* 0x49fc34 */

extern int FUN_002080e8(void);
/* Supplied declaration required: mapDepartSetTarget. */
/* Supplied declaration required: sequenceRequestClearDeferred. */
extern int gameStateIsFlagSetAndLarge(void);
extern int FUN_00287304(void);
/* Supplied declaration required: gameJumpRequestClear. */
extern char *gameJumpRequestGet(void);
/* Supplied declaration required: FUN_002a03d8. */
/* Supplied declaration required: asdSequenceRequest. */


void FUN_00394508(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

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
  pcVar2 = (char *)gameJumpRequestGet();
  temp_v0 = *pcVar2;
  if (temp_v0 != '\x01') {
    if (temp_v0 != '\x02') {
      if (temp_v0 != '\x03') {
        temp_v1 = gameStateIsFlagSetAndLarge();
        if (temp_v1 != 0) {
          temp_v3 = 4;
          temp_v4 = DAT_0049fc18 - 200;
          temp_v2 = 0xe;
        }
        else {
          temp_v1 = FUN_002080e8();
          if (temp_v1 == 0) {
            temp_v1 = FUN_00287304();
            if (temp_v1 != 0) {
              temp_v3 = 0;
              puVar5 = (unsigned int *)0x0;
              temp_v2 = 6;
              asdSequenceRequest(temp_v2,puVar5,temp_v3);
            }
            FUN_002a03d8(0,10);
            FUN_002a03d8(1,10);
            mapDepartSetTarget(0xffffffff,0xffffffff);
            gameJumpRequestClear();
            *(unsigned char *)(param_1 + 0x19) = 1;
            sequenceRequestClearDeferred();
            return;
          }
          temp_v3 = 0;
          puVar5 = (unsigned int *)0x0;
          temp_v2 = 8;
        }
      }
      else {
        DAT_0049fc14 = 1;
        DAT_0049fc18 = (unsigned int)(unsigned char)pcVar2[1];
        DAT_0049fc1c = 0;
        temp_v3 = 4;
        temp_v4 = (unsigned int)(unsigned char)pcVar2[1];
        temp_v2 = 0xe;
      }
    }
    else {
      DAT_0049fc14 = 1;
      DAT_0049fc18 = (unsigned char)pcVar2[1] + 100;
      DAT_0049fc1c = (unsigned int)(unsigned char)pcVar2[2];
      DAT_0049fc20 = 0xffffffff;
      DAT_0049fc24 = *(unsigned int *)(pcVar2 + 4);
      DAT_0049fc28 = *(unsigned int *)(pcVar2 + 8);
      DAT_0049fc2c = *(unsigned int *)(pcVar2 + 0xc);
      DAT_0049fc30 = *(unsigned int *)(pcVar2 + 0x10);
      DAT_0049fc34 = *(unsigned int *)(pcVar2 + 0x14);
      temp_v3 = 0;
      puVar5 = (unsigned int *)0x0;
      temp_v2 = 8;
    }
  }
  else {
    DAT_0049fc14 = 1;
    DAT_0049fc18 = (unsigned int)(unsigned char)pcVar2[1];
    DAT_0049fc1c = (unsigned int)(unsigned char)pcVar2[2];
    DAT_0049fc20 = (unsigned int)(unsigned char)pcVar2[3];
    DAT_0049fc24 = *(unsigned int *)(pcVar2 + 4);
    DAT_0049fc28 = *(unsigned int *)(pcVar2 + 8);
    DAT_0049fc2c = *(unsigned int *)(pcVar2 + 0xc);
    DAT_0049fc30 = *(unsigned int *)(pcVar2 + 0x10);
    DAT_0049fc34 = *(unsigned int *)(pcVar2 + 0x14);
    temp_v3 = 0;
    puVar5 = (unsigned int *)0x0;
    temp_v2 = 6;
  }
  asdSequenceRequest(temp_v2,puVar5,temp_v3);
  FUN_002a03d8(0,10);
  FUN_002a03d8(1,10);
  mapDepartSetTarget(0xffffffff,0xffffffff);
  gameJumpRequestClear();
  *(unsigned char *)(param_1 + 0x19) = 1;
  sequenceRequestClearDeferred();
  return;
}

} /* extern "C" */
