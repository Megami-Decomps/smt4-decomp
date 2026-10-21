/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ec6e0` (_code @ 0x1ec6e0, 0x268 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int cecProcessStart(void);
int FUN_002005a0(int *);
int cecProcessForward(int);
int FUN_002597c0(void);
int FUN_00262f78(void);
int btlTalkBustUpCreate(void);
int fileSlotLoad(int);
int FUN_00297468(unsigned char *, int *, int);
int asdTMTexTableLoadEntryAsync(int, int);
int threadSleepDuration(...);
int FUN_002bd2b4(...);
int rt_aeabi_memclr(...);
int asdTMTexTableLoadSprites(int);

typedef struct fn_001ec6e0_arg0 fn_001ec6e0_arg0;
struct fn_001ec6e0_arg0 {
    unsigned char pad_0x0[0xcec];
    int field_0xcec; /* +0xcec */
    int field_0xcf0; /* +0xcf0 */
    int field_0xcf4; /* +0xcf4 */
    int field_0xcf8; /* +0xcf8 */
    unsigned char pad_0xcfc[0x64];
    char field_0xd60; /* +0xd60 */
    unsigned char pad_0xd61[0x4];
    byte field_0xd65; /* +0xd65 */
    unsigned char pad_0xd66[0x2];
    int field_0xd68; /* +0xd68 */
};

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_1_stack;

extern unsigned char LAB_001ec94c; /* 0x1ec94c */
extern unsigned char LAB_001ec964; /* 0x1ec964 */
extern unsigned char LAB_001ec97c; /* 0x1ec97c */
extern unsigned char LAB_001ec990; /* 0x1ec990 */
extern int g_campCec; /* 0x43daa8 */

/* Supplied declaration required: cecProcessStart. */
/* Supplied declaration required: FUN_002005a0. */
extern int gameDataBlockTestFlag(unsigned int);
extern int cecQueryOptionalProcess(void);
/* Supplied declaration required: cecProcessForward. */
/* Supplied declaration required: FUN_002597c0. */
extern unsigned int gameDataBlocksGetFlagByteA(void);
extern unsigned int FUN_00259800(void);
/* Supplied declaration required: FUN_00262f78. */
/* Supplied declaration required: btlTalkBustUpCreate. */
/* Supplied declaration required: fileSlotLoad. */
/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: asdTMTexTableLoadEntryAsync. */
/* Supplied declaration required: threadSleepDuration. */
/* Supplied declaration required: FUN_002bd2b4. */
extern int rt_memcmp(unsigned char *, int, unsigned int);
/* Supplied declaration required: rt_aeabi_memclr. */
/* Supplied declaration required: asdTMTexTableLoadSprites. */


void FUN_001ec6e0(fn_001ec6e0_arg0 *param_1)

{
/* irregular: 13 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [20];
  int *temp_v6;
  unsigned int temp_v7;
  
  temp_v6 = &param_1->field_0xcf8;
  while (param_1->field_0xd65 == 0) {
    if (param_1->field_0xd68 != 0) {
      if ((param_1->field_0xd68 == 1) && (param_1->field_0xcec != 0)) {
        temp_v2 = param_1->field_0xcf0 != 0;
        temp_v1 = 0;
        if (temp_v2) {
          temp_v1 = param_1->field_0xcf4;
        }
        if ((temp_v2 && temp_v1 != 0) && (param_1->field_0xcf8 != 0)) {
          param_1->field_0xd68 = 2;
        }
      }
    }
    else {
      cecProcessStart();
      fileSlotLoad(0x25);
      btlTalkBustUpCreate();
      FUN_00297468(&LAB_001ec94c,&param_1->field_0xcec,0);
      FUN_00297468(&LAB_001ec964,&param_1->field_0xcf0,0);
      FUN_00297468(&LAB_001ec97c,&param_1->field_0xcf4,0);
      FUN_00297468(&LAB_001ec990,temp_v6,0);
      asdTMTexTableLoadSprites(0x39);
      asdTMTexTableLoadEntryAsync(0x39,0);
      temp_v4 = FUN_00259800();
      temp_v3 = gameDataBlocksGetFlagByteA();
      temp_v0 = FUN_00262f78();
      FUN_002bd2b4(g_campCec + 0x48,temp_v0,temp_v3,temp_v4);
      temp_v1 = FUN_00262f78();
      if (temp_v1 == 0) {
        rt_aeabi_memclr(g_campCec + 0x80,0x14);
      }
      temp_v1 = cecQueryOptionalProcess();
      param_1->field_0xd60 = (char)temp_v1;
      if ((temp_v1 != 0) && (temp_v1 = gameDataBlockTestFlag(0x20), temp_v1 != 0)) {
        FUN_002005a0(&temp_v3);
        temp_v1 = rt_memcmp(temp_v5,g_campCec + 0x80,0x14);
        if (temp_v1 != 0) {
          if (*(short *)(g_campCec + 0x90) != 0) {
            FUN_002597c0();
            cecProcessForward(g_campCec + 0x48);
          }
          else {
            temp_v7 = FUN_00259800();
            temp_v0 = gameDataBlocksGetFlagByteA();
            FUN_002bd2b4(g_campCec + 0x48,0,temp_v0,temp_v7);
            FUN_002597c0();
            cecProcessForward(g_campCec + 0x48);
            rt_aeabi_memclr(g_campCec + 0x80,0x14);
          }
        }
      }
      param_1->field_0xd68 = param_1->field_0xd68 + 1;
    }
    threadSleepDuration(10000000,0);
  }
  return;
}

} /* extern "C" */
