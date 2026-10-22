/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003887cc` (_code @ 0x3887cc, 0x6c4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W4_Match6_DataSet.h"
#include "shard/W6_W6Match1_QueuedRequestToken.h"

extern "C" {

u32 FUN_0015dd58(QueuedRequestTokenState*, const RequestParameters*, QueuedRequestHandle);
int FUN_002348a8(...);
int FUN_0027eafc(...);
int legacyResourceIdRemap(...);
int byteIsAtLeast100(...);
int FUN_002b486c(...);
int FUN_002b4b88(...);
int FUN_002ba968(...);
int _ZN18WindowStatusResultC1Ej(...);
int FUN_002bcc60(...);
int FUN_002c526c(...);
int jyoucyuGetTableEntry(...);
int FUN_00385f74(...);
int FUN_00387b54(...);
int FUN_00388f3c(...);
int FUN_0038b4f0(...);
int FUN_0038b760(...);
int aocEntryBeginBaseLoad(...);
void dataEntryQueueSupportedFiles(DataEntry *entry);

/* stack frame of param_2: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_2_stack;

extern int destroyObj0055c6e4(...); /* 0x131968 */
extern int FUN_0038a048(...); /* 0x38a048 */
extern unsigned char LAB_003f6ef4; /* 0x3f6ef4 */
extern unsigned char LAB_003f6fa4; /* 0x3f6fa4 */
extern unsigned char LAB_003f7000; /* 0x3f7000 */
extern int g_aocMain; /* 0x432fc8 */

/* Supplied declaration required: FUN_0015dd58. */
extern int recordIsEnabledAndPresent(int);
/* Supplied declaration required: FUN_002348a8. */
/* Supplied declaration required: FUN_0027eafc. */
/* Supplied declaration required: legacyResourceIdRemap. */
/* Supplied declaration required: byteIsAtLeast100. */
extern int objGetFlagBit0(int);
extern int FUN_002ad1e0(int);
/* Supplied declaration required: FUN_002b486c. */
/* Supplied declaration required: FUN_002b4b88. */
/* Supplied declaration required: FUN_002ba968. */
/* Supplied declaration required: _ZN18WindowStatusResultC1Ej. */
extern int *_ZN18WindowStatusResultC1Ev(unsigned char *);
/* Supplied declaration required: FUN_002bcc60. */
/* Supplied declaration required: FUN_002c526c. */
/* Supplied declaration required: jyoucyuGetTableEntry. */
/* Supplied declaration required: FUN_00385f74. */
/* Supplied declaration required: FUN_00387b54. */
/* Supplied declaration required: FUN_00388f3c. */
/* Supplied declaration required: FUN_0038b4f0. */
/* Supplied declaration required: FUN_0038b760. */
/* Supplied declaration required: aocEntryBeginBaseLoad. */
extern int FUN_0038ba40(int);


void FUN_003887cc(unsigned char *param_1,int param_2)

{
/* irregular: 21 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  unsigned char *puVar4;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char **ppuVar9;
  int temp_v5;
  int *piVar11;
  int temp_v6;
  int temp_v7;
  unsigned char *temp_v8;
  int temp_v9;
  int temp_v10;
  int iStack_64;
  int iStack_60;
  int temp_v12;
  unsigned char *temp_v13;
  unsigned char *temp_v14;
  unsigned char *temp_v15;
  int iStack_38;
  int temp_v16;
  int iStack_30;
  int iStack_2c;
  
  ppuVar9 = &temp_v8;
  *param_1 = 1;
  piVar1 = (int *)_ZN18WindowStatusResultC1Ev(param_1 + 4);
  piVar1[2] = 0;
  piVar11 = piVar1 + -1;
  piVar1[3] = 0;
  piVar2 = &temp_v10;
  _ZN18WindowStatusResultC1Ej(piVar2,0);
  temp_v3 = piVar2[1];
  *piVar1 = *piVar2;
  piVar1[1] = temp_v3;
  temp_v3 = FUN_002ad1e0(g_aocMain + 0x98);
  if (temp_v3 != 0) {
    *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff;
    *(unsigned int *)(param_2 + 0x344) = 6;
    *(char *)piVar11 = -0x38;
  }
  else {
    temp_v3 = *(int *)(param_2 + 0x344);
    switch(temp_v3) {
    case 0:
      FUN_0027eafc();
      if (temp_v3 == 0) {
        jyoucyuGetTableEntry(0);
        *(char *)piVar11 = '\0';
        return;
      }
      if (*(int *)(param_2 + 0x318) != 0) {
        FUN_002b4b88(*(int *)(param_2 + 0x318),destroyObj0055c6e4);
        *(unsigned int *)(param_2 + 0x318) = 0;
      }
      FUN_00387b54(&temp_v8,param_2);
      temp_v3 = byteIsAtLeast100(&temp_v8);
      if (temp_v3 != 0) {
        temp_v12 = temp_v9;
        temp_v13 = (unsigned char *)temp_v10;
        temp_v3 = legacyResourceIdRemap(&temp_v12);
        temp_v6 = legacyResourceIdRemap(&temp_v12);
        if ((temp_v6 == -0x377ec779) || (temp_v3 == -0x377ec76c)) {
          *(char *)piVar11 = '\0';
          return;
        }
        *piVar11 = (int)temp_v8;
        *piVar1 = temp_v9;
        piVar1[1] = temp_v10;
        piVar1[2] = iStack_64;
        piVar1[3] = iStack_60;
        break;
      }
      FUN_00388f3c(&temp_v15,param_2);
      temp_v8 = temp_v15;
      temp_v9 = iStack_38;
      temp_v10 = temp_v16;
      iStack_64 = iStack_30;
      iStack_60 = iStack_2c;
      temp_v0 = byteIsAtLeast100(&temp_v8);
      puVar4 = temp_v8;
      temp_v3 = temp_v9;
      temp_v6 = temp_v10;
      temp_v5 = iStack_64;
      temp_v7 = iStack_60;
      if (temp_v0 == 0) {
        *(unsigned int *)(param_2 + 0x344) = 1;
        return;
      }
      *piVar11 = (int)puVar4;
      *piVar1 = temp_v3;
      piVar1[1] = temp_v6;
      piVar1[2] = temp_v5;
      piVar1[3] = temp_v7;
      break;
    case 1:
      if (*(int *)(param_2 + 0x44c) < *(int *)(param_2 + 0x448)) {
        *(int *)(param_2 + 0x44c) = *(int *)(param_2 + 0x44c) + 1;
        return;
      }
      temp_v4 = g_aocMain + 0x88;
      temp_v13 = &LAB_003f6ef4;
      temp_v12 = 4;
      temp_v14 = &LAB_003f7000;
      temp_v15 = &LAB_003f6fa4;
      temp_v8 = (unsigned char *)
                 (*(int *)(*(int *)(g_aocMain + 0x94) + 0xc) +
                 *(int *)(*(int *)(g_aocMain + 0x94) + 8));
      temp_v9 = 0x11;
      temp_v10 = -2;
      iStack_64 = 0;
      temp_v16 = param_2;
      FUN_002bcc60(temp_v4,&temp_v12,FUN_0038a048,&temp_v16);
      if ((temp_v4 & 0x7e00000) != 0x600000 && (int)temp_v4 < 0) {
        FUN_002c526c();
      }
      temp_v1 = 2;
      *(unsigned int *)(param_2 + 0x344) = temp_v1;
      return;
    case 2:
      temp_v3 = g_aocMain + 0x88;
      FUN_002348a8();
      if (temp_v3 == 0) {
        return;
      }
      temp_v3 = byteIsAtLeast100(param_2 + 0x31c);
      if (temp_v3 == 0) {
        temp_v3 = 0;
        if (temp_v3 < *(int *)(param_2 + 0x310)) {
          do {
            temp_v6 = objGetFlagBit0(*(int *)(param_2 + 0x318) + temp_v3 * 0x50 + 8);
            if (temp_v6 != 0) {
              aocEntryBeginBaseLoad(*(int *)(param_2 + 0x318) + temp_v3 * 0x50);
            }
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < *(int *)(param_2 + 0x310));
        }
        temp_v1 = 3;
        *(unsigned int *)(param_2 + 0x344) = temp_v1;
        return;
      }
      puVar4 = *(unsigned char **)(param_2 + 0x31c);
      temp_v3 = *(int *)(param_2 + 800);
      temp_v6 = *(int *)(param_2 + 0x324);
      temp_v5 = *(int *)(param_2 + 0x328);
      temp_v7 = *(int *)(param_2 + 0x32c);
      *piVar11 = (int)puVar4;
      *piVar1 = temp_v3;
      piVar1[1] = temp_v6;
      piVar1[2] = temp_v5;
      piVar1[3] = temp_v7;
      break;
    case 3:
      temp_v3 = *(int *)(param_2 + 0x310);
      temp_v6 = 0;
      if (0 < temp_v3) {
        do {
          temp_v3 = objGetFlagBit0(*(int *)(param_2 + 0x318) + temp_v6 * 0x50 + 8);
          if ((temp_v3 != 0) &&
             (temp_v3 = recordIsEnabledAndPresent(*(int *)(param_2 + 0x318) + temp_v6 * 0x50), temp_v3 == 0)) {
            return;
          }
          temp_v3 = *(int *)(param_2 + 0x310);
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < temp_v3);
      }
      temp_v6 = 0;
      if (0 < temp_v3) {
        do {
          temp_v3 = objGetFlagBit0(*(int *)(param_2 + 0x318) + temp_v6 * 0x50 + 8);
          if ((temp_v3 != 0) &&
             (temp_v3 = recordIsEnabledAndPresent(*(int *)(param_2 + 0x318) + temp_v6 * 0x50), temp_v3 != 0)) {
            FUN_0038b760(*(int *)(param_2 + 0x318) + temp_v6 * 0x50);
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < *(int *)(param_2 + 0x310));
      }
      *(unsigned int *)(param_2 + 0x354) = 0;
      *(unsigned int *)(param_2 + 0x344) = 4;
      *(unsigned int *)(param_2 + 0x358) = 0;
      return;
    case 4:
      if (*(int *)(param_2 + 0x310) != 0) {
        if (*(int *)(param_2 + 0x358) != 0) {
          if ((*(int *)(param_2 + 0x358) == 1) &&
             (temp_v3 = FUN_0038ba40(*(int *)(param_2 + 0x318) + *(int *)(param_2 + 0x354) * 0x50),
             temp_v3 != 0)) {
            *(int *)(param_2 + 0x354) = *(int *)(param_2 + 0x354) + 1;
            *(unsigned int *)(param_2 + 0x358) = 0;
          }
        }
        else if (*(int *)(param_2 + 0x354) < *(int *)(param_2 + 0x310)) {
          do {
            temp_v3 = objGetFlagBit0(*(int *)(param_2 + 0x318) + *(int *)(param_2 + 0x354) * 0x50 + 8);
            if ((temp_v3 != 0) &&
               (temp_v3 = recordIsEnabledAndPresent(*(int *)(param_2 + 0x318) + *(int *)(param_2 + 0x354) * 0x50),
               temp_v3 != 0)) {
              dataEntryQueueSupportedFiles(reinterpret_cast<DataEntry *>(*(int *)(param_2 + 0x318) + *(int *)(param_2 + 0x354) * 0x50));
              *(unsigned int *)(param_2 + 0x358) = 1;
              break;
            }
            temp_v3 = *(int *)(param_2 + 0x354) + 1;
            *(int *)(param_2 + 0x354) = temp_v3;
          } while (temp_v3 < *(int *)(param_2 + 0x310));
        }
        if (*(int *)(param_2 + 0x354) < *(int *)(param_2 + 0x310)) {
          return;
        }
      }
      *(unsigned int *)(param_2 + 0x344) = 5;
      return;
    case 5:
      FUN_00385f74(param_2);
      *(char *)piVar11 = '\0';
      *(unsigned int *)(param_2 + 0x344) = 6;
      return;
    default:
      return;
    }
  }
  *(unsigned int *)(param_2 + 0x310) = 0;
  *(unsigned int *)(param_2 + 0x314) = 0;
  *(unsigned int *)(param_2 + 0x350) = 0;
  if (*(int *)(param_2 + 0x318) != 0) {
    FUN_002b4b88(*(int *)(param_2 + 0x318),destroyObj0055c6e4);
    *(unsigned int *)(param_2 + 0x318) = 0;
  }
  FUN_002b486c(param_2);
  *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff;
  jyoucyuGetTableEntry(0);
  temp_v3 = g_aocMain;
  temp_v4 = *(unsigned int *)(g_aocMain + 0x754);
  if ((temp_v4 & 0x10) == 0) {
    *(unsigned int *)(g_aocMain + 0x754) = temp_v4 | 0x10;
    *(unsigned int *)(temp_v3 + 0x754) = temp_v4 | 0x50;
    *(unsigned int *)(param_2 + 0x344) = 6;
    temp_v3 = legacyResourceIdRemap(piVar1);
    if (temp_v3 != -0x36bec76f) {
      temp_v3 = FUN_002ad1e0(g_aocMain + 0x98);
      if (temp_v3 != 0) {
        *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff;
      }
      else if ((char)*piVar11 != -0x38) {
        {
          RequestParameters parameters = {{
            static_cast<u32>(*piVar11), static_cast<u32>(*piVar1),
            static_cast<u32>(piVar1[1]), static_cast<u32>(piVar1[2]),
            static_cast<u32>(piVar1[3])
          }};
          QueuedRequestHandle handle = {parameters.words[1], parameters.words[2]};
          temp_v3 = FUN_0015dd58(reinterpret_cast<QueuedRequestTokenState*>(g_aocMain),
                                &parameters, handle);
        }
        if (temp_v3 != 0) {
          return;
        }
        if ((char)*piVar11 != 'i') {
          if ((char)*piVar11 != 'j') {
            legacyResourceIdRemap(piVar1);
            temp_v2 = legacyResourceIdRemap(piVar1);
            temp_v4 = temp_v2 >> 0x1b;
            if ((temp_v2 & 0x80000000) != 0) {
              temp_v4 = temp_v4 - 0x20;
            }
            if (temp_v4 != 0xfffffffc) {
              temp_v2 = legacyResourceIdRemap(piVar1);
              temp_v4 = temp_v2 >> 0x1b;
              if ((temp_v2 & 0x80000000) != 0) {
                temp_v4 = temp_v4 - 0x20;
              }
              if (temp_v4 != 0xfffffffb) {
                temp_v3 = *(int *)(param_2 + 0x350) + 1;
                *(int *)(param_2 + 0x350) = temp_v3;
                if (temp_v3 >= 3) {
                  return;
                }
                *(unsigned int *)(param_2 + 0x344) = 0;
                *(char *)piVar11 = '\x01';
                piVar2 = &temp_v10;
                piVar1[2] = 0;
                _ZN18WindowStatusResultC1Ej();
                temp_v3 = piVar2[1];
                *piVar1 = *piVar2;
                piVar1[1] = temp_v3;
                return;
              }
            }
            temp_v12 = *piVar11;
            temp_v13 = (unsigned char *)*piVar1;
            temp_v14 = (unsigned char *)piVar1[1];
            temp_v15 = (unsigned char *)piVar1[2];
            iStack_38 = piVar1[3];
            ppuVar9 = (unsigned char **)&temp_v12;
          }
          else {
            temp_v8 = (unsigned char *)*piVar11;
            temp_v9 = *piVar1;
            temp_v10 = piVar1[1];
            iStack_64 = piVar1[2];
            iStack_60 = piVar1[3];
          }
          FUN_002ba968(g_aocMain,ppuVar9);
          return;
        }
        temp_v8 = (unsigned char *)*piVar11;
        temp_v9 = *piVar1;
        temp_v10 = piVar1[1];
        iStack_64 = piVar1[2];
        iStack_60 = piVar1[3];
        FUN_0038b4f0(g_aocMain,&temp_v8,piVar1[2]);
        return;
      }
      temp_v12 = *piVar11;
      temp_v13 = (unsigned char *)*piVar1;
      temp_v14 = (unsigned char *)piVar1[1];
      temp_v15 = (unsigned char *)piVar1[2];
      iStack_38 = piVar1[3];
      FUN_002ba968(g_aocMain,&temp_v12);
      return;
    }
  }
  return;
}

} /* extern "C" */
