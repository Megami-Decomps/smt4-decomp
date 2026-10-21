/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002595e0` (_code @ 0x2595e0, 0x1a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int objectFlagsClear(int, int);

typedef struct fn_002595e0_arg0 fn_002595e0_arg0;
struct fn_002595e0_arg0 {
    unsigned char pad_0x0[0x24];
    undefined4 field_0x24; /* +0x24 */
    unsigned char pad_0x28[0x8];
    undefined4 field_0x30; /* +0x30 */
    ushort field_0x34; /* +0x34 */
    unsigned char pad_0x36[0x1];
    byte field_0x37; /* +0x37 */
};

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */

/* Supplied declaration required: objectFlagsClear. */
extern unsigned int objectFlagSetBit(unsigned int, unsigned int);
extern int flagWordTestBit(int, unsigned int);


void FUN_002595e0(fn_002595e0_arg0 *param_1)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  unsigned int temp_v5;
  
  temp_v3 = (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4));
  puVar6 = (unsigned int *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x24ba4);
  temp_v4 = (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x8c;
  temp_v5 = (unsigned int)*(short *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x24bac);
  *(unsigned short *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x24bac) = param_1->field_0x34;
  *(unsigned char *)(temp_v3 + 0x24bae) = param_1->field_0x37;
  *puVar6 = param_1->field_0x24;
  *(unsigned int *)(temp_v3 + 0x24ba8) = param_1->field_0x30;
  if ((int)*(short *)(temp_v3 + 0x24bac) == 0) {
    temp_v3 = 0;
    do {
      temp_v0 = (int)*(char *)(temp_v4 + temp_v3 + 0x90f0);
      if ((-1 < temp_v0) && (temp_v0 = flagWordTestBit((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + temp_v0 * 0x604 + 0x11c,2), temp_v0 != 0)
         ) {
        objectFlagsClear((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + *(char *)(temp_v4 + temp_v3 + 0x90f0) * 0x604 + 0x11c,4);
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x18);
    return;
  }
  temp_v0 = 0;
  while ((temp_v2 = (int)*(char *)(temp_v4 + temp_v0 + 0x9108), temp_v2 < 0 ||
         ((unsigned int)*(unsigned short *)(temp_v4 + temp_v2 * 0x604 + 0xd6) != (int)*(short *)(temp_v3 + 0x24bac)))) {
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 3) {
LAB_0025967c:
      temp_v0 = 0;
      do {
        temp_v2 = (int)*(char *)(temp_v4 + temp_v0 + 0x90f0);
        if (-1 < temp_v2) {
          temp_v2 = (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x8c + temp_v2 * 0x604;
          temp_v1 = temp_v2 + 0x90;
          if ((unsigned int)*(unsigned short *)(temp_v2 + 0xd6) == (int)*(short *)(temp_v3 + 0x24bac)) {
            temp_v1 = objectFlagSetBit(temp_v1,2);
          }
          if (temp_v5 != 0) {
            temp_v1 = (unsigned int)*(short *)(temp_v3 + 0x24bac);
          }
          if ((temp_v5 != 0 && temp_v1 != temp_v5) &&
             (temp_v2 = (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x8c + *(char *)(temp_v4 + temp_v0 + 0x90f0) * 0x604,
             *(unsigned short *)(temp_v2 + 0xd6) == temp_v5)) {
            objectFlagsClear(temp_v2 + 0x90,4);
          }
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 0x18);
      return;
    }
  }
  *(unsigned char *)(temp_v4 + temp_v0 + 0x9108) = 0xff;
  goto LAB_0025967c;
}

} /* extern "C" */
