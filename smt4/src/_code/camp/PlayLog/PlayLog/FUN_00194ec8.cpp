/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00194ec8` (_code @ 0x194ec8, 0x240 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00297410(int);
int FUN_0029f848(...);
int FUN_002a5ed0(int, int);
int timerStart(int, int);
int FUN_002bd954(int, int, int, int, int);
int dataTableGetCount(...);
int dataTableGetEntries(void);
int FUN_002c312c(int, unsigned char *, int, int, int, int, int, int, int, int, int);
int memClear(void);
int asdMemAlloc(int, int, int, int, int);
int asdTMTexTableLoadSprites(int);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(int);

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern unsigned char DAT_00402d04; /* 0x402d04 */
extern int g_playLog; /* 0x43dd08 */

extern int FUN_00290794(unsigned short);
extern int FUN_002907a8(void);
/* Supplied declaration required: FUN_00297410. */
/* Supplied declaration required: FUN_0029f848. */
/* Supplied declaration required: FUN_002a5ed0. */
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: dataTableGetCount. */
/* Supplied declaration required: dataTableGetEntries. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c312c. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: asdTMTexTableLoadSprites. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_00194ec8(void)

{
/* irregular: 1 goto(s); 12 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned short *puVar8;
  
  if (g_playLog == 0) {
    temp_v0 = 0x100;
    asdMemAlloc(0x100,0x100,0,0x488,1);
    g_playLog = temp_v0;
  }
  temp_v0 = g_playLog;
  memClear();
  *(unsigned int *)(temp_v0 + 0x344) = 0;
  asdTMTexTableLoadSprites(0x30);
  FUN_002a5ed0(0x30,0);
  FUN_00297410(0x37);
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(temp_v0);
  FUN_002c312c(temp_v0,&DAT_00402d04,0x18,0,0,0,0,0,0,0,0);
  temp_v4 = 0;
  do {
    temp_v6 = temp_v0 + temp_v4 * 0x8c;
    FUN_002bd954(temp_v6 + 0x20,0x30,0,temp_v0,1);
    timerStart(temp_v6 + 0x20,0);
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 5);
  temp_v6 = 0;
  temp_v5 = 0;
  temp_v1 = dataTableGet(0x37,0);
  dataTableGetEntries();
  temp_v4 = dataTableGetCount(temp_v1);
  if (temp_v4 != 0) {
    do {
      temp_v1 = dataTableGet(0x37,0);
      temp_v4 = dataTableGetEntries();
      temp_v2 = dataTableGetCount(temp_v1);
      if (temp_v5 >= temp_v2) {
        puVar8 = (unsigned short *)0x0;
LAB_001950d4:
        temp_v4 = FUN_00290794(*puVar8 & 0xff);
        temp_v3 = temp_v0 + temp_v5 * 4;
        *(int *)(temp_v3 + 0x35c) = temp_v4;
        if ((*puVar8 & 0xff) != 0x29) {
          if (*(int *)(temp_v0 + temp_v5 * 4 + 0x35c) != 0) {
            temp_v4 = temp_v6 * 2;
            temp_v6 = temp_v6 + 1;
            *(short *)(temp_v0 + temp_v4 + 0x424) = (short)temp_v5;
          }
        }
        else if (temp_v4 != 0) {
          temp_v4 = temp_v4 - 1;
          *(int *)(temp_v3 + 0x35c) = temp_v4;
          if (*(int *)(temp_v0 + temp_v5 * 4 + 0x35c) != 0) {
            temp_v4 = temp_v6 * 2;
            temp_v6 = temp_v6 + 1;
            *(short *)(temp_v0 + temp_v4 + 0x424) = (short)temp_v5;
          }
        }
      }
      else {
        puVar8 = (unsigned short *)(temp_v4 + temp_v5 * 0x40);
        if ((puVar8 == (unsigned short *)0x0) || (-1 < (short)*puVar8)) goto LAB_001950d4;
        temp_v4 = FUN_002907a8();
        temp_v3 = temp_v0 + temp_v5 * 4;
        *(int *)(temp_v3 + 0x35c) = temp_v4;
        if (*(int *)(temp_v0 + temp_v5 * 4 + 0x35c) != 0) {
          temp_v4 = temp_v6 * 2;
          temp_v6 = temp_v6 + 1;
          *(short *)(temp_v0 + temp_v4 + 0x424) = (short)temp_v5;
        }
      }
      temp_v5 = temp_v5 + 1;
      temp_v1 = dataTableGet(0x37,0);
      dataTableGetEntries();
      temp_v2 = dataTableGetCount(temp_v1);
    } while (temp_v5 < temp_v2);
  }
  FUN_0029f848(temp_v0 + 0x2dc,temp_v6,5,1,0,1);
  return;
}

} /* extern "C" */
