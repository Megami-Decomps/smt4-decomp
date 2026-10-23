#ifndef SOUND_SOUNDPARAMETERCOMMAND_H
#define SOUND_SOUNDPARAMETERCOMMAND_H
#include "common.h"
#include <stddef.h>

struct SoundFadeState { f32 start, end; s32 duration, elapsed; };
struct SoundParameterVoice;
struct SoundParameterVtable {
    void *reserved00[8];
    u32 (*getId)(SoundParameterVoice *voice);
    void *reserved24[2];
    void (*update)(SoundParameterVoice *voice);
};
struct SoundParameterOwner {
    u8 prefix[0x3C];
    f32 volume, pan;
    s32 filterType;
    f32 filterValue, send, auxiliaryA, auxiliaryB;
};
struct SoundParameterVoice {
    SoundParameterVtable *vtable;
    u8 unk004[0xC];
    SoundParameterOwner *owner;
    u8 unk014[0x1C];
    f32 volume, pitch, pan, surroundPan, lowPass, ownerPan;
    f32 filterValue;
    s32 filterType;
    u8 unk050[8];
    f32 volumeScale, pitchScale, panOffset, ownerPanOffset;
    SoundFadeState fades[3];
    u8 unk098[6];
    s8 filterOverride;
    u8 unk09F[3];
    u8 mode;
    u8 unk0A3[0x15];
    SoundFadeState fade;
    f32 volumeMultiplier, panAdjustment, pitchMultiplier, ownerPanAdjustment;
    f32 filterAdjustment, sendAdjustment, auxiliaryAAdjustment, auxiliaryBAdjustment;
    f32 surroundPanAdjustment;
};
struct SoundParameterCommand {
    u32 unk00;
    u8 kind;
    u8 unk05[7];
    u32 context, voiceId;
    f32 volume, pitch, pan, surroundPan, ownerPan;
    s32 filterType;
    f32 filterValue, send, auxiliaryA, auxiliaryB;
};
struct SoundParameterQueue {
    u8 unk000[0x184];
    u32 context;
};
typedef char SoundParameterVoiceOffsetsCheck[
    offsetof(SoundParameterVoice, volume) == 0x30 &&
    offsetof(SoundParameterVoice, fades) == 0x68 &&
    offsetof(SoundParameterVoice, filterOverride) == 0x9E &&
    offsetof(SoundParameterVoice, mode) == 0xA2 &&
    offsetof(SoundParameterVoice, fade) == 0xB8 &&
    offsetof(SoundParameterVoice, volumeMultiplier) == 0xC8 &&
    offsetof(SoundParameterVoice, surroundPanAdjustment) == 0xE8 &&
    sizeof(SoundParameterVoice) == 0xEC ? 1 : -1];
typedef char SoundParameterCommandOffsetsCheck[
    offsetof(SoundParameterCommand, volume) == 0x14 &&
    offsetof(SoundParameterCommand, filterType) == 0x28 &&
    offsetof(SoundParameterCommand, auxiliaryB) == 0x38 &&
    sizeof(SoundParameterCommand) == 0x3C && sizeof(SoundFadeState) == 0x10 &&
    offsetof(SoundParameterOwner, volume) == 0x3C ? 1 : -1];
#endif
