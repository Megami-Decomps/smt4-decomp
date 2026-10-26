#ifndef CLASSES_OBJECTCOMMANDREQUESTS_H
#define CLASSES_OBJECTCOMMANDREQUESTS_H

#include "common.h"

/* The payload word of a command: one word, or a flag and an option byte. */
union ObjectCommandPayload {
    struct Bytes {
        /* 0x14 */ u8 flag;
        /* 0x15 */ u8 option;
    } bytes;
    /* 0x14 */ u32 word;
};

/* Apocalypse's object command queue (the sound manager's request list): a command is a node of
 * `words` words taken from the queue, stamped with its token, filled in and appended. */
struct ObjectCommand {
    /* 0x00 */ u32 next;
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[7];
    /* 0x0C */ u32 token;
    /* 0x10 */ u32 owner;
    /* 0x14 */ ObjectCommandPayload payload;
};
/* A parameter fade: from `start` to `target` over `duration` steps. */
struct ObjectFade {
    /* 0x00 */ f32 start;
    /* 0x04 */ f32 target;
    /* 0x08 */ s32 duration;
    /* 0x0C */ s32 elapsed;
};

/* The owner whose parameter holder (at 0x118) names it in a command; its request block, request
 * value and changed-parameter mask are the fields the commands send or update. */
struct ObjectCommandOwner {
    /* 0x0000 */ u8 unk0000[0x118];
    /* 0x0118 */ u32 params;
    /* 0x011C */ u8 unk011C[0x2314 - 0x11C];
    /* 0x2314 */ u32 requestBlock[5];
    /* 0x2328 */ u32 requestValue;
    /* 0x232C */ u8 unk232C[0x3048 - 0x232C];
    /* 0x3048 */ ObjectFade fades[4];
    /* 0x3088 */ u8 unk3088[0x328C - 0x3088];
    /* 0x328C */ u16 changedMask;
};

/* The cursor object: its parameter holder (at 0x124) names it in a command; the sent flag at 0x121 is set once
 * its cursor command was queued. */
struct ObjectCursorOwner {
    /* 0x000 */ u8 unk000[0x121];
    /* 0x121 */ u8 sent;
    /* 0x122 */ u8 unk122[2];
    /* 0x124 */ u32 params;
};

struct ObjectCommandQueue {
    /* 0x000 */ u8 unk000[0x184];
    /* 0x184 */ u32 token;
};

extern "C" {
ObjectCommandQueue *objectCommandQueueGet(void);
ObjectCommand *objectCommandReserveWords(ObjectCommandQueue *queue, u32 words);
void listAppendNode(ObjectCommandQueue *queue, ObjectCommand *command);
}

/* Allocates a command of `words` words, stamped with the queue's current token. */
static __inline ObjectCommand *objectCommandBegin(ObjectCommandQueue *queue, u32 words)
{
    ObjectCommand *command = objectCommandReserveWords(queue, words);
    command->token = queue->token;
    return command;
}

#endif
