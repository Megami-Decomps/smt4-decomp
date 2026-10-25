#include "common.h"

extern "C" {

typedef struct Command {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 kind;
    /* 0x09 */ u8 status;
} Command;

typedef struct ActorA {
    /* 0x00 */ u8 unk00[0x42];
    /* 0x42 */ u8 flags;
} ActorA;

typedef struct ActorB {
    /* 0x00 */ u8 unk00[0x72];
    /* 0x72 */ u16 flags;
} ActorB;

Command *FUN_0019c06c(void);
ActorA *dataTable8FindRecord(u32 actor);
ActorB *dataTable08Sub2GetRecord(u32 actor);

/* Returns the actor's flag for the current command's kind (bit 3 of flags at 0x42 or bit 1 of flags at 0x72); 1 when the command is not active. */
u32 FUN_0047fe44(u32 actor)
{
    Command *command = FUN_0019c06c();

    if (command == NULL) {
        return 0;
    }
    if (command->status != 0 && command->status == 1) {
        switch (command->kind) {
        default:
            return 1;
        case 1:
        case 0xC: {
            ActorA *a = dataTable8FindRecord(actor);

            if (a == NULL) {
                return 0;
            }
            return (a->flags & 8) >> 3;
        }
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8: {
            ActorB *b = dataTable08Sub2GetRecord(actor);

            if (b == NULL) {
                return 0;
            }
            return (b->flags & 2) >> 1;
        }
        }
    }
    return 1;
}

} /* extern "C" */
