/* battle/btlActionRef.cpp: queued actions interpreted by the battle reflection dispatcher.
 * Payload words are shared by action kinds; fields without a demonstrated meaning remain unknown. */
#ifndef BATTLE_BTLREFLECT_H
#define BATTLE_BTLREFLECT_H

#include "common.h"
#include <stddef.h>

struct ReflectAction;

/* Shared queue header in both games; actions are doubly linked in allocation order. */
struct ReflectContext {
    /* 0x00 */ void *owner;
    /* 0x04 */ s32 count;
    /* 0x08 */ ReflectAction *head;
    /* 0x0c */ ReflectAction *tail;
};

/* Common action prefix; IV allocates 0x68 bytes, Apocalypse 0xa8 bytes. */
struct ReflectAction {
    /* 0x00 */ u16 actorId;
    /* 0x02 */ u16 secondaryId;
    /* 0x04 */ u8 kind;
    union {
        /* 0x05 */ u8 unk05[3];
        struct {
            /* 0x05 */ u8 flags;
        } flagView;
    };
    /* 0x08 */ u32 options;
    /* 0x0c */ ReflectAction *next;
    /* 0x10 */ ReflectAction *previous;
    /* 0x14 */ u32 target;
    union {
        /* 0x18 */ u8 unk18[0x0c];
        struct {
            /* 0x18 */ f32 duration;
            /* 0x1c */ u8 unk1c[8];
        } timing;
        struct {
            /* 0x18 */ u32 unk18;
            /* 0x1c */ u32 second;
        } wordValues;
    };
    /* 0x24 */ u16 first;
    /* 0x26 */ u16 second;
    union {
        /* 0x28 */ u32 value;
        /* 0x28 */ f32 scalar;
    };
    union {
        /* 0x2c */ u8 unk2c[0x20];
        /* 0x2c */ u32 payload;
        struct {
            /* 0x2c */ u8 unk2c[4];
            /* 0x30 */ f32 scalar;
        } scalarPayload;
        struct {
            /* 0x2c */ u8 unk2c[0x1c];
            /* 0x48 */ u16 third;
            /* 0x4a */ u16 fourth;
        } extraIds;
    };
    /* 0x4c */ u32 parameter;
    /* 0x50 */ u8 unk50[0x18];
    /* 0x68 */ char text[0x40]; /* Apocalypse only (its actions are 0xa8 bytes) */
};
typedef char ReflectActionTextOffsetCheck[offsetof(ReflectAction, text) == 0x68 ? 1 : -1];

extern "C" ReflectContext *g_btlActionReflect;

#endif
