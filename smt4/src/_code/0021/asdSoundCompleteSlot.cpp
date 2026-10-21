/* NON_MATCHING: compiler loads the sound-global base before PUSH and folds the slot address differently. */
#include "common.h"
extern "C" {
struct SoundHandle;
struct SoundSlot { SoundHandle *handle; u32 unk04; u32 value; u8 done; };
struct SoundSlots { u8 unk00[0x1210]; SoundSlot *slots[1]; };
extern SoundSlots g_asdSound;
void FUN_002bda30(SoundHandle *handle,s32 frames);
/* Transition the slot handle and mark the slot complete. */
void asdSoundCompleteSlot(u32 index,s32 frames) { SoundSlot *slot=g_asdSound.slots[index]; if (slot!=NULL) { if (slot->handle!=NULL) FUN_002bda30(slot->handle,frames); slot->done=1; slot->value=0; } }
}
