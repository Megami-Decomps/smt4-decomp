#include "common.h"
#include "code/Code0023_Smt4.h"
extern "C" {
struct TransitionRecord { u8 unk00[0x5DC]; f32 value; u8 unk5E0[0x54]; u32 flags; u8 unk638[0x60]; f32 elapsed; u32 first; u32 counter; u32 second; };
/* Configure the transition arguments, clear elapsed state, and set its dirty flag. */
void transitionConfigureAndReset(TransitionRecord *record,u32 first,u32 second,f32 value) { record->value=value; record->first=first; record->second=second; record->elapsed=0.0f; record->counter=0; record->flags|=0x200; }
}
