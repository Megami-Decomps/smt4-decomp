#include "common.h"
struct BattleEntry { u8 unk00[116]; u32 values[1]; };
extern "C" {
void *btlGetMainState();
BattleEntry *FUN_003f0e20(void *battle,u32 id);
/* Reads an indexed word of the selected battle entry. */
u32 FUN_004c3a98(u32 id,u32 index) { BattleEntry *entry=FUN_003f0e20(btlGetMainState(),id);return entry != NULL ? entry->values[index] : 0; }
}
