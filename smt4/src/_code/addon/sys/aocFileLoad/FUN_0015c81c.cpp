/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015c81c` (_code @ 0x15c81c, 0x8ac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match1_QueuedRequestToken.h"

extern "C" {

int FUN_0015dc2c(...);
u32 _ZN7AocMain18submitTokenRequestE17RequestParameters19QueuedRequestHandle(QueuedRequestTokenState*, const RequestParameters*, QueuedRequestHandle);
u32 FUN_002a116c(const u32 *result);
u32 FUN_002a1200(const u32 *result);
int asdLoadFileAsyncNoCallback(...);
int _ZN9AocSystem17getPendingRequestEv(...);
int legacyResourceIdRemap(...);
int asdLoadFileAsync(...);
int refIsNullOrZero(...);
int _ZN7AocMain12queueRequestE17RequestParametersji(...);
int _ZN18WindowStatusResultC1Ej(...);
int FUN_002bb5a4(...);
int asdMemoryAllocAligned(...);
int asdMemFree(...);
int asdFatalError(...);
int jyoucyuGetTableEntry(...);
int FUN_002c618c(...);
int builtin_strncpy(...);

typedef int romwright_code(...);
/* stack frame of param_2: 21 slot(s), 84 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp28C; /* 0x28c: local_28c */
    unsigned int sp294; /* 0x294: local_294 */
    unsigned int sp29C; /* 0x29c: local_29c */
    unsigned int sp2A0; /* 0x2a0: local_2a0 */
    unsigned int sp2A4; /* 0x2a4: local_2a4 */
    unsigned int sp2A8; /* 0x2a8: local_2a8 */
    unsigned int sp2AC; /* 0x2ac: local_2ac */
    unsigned int sp2B0; /* 0x2b0: local_2b0 */
    unsigned int sp2B4; /* 0x2b4: local_2b4 */
    unsigned int sp2B8; /* 0x2b8: local_2b8 */
    unsigned int sp2BC; /* 0x2bc: local_2bc */
    unsigned int sp2C0; /* 0x2c0: local_2c0 */
} param_2_stack;

extern int g_aocMain; /* 0x432fc8 */
extern unsigned int g_aocSystem; /* 0x433158 */

/* Unsupported intrinsic, declaration required: builtin_strncpy (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_0015dc2c. */
/* Supplied declaration required: _ZN7AocMain18submitTokenRequestE17RequestParameters19QueuedRequestHandle. */
/* Supplied declaration required: FUN_002a116c. */
/* Supplied declaration required: FUN_002a1200. */
/* Supplied declaration required: asdLoadFileAsyncNoCallback. */
/* Supplied declaration required: _ZN9AocSystem17getPendingRequestEv. */
/* Supplied declaration required: legacyResourceIdRemap. */
extern int byteIsAtLeast100(unsigned int *);
extern int objGetFlagBit16(int);
extern int FUN_002ad1e0(int);
/* Supplied declaration required: asdLoadFileAsync. */
extern int FUN_002b90c8(int, unsigned int, unsigned int *);
/* Supplied declaration required: refIsNullOrZero. */
/* Supplied declaration required: _ZN7AocMain12queueRequestE17RequestParametersji. */
/* Supplied declaration required: _ZN18WindowStatusResultC1Ej. */
extern unsigned int _ZN18WindowStatusResultC1Ev(char *);
/* Supplied declaration required: FUN_002bb5a4. */
/* Supplied declaration required: asdMemoryAllocAligned. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdFatalError. */
/* Supplied declaration required: jyoucyuGetTableEntry. */
extern unsigned int asdLoadFileSync(int, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c618c. */
extern void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(unsigned int);
extern unsigned int nn_fs_detail_FileBase_TryGetSize(unsigned int, long long *);
extern unsigned int nn_fs_detail_FileBase_TryRead(unsigned int, int *, unsigned int, unsigned int);


/* WARNING: Type propagation algorithm not settling */

void FUN_0015c81c(int param_1,int param_2)

{
/* irregular: 2 goto(s); 19 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned int *puVar3;
  char *pcVar4;
  char *pcVar5;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar8;
  unsigned int *puVar9;
  char *pcVar10;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  int temp_v7;
  int temp_v8;
  char temp_v9 [4];
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  char temp_v16 [4];
  unsigned int uStack_298;
  unsigned int temp_v17;
  unsigned int uStack_290;
  int temp_v18;
  char acStack_288 [4];
  unsigned int uStack_284;
  unsigned int uStack_280;
  unsigned int uStack_27c;
  int temp_v19;
  int temp_v20;
  unsigned int temp_v21;
  int temp_v22;
  unsigned int uStack_5c;
  int temp_v23;
  char acStack_54 [4];
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int *temp_v24;
  char acStack_40 [8];
  int temp_v25;
  unsigned int temp_v26;
  int temp_v27;
  int iStack_28;
  
  pcVar5 = (char *)&temp_v7;
  pcVar10 = (char *)&temp_v7;
  (*(unsigned char *)((unsigned char *)&temp_v15 + 0)) = 1;
  temp_v27 = param_1;
  iStack_28 = param_2;
  puVar3 = (unsigned int *)_ZN18WindowStatusResultC1Ev(temp_v16);
  puVar3[2] = 0;
  puVar3[3] = 0;
  pcVar4 = temp_v9;
  _ZN18WindowStatusResultC1Ej(pcVar4,0);
  temp_v4 = *(unsigned int *)(pcVar4 + 4);
  *puVar3 = *(unsigned int *)pcVar4;
  puVar3[1] = temp_v4;
  (*(unsigned char *)((unsigned char *)&temp_v15 + 0)) = 1;
  temp_v17 = 0;
  _ZN18WindowStatusResultC1Ej(&temp_v7,0);
  (*(unsigned int *)temp_v16) = (unsigned int)*(char (*) [4])pcVar5;
  uStack_298 = *(unsigned int *)(pcVar5 + 4);
  (*(unsigned char *)((unsigned char *)&temp_v15 + 0)) = 100;
  temp_v1 = (char)temp_v15;
  (*(unsigned char *)((unsigned char *)&temp_v15 + 0)) = 100;
  temp_v0 = *(char *)(param_2 + 8);
  if (temp_v0 != '\0') {
    if (temp_v0 != '\x01') {
      if (temp_v0 != '\x02') {
        return;
      }
      *(unsigned char *)(param_2 + 8) = 3;
      return;
    }
    if ((*(unsigned int *)(param_2 + 4) & 2) != 0) {
      (*(unsigned char *)((unsigned char *)&temp_v15 + 0)) = temp_v1;
      if ((*(unsigned int *)(param_2 + 4) & 1) != 0) {
        if (*(int *)(param_2 + 0x1c) != 0) {
          temp_v7 = *(unsigned int *)(param_2 + 0x20);
          temp_v8 = *(unsigned int *)(param_2 + 0x2c);
          asdLoadFileAsync(param_2 + 0x70,*(unsigned int *)(param_2 + 0x18),
                       *(unsigned int *)(param_2 + 0x28));
        }
        else {
          asdLoadFileAsyncNoCallback(param_2 + 0x70,*(unsigned int *)(param_2 + 0x18),
                       *(unsigned int *)(param_2 + 0x28),*(unsigned int *)(param_2 + 0x2c));
        }
        *(unsigned char *)(param_2 + 8) = 2;
        return;
      }
      temp_v4 = asdLoadFileSync(param_2 + 0x70,param_2 + 0x24,*(unsigned int *)(param_2 + 0x28),
                            *(unsigned int *)(param_2 + 0x2c));
      *(unsigned int *)(param_2 + 0x14) = temp_v4;
      *(unsigned char *)(param_2 + 8) = 3;
      return;
    }
  }
  else {
    temp_v2 = objGetFlagBit16(g_aocMain);
    if (temp_v2 != 0) {
      temp_v2 = FUN_002ad1e0(g_aocMain + 0x98);
      if (temp_v2 != 0) {
        *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff;
        temp_v15 = romwright_piece_3_1((((unsigned int)(temp_v15) >> 8) & 0xffffffU),200);
      }
      else {
        FUN_0015dc2c(&temp_v23,g_aocSystem,param_2 + 0x30);
        temp_v15 = temp_v23;
        temp_v16[0] = acStack_54[0];
        temp_v16[1] = acStack_54[1];
        temp_v16[2] = acStack_54[2];
        temp_v16[3] = acStack_54[3];
        uStack_298 = uStack_50;
        temp_v17 = uStack_4c;
        uStack_290 = uStack_48;
        temp_v2 = byteIsAtLeast100((unsigned int *)&temp_v15);
        if (temp_v2 == 0) {
          temp_v10 = 0;
          temp_v11 = 0;
          temp_v12 = 0;
          temp_v13 = 0;
          temp_v14 = 0;
          temp_v2 = param_2 + 0x30;
          puVar3 = (unsigned int *)&temp_v18;
          builtin_strncpy(temp_v9,"h\fB",4);
          temp_v21 = 1;
          temp_v24 = &temp_v10;
          temp_v25 = 0;
          temp_v26 = 0;
          refIsNullOrZero(&temp_v25);
          while ((temp_v3 = FUN_002b90c8(temp_v2,0x105,(unsigned int *)&temp_v25), temp_v3 != 0 &&
                 (puVar8 = puVar3, FUN_002c618c(puVar3,temp_v2,temp_v3,&temp_v25),
                 puVar8 != (unsigned int *)0x0))) {
            puVar3 = (unsigned int *)((int)puVar3 + 2);
            temp_v2 = temp_v2 + temp_v3;
          }
          *(unsigned short *)puVar3 = 0;
          puVar9 = temp_v24;
          temp_v4 = temp_v21;
          temp_v24[3] = 0;
          puVar9[4] = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          FUN_002bb5a4(puVar9,&temp_v18,temp_v4);
          pcVar4 = acStack_40;
          _ZN18WindowStatusResultC1Ej(pcVar4,puVar9);
          (*(unsigned int *)temp_v16) = (unsigned int)*(char (*) [4])pcVar4;
          uStack_298 = *(unsigned int *)(pcVar4 + 4);
          temp_v2 = legacyResourceIdRemap(temp_v16);
          if (temp_v2 < 0) {
            if ((temp_v10 & 0xfffffffe) != 0) {
              if ((temp_v10 & 1) != 0) {
                asdFatalError();
              }
              nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(temp_v10 & 0xfffffffe);
              temp_v10 = 0;
            }
          }
          else {
            temp_v22 = 0;
            uStack_5c = 0;
            temp_v5 = nn_fs_detail_FileBase_TryGetSize((unsigned int)&temp_v10,(long long *)&temp_v22);
            pcVar4 = acStack_40;
            _ZN18WindowStatusResultC1Ej(pcVar4,temp_v5);
            (*(unsigned int *)temp_v16) = (unsigned int)*(char (*) [4])pcVar4;
            uStack_298 = *(unsigned int *)(pcVar4 + 4);
            temp_v2 = legacyResourceIdRemap(temp_v16);
            if (temp_v2 < 0) {
              if ((temp_v10 & 0xfffffffe) != 0) {
                if ((temp_v10 & 1) != 0) {
                  asdFatalError();
                }
                nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(temp_v10 & 0xfffffffe);
                temp_v10 = 0;
              }
            }
            else {
              *(unsigned int *)(param_2 + 0x24) = temp_v22;
              if (*(int *)(param_2 + 0x14) == 0) {
                temp_v2 = *(int *)(param_2 + 0x28);
                if (temp_v2 != 0x10) {
                  if (temp_v2 != 1) {
                    if (temp_v2 != 0x11) {
                      temp_v7 = *(unsigned int *)(param_2 + 0x2c);
                      temp_v8 = 1;
                      temp_v4 = 0x100;
                      asdMemoryAllocAligned(0x100,0x100,0,*(unsigned int *)(param_2 + 0x24));
                      *(unsigned int *)(param_2 + 0x14) = temp_v4;
                    }
                    else {
                      temp_v7 = *(unsigned int *)(param_2 + 0x2c);
                      temp_v8 = 0;
                      temp_v4 = 0x10000;
                      asdMemoryAllocAligned(0x10000,0x100,0,*(unsigned int *)(param_2 + 0x24));
                      *(unsigned int *)(param_2 + 0x14) = temp_v4;
                    }
                  }
                  else {
                    temp_v7 = *(unsigned int *)(param_2 + 0x2c);
                    temp_v8 = 1;
                    temp_v4 = 0x10000;
                    asdMemoryAllocAligned(0x10000,0x100,0,*(unsigned int *)(param_2 + 0x24));
                    *(unsigned int *)(param_2 + 0x14) = temp_v4;
                  }
                }
                else {
                  temp_v7 = *(unsigned int *)(param_2 + 0x2c);
                  temp_v8 = 0;
                  temp_v4 = 0x100;
                  asdMemoryAllocAligned(0x100,0x100,0,*(unsigned int *)(param_2 + 0x24));
                  *(unsigned int *)(param_2 + 0x14) = temp_v4;
                }
              }
              temp_v5 = nn_fs_detail_FileBase_TryRead
                                 ((unsigned int)&temp_v10,&temp_v20,*(unsigned int *)(param_2 + 0x14),
                                  *(unsigned int *)(param_2 + 0x24));
              pcVar4 = acStack_40;
              _ZN18WindowStatusResultC1Ej(pcVar4,temp_v5);
              (*(unsigned int *)temp_v16) = (unsigned int)*(char (*) [4])pcVar4;
              uStack_298 = *(unsigned int *)(pcVar4 + 4);
              if (temp_v20 == 0) {
                _ZN18WindowStatusResultC1Ej(&temp_v7,0xd9004586);
                (*(unsigned int *)temp_v16) = (unsigned int)*(char (*) [4])pcVar10;
                uStack_298 = *(unsigned int *)(pcVar10 + 4);
              }
              temp_v2 = legacyResourceIdRemap(temp_v16);
              if (temp_v2 < 0) {
                if ((temp_v10 & 0xfffffffe) != 0) {
                  if ((temp_v10 & 1) != 0) {
                    asdFatalError();
                  }
                  nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(temp_v10 & 0xfffffffe);
                  temp_v10 = 0;
                }
              }
              else {
                if ((temp_v10 & 0xfffffffe) != 0) {
                  if ((temp_v10 & 1) != 0) {
                    asdFatalError();
                  }
                  nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(temp_v10 & 0xfffffffe);
                  temp_v10 = 0;
                }
                if (*(char *)(temp_v27 + 0x450c) == '\x01') {
LAB_0015cdc8:
                  puVar3 = *(unsigned int **)(param_2 + 4);
                  temp_v6 = ((unsigned int)puVar3 & 1) != 0;
                  if (temp_v6) {
                    puVar3 = *(unsigned int **)(param_2 + 0x18);
                  }
                  if (temp_v6 && puVar3 != (unsigned int *)0x0) {
                    *puVar3 = *(unsigned int *)(param_2 + 0x14);
                  }
                  if (*(romwright_code **)(param_2 + 0x1c) != (romwright_code *)0x0) {
                    (**(romwright_code **)(param_2 + 0x1c))
                              (*(unsigned int *)(param_2 + 0x14),*(unsigned int *)(param_2 + 0x20),
                               *(unsigned int *)(param_2 + 0x24));
                  }
                  *(unsigned char *)(param_2 + 8) = 3;
                  if (*(int *)(param_2 + 0xb4) != 0) {
                    *(unsigned char *)(*(int *)(param_2 + 0xb4) + 0xd) = 1;
                    *(unsigned int *)(*(int *)(param_2 + 0xb4) + 8) = *(unsigned int *)(param_2 + 0x24);
                  }
                  if ((temp_v10 & 0xfffffffe) == 0) {
                    return;
                  }
                  if ((temp_v10 & 1) != 0) {
                    asdFatalError();
                  }
                  nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(temp_v10 & 0xfffffffe);
                  return;
                }
                _ZN9AocSystem17getPendingRequestEv(&temp_v18,g_aocSystem);
                temp_v15 = temp_v18;
                temp_v16[0] = acStack_288[0];
                temp_v16[1] = acStack_288[1];
                temp_v16[2] = acStack_288[2];
                temp_v16[3] = acStack_288[3];
                uStack_298 = uStack_284;
                temp_v17 = uStack_280;
                uStack_290 = uStack_27c;
                temp_v2 = byteIsAtLeast100((unsigned int *)&temp_v15);
                if (temp_v2 == 0) goto LAB_0015cdc8;
              }
            }
          }
          if ((temp_v10 & 0xfffffffe) != 0) {
            if ((temp_v10 & 1) != 0) {
              asdFatalError();
            }
            nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(temp_v10 & 0xfffffffe);
            temp_v10 = 0;
          }
        }
      }
      jyoucyuGetTableEntry(0);
      _ZN9AocSystem17getPendingRequestEv(&temp_v19,g_aocSystem);
      *(unsigned int *)(g_aocMain + 0x754) = (*(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff) | 0x10;
      if (*(int *)(param_2 + 0x14) != 0) {
        asdMemFree();
        *(unsigned int *)(param_2 + 0x14) = 0;
      }
      temp_v6 = 0;
      if (*(unsigned int **)(param_2 + 0x18) != (unsigned int *)0x0) {
        **(unsigned int **)(param_2 + 0x18) = 0;
      }
      temp_v2 = legacyResourceIdRemap(temp_v16);
      if (temp_v2 == -0x36bec76f) {
        jyoucyuGetTableEntry(0);
        return;
      }
      temp_v2 = FUN_002ad1e0(g_aocMain + 0x98);
      if (temp_v2 != 0) {
        *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff;
      }
      else if ((char)temp_v15 != -0x38) goto LAB_0015cfcc;
      jyoucyuGetTableEntry(0);
      *(unsigned char *)(param_2 + 8) = 1;
      temp_v15 = romwright_piece_3_1((((unsigned int)(temp_v15) >> 8) & 0xffffffU),200);
      temp_v8 = temp_v15;
      temp_v9[0] = temp_v16[0];
      temp_v9[1] = temp_v16[1];
      temp_v9[2] = temp_v16[2];
      temp_v9[3] = temp_v16[3];
      temp_v10 = uStack_298;
      temp_v11 = temp_v17;
      temp_v12 = uStack_290;
      _ZN7AocMain12queueRequestE17RequestParametersji(g_aocMain,&temp_v8);
      temp_v6 = 1;
LAB_0015cfcc:
      {
        RequestParameters parameters(
          static_cast<u32>(temp_v15), *(unsigned int*)temp_v16,
          uStack_298, temp_v17, uStack_290
        );
        QueuedRequestHandle handle = {parameters.word(1), parameters.word(2)};
        temp_v2 = _ZN7AocMain18submitTokenRequestE17RequestParameters19QueuedRequestHandle(reinterpret_cast<QueuedRequestTokenState*>(g_aocMain),
                              &parameters, handle);
      }
      if (temp_v2 != 0) {
        temp_v15 = romwright_piece_3_1((((unsigned int)(temp_v15) >> 8) & 0xffffffU),100);
        *(unsigned char *)(param_2 + 8) = 1;
      }
      else if (!temp_v6) {
        jyoucyuGetTableEntry();
      }
      if (FUN_002a1200(reinterpret_cast<const u32 *>(temp_v16)) == 0) {
        if (FUN_002a116c(reinterpret_cast<const u32 *>(temp_v16)) == 0) {
          jyoucyuGetTableEntry(0);
          temp_v15 = romwright_piece_3_1((((unsigned int)(temp_v15) >> 8) & 0xffffffU),100);
          *(unsigned char *)(param_2 + 8) = 1;
          legacyResourceIdRemap(temp_v16);
          return;
        }
      }
      temp_v15 = romwright_piece_3_1((((unsigned int)(temp_v15) >> 8) & 0xffffffU),100);
      *(unsigned char *)(param_2 + 8) = 1;
      temp_v5 = legacyResourceIdRemap(temp_v16);
      if ((temp_v5 & 0x80000000) != 0) {
        temp_v5 = (temp_v5 >> 0x1b) - 0x20;
      }
      else {
        temp_v5 = temp_v5 >> 0x1b;
      }
      if ((temp_v5 == 0xfffffffc) && (temp_v2 = legacyResourceIdRemap(temp_v16), temp_v2 < 0)) {
        asdFatalError();
      }
      temp_v5 = legacyResourceIdRemap(temp_v16);
      if ((temp_v5 & 0x80000000) != 0) {
        temp_v5 = (temp_v5 >> 0x1b) - 0x20;
      }
      else {
        temp_v5 = temp_v5 >> 0x1b;
      }
      if (temp_v5 != 0xfffffffb) {
        return;
      }
      temp_v2 = legacyResourceIdRemap(temp_v16);
      if (temp_v2 < 0) {
        asdFatalError();
      }
      return;
    }
    if ((*(unsigned int *)(param_2 + 4) & 2) != 0) {
      *(unsigned char *)(param_2 + 8) = 1;
      temp_v5 = *(unsigned int *)(g_aocMain + 0x754) | 0x20;
      *(unsigned int *)(g_aocMain + 0x754) = temp_v5;
      return;
    }
  }
  *(unsigned char *)(param_2 + 8) = 3;
  temp_v5 = *(unsigned int *)(g_aocMain + 0x754) | 0x40;
  *(unsigned int *)(g_aocMain + 0x754) = temp_v5;
  return;
}

} /* extern "C" */
