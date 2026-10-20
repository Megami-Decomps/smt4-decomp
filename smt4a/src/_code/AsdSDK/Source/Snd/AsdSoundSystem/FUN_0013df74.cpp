/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013df74` (_code @ 0x13df74, 0x3a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00150784(void);
int FUN_00154710(...);
int FUN_0015e158(...);
int FUN_0015e198(...);
int FUN_0015e1ec(...);
int FUN_0015e314(unsigned char *, unsigned char *, unsigned int, unsigned int);
int FUN_0015e420(...);
int FUN_0015e8d0(unsigned char *, unsigned int, unsigned int);
int FUN_0015ea28(unsigned char *, unsigned char *);
int FUN_0015fea8(unsigned char *, unsigned char *, int);
int asdMemoryAlloc(...);
int asdMemoryAllocAligned(...);
int FUN_002e342c(unsigned char *, unsigned int);
int nw_snd_Sound3DManager_GetRequiredMemSize(...);
int nw_snd_SoundArchivePlayer_GetRequiredStreamBufferSize(unsigned char *, unsigned char *);
int nw_ut_internal_LinkListImpl_insert(...);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

extern unsigned char LAB_0013e318; /* 0x13e318 */
extern unsigned int DAT_005c4c20; /* 0x5c4c20 */
extern unsigned char DAT_0063e1e8; /* 0x63e1e8 */
extern unsigned char DAT_0063e324; /* 0x63e324 */
extern unsigned char DAT_0063e37c; /* 0x63e37c */
extern unsigned char DAT_0063e494; /* 0x63e494 */
extern unsigned int DAT_0063e6b8; /* 0x63e6b8 */
extern unsigned int DAT_0063e6bc; /* 0x63e6bc */
extern unsigned int DAT_0063e6c0; /* 0x63e6c0 */
extern unsigned int DAT_0063e6c4; /* 0x63e6c4 */
extern unsigned char DAT_0063e6cc; /* 0x63e6cc */
extern unsigned char DAT_0063ea3c; /* 0x63ea3c */
extern unsigned char DAT_0063ea48; /* 0x63ea48 */
extern unsigned char DAT_0063ea4c; /* 0x63ea4c */
extern unsigned int DAT_0063ea58; /* 0x63ea58 */
extern unsigned int DAT_0063ea60; /* 0x63ea60 */
extern unsigned int DAT_0063f440; /* 0x63f440 */
extern unsigned int DAT_0063f444; /* 0x63f444 */
extern unsigned int DAT_0063f448; /* 0x63f448 */
extern unsigned char DAT_0063f45c; /* 0x63f45c */
extern unsigned int DAT_0063f4a0; /* 0x63f4a0 */
extern unsigned int DAT_0063f4a4; /* 0x63f4a4 */
extern unsigned int DAT_0063f4a8; /* 0x63f4a8 */
extern unsigned int DAT_0063f4b0; /* 0x63f4b0 */
extern unsigned int DAT_0063f4b4; /* 0x63f4b4 */
extern unsigned int DAT_0063f4b8; /* 0x63f4b8 */
extern unsigned int DAT_0063f4bc; /* 0x63f4bc */
extern unsigned int DAT_0063f4c0; /* 0x63f4c0 */
extern signed char DAT_0063f4c4; /* 0x63f4c4 */
extern unsigned char DAT_0063f52c; /* 0x63f52c */
extern unsigned int g_asdSoundListener; /* 0x64c014 */
extern unsigned int DAT_0064c018; /* 0x64c018 */
extern unsigned int DAT_0064c01c; /* 0x64c01c */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00150784. */
/* Supplied declaration required: FUN_00154710. */
/* Supplied declaration required: FUN_0015e158. */
/* Supplied declaration required: FUN_0015e198. */
/* Supplied declaration required: FUN_0015e1ec. */
/* Supplied declaration required: FUN_0015e314. */
/* Supplied declaration required: FUN_0015e420. */
/* Supplied declaration required: FUN_0015e8d0. */
/* Supplied declaration required: FUN_0015ea28. */
extern int FUN_0015fe30(unsigned char *);
/* Supplied declaration required: FUN_0015fea8. */
/* Supplied declaration required: asdMemoryAlloc. */
/* Supplied declaration required: asdMemoryAllocAligned. */
/* Supplied declaration required: FUN_002e342c. */
extern int __cxa_guard_acquire(unsigned int *);
extern int rt_memcmp(unsigned char *, unsigned char *, unsigned int);
/* Supplied declaration required: nw_snd_Sound3DManager_GetRequiredMemSize. */
/* Supplied declaration required: nw_snd_SoundArchivePlayer_GetRequiredStreamBufferSize. */
extern unsigned int nw_snd_SoundDataManager_GetRequiredMemSize(unsigned char *, unsigned char *);
extern unsigned int nw_snd_internal_SoundArchiveFile_FileHeader_GetInfoBlockSize(unsigned char *);
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


unsigned int FUN_0013df74(unsigned int param_1,int param_2,unsigned char *param_3)

{
/* irregular: 16 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char *puVar4;
  unsigned int temp_v3;
  unsigned long long temp_v4;
  unsigned char *temp_v5;
  unsigned int temp_v6;
  unsigned char *temp_v7;
  unsigned int uStack_34;
  
  FUN_002e342c(&DAT_0063e6cc,param_1);
  temp_v0 = rt_memcmp(&DAT_0063e6cc,&LAB_0013e318,4);
  if (temp_v0 != 0) {
    DAT_0063f52c = 1;
  }
  temp_v0 = FUN_0015fe30(&DAT_0063e1e8);
  if (temp_v0 != 0) {
    FUN_00150784();
  }
  FUN_0015ea28(&DAT_0063e1e8,&DAT_0063e6cc);
  temp_v1 = nw_snd_internal_SoundArchiveFile_FileHeader_GetInfoBlockSize(&DAT_0063e324);
  temp_v2 = 0x10000;
  temp_v5 = (unsigned char *)0x1;
  asdMemoryAlloc(0x10000,0x100,0,temp_v1);
  DAT_0063e6b8 = temp_v2;
  FUN_0015e8d0(&DAT_0063e1e8,temp_v2,temp_v1);
  temp_v1 = nw_snd_SoundDataManager_GetRequiredMemSize(&DAT_0063e494,&DAT_0063e1e8);
  temp_v2 = 0x10000;
  temp_v5 = (unsigned char *)0x1;
  asdMemoryAlloc(0x10000,0x100,0,temp_v1);
  DAT_0063e6bc = temp_v2;
  FUN_0015e314(&DAT_0063e494,&DAT_0063e1e8,temp_v2,temp_v1);
  puVar4 = &DAT_0063e37c;
  FUN_0015fea8(&DAT_0063e37c,&DAT_0063e1e8,0);
  temp_v1 = 0x10000;
  temp_v6 = 1;
  temp_v5 = (unsigned char *)0x20;
  asdMemoryAllocAligned(0x10000,0x100,0,puVar4);
  DAT_0063e6c0 = temp_v1;
  if (param_3 == (unsigned char *)0x0) {
    param_3 = &DAT_0063e37c;
    nw_snd_SoundArchivePlayer_GetRequiredStreamBufferSize(&DAT_0063e37c,&DAT_0063e1e8);
  }
  temp_v1 = 0x10000;
  temp_v6 = 1;
  temp_v5 = (unsigned char *)0x20;
  asdMemoryAllocAligned(0x10000,0x100,0,param_3);
  uStack_34 = 0;
  temp_v5 = puVar4;
  temp_v6 = temp_v1;
  temp_v7 = param_3;
  DAT_0063e6c4 = temp_v1;
  FUN_0015e420(&DAT_0063e37c,&DAT_0063e1e8,&DAT_0063e494,DAT_0063e6c0);
  if (param_2 != 0) {
    puVar4 = &DAT_0063ea3c;
    DAT_0063f4c4 = '\x01';
    nw_snd_Sound3DManager_GetRequiredMemSize(&DAT_0063ea3c,&DAT_0063e1e8);
    temp_v1 = 0x10000;
    temp_v5 = (unsigned char *)0x1;
    asdMemoryAlloc(0x10000,0x100,0,puVar4);
    DAT_0063f4c0 = temp_v1;
    FUN_0015e1ec(&DAT_0063ea3c,&DAT_0063e1e8,temp_v1,puVar4);
    temp_v1 = 0;
    DAT_0063ea58 = 0x20;
    DAT_0063ea60 = 0x40b55555;
    temp_v5 = (unsigned char *)0x0;
    temp_v6 = 0;
    temp_v7 = (unsigned char *)0x0;
    temp_v2 = 0x3f800000;
    nw_ut_internal_LinkListImpl_insert(&DAT_0063ea48,&DAT_0063ea4c,&DAT_0063f45c);
    DAT_0063f4a0 = temp_v1;
    DAT_0063f4a4 = temp_v2;
    DAT_0063f4a8 = temp_v1;
    FUN_00154710(&temp_v5);
    temp_v4 = romwright_piece_4_4(0x40a00000,temp_v1);
    if (DAT_0063f4c4 != '\0') {
      DAT_0063f4b0 = 0x40a00000;
      DAT_0063f444 = 0x40a00000;
      DAT_0063f4b4 = 0x40000000;
      DAT_0063f448 = 0x40000000;
      DAT_0063f4b8 = 0x40a00000;
      DAT_0063f440 = 0x40a00000;
    }
    temp_v3 = 0;
    DAT_0063f4bc = 0;
    do {
      FUN_0015e158(temp_v3 * 0x88 + 0x63ea78,&DAT_0063e37c,&DAT_0063ea3c);
      if ((DAT_0063f4c4 != '\0') && (temp_v3 < 0x10)) {
        if (((DAT_005c4c20 & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&DAT_005c4c20), temp_v0 != 0)) {
          g_asdSoundListener = (unsigned int)temp_v4;
          DAT_0064c018 = g_asdSoundListener;
          DAT_0064c01c = g_asdSoundListener;
        }
        temp_v2 = DAT_0064c01c;
        temp_v1 = DAT_0064c018;
        temp_v0 = temp_v3 * 0xc;
        *(unsigned int *)(temp_v0 + 0x63f338) = g_asdSoundListener;
        *(unsigned int *)(temp_v0 + 0x63f33c) = temp_v1;
        *(unsigned int *)(temp_v0 + 0x63f340) = temp_v2;
        FUN_0015e198(temp_v3 * 0x88 + 0x63ea78,temp_v0 + 0x63f338);
      }
      temp_v3 = temp_v3 + 1;
    } while ((int)temp_v3 < 0x10);
  }
  return 1;
}

} /* extern "C" */
