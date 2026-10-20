/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024d9c4` (_code @ 0x24d9c4, 0x910 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryAllocTracked(int, int, int, int, int);
int jobIsValid(unsigned int);
int FUN_00180000(void);
int asdMemFree(void);
int scrScriptProcessDestroy(void);
int __aeabi_memset4(unsigned int *, int, unsigned int);
int FUN_00215978(int);
int btlActionAllocData(void);
int sysMemClear(...);
int FUN_003f0f58(unsigned int *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char g_btlMain; /* 0x573920 */

/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: jobIsValid. */
/* Supplied declaration required: FUN_00180000. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: __aeabi_memset4. */
/* Supplied declaration required: FUN_00215978. */
/* Supplied declaration required: btlActionAllocData. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_003f0f58. */


void FUN_0024d9c4(unsigned int *param_1)

{
/* irregular: 1 goto(s); 10 native warning(s); review required */
  int temp_v0;
  unsigned short *puVar2;
  int temp_v1;
  int *piVar4;
  unsigned int *puVar5;
  unsigned short temp_v2;
  unsigned int temp_v3;
  
  btlActionAllocData();
  jobIsValid(*param_1);
  FUN_00215978(0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0xffffffff;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(unsigned char *)(param_1 + 0x116e) = 0;
  *(unsigned char *)((int)param_1 + 0x45b9) = 0;
  *(unsigned char *)((int)param_1 + 0x45ba) = 0;
  *(unsigned char *)((int)param_1 + 0x45bb) = 0;
  *(unsigned char *)(param_1 + 0x116f) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x2d] = 0;
  *(unsigned short *)((int)param_1 + 0x2006) = 1;
  *(unsigned char *)(param_1 + 0x7b6) = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7c] = 0;
  param_1[0x10b] = 0;
  FUN_00180000();
  param_1[0x1340] = 0;
  param_1[0x1341] = 0;
  *(unsigned short *)(param_1 + 0x1342) = 0;
  *(unsigned short *)((int)param_1 + 0x4d0a) = 0;
  FUN_003f0f58(param_1);
  param_1[0x3b] = 0xffffffff;
  param_1[0x3c] = 0xffffffff;
  sysMemClear(param_1 + 0x3d,0x84);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x49] = 0x3f800000;
  param_1[0x4a] = 0x3f800000;
  param_1[0x60] = 0xffffffff;
  param_1[0x61] = 0xffffffff;
  *(unsigned char *)(param_1 + 0x62) = 0;
  param_1[0x5e] = 0xffffffff;
  param_1[0x65] = 0;
  param_1[0x5f] = 0xffffffff;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  temp_v0 = 0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0xf110,1);
  piVar4 = (int *)(param_1 + 0x7b5);
  temp_v2 = 0;
  *piVar4 = temp_v0;
  do {
    sysMemClear(*piVar4 + temp_v2 * 0x1d0,0x1d0);
    *(short *)(*piVar4 + temp_v2 * 0x1d0 + 0x6a) = (short)temp_v2;
    *(unsigned short *)(*piVar4 + temp_v2 * 0x1d0 + 0x68) = 0xffff;
    temp_v0 = temp_v2 * 0x1d0;
    *(unsigned int *)(*piVar4 + temp_v2 * 0x1d0 + 0x104) = 0xffffffff;
    temp_v1 = temp_v2 * 0x1d0;
    temp_v2 = temp_v2 + 1;
    *(unsigned int *)(*piVar4 + temp_v0 + 0x108) = 0xffffffff;
    *(unsigned int *)(*piVar4 + temp_v1 + 0xa8) = 0x96;
  } while (temp_v2 < 0x85);
  *(unsigned char *)((int)param_1 + 0x1ed9) = 0;
  temp_v0 = 0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0x4b0,1);
  temp_v3 = 0;
  temp_v2 = 0;
  param_1[0x7fe] = temp_v0;
  do {
    puVar2 = (unsigned short *)(param_1[0x7fe] + temp_v2 * 0x18);
    temp_v2 = temp_v2 + 1;
    *puVar2 = 0xffff;
    puVar2[1] = 0xffff;
    puVar2[2] = 0;
    *(unsigned int *)(puVar2 + 4) = 0xffffffff;
    *(unsigned int *)(puVar2 + 6) = 0;
    *(unsigned int *)(puVar2 + 8) = 0;
    *(unsigned int *)(puVar2 + 10) = 0;
  } while (temp_v2 < 0x32);
  param_1[0x7b8] = 0;
  param_1[0x7b9] = 0;
  param_1[0x7ba] = 0;
  param_1[0x7bb] = 0;
  param_1[0x7bc] = 0;
  param_1[0x7bd] = 0;
  param_1[0x7be] = 0;
  temp_v0 = 0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0x1b768,1);
  piVar4 = (int *)(param_1 + 0x7ff);
  temp_v2 = 0;
  *piVar4 = temp_v0;
LAB_0024dd20:
  puVar5 = (unsigned int *)(*piVar4 + temp_v2 * 0x408);
  *puVar5 = 0;
  puVar5[1] = 0;
  *(unsigned short *)(*piVar4 + temp_v2 * 0x408 + 0x6c) = 0;
  *(short *)(*piVar4 + temp_v2 * 0x408 + 0x6e) = (short)temp_v2;
  *(unsigned int *)(*piVar4 + temp_v2 * 0x408 + 0x3f8) = 0;
  *(unsigned int *)(*piVar4 + temp_v2 * 0x408 + 0x3fc) = 0;
  temp_v0 = 0;
  temp_v1 = 0x32;
  *(unsigned int *)(*piVar4 + temp_v2 * 0x408 + 0x400) = 0;
  *(unsigned int *)(*piVar4 + temp_v2 * 0x408 + 0x404) = 0;
  puVar5 = (unsigned int *)(*piVar4 + temp_v2 * 0x408 + 0x3b4);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  do {
    *(unsigned short *)(*piVar4 + temp_v2 * 0x408 + 8) = 0;
    while( 1 ) {
      temp_v1 = temp_v1 - 1;
      temp_v0 = temp_v0 + 1;
      if (temp_v1 == 0) {
        temp_v0 = temp_v2 * 0x408;
        *(unsigned short *)(*piVar4 + temp_v2 * 0x408 + 0x16c) = 0xffff;
        temp_v2 = temp_v2 + 1;
        *(unsigned char *)(*piVar4 + temp_v0 + 0x3f4) = 0;
        if (temp_v2 >= 0x6d) {
          sysMemClear(param_1 + 0x85b,0xa8);
          sysMemClear(param_1 + 0x885,0x54);
          sysMemClear(param_1 + 0x42c,0xe10);
          sysMemClear(param_1 + 0x7b2,10);
          *(unsigned short *)(param_1 + 0x800) = 0;
          *(unsigned short *)((int)param_1 + 0x2002) = 0;
          *(unsigned short *)(param_1 + 0x801) = 0xffff;
          *(unsigned char *)(param_1 + 0xc01) = 0;
          param_1[0x7b1] = 0;
          param_1[0x1125] = 0;
          param_1[0x1126] = 0;
          param_1[0x1157] = 0;
          param_1[0x1158] = 0;
          param_1[0x1159] = 0;
          param_1[0x115a] = 0;
          param_1[0x115b] = 0;
          param_1[0x115c] = 0;
          param_1[0x115d] = 0;
          param_1[0x115e] = 0;
          param_1[0x115f] = 0;
          param_1[0x1160] = 0;
          param_1[0x1161] = 0;
          param_1[0x1162] = 0;
          param_1[0x1163] = 0;
          param_1[0x1164] = 0;
          param_1[0x1165] = 0;
          param_1[0x1166] = 0;
          __aeabi_memset4(param_1 + 0x806,3,0xffffffff);
          param_1[0x8a4] = 0;
          param_1[0x8a5] = 0;
          param_1[0x8a6] = 0;
          param_1[0x8a9] = temp_v3;
          param_1[0x8a8] = temp_v3;
          param_1[0x8a7] = temp_v3;
          param_1[0x8ac] = temp_v3;
          param_1[0x8ab] = temp_v3;
          param_1[0x8aa] = temp_v3;
          *(unsigned char *)(param_1 + 0x8ad) = 0;
          param_1[0x8ae] = 0;
          param_1[0x8af] = 0;
          param_1[0x8b0] = 0;
          param_1[0x8b1] = 0;
          param_1[0x8b2] = 0;
          *(unsigned char *)(param_1 + 0x8b3) = 0;
          *(unsigned char *)((int)param_1 + 0x22cd) = 0;
          param_1[0x8d4] = 0xffffffff;
          *(unsigned char *)(param_1 + 0x8d0) = 0;
          *(unsigned short *)(param_1 + 0x8d1) = 0;
          *(unsigned char *)(param_1 + 0x8d3) = 0;
          *(unsigned char *)((int)param_1 + 0x2341) = 0;
          *(unsigned short *)((int)param_1 + 0x2346) = 0;
          *(unsigned char *)((int)param_1 + 0x234d) = 0;
          *(unsigned char *)((int)param_1 + 0x2342) = 0;
          *(unsigned short *)(param_1 + 0x8d2) = 0;
          *(unsigned char *)((int)param_1 + 0x234e) = 0;
          *(unsigned char *)((int)param_1 + 0x2343) = 0;
          *(unsigned short *)((int)param_1 + 0x234a) = 0;
          *(unsigned char *)((int)param_1 + 0x234f) = 0;
          temp_v3 = 0x100;
          asdMemoryAllocTracked(0x100,0x100,0,0x80,1);
          param_1[0x904] = temp_v3;
          sysMemClear();
          param_1[0x905] = 0;
          *(unsigned short *)((int)param_1 + 0x301e) = 0xffff;
          *(unsigned short *)(param_1 + 0xc08) = 0xffff;
          param_1[0x1168] = 0;
          param_1[0x1169] = 0;
          param_1[0x116a] = 0;
          param_1[0x116b] = 0;
          param_1[0x8d9] = 0;
          param_1[0x8da] = 0;
          param_1[0x1332] = 0;
          param_1[0x1335] = 0;
          *(unsigned char *)(param_1 + 0x1334) = 0;
          *(unsigned char *)((int)param_1 + 0x4cd1) = 0;
          param_1[0xc0a] = 0;
          param_1[0x1336] = 0;
          param_1[0x1337] = 0;
          param_1[0x1338] = 0xffffffff;
          param_1[0x1357] = 0;
          param_1[0xc0b] = 0xffffffff;
          param_1[0xc0c] = 2;
          param_1[0xc0d] = 0;
          param_1[0x1346] = 0;
          param_1[0x134c] = 3;
          param_1[0x134e] = 0;
          param_1[0x1350] = 0;
          param_1[0x1352] = 0;
          param_1[0x1347] = 0;
          param_1[0x134d] = 3;
          param_1[0x134f] = 0;
          param_1[0x1351] = 0;
          param_1[0x1353] = 0;
          *(unsigned char *)(param_1 + 0x1154) = 0;
          param_1[0x1155] = 0xffffffff;
          param_1[0x1339] = (*(unsigned int *)((unsigned char *)&g_btlMain + 0x20));
          param_1[0x133d] = 0xffffffff;
          param_1[0x133b] = 0;
          param_1[0x133c] = 0;
          if (param_1[0x1354] != 0) {
            asdMemFree();
            param_1[0x1354] = 0;
          }
          if (param_1[0x1355] != 0) {
            scrScriptProcessDestroy();
            param_1[0x1355] = 0;
          }
          param_1[0x1356] = 0;
          if (param_1[0x138e] != 0) {
            asdMemFree();
            param_1[0x138e] = 0;
          }
          if (param_1[0x138f] != 0) {
            scrScriptProcessDestroy();
            param_1[0x138f] = 0;
          }
          param_1[0x1390] = 0;
          param_1[0x2e] = 0;
          param_1[0x2f] = 0;
          param_1[0x30] = 0;
          param_1[0x31] = 0;
          param_1[0x32] = 0;
          param_1[0x33] = 0;
          param_1[0x34] = 0;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
          *(unsigned short *)(param_1 + 0x38) = 0;
          param_1[0x1358] = 0;
          param_1[0x135a] = 0;
          param_1[0x135b] = 0;
          param_1[0x135c] = 0;
          param_1[0x135d] = 0xffffffff;
          param_1[0x135e] = 0;
          param_1[0x135f] = 0;
          param_1[0x1360] = 0;
          param_1[0x1361] = 0;
          param_1[0x1362] = 0;
          param_1[0x1363] = 0;
          param_1[0x1364] = 0;
          param_1[0x1365] = 0;
          param_1[0x1366] = 0;
          param_1[0x1367] = 0;
          param_1[0x1368] = 0;
          param_1[0x1369] = 0;
          *(unsigned char *)(param_1 + 0x1391) = 0;
          param_1[0x1392] = 0;
          *(unsigned char *)(param_1 + 0x1393) = 0;
          *(unsigned short *)((int)param_1 + 0x4e4e) = 0;
          *(unsigned char *)(param_1 + 0x1394) = 0;
          param_1[0x1395] = 0;
          *(unsigned char *)(param_1 + 0x1321) = 0;
          return;
        }
        goto LAB_0024dd20;
      }
      if (temp_v0 == 0) break;
      *(unsigned short *)(*piVar4 + temp_v2 * 0x408 + temp_v0 * 2 + 8) = 0xffff;
    }
  } while( 1 );
}

} /* extern "C" */
