/* NON_MATCHING: compiler reloads slot array and preserves extra registers. */
#include "common.h"
struct ValueSlot { u32 value; u8 active; u8 unk05[3]; };
struct ModelRecord { u8 flags; u8 unk001[631]; };
struct ModelOwner { u8 unk00[16]; ModelRecord *models; u8 unk14[244]; ValueSlot *slots; };
/* Updates the value slot and marks both it and its model active. */
extern "C" void FUN_00406768(ModelOwner *owner,u32 index,u32 value) { owner->slots[index].value=value;owner->slots[index].active=1;owner->models[(u16)index].flags|=1; }
