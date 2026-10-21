/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b95a4` (_code @ 0x3b95a4, 0x24c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match3_NodeEnable.h"

extern "C" {

int FUN_0022afb0(unsigned char *, unsigned int);
int FUN_0022afc4(unsigned int, int, unsigned int);
int modelSetVisible(...);
int FUN_00234cd8(unsigned int, int, int);
void nodeOwnerSetEnabled(NodeEnableOwner* owner, int enabled);
int FUN_00234f5c(...);
int placeWinStartText(...);
int FUN_002a0400(unsigned int, unsigned int, unsigned int);
int textFormatBuffer(...);
int FUN_003ba754(int);
int dataTable33GetEntries(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_1_stack;

extern unsigned char LAB_003b97f0; /* 0x3b97f0 */
extern unsigned char LAB_003b97fc; /* 0x3b97fc */

/* Supplied declaration required: FUN_0022afb0. */
/* Supplied declaration required: FUN_0022afc4. */
/* Supplied declaration required: modelSetVisible. */
extern int FUN_0022b8c0(int);
/* Supplied declaration required: FUN_00234cd8. */
/* Supplied declaration required: nodeOwnerSetEnabled. */
/* Supplied declaration required: FUN_00234f5c. */
/* Supplied declaration required: placeWinStartText. */
/* Supplied declaration required: FUN_002a0400. */
extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned int);
/* Supplied declaration required: textFormatBuffer. */
extern int gameFlagIsSet(void);
extern unsigned int fileLoadSync(unsigned char *, int, unsigned int);
/* Supplied declaration required: FUN_003ba754. */
/* Supplied declaration required: dataTable33GetEntries. */


void FUN_003b95a4(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char *puVar6;
  int temp_v4;
  unsigned int *puVar8;
  unsigned char temp_v5 [128];
  unsigned char temp_v6 [128];
  unsigned char temp_v7 [4];
  
  temp_v0 = asdTMTexTableNodeIsLoaded(0x21,*(unsigned int *)(param_1 + 0x90));
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = *(int *)(param_1 + 0xd6c);
  }
  if ((temp_v0 != 0 && temp_v1 != 0) && (*(int *)(param_1 + 0xd70) != 0)) {
    FUN_003ba754(param_1);
    *(unsigned int *)(param_1 + 0x28) = 3;
    *(unsigned int *)(param_1 + 0x2c) = 0;
    if (*(char *)(*(int *)(param_1 + 0xd5c) + 0x40) != '0') {
      *(unsigned char *)(param_1 + 0xe58) = 1;
      textFormatBuffer(temp_v5,&LAB_003b97f0,*(int *)(param_1 + 0xd5c) + 0x40);
      puVar8 = (unsigned int *)(param_1 + 0xe5c);
      if (((*(short *)(*(int *)(param_1 + 0xd5c) + 100) != 0) &&
          (temp_v1 = gameFlagIsSet(), temp_v1 != 0)) ||
         ((*(short *)(*(int *)(param_1 + 0xd5c) + 0x66) != 0 && (temp_v1 = gameFlagIsSet(), temp_v1 != 0)
          ))) {
        textFormatBuffer(temp_v6,&LAB_003b97f0,*(int *)(param_1 + 0xd5c) + 0x68);
        FUN_00234f5c(*(unsigned int *)(param_1 + 0xe5c),temp_v5,temp_v6);
      }
      else {
        FUN_00234f5c(*(unsigned int *)(param_1 + 0xe5c),temp_v5,0);
      }
      temp_v1 = FUN_0022b8c0(param_1 + 0x9c);
      FUN_0022afc4(*(unsigned int *)(param_1 + 0xe5c),0,0xffffffff);
      FUN_00234cd8(*puVar8,(int)*(short *)(temp_v1 + 0x28),1);
      if (-1 < *(int *)(*(int *)(param_1 + 0xd5c) + 0x60)) {
        puVar6 = temp_v7;
        dataTable33GetEntries();
        if (puVar6 != (unsigned char *)0x0) {
          temp_v0 = 0;
          puVar3 = temp_v7;
          FUN_0022afb0(puVar3,*(unsigned int *)(*(int *)(param_1 + 0xd5c) + 0x60));
          if (0 < (int)puVar3) {
            do {
              textFormatBuffer(temp_v5,&LAB_003b97fc,puVar6);
              temp_v4 = param_1 + temp_v0 * 4;
              temp_v2 = fileLoadSync(temp_v5,temp_v4 + 0xe88,1);
              *(unsigned int *)(temp_v4 + 0xe60) = temp_v2;
              puVar6 = puVar6 + 0x20;
              temp_v0 = temp_v0 + 1;
              puVar3 = temp_v7;
              FUN_0022afb0(puVar3,*(unsigned int *)(*(int *)(param_1 + 0xd5c) + 0x60));
            } while (temp_v0 < (int)puVar3);
          }
          temp_v0 = param_1 + *(char *)(temp_v1 + 0x2b) * 4;
          FUN_002a0400(*(unsigned int *)(param_1 + 0xe5c),*(unsigned int *)(temp_v0 + 0xe60),
                       *(unsigned int *)(temp_v0 + 0xe88));
        }
      }
      if ((!(*(short *)(param_1 + 0x3c) == 4 || *(short *)(param_1 + 0x3c) == 3)) ||
         (!(*(short *)(temp_v1 + 0x28) == 0 || *(short *)(temp_v1 + 0x28) == 6))) {
        modelSetVisible(*(unsigned int *)(param_1 + 0xe5c),0);
        temp_v2 = *puVar8;
        temp_v3 = 1;
      }
      else {
        modelSetVisible(*(unsigned int *)(param_1 + 0xe5c),1);
        temp_v2 = *puVar8;
        temp_v3 = 0;
      }
      nodeOwnerSetEnabled((NodeEnableOwner*)temp_v2,temp_v3);
    }
    if (*(int *)(param_1 + 0xdb0) != 1) {
      placeWinStartText(*(int *)(param_1 + 0xd5c) + 2);
      return;
    }
  }
  return;
}

} /* extern "C" */
